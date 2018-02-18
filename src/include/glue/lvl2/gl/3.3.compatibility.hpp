#ifndef LVL2_GL_VERSION_3_3_COMPATIBILITY_HPP
#define LVL2_GL_VERSION_3_3_COMPATIBILITY_HPP

#include "../../lvl1/gl/3.3.compatibility.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace compatibility_3_3 
	{
		struct api: glue::lvl1::compatibility_3_3::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif