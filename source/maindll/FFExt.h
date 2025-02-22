#pragma once

#include <FidelityFX/host/backends/dx12/ffx_dx12.h>

#define FFX_THROW_ON_FAIL(x)    \
	do                          \
	{                           \
		auto __status = (x);    \
		if (__status != FFX_OK) \
		{                       \
			throw __status;     \
		}                       \
	} while (0);

#define FFX_RETURN_ON_FAIL(x)   \
	do                          \
	{                           \
		auto __status = (x);    \
		if (__status != FFX_OK) \
		{                       \
			return __status;    \
		}                       \
	} while (0);

namespace FFXExt
{
}
