import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from turtlesim.srv import SetPen
from my_custom_interfaces.srv import ActivateTurtle

#Creating new class that inherits from the rclpy Node class
class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')
        self.cmd_vel_publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.pose_subscriber_ = self.create_subscription(Pose, 'turtle1/pose', self.callback, 10)
        self.set_pen_client_ = self.create_client(SetPen, 'turtle1/set_pen')
        self.activate_turtle_service_ = self.create_service(ActivateTurtle, 'activate_turtle', self.callback_activate_turtle)
        #self.counter_ = 0
        #self.timer_ = self.create_timer(1.0, self.print_hello)
        self.previous_x_ = False
        self.active_ = False
        self.get_logger().info('Turtle controller initialized!')
    
    def callback(self, msg):
        if self.active_:
            vel_msg = Twist()
            if msg.x <= 5.5:
                left = True
                vel_msg.linear.x = 1.0
                vel_msg.angular.z = 1.0
            else:
                left = False
                vel_msg.linear.x = 2.0
                vel_msg.angular.z = 2.0
            self.cmd_vel_publisher_.publish(vel_msg)
            if self.previous_x_ == False and left == True:
                self.call_set_pen_service(0, 255, 0)
            elif self.previous_x_ == True and left == False:
                self.call_set_pen_service(255, 0, 0)
            self.previous_x_ = left

    def call_set_pen_service(self, r, g, b):
        while not self.set_pen_client_.wait_for_service(1.0):
            self.get_logger().info('Waiting for set_pen service...')
        request = SetPen.Request()
        request.r = r
        request.g = g
        request.b = b
        future = self.set_pen_client_.call_async(request)
        future.add_done_callback(self.callback_set_pen_response)

    def callback_set_pen_response(self, future):
        self.get_logger().info('Set pen service call completed.')
    
    def callback_activate_turtle(self, request: ActivateTurtle.Request, response: ActivateTurtle.Response):
        self.active_ = request.activate
        response.moving = self.active_
        if self.active_:
            self.get_logger().info('Turtle activated!')
        else:
            self.get_logger().info('Turtle deactivated!')
        return response


def main(args=None):
    #Initialize communications
    rclpy.init(args=args)
    #Create object from MyCustomnode class
    node = TurtleController()
    #make node spin, this will block execution, the program and node stays alive, all registered callbacks will be processed
    rclpy.spin(node)
    #after node is killed, shutdown communication
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()