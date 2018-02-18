#include <glue/lvl1/gles1/1.0.base.hpp>
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
	inline namespace base_1_0 
 	{
		void load(api& target, std::function<void*(const char*)> lfn)
		{
			assign(target.ActiveTexture, lfn, impl::str_by_index(5784));
			assign(target.AlphaFuncx, lfn, impl::str_by_index(5792));
			assign(target.BindBuffer, lfn, impl::str_by_index(5826));
			assign(target.BindTexture, lfn, impl::str_by_index(5863));
			assign(target.BlendFunc, lfn, impl::str_by_index(5913));
			assign(target.BufferData, lfn, impl::str_by_index(5935));
			assign(target.BufferSubData, lfn, impl::str_by_index(5943));
			assign(target.Clear, lfn, impl::str_by_index(5955));
			assign(target.ClearColorx, lfn, impl::str_by_index(5967));
			assign(target.ClearDepthx, lfn, impl::str_by_index(5973));
			assign(target.ClearStencil, lfn, impl::str_by_index(5985));
			assign(target.ClientActiveTexture, lfn, impl::str_by_index(5990));
			assign(target.ClipPlanex, lfn, impl::str_by_index(6002));
			assign(target.Color4ub, lfn, impl::str_by_index(6041));
			assign(target.Color4x, lfn, impl::str_by_index(6051));
			assign(target.ColorMask, lfn, impl::str_by_index(6058));
			assign(target.ColorPointer, lfn, impl::str_by_index(6068));
			assign(target.CompressedTexImage2D, lfn, impl::str_by_index(6101));
			assign(target.CompressedTexSubImage2D, lfn, impl::str_by_index(6108));
			assign(target.CopyTexImage2D, lfn, impl::str_by_index(6162));
			assign(target.CopyTexSubImage2D, lfn, impl::str_by_index(6166));
			assign(target.CullFace, lfn, impl::str_by_index(6209));
			assign(target.DeleteBuffers, lfn, impl::str_by_index(6230));
			assign(target.DeleteTextures, lfn, impl::str_by_index(6266));
			assign(target.DepthFunc, lfn, impl::str_by_index(6276));
			assign(target.DepthMask, lfn, impl::str_by_index(6277));
			assign(target.DepthRangex, lfn, impl::str_by_index(6288));
			assign(target.Disable, lfn, impl::str_by_index(6293));
			assign(target.DisableClientState, lfn, impl::str_by_index(6294));
			assign(target.DrawArrays, lfn, impl::str_by_index(6314));
			assign(target.DrawElements, lfn, impl::str_by_index(6337));
			assign(target.Enable, lfn, impl::str_by_index(6389));
			assign(target.EnableClientState, lfn, impl::str_by_index(6390));
			assign(target.Finish, lfn, impl::str_by_index(6462));
			assign(target.Flush, lfn, impl::str_by_index(6468));
			assign(target.Fogx, lfn, impl::str_by_index(6498));
			assign(target.Fogxv, lfn, impl::str_by_index(6500));
			assign(target.FrontFace, lfn, impl::str_by_index(6556));
			assign(target.Frustumx, lfn, impl::str_by_index(6560));
			assign(target.GetBooleanv, lfn, impl::str_by_index(6625));
			assign(target.GetBufferParameteriv, lfn, impl::str_by_index(6627));
			assign(target.GetClipPlanex, lfn, impl::str_by_index(6638));
			assign(target.GenBuffers, lfn, impl::str_by_index(6563));
			assign(target.GenTextures, lfn, impl::str_by_index(6590));
			assign(target.GetError, lfn, impl::str_by_index(6680));
			assign(target.GetFixedv, lfn, impl::str_by_index(6685));
			assign(target.GetIntegerv, lfn, impl::str_by_index(6735));
			assign(target.GetLightxv, lfn, impl::str_by_index(6745));
			assign(target.GetMaterialxv, lfn, impl::str_by_index(6764));
			assign(target.GetPointerv, lfn, impl::str_by_index(6856));
			assign(target.GetString, lfn, impl::str_by_index(6933));
			assign(target.GetTexEnviv, lfn, impl::str_by_index(6942));
			assign(target.GetTexEnvxv, lfn, impl::str_by_index(6943));
			assign(target.GetTexParameteriv, lfn, impl::str_by_index(6964));
			assign(target.GetTexParameterxv, lfn, impl::str_by_index(6965));
			assign(target.Hint, lfn, impl::str_by_index(7112));
			assign(target.IsBuffer, lfn, impl::str_by_index(7162));
			assign(target.IsEnabled, lfn, impl::str_by_index(7166));
			assign(target.IsTexture, lfn, impl::str_by_index(7206));
			assign(target.LightModelx, lfn, impl::str_by_index(7226));
			assign(target.LightModelxv, lfn, impl::str_by_index(7228));
			assign(target.Lightx, lfn, impl::str_by_index(7234));
			assign(target.Lightxv, lfn, impl::str_by_index(7236));
			assign(target.LineWidthx, lfn, impl::str_by_index(7240));
			assign(target.LoadIdentity, lfn, impl::str_by_index(7250));
			assign(target.LoadMatrixx, lfn, impl::str_by_index(7254));
			assign(target.LogicOp, lfn, impl::str_by_index(7265));
			assign(target.Materialx, lfn, impl::str_by_index(7312));
			assign(target.Materialxv, lfn, impl::str_by_index(7314));
			assign(target.MatrixMode, lfn, impl::str_by_index(7330));
			assign(target.MultMatrixx, lfn, impl::str_by_index(7360));
			assign(target.MultiTexCoord4x, lfn, impl::str_by_index(7478));
			assign(target.Normal3x, lfn, impl::str_by_index(7587));
			assign(target.NormalPointer, lfn, impl::str_by_index(7593));
			assign(target.Orthox, lfn, impl::str_by_index(7616));
			assign(target.PixelStorei, lfn, impl::str_by_index(7656));
			assign(target.PointParameterx, lfn, impl::str_by_index(7685));
			assign(target.PointParameterxv, lfn, impl::str_by_index(7687));
			assign(target.PointSizex, lfn, impl::str_by_index(7691));
			assign(target.PolygonOffsetx, lfn, impl::str_by_index(7701));
			assign(target.PopMatrix, lfn, impl::str_by_index(7709));
			assign(target.PushMatrix, lfn, impl::str_by_index(7915));
			assign(target.ReadPixels, lfn, impl::str_by_index(7958));
			assign(target.Rotatex, lfn, impl::str_by_index(8023));
			assign(target.SampleCoverage, lfn, impl::str_by_index(8025));
			assign(target.SampleCoveragex, lfn, impl::str_by_index(8027));
			assign(target.Scalex, lfn, impl::str_by_index(8048));
			assign(target.Scissor, lfn, impl::str_by_index(8050));
			assign(target.ShadeModel, lfn, impl::str_by_index(8111));
			assign(target.StencilFunc, lfn, impl::str_by_index(8133));
			assign(target.StencilMask, lfn, impl::str_by_index(8136));
			assign(target.StencilOp, lfn, impl::str_by_index(8138));
			assign(target.TexCoordPointer, lfn, impl::str_by_index(8259));
			assign(target.TexEnvi, lfn, impl::str_by_index(8265));
			assign(target.TexEnvx, lfn, impl::str_by_index(8267));
			assign(target.TexEnviv, lfn, impl::str_by_index(8266));
			assign(target.TexEnvxv, lfn, impl::str_by_index(8269));
			assign(target.TexImage2D, lfn, impl::str_by_index(8285));
			assign(target.TexParameteri, lfn, impl::str_by_index(8304));
			assign(target.TexParameterx, lfn, impl::str_by_index(8306));
			assign(target.TexParameteriv, lfn, impl::str_by_index(8305));
			assign(target.TexParameterxv, lfn, impl::str_by_index(8308));
			assign(target.TexSubImage2D, lfn, impl::str_by_index(8328));
			assign(target.Translatex, lfn, impl::str_by_index(8403));
			assign(target.VertexPointer, lfn, impl::str_by_index(8878));
			assign(target.Viewport, lfn, impl::str_by_index(8923));
		}
 	}
}