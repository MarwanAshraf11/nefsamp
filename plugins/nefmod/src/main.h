/*======================================================================*\
|| #################################################################### ||
|| # Project New Evolution Freeroam - NEFMOD Core          			  # ||
|| # ---------------------------------------------------------------- # ||
|| # Copyright (c)2011-2014 New Evolution Freeroam  				  # ||
|| # Created by Mellnik                                               # ||
|| # ---------------------------------------------------------------- # ||
|| # http://www.nefserver.net	    	                      		  # ||
|| #################################################################### ||
\*======================================================================*/

#pragma once

#ifndef _MAIN_H_
#define _MAIN_H_

#include <SDK/plugin.h>

#define CORE_VERSION 0xB
#define PARAM_CHECK(c, n) \
	if (params[0] != (c * 4)) \
	{ \
		logprintf("[NEFMOD] Wrong paramenter(s) supplied in %s. Expected %i but found %i.", n, c, params[0] / 4); \
		return 0; \
	} \

typedef void (*logprintf_t)(const char*, ...);
extern logprintf_t logprintf;

#endif /* _MAIN_H_ */