from my_custom_interfaces.srv import ResetCounter
import rclpy
from rclpy.node import Node

#Creating new class that inherits from the rclpy Node class
class CounterClientNode(Node):
    def __init__(self):
        super().__init__('counter_client')
        self.client_ = self.create_client(ResetCounter, 'reset_counter')

    def call_reset_service(self, value):
        #Making sure the service is up and running, will return true if service is available, or return false
        #after the provided timeout, which is 1 sec in this case
        while not self.client_.wait_for_service(1.0):
            self.get_logger().info('Waiting for service...')
        #create request object
        request = ResetCounter.Request()
        #fill in the request fields
        request.reset_value = value
        #send the request with call_async that gives Python future object
        future = self.client_.call_async(request)
        #register callback for when the node receives service response
        future.add_done_callback(self.callback_reset_counter_response)
    
    #We need this callback because if you block this method, then the node won't be able to spin, 
    #if the spin is blocked, then any response you get won't be processed and you will be deadlocked
    def callback_reset_counter_response(self, future):
        #we get the response from future.result() and we can access the response fields
        response = future.result()
        self.get_logger().info(f"Service response: success={response.success}, message='{response.message}'")

def main(args=None):
    #Initialize communications
    rclpy.init(args=args)
    #Create object from CounterClientNode class
    node = CounterClientNode()
    #the service client will send request, and register callback for response, but the node needs some time to spin for that response
    node.call_reset_service(20)  
    #make node spin, this will block execution, the program and node stays alive, all registered callbacks will be processed
    rclpy.spin(node)
    #after node is killed, shutdown communication
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()