
#ifndef CARBONITEDYNAMIXEL_H
#define CARBONITEDYNAMIXEL_H

#include <string>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/float64.hpp>
#include <dynamixel_sdk/dynamixel_sdk.h>


class CarboniteDynamixel : public rclcpp::Node
{
    public:
        CarboniteDynamixel();
        virtual ~CarboniteDynamixel();

        dynamixel::PortHandler *portHandler;
        dynamixel::PacketHandler *packetHandler;

    private:
        std::string device_name;
        std::string motor_model;
        int motor_id;
        float protocol_version;
        int baud_rate;
        int profile_velocity;
        int profile_acceleration;
        bool use_as_mockup;

        rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr position_pub;

        void position_callback();

};

#endif // CARBONITEDYNAMIXEL_H