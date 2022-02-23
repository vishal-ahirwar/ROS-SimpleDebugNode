#include "ros/ros.h"
#include "std_msgs/String.h"
int main(int argc, char **argv)
{
    ros::init(argc, argv, "hello_world_pub_node");
    ros::NodeHandle node_handle;
    ros::Publisher hello_world_pub = node_handle.advertise<std_msgs::String>("hello_world_pub_node", 10);
    ros::Rate pub_rate(5);
    ROS_INFO("Hello- World Ros Node Started by Vishal Ahirwar");

    while (ros::ok())
    {
        std_msgs::String msg;
        msg.data = "[MESSAGE]->[Hello World by Vishal]";
        hello_world_pub.publish(msg);
        pub_rate.sleep();
    };

    return 0;
}