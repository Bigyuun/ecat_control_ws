## Header file directories : 
## /home/spinerobot/ros2_dashing/src/ros2/launch_ros/launch_ros/launch_ros/actions/lifecycle_node.py

from launch import LaunchDescription

## For lifecycle state transitions.
from launch_ros.actions import LifecycleNode
## For custom node launchs
from launch_ros.actions import Node

import ament_index_python
import launch
import launch_ros
import lifecycle_msgs
import os


def generate_launch_description():

    # Create pd node
    pd_node = launch_ros.actions.LifecycleNode(
        package = 'ecat_pkg',
        executable = 'ecat_node',
        name = 'ecat_node',
        output = 'screen',
        prefix = 'taskset -c 4,5',
		parameters=[{"measure_time": 180}]
    )

    return launch.LaunchDescription([
        launch.actions.SetEnvironmentVariable('RCUTILS_COLORIZED_OUTPUT', '1'),
        pd_node,
        #Node(package='controller', executable='joy_node', output='screen', parameters=[
        #    {"dev": "/dev/input/js0"}]),
        #Node(package='gui_pkg', executable='gui_node', output='screen'),
        #Node(package='input_pkg', executable='hapticNode', output='screen'),
        ##Node(package='gui_pkg', executable='gui_node', output='screen',prefix='valgrind'),
        #Node(package='safety_pkg', executable='safety_node', output='screen'),
        #Node(package='log_pkg', executable='timing_node', output='screen'),
        
        Node(package='gui_pkg', executable='gui_node', output='screen', prefix = 'taskset -c 4,5'),
        Node(package='input_pkg', executable='hapticNode', output='screen', prefix = 'taskset -c 4,5'),
        #Node(package='gui_pkg', executable='gui_node', output='screen',prefix='valgrind'),
        Node(package='safety_pkg', executable='safety_node', output='screen', prefix = 'taskset -c 4,5'),
        Node(package='log_pkg', executable='timing_node', output='screen'),
        ])
