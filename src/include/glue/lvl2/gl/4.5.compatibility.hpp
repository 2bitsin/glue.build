#ifndef LVL2_GL_VERSION_4_5_COMPATIBILITY_HPP
#define LVL2_GL_VERSION_4_5_COMPATIBILITY_HPP

#include "../../lvl1/gl/4.5.compatibility.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace compatibility_4_5 
	{
		struct api: glue::lvl1::compatibility_4_5::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif