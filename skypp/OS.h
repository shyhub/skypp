#ifndef __SKYPP_OS_H__
#define __SKYPP_OS_H__

#if defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__)
 #define __OS__ "Win32"
#elif defined(linux) || defined(__CYGWIN__)
 #define __OS__ "LINUX"
#elif (defined(__APPLE__) || defined(__OSX__) || defined(__MACOS__)) && defined(__MACH__)
 #define __OS__ "MacOSX"
#else
 #define __OS__ "UNKNOWN"
#endif

#endif /* __SKYPP_OS_H__ */
