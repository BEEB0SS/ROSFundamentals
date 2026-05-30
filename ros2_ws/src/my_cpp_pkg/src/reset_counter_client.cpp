#include "rclcpp/rclcpp.hpp"
#include "my_custom_interfaces/srv/reset_counter.hpp"
using ResetCounter = my_custom_interfaces::srv::ResetCounter;
using namespace std::chrono_literals;
using namespace std::placeholders;

class ResetCounterClientNode : public rclcpp::Node
{
public:
    ResetCounterClientNode() : Node("reset_counter_client")
    {
        reset_client_ = this->create_client<ResetCounter>("reset_counter");
    }
    void callResetCounter(int value)
    {
        while (!reset_client_->wait_for_service(1s)) {
            RCLCPP_WARN(this->get_logger(), "Waiting for the service to be available...");
        }
        auto request = std::make_shared<ResetCounter::Request>();
        request->reset_value = value;
        reset_client_->async_send_request(request, std::bind(&ResetCounterClientNode::responseCallback, this, _1));
    }
    void responseCallback(
        rclcpp::Client<ResetCounter>::SharedFuture future
    )
    {
        auto response = future.get();
        RCLCPP_INFO(this->get_logger(), "Response: success=%s, message=%s", response->success ? "true" : "false", response->message.c_str());
    }
private:
    rclcpp::Client<ResetCounter>::SharedPtr reset_client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ResetCounterClientNode>();
    node->callResetCounter(20);
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}