import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

#Creating new class that inherits from the rclpy Node class
class TurtleController(Node):
    def __init__(self):
        super().__init__('turtle_controller')
        self.cmd_vel_publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        self.pose_subscriber_ = self.create_subscription(Pose, 'turtle1/pose', self.callback_pose, 10)
        #self.counter_ = 0
        #self.timer_ = self.create_timer(1.0, self.print_hello)
        self.get_logger().info('Turtle controller initialized!')
    
    def callback_pose(self, msg):
        vel_msg = Twist()
        if msg.x < 5.5:
            vel_msg.linear.x = 1.0
            vel_msg.angular.z = 1.0
        else:
            vel_msg.linear.x = 2.0
            vel_msg.angular.z = 2.0
        self.cmd_vel_publisher_.publish(vel_msg)

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