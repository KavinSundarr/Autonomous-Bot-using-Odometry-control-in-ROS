#include <ros/ros.h>
#include <std_msgs/String.h>

void msgcallback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("THE MESSAGE RECIVED: %s", msg->data.c_str());

}

int main(int argc, char** argv)
{
    ros::init(argc, argv,"simple_subscriber_cpp");
    ros::NodeHandle n;
    ros::Subscriber sub=n.subscribe("chatter", 10, msgcallback);
    ros::spin();




    return 0;
}