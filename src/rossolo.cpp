#include "ros/node_handle.h"
#include "ros/publisher.h"
#include <ros/ros.h>
#include <std_msgs/String.h>


int main(int argc,char** argv){

		ros::init(argc,argv,"soloNode");
		ros::NodeHandle nh;

		ros::Publisher pub = nh.advertise<std_msgs::String>("topico",1);

		ros::Rate r(10);

		std_msgs::String msg;
		msg.data = "OI MUNDO! ROS SOLO";

		while(ros::ok()){

				r.sleep();
				pub.publish(msg);




		}




		return 0;

}
