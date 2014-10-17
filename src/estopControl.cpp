// Publishes estop switch status over ROS service

#include "ros/ros.h"
#include <std_msgs/Float64MultiArray.h>
#include "estop/estopSignal.h"

using namespace std;
namespace estop
{

// Initialize ros variables
ros::ServiceClient clientE;
estop::estopSignal srvE;
bool estop;

int main(int argc, cahr **argv) 
{
    // initialize ROS service
    clientE = threaded_nh_.serviceClient<estop::estopSignal>("estop_control");
   
    // TODO: set estop to RPi io connected to the estop switch
    estop = 1;

    // Send ROS message
    if (estop) // engauge estop
    {
        srvE.request.message = 1;
    }
    else if (!estop) // estop reset
    {
         srvE.request.message = 2;
    }

}
} //end namespace

