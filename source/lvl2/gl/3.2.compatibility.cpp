#include <glue/lvl1/gl/3.2.compatibility.hpp>
#include <glue/lvl2/gl/3.2.compatibility.hpp>
#include "../../common/strings.hpp"
#include <glue/math.hpp>

namespace glue::lvl2
{
	inline namespace compatibility_3_2 
	{
		void api::uniform(uniform_location_t loc, float32_t value) const 
		{
			Uniform1f(loc, value);
		}
		void api::uniform(uniform_location_t loc, std::int32_t value) const 
		{
			Uniform1i(loc, value);
		}
		void api::uniform(uniform_location_t loc, std::uint32_t value) const 
		{
			Uniform1ui(loc, value);
		}
		void api::uniform(uniform_location_t loc, const vec2& value) const 
		{
			Uniform2f(loc, value.x, value.y);
		}
		void api::uniform(uniform_location_t loc, const ivec2& value) const 
		{
			Uniform2i(loc, value.x, value.y);
		}
		void api::uniform(uniform_location_t loc, const uvec2& value) const 
		{
			Uniform2ui(loc, value.x, value.y);
		}
		void api::uniform(uniform_location_t loc, const vec3& value) const 
		{
			Uniform3f(loc, value.x, value.y, value.z);
		}
		void api::uniform(uniform_location_t loc, const ivec3& value) const 
		{
			Uniform3i(loc, value.x, value.y, value.z);
		}
		void api::uniform(uniform_location_t loc, const uvec3& value) const 
		{
			Uniform3ui(loc, value.x, value.y, value.z);
		}
		void api::uniform(uniform_location_t loc, const vec4& value) const 
		{
			Uniform4f(loc, value.x, value.y, value.z, value.w);
		}
		void api::uniform(uniform_location_t loc, const ivec4& value) const 
		{
			Uniform4i(loc, value.x, value.y, value.z, value.w);
		}
		void api::uniform(uniform_location_t loc, const uvec4& value) const 
		{
			Uniform4ui(loc, value.x, value.y, value.z, value.w);
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const float32_t* value) const 
		{
			Uniform1fv(loc, count, value);
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const std::int32_t* value) const 
		{
			Uniform1iv(loc, count, value);
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const std::uint32_t* value) const 
		{
			Uniform1uiv(loc, count, value);
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
		void api::uniform(uniform_location_t loc, std::int32_t count, const uvec2* value) const 
		{
			Uniform2uiv(loc, count, value_ptr(*value));
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const uvec3* value) const 
		{
			Uniform3uiv(loc, count, value_ptr(*value));
		}
		void api::uniform(uniform_location_t loc, std::int32_t count, const uvec4* value) const 
		{
			Uniform4uiv(loc, count, value_ptr(*value));
		}
	}
}