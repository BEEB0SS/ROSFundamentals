import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64

#Creating new class that inherits from the rclpy Node class
class NumberCounterNode(Node):
    def __init__(self):
        super().__init__('number_counter')
        self.counter_ = 0
        self.number_subscriber = self.create_subscription(Int64, 'number', self.callback_number, 10)
        self.get_logger().info("Number Counter has been started.")

    def callback_number(self, msg):
        self.counter_ += msg.data
        self.get_logger().info(f"Counter: {self.counter_}")

def main(args=None):
    #Initialize communications
    rclpy.init(args=args)
    #Create object from NumberCounterNode class
    node = NumberCounterNode()
    #make node spin, this will block execution, the program and node stays alive, all registered callbacks will be processed
    rclpy.spin(node)
    #after node is killed, shutdown communication
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()