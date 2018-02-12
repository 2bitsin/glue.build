#include <glue/lvl1/gl/4.2.core.hpp>
#include <glue/lvl2/gl/4.2.core.hpp>
#include "../../common/strings.hpp"
#include <glue/math.hpp>

namespace glue::lvl2
{
	inline namespace core_4_2 
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
		void api::program_uniform(program_name_t id, uniform_location_t loc, float32_t value) const 
		{
			ProgramUniform1f(id, loc, value);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t value) const 
		{
			ProgramUniform1i(id, loc, value);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::uint32_t value) const 
		{
			ProgramUniform1ui(id, loc, value);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const vec2& value) const 
		{
			ProgramUniform2f(id, loc, value.x, value.y);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const ivec2& value) const 
		{
			ProgramUniform2i(id, loc, value.x, value.y);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const uvec2& value) const 
		{
			ProgramUniform2ui(id, loc, value.x, value.y);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const vec3& value) const 
		{
			ProgramUniform3f(id, loc, value.x, value.y, value.z);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const ivec3& value) const 
		{
			ProgramUniform3i(id, loc, value.x, value.y, value.z);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const uvec3& value) const 
		{
			ProgramUniform3ui(id, loc, value.x, value.y, value.z);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const vec4& value) const 
		{
			ProgramUniform4f(id, loc, value.x, value.y, value.z, value.w);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const ivec4& value) const 
		{
			ProgramUniform4i(id, loc, value.x, value.y, value.z, value.w);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, const uvec4& value) const 
		{
			ProgramUniform4ui(id, loc, value.x, value.y, value.z, value.w);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const float32_t* value) const 
		{
			ProgramUniform1fv(id, loc, count, value);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const std::int32_t* value) const 
		{
			ProgramUniform1iv(id, loc, count, value);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const std::uint32_t* value) const 
		{
			ProgramUniform1uiv(id, loc, count, value);
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const vec2* value) const 
		{
			ProgramUniform2fv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const vec3* value) const 
		{
			ProgramUniform3fv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const vec4* value) const 
		{
			ProgramUniform4fv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const ivec2* value) const 
		{
			ProgramUniform2iv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const ivec3* value) const 
		{
			ProgramUniform3iv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const ivec4* value) const 
		{
			ProgramUniform4iv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const uvec2* value) const 
		{
			ProgramUniform2uiv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const uvec3* value) const 
		{
			ProgramUniform3uiv(id, loc, count, value_ptr(*value));
		}
		void api::program_uniform(program_name_t id, uniform_location_t loc, std::int32_t count, const uvec4* value) const 
		{
			ProgramUniform4uiv(id, loc, count, value_ptr(*value));
		}
	}
}