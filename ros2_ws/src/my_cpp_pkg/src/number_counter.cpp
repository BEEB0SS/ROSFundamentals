#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"
using namespace std::placeholders;

class NumberSubscriberNode : public rclcpp::Node
{
public:
    NumberSubscriberNode() : Node("number_subscriber")
    {
        number_subscriber_ = this->create_subscription<example_interfaces::msg::Int64>("number", 10, std::bind(&NumberSubscriberNode::callbackNumber, this, _1));
        RCLCPP_INFO(this->get_logger(), "Number subscriber has been started.");
    }
    void callbackNumber(const example_interfaces::msg::Int64::SharedPtr msg)
    {
        counter_ += msg->data;
        RCLCPP_INFO(this->get_logger(), "Counter: %d", counter_);
    }
    
private:
    int counter_ = 0;
    rclcpp::Subscription<example_interfaces::msg::Int64>::SharedPtr number_subscriber_;
    //rclcpp::TimerBase::SharedPtr number_timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberSubscriberNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}