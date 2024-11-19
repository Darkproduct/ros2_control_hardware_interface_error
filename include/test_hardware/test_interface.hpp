#pragma once

#include "hardware_interface/actuator_interface.hpp"
#include "rclcpp/macros.hpp"

namespace test_hardware {

using hardware_interface::ActuatorInterface;
using hardware_interface::CallbackReturn;
using hardware_interface::CommandInterface;
using hardware_interface::return_type;
using hardware_interface::StateInterface;

class TestActuator : public ActuatorInterface {
public:
  RCLCPP_SHARED_PTR_DEFINITIONS(TestActuator)

  // Hardware Interface Callbacks
  CallbackReturn on_init(const hardware_interface::HardwareInfo&) override;

  std::vector<StateInterface> export_state_interfaces() override;
  std::vector<CommandInterface> export_command_interfaces() override;

  return_type read(const rclcpp::Time&, const rclcpp::Duration&) override;
  return_type write(const rclcpp::Time&, const rclcpp::Duration&) override;
};

}  // namespace test_hardware
