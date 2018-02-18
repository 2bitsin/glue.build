#ifndef LVL2_GL_VERSION_3_2_COMPATIBILITY_HPP
#define LVL2_GL_VERSION_3_2_COMPATIBILITY_HPP

#include "../../lvl1/gl/3.2.compatibility.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace compatibility_3_2 
	{
		struct api: glue::lvl1::compatibility_3_2::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif