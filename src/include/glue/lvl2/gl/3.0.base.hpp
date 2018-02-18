#ifndef LVL2_GL_VERSION_3_0_BASE_HPP
#define LVL2_GL_VERSION_3_0_BASE_HPP

#include "../../lvl1/gl/3.0.base.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace base_3_0 
	{
		struct api: glue::lvl1::base_3_0::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif