
#pragma once

#ifndef ON
#define ON 1
#endif

#ifndef OFF
#define OFF 0
#endif

#define OBS_VERSION "28.0.0-beta2-56-g91f986ec9"
#define OBS_VERSION_CANONICAL "28.0.0"
#define OBS_DATA_PATH "../../data"
#define OBS_INSTALL_PREFIX ""
#define OBS_PLUGIN_DESTINATION "obs-plugins/64bit"
#define OBS_QT_VERSION 5

/* #undef LINUX_PORTABLE */
/* #undef GIO_FOUND */
/* #undef PULSEAUDIO_FOUND */
/* #undef XCB_XINPUT_FOUND */
/* #undef ENABLE_WAYLAND */

/* NOTE: Release candidate version numbers internally are always the previous
 * main release number!  For example, if the current public release is 21.0 and
 * the build is 22.0 release candidate 1, internally the build number (defined
 * by LIBOBS_API_VER/etc) will always be 21.0, despite the OBS_VERSION string
 * saying "22.0 RC1".
 *
 * If the release candidate version number is 0.0.0 and the RC number is 0,
 * that means it's not a release candidate build. */
#define OBS_RELEASE_CANDIDATE_MAJOR 0
#define OBS_RELEASE_CANDIDATE_MINOR 0
#define OBS_RELEASE_CANDIDATE_PATCH 0
#define OBS_RELEASE_CANDIDATE_VER \
	MAKE_SEMANTIC_VERSION(OBS_RELEASE_CANDIDATE_MAJOR, \
	                      OBS_RELEASE_CANDIDATE_MINOR, \
	                      OBS_RELEASE_CANDIDATE_PATCH)
#define OBS_RELEASE_CANDIDATE 0

/* Same thing for beta builds */
#define OBS_BETA_MAJOR 0
#define OBS_BETA_MINOR 0
#define OBS_BETA_PATCH 0
#define OBS_BETA_VER \
	MAKE_SEMANTIC_VERSION(OBS_BETA_MAJOR, \
	                      OBS_BETA_MINOR, \
	                      OBS_BETA_PATCH)
#define OBS_BETA 0
