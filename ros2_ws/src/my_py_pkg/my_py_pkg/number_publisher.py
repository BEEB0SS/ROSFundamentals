import rclpy
from rclpy.node import Node

#Creating new class that inherits from the rclpy Node class
class NumberPublisherNode(Node):
    def __init__(self):
        super().__init__('number_publisher')


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