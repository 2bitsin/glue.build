#include <glue/lvl1/glsc2/2.0.base.hpp>
#include <glue/lvl2/glsc2/2.0.base.hpp>
#include "../../common/strings.hpp"
#include <glue/math.hpp>

namespace glue::lvl2
{
	inline namespace base_2_0 
	{
		void api::uniform(uniform_location_t loc, float32_t value) const 
		{
			Uniform1f(loc, value);
		}
		void api::uniform(uniform_location_t loc, std::int32_t value) const 
		{
			Uniform1i(loc, value);
		}
		void api::uniform(uniform_location_t loc, const vec2& value) const 
		{
			Uniform2f(loc, value.x, value.y);
		}
		void api::uniform(uniform_location_t loc, const ivec2& value) const 
		{
			Uniform2i(loc, value.x, value.y);
		}
		void api::uniform(uniform_location_t loc, const vec3& value) const 
		{
			Uniform3f(loc, value.x, value.y, value.z);
		}
		void api::uniform(uniform_location_t loc, const ivec3& value) const 
		{
			Uniform3i(loc, value.x, value.y, value.z);
		}
		void api::uniform(uniform_location_t loc, const vec4& value) const 
		{
			Uniform4f(loc, value.x, value.y, value.z, value.w);
		}
		void api::uniform(uniform_location_t loc, const ivec4& value) const 
		{
			Uniform4i(loc, value.x, value.y, value.z, value.w);
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const float32_t* value) const 
		{
			Uniform1fv(loc, count, value);
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const std::int32_t* value) const 
		{
			Uniform1iv(loc, count, value);
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const vec2* value) const 
		{
			Uniform2fv(loc, count, value_ptr(*value));
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const vec3* value) const 
		{
			Uniform3fv(loc, count, value_ptr(*value));
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const vec4* value) const 
		{
			Uniform4fv(loc, count, value_ptr(*value));
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const ivec2* value) const 
		{
			Uniform2iv(loc, count, value_ptr(*value));
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const ivec3* value) const 
		{
			Uniform3iv(loc, count, value_ptr(*value));
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const ivec4* value) const 
		{
			Uniform4iv(loc, count, value_ptr(*value));
		}
	}
}