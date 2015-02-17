
#ifndef COVARIANCE_DISPLAY_H
#define COVARIANCE_DISPLAY_H

#ifndef Q_MOC_RUN
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <rviz/message_filter_display.h>
#endif

namespace rviz
{
class ColorProperty;
class FloatProperty;
}

namespace Ogre
{
class SceneNode;
}

namespace rviz_plugin_covariance
{

class CovarianceVisual;

class CovarianceDisplay : public rviz::MessageFilterDisplay<geometry_msgs::PoseWithCovarianceStamped>
{
Q_OBJECT
public:
  CovarianceDisplay();
  virtual ~CovarianceDisplay();

protected:
  virtual void onInitialize();
  virtual void reset();

private Q_SLOTS:
  void updateColorAndAlphaAndScale();

private:
  void processMessage(const geometry_msgs::PoseWithCovarianceStampedConstPtr& msg);

  boost::shared_ptr<CovarianceVisual> visual_;

  rviz::ColorProperty* color_property_;
  rviz::FloatProperty* alpha_property_;
  rviz::FloatProperty* scale_property_;
};

} // end namespace rviz_plugin_covariance

#endif // COVARIANCE_DISPLAY_H
