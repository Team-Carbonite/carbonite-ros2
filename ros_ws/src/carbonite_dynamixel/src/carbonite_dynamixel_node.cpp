#include "carbonite_dynamixel/CarboniteDynamixel.hpp"

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CarboniteDynamixel>());
  rclcpp::shutdown();
  return 0;
}