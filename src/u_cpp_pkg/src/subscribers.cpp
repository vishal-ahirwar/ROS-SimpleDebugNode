#include "ros/ros.h"
#include "std_msgs/String.h"
void subCallBack(const std_msgs::StringConstPtr &);
int main(int argc, char **argv)
{
    ros::init(argc, argv, "hello_world_subs");
    ros::NodeHandle sub_handle;
    ros::Subscriber hello_sub = sub_handle.subscribe("hello_world_pub_node", 10, subCallBack);
    ros::spin();

    return 0;
};
void subCallBack(const std_msgs::StringConstPtr &msg)
{
    ROS_INFO("%s", msg->data.c_str());
};
