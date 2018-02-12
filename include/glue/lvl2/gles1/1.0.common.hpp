#ifndef LVL2_GL_VERSION_ES_CM_1_0_COMMON_HPP
#define LVL2_GL_VERSION_ES_CM_1_0_COMMON_HPP

#include "../../lvl1/gles1/1.0.common.hpp"
#include "../../math.hpp"

namespace glue::lvl2
{
	inline namespace common_1_0 
	{
		struct api: glue::lvl1::common_1_0::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
 
			template<typename _Ctype, decltype(std::data(std::declval<_Ctype>())) = nullptr,
																decltype(std::size(std::declval<_Ctype>())) = 0u>
			auto uniform(uniform_location_t loc, const _Ctype& values) const
			{
				return uniform(loc, (std::int32_t)std::size(values), std::data(values));
			}
		public:
		};
	}
}

#endif