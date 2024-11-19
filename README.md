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
[INFO] [launch]: All log files can be found below /home/user/.ros/log/2024-11-19-16-08-07-527834-Rechenmaschine-4660
[INFO] [launch]: Default logging verbosity is set to INFO
[INFO] [ros2_control_node-1]: process started with pid [4664]
[INFO] [robot_state_publisher-2]: process started with pid [4665]
[INFO] [spawner-3]: process started with pid [4666]
[robot_state_publisher-2] [INFO] [1732032487.705149036] [robot_state_publisher]: Robot initialized
[ros2_control_node-1] [INFO] [1732032487.714627103] [controller_manager]: Subscribing to '/robot_description' topic for robot description.
[ros2_control_node-1] [INFO] [1732032487.714744509] [controller_manager]: update rate is 10 Hz
[ros2_control_node-1] [WARN] [1732032487.714863382] [controller_manager]: Could not enable FIFO RT scheduling policy: with error number <1>(Operation not permitted). See [https://control.ros.org/master/doc/ros2_control/controller_manager/doc/userdoc.html] for details on how to enable realtime scheduling.
[ros2_control_node-1] [INFO] [1732032487.850865834] [controller_manager]: Received robot description from topic.
[ros2_control_node-1] [INFO] [1732032487.855295008] [controller_manager.resource_manager]: Loading hardware 'WheelJoint' 
[ros2_control_node-1] [ERROR] [1732032487.855852357] [controller_manager.resource_manager]: Caught exception of type : N9pluginlib20LibraryLoadExceptionE while loading hardware: Could not find library corresponding to plugin test_hardware/TestActuator. Make sure that the library 'test_hardware' actually exists.
[ros2_control_node-1] [WARN] [1732032487.855958169] [controller_manager]: Could not load and initialize hardware. Please check previous output for more details. After you have corrected your URDF, try to publish robot description again.
[spawner-3] [INFO] [1732032488.042002760] [spawner_forward_position_controller]: waiting for service /controller_manager/list_controllers to become available...
[ros2_control_node-1] [WARN] [1732032488.714329128] [controller_manager]: Waiting for data on 'robot_description' topic to finish initialization
[ros2_control_node-1] [WARN] [1732032489.714429396] [controller_manager]: Waiting for data on 'robot_description' topic to finish initialization
```
