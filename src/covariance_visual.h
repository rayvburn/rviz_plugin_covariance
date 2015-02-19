
#ifndef COVARIANCE_VISUAL_HH
#define COVARIANCE_VISUAL_HH

#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <nav_msgs/Odometry.h>

namespace Ogre
{
class Vector3;
class Quaternion;
class SceneNode;
class SceneManager;
}

namespace rviz
{
class Axes;
class Shape;
}

namespace rviz_plugin_covariance
{

class CovarianceVisual
{
public:
  CovarianceVisual(Ogre::SceneManager* scene_manager, Ogre::SceneNode* parent_node);

  virtual ~CovarianceVisual();

  void setMessage(const geometry_msgs::PoseWithCovariance& msg);
  void setMessage(const geometry_msgs::PoseWithCovarianceStampedConstPtr& msg);
  void setMessage(const nav_msgs::OdometryConstPtr& msg);

  void setFramePosition(const Ogre::Vector3& position);
  void setFrameOrientation(const Ogre::Quaternion& orientation);

  void setColor(float r, float g, float b, float a);

  void setScale(float scale);

  void setShowAxis(bool show_axis);

  void setUse6DOF(bool use_6dof);

private:
  boost::shared_ptr<rviz::Axes> axes_;
  boost::shared_ptr<rviz::Shape> shape_;
  boost::shared_ptr<rviz::Shape> orientationShape_;

  Ogre::SceneNode* frame_node_;
  Ogre::SceneNode* positionNode_;
  Ogre::SceneNode* orientationNode_;

  Ogre::SceneManager* scene_manager_;

  float scale_;
  bool show_axis_;
  bool use_6dof_;
};

} // end namespace rviz_plugin_covariance

#endif // COVARIANCE_VISUAL_HH
