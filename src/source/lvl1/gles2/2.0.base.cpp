#include <glue/lvl1/gles2/2.0.base.hpp>
#include "../../common/strings.hpp"
#include <cassert>

namespace glue::lvl1
{
	namespace 
	{
		template <typename T, typename P, typename L>
		void assign(T& target, P&& fptr, L name)
		{
			target = (T)fptr(name);
			//assert(target != nullptr);
		}
	}
	inline namespace base_2_0 
 	{
		void load(api& target, std::function<void*(const char*)> lfn)
		{
			assign(target.ActiveTexture, lfn, impl::str_by_index(5784));
			assign(target.AttachShader, lfn, impl::str_by_index(5806));
			assign(target.BindAttribLocation, lfn, impl::str_by_index(5824));
			assign(target.BindBuffer, lfn, impl::str_by_index(5826));
			assign(target.BindFramebuffer, lfn, impl::str_by_index(5843));
			assign(target.BindRenderbuffer, lfn, impl::str_by_index(5857));
			assign(target.BindTexture, lfn, impl::str_by_index(5863));
			assign(target.BlendColor, lfn, impl::str_by_index(5894));
			assign(target.BlendEquation, lfn, impl::str_by_index(5897));
			assign(target.BlendEquationSeparate, lfn, impl::str_by_index(5901));
			assign(target.BlendFunc, lfn, impl::str_by_index(5913));
			assign(target.BlendFuncSeparate, lfn, impl::str_by_index(5915));
			assign(target.BufferData, lfn, impl::str_by_index(5935));
			assign(target.BufferSubData, lfn, impl::str_by_index(5943));
			assign(target.CheckFramebufferStatus, lfn, impl::str_by_index(5948));
			assign(target.Clear, lfn, impl::str_by_index(5955));
			assign(target.ClearColor, lfn, impl::str_by_index(5964));
			assign(target.ClearDepthf, lfn, impl::str_by_index(5971));
			assign(target.ClearStencil, lfn, impl::str_by_index(5985));
			assign(target.ColorMask, lfn, impl::str_by_index(6058));
			assign(target.CompileShader, lfn, impl::str_by_index(6090));
			assign(target.CompressedTexImage2D, lfn, impl::str_by_index(6101));
			assign(target.CompressedTexSubImage2D, lfn, impl::str_by_index(6108));
			assign(target.CopyTexImage2D, lfn, impl::str_by_index(6162));
			assign(target.CopyTexSubImage2D, lfn, impl::str_by_index(6166));
			assign(target.CreateProgram, lfn, impl::str_by_index(6193));
			assign(target.CreateShader, lfn, impl::str_by_index(6199));
			assign(target.CullFace, lfn, impl::str_by_index(6209));
			assign(target.DeleteBuffers, lfn, impl::str_by_index(6230));
			assign(target.DeleteFramebuffers, lfn, impl::str_by_index(6236));
			assign(target.DeleteProgram, lfn, impl::str_by_index(6248));
			assign(target.DeleteRenderbuffers, lfn, impl::str_by_index(6257));
			assign(target.DeleteShader, lfn, impl::str_by_index(6262));
			assign(target.DeleteTextures, lfn, impl::str_by_index(6266));
			assign(target.DepthFunc, lfn, impl::str_by_index(6276));
			assign(target.DepthMask, lfn, impl::str_by_index(6277));
			assign(target.DepthRangef, lfn, impl::str_by_index(6286));
			assign(target.DetachShader, lfn, impl::str_by_index(6291));
			assign(target.Disable, lfn, impl::str_by_index(6293));
			assign(target.DisableVertexAttribArray, lfn, impl::str_by_index(6304));
			assign(target.DrawArrays, lfn, impl::str_by_index(6314));
			assign(target.DrawElements, lfn, impl::str_by_index(6337));
			assign(target.Enable, lfn, impl::str_by_index(6389));
			assign(target.EnableVertexAttribArray, lfn, impl::str_by_index(6400));
			assign(target.Finish, lfn, impl::str_by_index(6462));
			assign(target.Flush, lfn, impl::str_by_index(6468));
			assign(target.FramebufferRenderbuffer, lfn, impl::str_by_index(6526));
			assign(target.FramebufferTexture2D, lfn, impl::str_by_index(6535));
			assign(target.FrontFace, lfn, impl::str_by_index(6556));
			assign(target.GenBuffers, lfn, impl::str_by_index(6563));
			assign(target.GenerateMipmap, lfn, impl::str_by_index(6598));
			assign(target.GenFramebuffers, lfn, impl::str_by_index(6568));
			assign(target.GenRenderbuffers, lfn, impl::str_by_index(6584));
			assign(target.GenTextures, lfn, impl::str_by_index(6590));
			assign(target.GetActiveAttrib, lfn, impl::str_by_index(6605));
			assign(target.GetActiveUniform, lfn, impl::str_by_index(6610));
			assign(target.GetAttachedShaders, lfn, impl::str_by_index(6620));
			assign(target.GetAttribLocation, lfn, impl::str_by_index(6621));
			assign(target.GetBooleanv, lfn, impl::str_by_index(6625));
			assign(target.GetBufferParameteriv, lfn, impl::str_by_index(6627));
			assign(target.GetError, lfn, impl::str_by_index(6680));
			assign(target.GetFloatv, lfn, impl::str_by_index(6692));
			assign(target.GetFramebufferAttachmentParameteriv, lfn, impl::str_by_index(6702));
			assign(target.GetIntegerv, lfn, impl::str_by_index(6735));
			assign(target.GetProgramiv, lfn, impl::str_by_index(6891));
			assign(target.GetProgramInfoLog, lfn, impl::str_by_index(6866));
			assign(target.GetRenderbufferParameteriv, lfn, impl::str_by_index(6912));
			assign(target.GetShaderiv, lfn, impl::str_by_index(6930));
			assign(target.GetShaderInfoLog, lfn, impl::str_by_index(6926));
			assign(target.GetShaderPrecisionFormat, lfn, impl::str_by_index(6927));
			assign(target.GetShaderSource, lfn, impl::str_by_index(6928));
			assign(target.GetString, lfn, impl::str_by_index(6933));
			assign(target.GetTexParameterfv, lfn, impl::str_by_index(6963));
			assign(target.GetTexParameteriv, lfn, impl::str_by_index(6964));
			assign(target.GetUniformfv, lfn, impl::str_by_index(7004));
			assign(target.GetUniformiv, lfn, impl::str_by_index(7008));
			assign(target.GetUniformLocation, lfn, impl::str_by_index(6999));
			assign(target.GetVertexAttribfv, lfn, impl::str_by_index(7047));
			assign(target.GetVertexAttribiv, lfn, impl::str_by_index(7050));
			assign(target.GetVertexAttribPointerv, lfn, impl::str_by_index(7041));
			assign(target.Hint, lfn, impl::str_by_index(7112));
			assign(target.IsBuffer, lfn, impl::str_by_index(7162));
			assign(target.IsEnabled, lfn, impl::str_by_index(7166));
			assign(target.IsFramebuffer, lfn, impl::str_by_index(7174));
			assign(target.IsProgram, lfn, impl::str_by_index(7189));
			assign(target.IsRenderbuffer, lfn, impl::str_by_index(7197));
			assign(target.IsShader, lfn, impl::str_by_index(7202));
			assign(target.IsTexture, lfn, impl::str_by_index(7206));
			assign(target.LineWidth, lfn, impl::str_by_index(7239));
			assign(target.LinkProgram, lfn, impl::str_by_index(7242));
			assign(target.PixelStorei, lfn, impl::str_by_index(7656));
			assign(target.PolygonOffset, lfn, impl::str_by_index(7697));
			assign(target.ReadPixels, lfn, impl::str_by_index(7958));
			assign(target.ReleaseShaderCompiler, lfn, impl::str_by_index(7975));
			assign(target.RenderbufferStorage, lfn, impl::str_by_index(7978));
			assign(target.SampleCoverage, lfn, impl::str_by_index(8025));
			assign(target.Scissor, lfn, impl::str_by_index(8050));
			assign(target.ShaderBinary, lfn, impl::str_by_index(8112));
			assign(target.ShaderSource, lfn, impl::str_by_index(8116));
			assign(target.StencilFunc, lfn, impl::str_by_index(8133));
			assign(target.StencilFuncSeparate, lfn, impl::str_by_index(8134));
			assign(target.StencilMask, lfn, impl::str_by_index(8136));
			assign(target.StencilMaskSeparate, lfn, impl::str_by_index(8137));
			assign(target.StencilOp, lfn, impl::str_by_index(8138));
			assign(target.StencilOpSeparate, lfn, impl::str_by_index(8139));
			assign(target.TexImage2D, lfn, impl::str_by_index(8285));
			assign(target.TexParameterf, lfn, impl::str_by_index(8302));
			assign(target.TexParameterfv, lfn, impl::str_by_index(8303));
			assign(target.TexParameteri, lfn, impl::str_by_index(8304));
			assign(target.TexParameteriv, lfn, impl::str_by_index(8305));
			assign(target.TexSubImage2D, lfn, impl::str_by_index(8328));
			assign(target.Uniform1f, lfn, impl::str_by_index(8407));
			assign(target.Uniform1fv, lfn, impl::str_by_index(8409));
			assign(target.Uniform1i, lfn, impl::str_by_index(8411));
			assign(target.Uniform1iv, lfn, impl::str_by_index(8417));
			assign(target.Uniform2f, lfn, impl::str_by_index(8429));
			assign(target.Uniform2fv, lfn, impl::str_by_index(8431));
			assign(target.Uniform2i, lfn, impl::str_by_index(8433));
			assign(target.Uniform2iv, lfn, impl::str_by_index(8439));
			assign(target.Uniform3f, lfn, impl::str_by_index(8451));
			assign(target.Uniform3fv, lfn, impl::str_by_index(8453));
			assign(target.Uniform3i, lfn, impl::str_by_index(8455));
			assign(target.Uniform3iv, lfn, impl::str_by_index(8461));
			assign(target.Uniform4f, lfn, impl::str_by_index(8473));
			assign(target.Uniform4fv, lfn, impl::str_by_index(8475));
			assign(target.Uniform4i, lfn, impl::str_by_index(8477));
			assign(target.Uniform4iv, lfn, impl::str_by_index(8483));
			assign(target.UniformMatrix2fv, lfn, impl::str_by_index(8502));
			assign(target.UniformMatrix3fv, lfn, impl::str_by_index(8511));
			assign(target.UniformMatrix4fv, lfn, impl::str_by_index(8520));
			assign(target.UseProgram, lfn, impl::str_by_index(8540));
			assign(target.ValidateProgram, lfn, impl::str_by_index(8555));
			assign(target.VertexAttrib1f, lfn, impl::str_by_index(8647));
			assign(target.VertexAttrib1fv, lfn, impl::str_by_index(8650));
			assign(target.VertexAttrib2f, lfn, impl::str_by_index(8667));
			assign(target.VertexAttrib2fv, lfn, impl::str_by_index(8670));
			assign(target.VertexAttrib3f, lfn, impl::str_by_index(8687));
			assign(target.VertexAttrib3fv, lfn, impl::str_by_index(8690));
			assign(target.VertexAttrib4f, lfn, impl::str_by_index(8723));
			assign(target.VertexAttrib4fv, lfn, impl::str_by_index(8726));
			assign(target.VertexAttribPointer, lfn, impl::str_by_index(8847));
			assign(target.Viewport, lfn, impl::str_by_index(8923));
		}
 	}
}