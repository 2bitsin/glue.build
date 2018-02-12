#ifndef LVL2_GL_VERSION_1_0_BASE_HPP
#define LVL2_GL_VERSION_1_0_BASE_HPP

#include "../../lvl1/gl/1.0.base.hpp"
#include "../../math.hpp"

namespace glue::lvl2
{
	inline namespace base_1_0 
	{
		struct api: glue::lvl1::base_1_0::api
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