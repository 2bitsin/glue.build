#ifndef LVL2_GL_VERSION_4_2_CORE_HPP
#define LVL2_GL_VERSION_4_2_CORE_HPP

#include "../../lvl1/gl/4.2.core.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace core_4_2 
	{
		struct api: glue::lvl1::core_4_2::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif