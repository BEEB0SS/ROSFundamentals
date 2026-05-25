#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"
#include "my_custom_interfaces/msg/hardware_status.hpp"

class NumberPublisherNode : public rclcpp::Node
{
public:
    NumberPublisherNode() : Node("number_publisher")
    {
        number_publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number", 10);
        hardware_status_publisher_ = this->create_publisher<my_custom_interfaces::msg::HardwareStatus>("hardware_status", 10);
        number_timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&NumberPublisherNode::publishNumber, this));
        hardware_status_timer_ = this->create_wall_timer(std::chrono::seconds(2), std::bind(&NumberPublisherNode::publishHardwareStatus, this));
        RCLCPP_INFO(this->get_logger(), "Number publisher has been started.");
    }
    void publishNumber()
    {
        auto msg = example_interfaces::msg::Int64();
        msg.data = number_;
        number_publisher_->publish(msg);
    }
    void publishHardwareStatus()
    {
        auto msg = my_custom_interfaces::msg::HardwareStatus();
        msg.version = 1;
        msg.temperature = 69.69;
        msg.are_motors_ok = true;
        msg.debug_message = "All systems are functional.";
        hardware_status_publisher_->publish(msg);
    }
private:
    int number_ = 69;
    rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr number_publisher_;
    rclcpp::Publisher<my_custom_interfaces::msg::HardwareStatus>::SharedPtr hardware_status_publisher_;
    rclcpp::TimerBase::SharedPtr number_timer_;
    rclcpp::TimerBase::SharedPtr hardware_status_timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NumberPublisherNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}