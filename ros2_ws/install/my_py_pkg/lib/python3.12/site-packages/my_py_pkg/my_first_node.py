import rclpy
from rclpy.node import Node

#Creating new class that inherits from the rclpy Node class
class MyCustomNode(Node):
    def __init__(self):
        super().__init__('my_custom_node')
        self.counter_ = 0
        self.timer_ = self.create_timer(1.0, self.print_hello)
        #self.get_logger().info('Hello ROS2, I am alive!')

    def print_hello(self):
        self.get_logger().info('Hello ROS2, I am alive! ' + str(self.counter_))
        self.counter_ += 1

def main(args=None):
    #Initialize communications
    rclpy.init(args=args)
    #Create object from MyCustomnode class
    node = MyCustomNode()
    #make node spin, this will block execution, the program and node stays alive, all registered callbacks will be processed
    rclpy.spin(node)
    #after node is killed, shutdown communication
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()