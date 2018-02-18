#ifndef LVL2_GL_VERSION_2_0_BASE_HPP
#define LVL2_GL_VERSION_2_0_BASE_HPP

#include "../../lvl1/gl/2.0.base.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace base_2_0 
	{
		struct api: glue::lvl1::base_2_0::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif