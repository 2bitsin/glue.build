#ifndef LVL2_GL_VERSION_4_3_BASE_HPP
#define LVL2_GL_VERSION_4_3_BASE_HPP

#include "../../lvl1/gl/4.3.base.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace base_4_3 
	{
		struct api: glue::lvl1::base_4_3::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif