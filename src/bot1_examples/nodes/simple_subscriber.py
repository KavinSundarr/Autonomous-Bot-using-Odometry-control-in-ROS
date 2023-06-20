#!/user/bin/env python3
import rospy
from std_msgs.msg import String

def msgcallback(msg):
    rospy.loginfo("The message recived %s", msg.data )


if __name__ == '__main__':
    rospy.init_node("simple_subscriber_py", anonymous=True)
    rospy.Subscriber("chatter", String, msgcallback)

    rospy.spin()

