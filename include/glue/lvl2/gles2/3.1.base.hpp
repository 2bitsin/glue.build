#ifndef LVL2_GL_ES_VERSION_3_1_BASE_HPP
#define LVL2_GL_ES_VERSION_3_1_BASE_HPP

#include "../../lvl1/gles2/3.1.base.hpp"
#include "../../math.hpp"

namespace glue::lvl2
{
	inline namespace base_3_1 
	{
		struct api: glue::lvl1::base_3_1::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
			void uniform(uniform_location_t, float32_t) const;
			void uniform(uniform_location_t, std::int32_t) const;
			void uniform(uniform_location_t, std::uint32_t) const;
			void uniform(uniform_location_t, const vec2&) const;
			void uniform(uniform_location_t, const ivec2&) const;
			void uniform(uniform_location_t, const uvec2&) const;
			void uniform(uniform_location_t, const vec3&) const;
			void uniform(uniform_location_t, const ivec3&) const;
			void uniform(uniform_location_t, const uvec3&) const;
			void uniform(uniform_location_t, const vec4&) const;
			void uniform(uniform_location_t, const ivec4&) const;
			void uniform(uniform_location_t, const uvec4&) const;
			void uniform(uniform_location_t, std::int32_t, const float32_t*) const;
			void uniform(uniform_location_t, std::int32_t, const std::int32_t*) const;
			void uniform(uniform_location_t, std::int32_t, const std::uint32_t*) const;
			void uniform(uniform_location_t, std::int32_t, const vec2*) const;
			void uniform(uniform_location_t, std::int32_t, const vec3*) const;
			void uniform(uniform_location_t, std::int32_t, const vec4*) const;
			void uniform(uniform_location_t, std::int32_t, const ivec2*) const;
			void uniform(uniform_location_t, std::int32_t, const ivec3*) const;
			void uniform(uniform_location_t, std::int32_t, const ivec4*) const;
			void uniform(uniform_location_t, std::int32_t, const uvec2*) const;
			void uniform(uniform_location_t, std::int32_t, const uvec3*) const;
			void uniform(uniform_location_t, std::int32_t, const uvec4*) const;
			void program_uniform(program_name_t, uniform_location_t, float32_t) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t) const;
			void program_uniform(program_name_t, uniform_location_t, std::uint32_t) const;
			void program_uniform(program_name_t, uniform_location_t, const vec2&) const;
			void program_uniform(program_name_t, uniform_location_t, const ivec2&) const;
			void program_uniform(program_name_t, uniform_location_t, const uvec2&) const;
			void program_uniform(program_name_t, uniform_location_t, const vec3&) const;
			void program_uniform(program_name_t, uniform_location_t, const ivec3&) const;
			void program_uniform(program_name_t, uniform_location_t, const uvec3&) const;
			void program_uniform(program_name_t, uniform_location_t, const vec4&) const;
			void program_uniform(program_name_t, uniform_location_t, const ivec4&) const;
			void program_uniform(program_name_t, uniform_location_t, const uvec4&) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const float32_t*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const std::int32_t*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const std::uint32_t*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const vec2*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const vec3*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const vec4*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const ivec2*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const ivec3*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const ivec4*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const uvec2*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const uvec3*) const;
			void program_uniform(program_name_t, uniform_location_t, std::int32_t, const uvec4*) const;
 
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