^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package rviz_plugin_covariance
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Forthcoming
-----------
* Add 3DOF visual
* Catkinize and update rviz plugin API
* Merge pull request #4 from flixr/find_eigen
  remove FindEigen cmake script, so the system script is used
* remove FindEigen cmake script, so the system script is used
* Merge pull request #3 from flixr/fix_crash_on_nan
  Prevent Rviz from crashing due to NaNs.
* Don't set position/orientation/scale if they contain NaNs as this will cause Rviz to crash.
  This is a very crude method, instead of just not setting the respective values,
  the markers should probably not be displayed at all (or something like that...)
* Merge pull request #2 from flixr/fix_ellipsoid_orientation
  Partial fix for the covariance ellipsoid orientation.
* partially fix orientation of covariance ellipsoid
  * do not normalize matrix with eigen vectors as the eigen vectors (columns) are already normalized
* Fix bugs, add test cases.
* Add odometry support.
* Fix matrice sizes and recopy.
* Update README.
* Add README.
* Improve code, add scaling factor.
* Initial import.
* Contributors: Enrique Fernandez, Felix Ruess, Thomas Moulard
