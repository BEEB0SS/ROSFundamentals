import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/beeboss/Desktop/ros_workspaces/ros2_ws/install/turtle_controller'
