#include "carbonite_dynamixel/CarboniteDynamixel.hpp"

class CarboniteDynamixel : public rclcpp::Node
{
    CarboniteDynamixel():
        Node{"carbonite_dynamixel_node"}
    {
        position_pub = this->create_publisher<std_msgs::msg::Float64>("position", 10);

    };
};
