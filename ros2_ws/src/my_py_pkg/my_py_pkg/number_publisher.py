import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
from my_custom_interfaces.msg import HardwareStatus

#Creating new class that inherits from the rclpy Node class
class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__('number_publisher')
        self.number_ = 2
        self.number_publisher_ = self.create_publisher(Int64, 'number', 10)
        self.hardware_status_publisher_ = self.create_publisher(HardwareStatus, 'hardware_status', 10)
        self.number_timer_ = self.create_timer(1.0, self.publish_number)
        self.get_logger().info('Number Publisher Node has been started.')

    def publish_number(self):
        msg = Int64()
        msg.data = self.number_
        self.number_publisher_.publish(msg)
    
    def publish_hardware_status(self):
        msg = HardwareStatus()
        msg.version = 1
        msg.temperature = 36.5
        msg.are_motors_ok = True
        msg.debug_message = "All systems are functional."
        self.hardware_status_publisher_.publish(msg)

def main(args=None):
    #Initialize communications
    rclpy.init(args=args)
    #Create object from NumberPublisherNode class
    node = NumberPublisherNode()
    #make node spin, this will block execution, the program and node stays alive, all registered callbacks will be processed
    rclpy.spin(node)
    #after node is killed, shutdown communication
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()