#include "test_hardware/test_interface.hpp"

#include "rclcpp/logging.hpp"

using namespace std::chrono_literals;

namespace test_hardware {
CallbackReturn TestActuator::on_init(
    const hardware_interface::HardwareInfo& info) {
  if (ActuatorInterface::on_init(info) != CallbackReturn::SUCCESS) {
    return CallbackReturn::ERROR;
  }

  RCLCPP_INFO(get_logger(), "Test driver on init.");
  return CallbackReturn::SUCCESS;
}

std::vector<StateInterface> TestActuator::export_state_interfaces() {
  std::vector<StateInterface> state_interfaces;
  RCLCPP_INFO(get_logger(), "Test driver export state interfaces.");
  return state_interfaces;
}

std::vector<CommandInterface> TestActuator::export_command_interfaces() {
  std::vector<CommandInterface> command_interfaces;
  RCLCPP_INFO(get_logger(), "Test driver export command interfaces.");
  return command_interfaces;
}

return_type TestActuator::read(const rclcpp::Time& time,
                               const rclcpp::Duration& period) {
  (void)time;
  (void)period;
  RCLCPP_INFO(get_logger(), "Test driver read.");
  return return_type::OK;
}

return_type TestActuator::write(const rclcpp::Time& time,
                                const rclcpp::Duration& period) {
  (void)time;
  (void)period;
  RCLCPP_INFO(get_logger(), "Test driver write.");
  return return_type::OK;
}

}  // namespace test_hardware

#include "pluginlib/class_list_macros.hpp"  // NOLINT
PLUGINLIB_EXPORT_CLASS(test_hardware::TestActuator,
                       hardware_interface::ActuatorInterface)
