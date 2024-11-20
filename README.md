Build:
```
colcon build -DBUILD_TESTING=1 --packages-select test_hardware
```

Run:
```
ros2 launch test_hardware view_1dof.launch.py
```

Error:
```
[INFO] [launch]: All log files can be found below /home/user/.ros/log/2024-11-19-16-34-10-761991-Rechenmaschine-6390
[INFO] [launch]: Default logging verbosity is set to INFO
[INFO] [ros2_control_node-1]: process started with pid [6394]
[INFO] [robot_state_publisher-2]: process started with pid [6395]
[INFO] [spawner-3]: process started with pid [6396]
[ros2_control_node-1] [INFO] [1732034050.952412737] [controller_manager]: Subscribing to '/robot_description' topic for robot description.
[ros2_control_node-1] [INFO] [1732034050.952552074] [controller_manager]: update rate is 10 Hz
[ros2_control_node-1] [WARN] [1732034050.952659563] [controller_manager]: Could not enable FIFO RT scheduling policy: with error number <1>(Operation not permitted). See [https://control.ros.org/master/doc/ros2_control/controller_manager/doc/userdoc.html] for details on how to enable realtime scheduling.
[robot_state_publisher-2] [INFO] [1732034050.957780548] [robot_state_publisher]: Robot initialized
[ros2_control_node-1] [INFO] [1732034050.957913809] [controller_manager]: Received robot description from topic.
[ros2_control_node-1] [INFO] [1732034050.959827028] [controller_manager.resource_manager]: Loading hardware 'WheelJoint' 
[ros2_control_node-1] [ERROR] [1732034050.960321658] [controller_manager.resource_manager]: Caught exception of type : N9pluginlib20CreateClassExceptionE while loading hardware: MultiLibraryClassLoader: Could not create class of type test_hardware/TestActuator
[ros2_control_node-1] [WARN] [1732034050.960382632] [controller_manager]: Could not load and initialize hardware. Please check previous output for more details. After you have corrected your URDF, try to publish robot description again.
[spawner-3] [INFO] [1732034051.278139569] [spawner_forward_position_controller]: waiting for service /controller_manager/list_controllers to become available...
[ros2_control_node-1] [WARN] [1732034051.952014765] [controller_manager]: Waiting for data on 'robot_description' topic to finish initialization
[ros2_control_node-1] [WARN] [1732034052.951998904] [controller_manager]: Waiting for data on 'robot_description' topic to finish initialization
[ros2_control_node-1] [WARN] [1732034053.952009371] [controller_manager]: Waiting for data on 'robot_description' topic to finish initialization
```

Solution from [Martin Peris at robotics.stackexchange.com](https://robotics.stackexchange.com/a/113761/32945):
https://github.com/Darkproduct/ros2_control_hardware_interface_error/blob/master/test_hardware.xml#L1-L7
> Indeed `type="test_hardware/TestActuator"` should be `type=test_hardware::TestActuator`
In 
