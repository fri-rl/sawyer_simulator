/***************************************************************************
* Copyright (c) 2013-2017, Rethink Robotics Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
**************************************************************************/
#ifndef _SAWYER_GAZEBO___SAWYER_GAZEBO_ROS_CONTROL_PLUGIN_H_
#define _SAWYER_GAZEBO___SAWYER_GAZEBO_ROS_CONTROL_PLUGIN_H_
// Overload the default plugin
#include <gazebo_ros_control/gazebo_ros_control_plugin.h>
#include <sawyer_gazebo/assembly_interface.h>
#include <sawyer_gazebo/arm_controller_interface.h>
#include <sawyer_gazebo/arm_kinematics_interface.h>


namespace sawyer_gazebo {

  class SawyerGazeboRosControlPlugin : public gazebo_ros_control::GazeboRosControlPlugin
  {
  private:
    AssemblyInterface assembly_interface_;
    ArmControllerInterface arm_controller_interface_;
    ArmKinematicsInterface arm_kinematics_interface_;

  protected:
    void Load(gazebo::physics::ModelPtr parent, sdf::ElementPtr sdf);


  };
}
#endif // #ifndef __SAWYER_GAZEBO__SAWYER_GAZEBO_ROS_CONTROL_PLUGIN_H_
