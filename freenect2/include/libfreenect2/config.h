/*
* This file is part of the OpenKinect Project. http://www.openkinect.org
*
* Copyright (c) 2014 individual OpenKinect contributors. See the CONTRIB file
* for details.
*
* This code is licensed to you under the terms of the Apache License, version
* 2.0, or, at your option, the terms of the GNU General Public License,
* version 2.0. See the APACHE20 and GPL2 files for the text of the licenses,
* or the following URLs:
* http://www.apache.org/licenses/LICENSE-2.0
* http://www.gnu.org/licenses/gpl-2.0.txt
*
* If you redistribute this file in source form, modified or unmodified, you
* may:
*   1) Leave this header intact and distribute it under the same terms,
*      accompanying it with the APACHE20 and GPL20 files, or
*   2) Delete the Apache 2.0 clause and accompany it with the GPL2 file, or
*   3) Delete the GPL v2 clause and accompany it with the APACHE20 file
* In all cases you must keep the copyright notice intact and include a copy
* of the CONTRIB file.
*
* Binary distributions must follow the binary distribution requirements of
* either License.
*/

#ifndef LIBFREENECT2_CONFIG_H
#define LIBFREENECT2_CONFIG_H

#define LIBFREENECT2_VERSION "0.2.0"
#define LIBFREENECT2_API_VERSION ((0 << 16) | 2)

#ifdef _MSC_VER
#define LIBFREENECT2_PACK( __Declaration__ ) __pragma( pack(push, 1) ) __Declaration__ __pragma( pack(pop) )
#else
#define LIBFREENECT2_PACK( __Declaration__ ) __Declaration__ __attribute__((__packed__))
#endif

#include <libfreenect2/export.h>
#define LIBFREENECT2_API LIBFREENECT2_EXPORT

#define LIBFREENECT2_WITH_OPENGL_SUPPORT

#define LIBFREENECT2_WITH_OPENCL_SUPPORT
/* #undef LIBFREENECT2_OPENCL_ICD_LOADER_IS_OLD */

/* #undef LIBFREENECT2_WITH_CUDA_SUPPORT */

/* #undef LIBFREENECT2_WITH_VT_SUPPORT */

#define LIBFREENECT2_WITH_VAAPI_SUPPORT

#define LIBFREENECT2_WITH_TURBOJPEG_SUPPORT

/* #undef LIBFREENECT2_WITH_TEGRAJPEG_SUPPORT */
#define LIBFREENECT2_TEGRAJPEG_LIBRARY "TegraJPEG_LIBRARIES-NOTFOUND"

#define LIBFREENECT2_THREADING_STDLIB

/* #undef LIBFREENECT2_THREADING_TINYTHREAD */

#define LIBFREENECT2_WITH_CXX11_SUPPORT

/* #undef LIBFREENECT2_WITH_PROFILING */

#endif // LIBFREENECT2_CONFIG_H
