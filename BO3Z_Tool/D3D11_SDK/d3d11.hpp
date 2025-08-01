/*-------------------------------------------------------------------------------------
 *
 * Copyright (c) Microsoft Corporation
 *
 *-------------------------------------------------------------------------------------*/


 /* this ALWAYS GENERATED file contains the definitions for the interfaces */


  /* File created by MIDL compiler version 7.00.0555 */
 /* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __d3d11_h__
#define __d3d11_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */

#ifndef __ID3D11DeviceChild_FWD_DEFINED__
#define __ID3D11DeviceChild_FWD_DEFINED__
typedef interface ID3D11DeviceChild ID3D11DeviceChild;
#endif 	/* __ID3D11DeviceChild_FWD_DEFINED__ */


#ifndef __ID3D11DepthStencilState_FWD_DEFINED__
#define __ID3D11DepthStencilState_FWD_DEFINED__
typedef interface ID3D11DepthStencilState ID3D11DepthStencilState;
#endif 	/* __ID3D11DepthStencilState_FWD_DEFINED__ */


#ifndef __ID3D11BlendState_FWD_DEFINED__
#define __ID3D11BlendState_FWD_DEFINED__
typedef interface ID3D11BlendState ID3D11BlendState;
#endif 	/* __ID3D11BlendState_FWD_DEFINED__ */


#ifndef __ID3D11RasterizerState_FWD_DEFINED__
#define __ID3D11RasterizerState_FWD_DEFINED__
typedef interface ID3D11RasterizerState ID3D11RasterizerState;
#endif 	/* __ID3D11RasterizerState_FWD_DEFINED__ */


#ifndef __ID3D11Resource_FWD_DEFINED__
#define __ID3D11Resource_FWD_DEFINED__
typedef interface ID3D11Resource ID3D11Resource;
#endif 	/* __ID3D11Resource_FWD_DEFINED__ */


#ifndef __ID3D11Buffer_FWD_DEFINED__
#define __ID3D11Buffer_FWD_DEFINED__
typedef interface ID3D11Buffer ID3D11Buffer;
#endif 	/* __ID3D11Buffer_FWD_DEFINED__ */


#ifndef __ID3D11Texture1D_FWD_DEFINED__
#define __ID3D11Texture1D_FWD_DEFINED__
typedef interface ID3D11Texture1D ID3D11Texture1D;
#endif 	/* __ID3D11Texture1D_FWD_DEFINED__ */


#ifndef __ID3D11Texture2D_FWD_DEFINED__
#define __ID3D11Texture2D_FWD_DEFINED__
typedef interface ID3D11Texture2D ID3D11Texture2D;
#endif 	/* __ID3D11Texture2D_FWD_DEFINED__ */


#ifndef __ID3D11Texture3D_FWD_DEFINED__
#define __ID3D11Texture3D_FWD_DEFINED__
typedef interface ID3D11Texture3D ID3D11Texture3D;
#endif 	/* __ID3D11Texture3D_FWD_DEFINED__ */


#ifndef __ID3D11View_FWD_DEFINED__
#define __ID3D11View_FWD_DEFINED__
typedef interface ID3D11View ID3D11View;
#endif 	/* __ID3D11View_FWD_DEFINED__ */


#ifndef __ID3D11ShaderResourceView_FWD_DEFINED__
#define __ID3D11ShaderResourceView_FWD_DEFINED__
typedef interface ID3D11ShaderResourceView ID3D11ShaderResourceView;
#endif 	/* __ID3D11ShaderResourceView_FWD_DEFINED__ */


#ifndef __ID3D11RenderTargetView_FWD_DEFINED__
#define __ID3D11RenderTargetView_FWD_DEFINED__
typedef interface ID3D11RenderTargetView ID3D11RenderTargetView;
#endif 	/* __ID3D11RenderTargetView_FWD_DEFINED__ */


#ifndef __ID3D11DepthStencilView_FWD_DEFINED__
#define __ID3D11DepthStencilView_FWD_DEFINED__
typedef interface ID3D11DepthStencilView ID3D11DepthStencilView;
#endif 	/* __ID3D11DepthStencilView_FWD_DEFINED__ */


#ifndef __ID3D11UnorderedAccessView_FWD_DEFINED__
#define __ID3D11UnorderedAccessView_FWD_DEFINED__
typedef interface ID3D11UnorderedAccessView ID3D11UnorderedAccessView;
#endif 	/* __ID3D11UnorderedAccessView_FWD_DEFINED__ */


#ifndef __ID3D11VertexShader_FWD_DEFINED__
#define __ID3D11VertexShader_FWD_DEFINED__
typedef interface ID3D11VertexShader ID3D11VertexShader;
#endif 	/* __ID3D11VertexShader_FWD_DEFINED__ */


#ifndef __ID3D11HullShader_FWD_DEFINED__
#define __ID3D11HullShader_FWD_DEFINED__
typedef interface ID3D11HullShader ID3D11HullShader;
#endif 	/* __ID3D11HullShader_FWD_DEFINED__ */


#ifndef __ID3D11DomainShader_FWD_DEFINED__
#define __ID3D11DomainShader_FWD_DEFINED__
typedef interface ID3D11DomainShader ID3D11DomainShader;
#endif 	/* __ID3D11DomainShader_FWD_DEFINED__ */


#ifndef __ID3D11GeometryShader_FWD_DEFINED__
#define __ID3D11GeometryShader_FWD_DEFINED__
typedef interface ID3D11GeometryShader ID3D11GeometryShader;
#endif 	/* __ID3D11GeometryShader_FWD_DEFINED__ */


#ifndef __ID3D11PixelShader_FWD_DEFINED__
#define __ID3D11PixelShader_FWD_DEFINED__
typedef interface ID3D11PixelShader ID3D11PixelShader;
#endif 	/* __ID3D11PixelShader_FWD_DEFINED__ */


#ifndef __ID3D11ComputeShader_FWD_DEFINED__
#define __ID3D11ComputeShader_FWD_DEFINED__
typedef interface ID3D11ComputeShader ID3D11ComputeShader;
#endif 	/* __ID3D11ComputeShader_FWD_DEFINED__ */


#ifndef __ID3D11InputLayout_FWD_DEFINED__
#define __ID3D11InputLayout_FWD_DEFINED__
typedef interface ID3D11InputLayout ID3D11InputLayout;
#endif 	/* __ID3D11InputLayout_FWD_DEFINED__ */


#ifndef __ID3D11SamplerState_FWD_DEFINED__
#define __ID3D11SamplerState_FWD_DEFINED__
typedef interface ID3D11SamplerState ID3D11SamplerState;
#endif 	/* __ID3D11SamplerState_FWD_DEFINED__ */


#ifndef __ID3D11Asynchronous_FWD_DEFINED__
#define __ID3D11Asynchronous_FWD_DEFINED__
typedef interface ID3D11Asynchronous ID3D11Asynchronous;
#endif 	/* __ID3D11Asynchronous_FWD_DEFINED__ */


#ifndef __ID3D11Query_FWD_DEFINED__
#define __ID3D11Query_FWD_DEFINED__
typedef interface ID3D11Query ID3D11Query;
#endif 	/* __ID3D11Query_FWD_DEFINED__ */


#ifndef __ID3D11Predicate_FWD_DEFINED__
#define __ID3D11Predicate_FWD_DEFINED__
typedef interface ID3D11Predicate ID3D11Predicate;
#endif 	/* __ID3D11Predicate_FWD_DEFINED__ */


#ifndef __ID3D11Counter_FWD_DEFINED__
#define __ID3D11Counter_FWD_DEFINED__
typedef interface ID3D11Counter ID3D11Counter;
#endif 	/* __ID3D11Counter_FWD_DEFINED__ */


#ifndef __ID3D11ClassInstance_FWD_DEFINED__
#define __ID3D11ClassInstance_FWD_DEFINED__
typedef interface ID3D11ClassInstance ID3D11ClassInstance;
#endif 	/* __ID3D11ClassInstance_FWD_DEFINED__ */


#ifndef __ID3D11ClassLinkage_FWD_DEFINED__
#define __ID3D11ClassLinkage_FWD_DEFINED__
typedef interface ID3D11ClassLinkage ID3D11ClassLinkage;
#endif 	/* __ID3D11ClassLinkage_FWD_DEFINED__ */


#ifndef __ID3D11CommandList_FWD_DEFINED__
#define __ID3D11CommandList_FWD_DEFINED__
typedef interface ID3D11CommandList ID3D11CommandList;
#endif 	/* __ID3D11CommandList_FWD_DEFINED__ */


#ifndef __ID3D11DeviceContext_FWD_DEFINED__
#define __ID3D11DeviceContext_FWD_DEFINED__
typedef interface ID3D11DeviceContext ID3D11DeviceContext;
#endif 	/* __ID3D11DeviceContext_FWD_DEFINED__ */


#ifndef __ID3D11Device_FWD_DEFINED__
#define __ID3D11Device_FWD_DEFINED__
typedef interface ID3D11Device ID3D11Device;
#endif 	/* __ID3D11Device_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "dxgi.h"
#include "d3dcommon.h"

#ifdef __cplusplus
extern "C" {
#endif 


    /* interface __MIDL_itf_d3d11_0000_0000 */
    /* [local] */

#ifndef _D3D11_CONSTANTS
#define _D3D11_CONSTANTS
#define	D3D11_16BIT_INDEX_STRIP_CUT_VALUE	( 0xffff )

#define	D3D11_32BIT_INDEX_STRIP_CUT_VALUE	( 0xffffffff )

#define	D3D11_8BIT_INDEX_STRIP_CUT_VALUE	( 0xff )

#define	D3D11_ARRAY_AXIS_ADDRESS_RANGE_BIT_COUNT	( 9 )

#define	D3D11_CLIP_OR_CULL_DISTANCE_COUNT	( 8 )

#define	D3D11_CLIP_OR_CULL_DISTANCE_ELEMENT_COUNT	( 2 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT	( 14 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_COMPONENTS	( 4 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_HW_SLOT_COUNT	( 15 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COMPONENTS	( 4 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_REGISTER_COUNT	( 15 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READS_PER_INST	( 1 )

#define	D3D11_COMMONSHADER_CONSTANT_BUFFER_REGISTER_READ_PORTS	( 1 )

#define	D3D11_COMMONSHADER_FLOWCONTROL_NESTING_LIMIT	( 64 )

#define	D3D11_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COMPONENTS	( 4 )

#define	D3D11_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_COUNT	( 1 )

#define	D3D11_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READS_PER_INST	( 1 )

#define	D3D11_COMMONSHADER_IMMEDIATE_CONSTANT_BUFFER_REGISTER_READ_PORTS	( 1 )

#define	D3D11_COMMONSHADER_IMMEDIATE_VALUE_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_COMMONSHADER_INPUT_RESOURCE_REGISTER_COMPONENTS	( 1 )

#define	D3D11_COMMONSHADER_INPUT_RESOURCE_REGISTER_COUNT	( 128 )

#define	D3D11_COMMONSHADER_INPUT_RESOURCE_REGISTER_READS_PER_INST	( 1 )

#define	D3D11_COMMONSHADER_INPUT_RESOURCE_REGISTER_READ_PORTS	( 1 )

#define	D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT	( 128 )

#define	D3D11_COMMONSHADER_SAMPLER_REGISTER_COMPONENTS	( 1 )

#define	D3D11_COMMONSHADER_SAMPLER_REGISTER_COUNT	( 16 )

#define	D3D11_COMMONSHADER_SAMPLER_REGISTER_READS_PER_INST	( 1 )

#define	D3D11_COMMONSHADER_SAMPLER_REGISTER_READ_PORTS	( 1 )

#define	D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT	( 16 )

#define	D3D11_COMMONSHADER_SUBROUTINE_NESTING_LIMIT	( 32 )

#define	D3D11_COMMONSHADER_TEMP_REGISTER_COMPONENTS	( 4 )

#define	D3D11_COMMONSHADER_TEMP_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_COMMONSHADER_TEMP_REGISTER_COUNT	( 4096 )

#define	D3D11_COMMONSHADER_TEMP_REGISTER_READS_PER_INST	( 3 )

#define	D3D11_COMMONSHADER_TEMP_REGISTER_READ_PORTS	( 3 )

#define	D3D11_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MAX	( 10 )

#define	D3D11_COMMONSHADER_TEXCOORD_RANGE_REDUCTION_MIN	( -10 )

#define	D3D11_COMMONSHADER_TEXEL_OFFSET_MAX_NEGATIVE	( -8 )

#define	D3D11_COMMONSHADER_TEXEL_OFFSET_MAX_POSITIVE	( 7 )

#define	D3D11_CS_4_X_BUCKET00_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 256 )

#define	D3D11_CS_4_X_BUCKET00_MAX_NUM_THREADS_PER_GROUP	( 64 )

#define	D3D11_CS_4_X_BUCKET01_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 240 )

#define	D3D11_CS_4_X_BUCKET01_MAX_NUM_THREADS_PER_GROUP	( 68 )

#define	D3D11_CS_4_X_BUCKET02_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 224 )

#define	D3D11_CS_4_X_BUCKET02_MAX_NUM_THREADS_PER_GROUP	( 72 )

#define	D3D11_CS_4_X_BUCKET03_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 208 )

#define	D3D11_CS_4_X_BUCKET03_MAX_NUM_THREADS_PER_GROUP	( 76 )

#define	D3D11_CS_4_X_BUCKET04_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 192 )

#define	D3D11_CS_4_X_BUCKET04_MAX_NUM_THREADS_PER_GROUP	( 84 )

#define	D3D11_CS_4_X_BUCKET05_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 176 )

#define	D3D11_CS_4_X_BUCKET05_MAX_NUM_THREADS_PER_GROUP	( 92 )

#define	D3D11_CS_4_X_BUCKET06_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 160 )

#define	D3D11_CS_4_X_BUCKET06_MAX_NUM_THREADS_PER_GROUP	( 100 )

#define	D3D11_CS_4_X_BUCKET07_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 144 )

#define	D3D11_CS_4_X_BUCKET07_MAX_NUM_THREADS_PER_GROUP	( 112 )

#define	D3D11_CS_4_X_BUCKET08_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 128 )

#define	D3D11_CS_4_X_BUCKET08_MAX_NUM_THREADS_PER_GROUP	( 128 )

#define	D3D11_CS_4_X_BUCKET09_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 112 )

#define	D3D11_CS_4_X_BUCKET09_MAX_NUM_THREADS_PER_GROUP	( 144 )

#define	D3D11_CS_4_X_BUCKET10_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 96 )

#define	D3D11_CS_4_X_BUCKET10_MAX_NUM_THREADS_PER_GROUP	( 168 )

#define	D3D11_CS_4_X_BUCKET11_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 80 )

#define	D3D11_CS_4_X_BUCKET11_MAX_NUM_THREADS_PER_GROUP	( 204 )

#define	D3D11_CS_4_X_BUCKET12_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 64 )

#define	D3D11_CS_4_X_BUCKET12_MAX_NUM_THREADS_PER_GROUP	( 256 )

#define	D3D11_CS_4_X_BUCKET13_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 48 )

#define	D3D11_CS_4_X_BUCKET13_MAX_NUM_THREADS_PER_GROUP	( 340 )

#define	D3D11_CS_4_X_BUCKET14_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 32 )

#define	D3D11_CS_4_X_BUCKET14_MAX_NUM_THREADS_PER_GROUP	( 512 )

#define	D3D11_CS_4_X_BUCKET15_MAX_BYTES_TGSM_WRITABLE_PER_THREAD	( 16 )

#define	D3D11_CS_4_X_BUCKET15_MAX_NUM_THREADS_PER_GROUP	( 768 )

#define	D3D11_CS_4_X_DISPATCH_MAX_THREAD_GROUPS_IN_Z_DIMENSION	( 1 )

#define	D3D11_CS_4_X_RAW_UAV_BYTE_ALIGNMENT	( 256 )

#define	D3D11_CS_4_X_THREAD_GROUP_MAX_THREADS_PER_GROUP	( 768 )

#define	D3D11_CS_4_X_THREAD_GROUP_MAX_X	( 768 )

#define	D3D11_CS_4_X_THREAD_GROUP_MAX_Y	( 768 )

#define	D3D11_CS_4_X_UAV_REGISTER_COUNT	( 1 )

#define	D3D11_CS_DISPATCH_MAX_THREAD_GROUPS_PER_DIMENSION	( 65535 )

#define	D3D11_CS_TGSM_REGISTER_COUNT	( 8192 )

#define	D3D11_CS_TGSM_REGISTER_READS_PER_INST	( 1 )

#define	D3D11_CS_TGSM_RESOURCE_REGISTER_COMPONENTS	( 1 )

#define	D3D11_CS_TGSM_RESOURCE_REGISTER_READ_PORTS	( 1 )

#define	D3D11_CS_THREAD_GROUP_MAX_THREADS_PER_GROUP	( 1024 )

#define	D3D11_CS_THREAD_GROUP_MAX_X	( 1024 )

#define	D3D11_CS_THREAD_GROUP_MAX_Y	( 1024 )

#define	D3D11_CS_THREAD_GROUP_MAX_Z	( 64 )

#define	D3D11_CS_THREAD_GROUP_MIN_X	( 1 )

#define	D3D11_CS_THREAD_GROUP_MIN_Y	( 1 )

#define	D3D11_CS_THREAD_GROUP_MIN_Z	( 1 )

#define	D3D11_CS_THREAD_LOCAL_TEMP_REGISTER_POOL	( 16384 )

#define D3D11_DEFAULT_BLEND_FACTOR_ALPHA	( 1.0f )
#define D3D11_DEFAULT_BLEND_FACTOR_BLUE	( 1.0f )
#define D3D11_DEFAULT_BLEND_FACTOR_GREEN	( 1.0f )
#define D3D11_DEFAULT_BLEND_FACTOR_RED	( 1.0f )
#define D3D11_DEFAULT_BORDER_COLOR_COMPONENT	( 0.0f )
#define	D3D11_DEFAULT_DEPTH_BIAS	( 0 )

#define D3D11_DEFAULT_DEPTH_BIAS_CLAMP	( 0.0f )
#define D3D11_DEFAULT_MAX_ANISOTROPY	( 16 )
#define D3D11_DEFAULT_MIP_LOD_BIAS	( 0.0f )
#define	D3D11_DEFAULT_RENDER_TARGET_ARRAY_INDEX	( 0 )

#define	D3D11_DEFAULT_SAMPLE_MASK	( 0xffffffff )

#define	D3D11_DEFAULT_SCISSOR_ENDX	( 0 )

#define	D3D11_DEFAULT_SCISSOR_ENDY	( 0 )

#define	D3D11_DEFAULT_SCISSOR_STARTX	( 0 )

#define	D3D11_DEFAULT_SCISSOR_STARTY	( 0 )

#define D3D11_DEFAULT_SLOPE_SCALED_DEPTH_BIAS	( 0.0f )
#define	D3D11_DEFAULT_STENCIL_READ_MASK	( 0xff )

#define	D3D11_DEFAULT_STENCIL_REFERENCE	( 0 )

#define	D3D11_DEFAULT_STENCIL_WRITE_MASK	( 0xff )

#define	D3D11_DEFAULT_VIEWPORT_AND_SCISSORRECT_INDEX	( 0 )

#define	D3D11_DEFAULT_VIEWPORT_HEIGHT	( 0 )

#define D3D11_DEFAULT_VIEWPORT_MAX_DEPTH	( 0.0f )
#define D3D11_DEFAULT_VIEWPORT_MIN_DEPTH	( 0.0f )
#define	D3D11_DEFAULT_VIEWPORT_TOPLEFTX	( 0 )

#define	D3D11_DEFAULT_VIEWPORT_TOPLEFTY	( 0 )

#define	D3D11_DEFAULT_VIEWPORT_WIDTH	( 0 )

#define	D3D11_DS_INPUT_CONTROL_POINTS_MAX_TOTAL_SCALARS	( 3968 )

#define	D3D11_DS_INPUT_CONTROL_POINT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_DS_INPUT_CONTROL_POINT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_DS_INPUT_CONTROL_POINT_REGISTER_COUNT	( 32 )

#define	D3D11_DS_INPUT_CONTROL_POINT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_DS_INPUT_CONTROL_POINT_REGISTER_READ_PORTS	( 1 )

#define	D3D11_DS_INPUT_DOMAIN_POINT_REGISTER_COMPONENTS	( 3 )

#define	D3D11_DS_INPUT_DOMAIN_POINT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_DS_INPUT_DOMAIN_POINT_REGISTER_COUNT	( 1 )

#define	D3D11_DS_INPUT_DOMAIN_POINT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_DS_INPUT_DOMAIN_POINT_REGISTER_READ_PORTS	( 1 )

#define	D3D11_DS_INPUT_PATCH_CONSTANT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_DS_INPUT_PATCH_CONSTANT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_DS_INPUT_PATCH_CONSTANT_REGISTER_COUNT	( 32 )

#define	D3D11_DS_INPUT_PATCH_CONSTANT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_DS_INPUT_PATCH_CONSTANT_REGISTER_READ_PORTS	( 1 )

#define	D3D11_DS_OUTPUT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_DS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_DS_OUTPUT_REGISTER_COUNT	( 32 )

#define D3D11_FLOAT16_FUSED_TOLERANCE_IN_ULP	( 0.6 )
#define D3D11_FLOAT32_MAX	( 3.402823466e+38f )
#define D3D11_FLOAT32_TO_INTEGER_TOLERANCE_IN_ULP	( 0.6f )
#define D3D11_FLOAT_TO_SRGB_EXPONENT_DENOMINATOR	( 2.4f )
#define D3D11_FLOAT_TO_SRGB_EXPONENT_NUMERATOR	( 1.0f )
#define D3D11_FLOAT_TO_SRGB_OFFSET	( 0.055f )
#define D3D11_FLOAT_TO_SRGB_SCALE_1	( 12.92f )
#define D3D11_FLOAT_TO_SRGB_SCALE_2	( 1.055f )
#define D3D11_FLOAT_TO_SRGB_THRESHOLD	( 0.0031308f )
#define D3D11_FTOI_INSTRUCTION_MAX_INPUT	( 2147483647.999f )
#define D3D11_FTOI_INSTRUCTION_MIN_INPUT	( -2147483648.999f )
#define D3D11_FTOU_INSTRUCTION_MAX_INPUT	( 4294967295.999f )
#define D3D11_FTOU_INSTRUCTION_MIN_INPUT	( 0.0f )
#define	D3D11_GS_INPUT_INSTANCE_ID_READS_PER_INST	( 2 )

#define	D3D11_GS_INPUT_INSTANCE_ID_READ_PORTS	( 1 )

#define	D3D11_GS_INPUT_INSTANCE_ID_REGISTER_COMPONENTS	( 1 )

#define	D3D11_GS_INPUT_INSTANCE_ID_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_GS_INPUT_INSTANCE_ID_REGISTER_COUNT	( 1 )

#define	D3D11_GS_INPUT_PRIM_CONST_REGISTER_COMPONENTS	( 1 )

#define	D3D11_GS_INPUT_PRIM_CONST_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_GS_INPUT_PRIM_CONST_REGISTER_COUNT	( 1 )

#define	D3D11_GS_INPUT_PRIM_CONST_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_GS_INPUT_PRIM_CONST_REGISTER_READ_PORTS	( 1 )

#define	D3D11_GS_INPUT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_GS_INPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_GS_INPUT_REGISTER_COUNT	( 32 )

#define	D3D11_GS_INPUT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_GS_INPUT_REGISTER_READ_PORTS	( 1 )

#define	D3D11_GS_INPUT_REGISTER_VERTICES	( 32 )

#define	D3D11_GS_MAX_INSTANCE_COUNT	( 32 )

#define	D3D11_GS_MAX_OUTPUT_VERTEX_COUNT_ACROSS_INSTANCES	( 1024 )

#define	D3D11_GS_OUTPUT_ELEMENTS	( 32 )

#define	D3D11_GS_OUTPUT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_GS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_GS_OUTPUT_REGISTER_COUNT	( 32 )

#define	D3D11_HS_CONTROL_POINT_PHASE_INPUT_REGISTER_COUNT	( 32 )

#define	D3D11_HS_CONTROL_POINT_PHASE_OUTPUT_REGISTER_COUNT	( 32 )

#define	D3D11_HS_CONTROL_POINT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_HS_CONTROL_POINT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_HS_CONTROL_POINT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_HS_CONTROL_POINT_REGISTER_READ_PORTS	( 1 )

#define	D3D11_HS_FORK_PHASE_INSTANCE_COUNT_UPPER_BOUND	( 0xffffffff )

#define	D3D11_HS_INPUT_FORK_INSTANCE_ID_REGISTER_COMPONENTS	( 1 )

#define	D3D11_HS_INPUT_FORK_INSTANCE_ID_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_HS_INPUT_FORK_INSTANCE_ID_REGISTER_COUNT	( 1 )

#define	D3D11_HS_INPUT_FORK_INSTANCE_ID_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_HS_INPUT_FORK_INSTANCE_ID_REGISTER_READ_PORTS	( 1 )

#define	D3D11_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_COMPONENTS	( 1 )

#define	D3D11_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_COUNT	( 1 )

#define	D3D11_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_HS_INPUT_JOIN_INSTANCE_ID_REGISTER_READ_PORTS	( 1 )

#define	D3D11_HS_INPUT_PRIMITIVE_ID_REGISTER_COMPONENTS	( 1 )

#define	D3D11_HS_INPUT_PRIMITIVE_ID_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_HS_INPUT_PRIMITIVE_ID_REGISTER_COUNT	( 1 )

#define	D3D11_HS_INPUT_PRIMITIVE_ID_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_HS_INPUT_PRIMITIVE_ID_REGISTER_READ_PORTS	( 1 )

#define	D3D11_HS_JOIN_PHASE_INSTANCE_COUNT_UPPER_BOUND	( 0xffffffff )

#define D3D11_HS_MAXTESSFACTOR_LOWER_BOUND	( 1.0f )
#define D3D11_HS_MAXTESSFACTOR_UPPER_BOUND	( 64.0f )
#define	D3D11_HS_OUTPUT_CONTROL_POINTS_MAX_TOTAL_SCALARS	( 3968 )

#define	D3D11_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_COMPONENTS	( 1 )

#define	D3D11_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_COUNT	( 1 )

#define	D3D11_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_HS_OUTPUT_CONTROL_POINT_ID_REGISTER_READ_PORTS	( 1 )

#define	D3D11_HS_OUTPUT_PATCH_CONSTANT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_HS_OUTPUT_PATCH_CONSTANT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_HS_OUTPUT_PATCH_CONSTANT_REGISTER_COUNT	( 32 )

#define	D3D11_HS_OUTPUT_PATCH_CONSTANT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_HS_OUTPUT_PATCH_CONSTANT_REGISTER_READ_PORTS	( 1 )

#define	D3D11_IA_DEFAULT_INDEX_BUFFER_OFFSET_IN_BYTES	( 0 )

#define	D3D11_IA_DEFAULT_PRIMITIVE_TOPOLOGY	( 0 )

#define	D3D11_IA_DEFAULT_VERTEX_BUFFER_OFFSET_IN_BYTES	( 0 )

#define	D3D11_IA_INDEX_INPUT_RESOURCE_SLOT_COUNT	( 1 )

#define	D3D11_IA_INSTANCE_ID_BIT_COUNT	( 32 )

#define	D3D11_IA_INTEGER_ARITHMETIC_BIT_COUNT	( 32 )

#define	D3D11_IA_PATCH_MAX_CONTROL_POINT_COUNT	( 32 )

#define	D3D11_IA_PRIMITIVE_ID_BIT_COUNT	( 32 )

#define	D3D11_IA_VERTEX_ID_BIT_COUNT	( 32 )

#define	D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT	( 32 )

#define	D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENTS_COMPONENTS	( 128 )

#define	D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT	( 32 )

#define	D3D11_INTEGER_DIVIDE_BY_ZERO_QUOTIENT	( 0xffffffff )

#define	D3D11_INTEGER_DIVIDE_BY_ZERO_REMAINDER	( 0xffffffff )

#define	D3D11_KEEP_RENDER_TARGETS_AND_DEPTH_STENCIL	( 0xffffffff )

#define	D3D11_KEEP_UNORDERED_ACCESS_VIEWS	( 0xffffffff )

#define D3D11_LINEAR_GAMMA	( 1.0f )
#define	D3D11_MAJOR_VERSION	( 11 )

#define D3D11_MAX_BORDER_COLOR_COMPONENT	( 1.0f )
#define D3D11_MAX_DEPTH	( 1.0f )
#define	D3D11_MAX_MAXANISOTROPY	( 16 )

#define	D3D11_MAX_MULTISAMPLE_SAMPLE_COUNT	( 32 )

#define D3D11_MAX_POSITION_VALUE	( 3.402823466e+34f )
#define	D3D11_MAX_TEXTURE_DIMENSION_2_TO_EXP	( 17 )

#define	D3D11_MINOR_VERSION	( 0 )

#define D3D11_MIN_BORDER_COLOR_COMPONENT	( 0.0f )
#define D3D11_MIN_DEPTH	( 0.0f )
#define	D3D11_MIN_MAXANISOTROPY	( 0 )

#define D3D11_MIP_LOD_BIAS_MAX	( 15.99f )
#define D3D11_MIP_LOD_BIAS_MIN	( -16.0f )
#define	D3D11_MIP_LOD_FRACTIONAL_BIT_COUNT	( 8 )

#define	D3D11_MIP_LOD_RANGE_BIT_COUNT	( 8 )

#define D3D11_MULTISAMPLE_ANTIALIAS_LINE_WIDTH	( 1.4f )
#define	D3D11_NONSAMPLE_FETCH_OUT_OF_RANGE_ACCESS_RESULT	( 0 )

#define	D3D11_PIXEL_ADDRESS_RANGE_BIT_COUNT	( 15 )

#define	D3D11_PRE_SCISSOR_PIXEL_ADDRESS_RANGE_BIT_COUNT	( 16 )

#define	D3D11_PS_CS_UAV_REGISTER_COMPONENTS	( 1 )

#define	D3D11_PS_CS_UAV_REGISTER_COUNT	( 8 )

#define	D3D11_PS_CS_UAV_REGISTER_READS_PER_INST	( 1 )

#define	D3D11_PS_CS_UAV_REGISTER_READ_PORTS	( 1 )

#define	D3D11_PS_FRONTFACING_DEFAULT_VALUE	( 0xffffffff )

#define	D3D11_PS_FRONTFACING_FALSE_VALUE	( 0 )

#define	D3D11_PS_FRONTFACING_TRUE_VALUE	( 0xffffffff )

#define	D3D11_PS_INPUT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_PS_INPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_PS_INPUT_REGISTER_COUNT	( 32 )

#define	D3D11_PS_INPUT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_PS_INPUT_REGISTER_READ_PORTS	( 1 )

#define D3D11_PS_LEGACY_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.0f )
#define	D3D11_PS_OUTPUT_DEPTH_REGISTER_COMPONENTS	( 1 )

#define	D3D11_PS_OUTPUT_DEPTH_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_PS_OUTPUT_DEPTH_REGISTER_COUNT	( 1 )

#define	D3D11_PS_OUTPUT_MASK_REGISTER_COMPONENTS	( 1 )

#define	D3D11_PS_OUTPUT_MASK_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_PS_OUTPUT_MASK_REGISTER_COUNT	( 1 )

#define	D3D11_PS_OUTPUT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_PS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_PS_OUTPUT_REGISTER_COUNT	( 8 )

#define D3D11_PS_PIXEL_CENTER_FRACTIONAL_COMPONENT	( 0.5f )
#define	D3D11_RAW_UAV_SRV_BYTE_ALIGNMENT	( 16 )

#define	D3D11_REQ_BLEND_OBJECT_COUNT_PER_DEVICE	( 4096 )

#define	D3D11_REQ_BUFFER_RESOURCE_TEXEL_COUNT_2_TO_EXP	( 27 )

#define	D3D11_REQ_CONSTANT_BUFFER_ELEMENT_COUNT	( 4096 )

#define	D3D11_REQ_DEPTH_STENCIL_OBJECT_COUNT_PER_DEVICE	( 4096 )

#define	D3D11_REQ_DRAWINDEXED_INDEX_COUNT_2_TO_EXP	( 32 )

#define	D3D11_REQ_DRAW_VERTEX_COUNT_2_TO_EXP	( 32 )

#define	D3D11_REQ_FILTERING_HW_ADDRESSABLE_RESOURCE_DIMENSION	( 16384 )

#define	D3D11_REQ_GS_INVOCATION_32BIT_OUTPUT_COMPONENT_LIMIT	( 1024 )

#define	D3D11_REQ_IMMEDIATE_CONSTANT_BUFFER_ELEMENT_COUNT	( 4096 )

#define	D3D11_REQ_MAXANISOTROPY	( 16 )

#define	D3D11_REQ_MIP_LEVELS	( 15 )

#define	D3D11_REQ_MULTI_ELEMENT_STRUCTURE_SIZE_IN_BYTES	( 2048 )

#define	D3D11_REQ_RASTERIZER_OBJECT_COUNT_PER_DEVICE	( 4096 )

#define	D3D11_REQ_RENDER_TO_BUFFER_WINDOW_WIDTH	( 16384 )

#define	D3D11_REQ_RESOURCE_SIZE_IN_MEGABYTES_EXPRESSION_A_TERM	( 128 )

#define D3D11_REQ_RESOURCE_SIZE_IN_MEGABYTES_EXPRESSION_B_TERM	( 0.25f )
#define	D3D11_REQ_RESOURCE_VIEW_COUNT_PER_DEVICE_2_TO_EXP	( 20 )

#define	D3D11_REQ_SAMPLER_OBJECT_COUNT_PER_DEVICE	( 4096 )

#define	D3D11_REQ_TEXTURE1D_ARRAY_AXIS_DIMENSION	( 2048 )

#define	D3D11_REQ_TEXTURE1D_U_DIMENSION	( 16384 )

#define	D3D11_REQ_TEXTURE2D_ARRAY_AXIS_DIMENSION	( 2048 )

#define	D3D11_REQ_TEXTURE2D_U_OR_V_DIMENSION	( 16384 )

#define	D3D11_REQ_TEXTURE3D_U_V_OR_W_DIMENSION	( 2048 )

#define	D3D11_REQ_TEXTURECUBE_DIMENSION	( 16384 )

#define	D3D11_RESINFO_INSTRUCTION_MISSING_COMPONENT_RETVAL	( 0 )

#define	D3D11_SHADER_MAJOR_VERSION	( 5 )

#define	D3D11_SHADER_MAX_INSTANCES	( 65535 )

#define	D3D11_SHADER_MAX_INTERFACES	( 253 )

#define	D3D11_SHADER_MAX_INTERFACE_CALL_SITES	( 4096 )

#define	D3D11_SHADER_MAX_TYPES	( 65535 )

#define	D3D11_SHADER_MINOR_VERSION	( 0 )

#define	D3D11_SHIFT_INSTRUCTION_PAD_VALUE	( 0 )

#define	D3D11_SHIFT_INSTRUCTION_SHIFT_VALUE_BIT_COUNT	( 5 )

#define	D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT	( 8 )

#define	D3D11_SO_BUFFER_MAX_STRIDE_IN_BYTES	( 2048 )

#define	D3D11_SO_BUFFER_MAX_WRITE_WINDOW_IN_BYTES	( 512 )

#define	D3D11_SO_BUFFER_SLOT_COUNT	( 4 )

#define	D3D11_SO_DDI_REGISTER_INDEX_DENOTING_GAP	( 0xffffffff )

#define	D3D11_SO_NO_RASTERIZED_STREAM	( 0xffffffff )

#define	D3D11_SO_OUTPUT_COMPONENT_COUNT	( 128 )

#define	D3D11_SO_STREAM_COUNT	( 4 )

#define	D3D11_SPEC_DATE_DAY	( 04 )

#define	D3D11_SPEC_DATE_MONTH	( 06 )

#define	D3D11_SPEC_DATE_YEAR	( 2009 )

#define D3D11_SPEC_VERSION	( 1.0 )
#define D3D11_SRGB_GAMMA	( 2.2f )
#define D3D11_SRGB_TO_FLOAT_DENOMINATOR_1	( 12.92f )
#define D3D11_SRGB_TO_FLOAT_DENOMINATOR_2	( 1.055f )
#define D3D11_SRGB_TO_FLOAT_EXPONENT	( 2.4f )
#define D3D11_SRGB_TO_FLOAT_OFFSET	( 0.055f )
#define D3D11_SRGB_TO_FLOAT_THRESHOLD	( 0.04045f )
#define D3D11_SRGB_TO_FLOAT_TOLERANCE_IN_ULP	( 0.5f )
#define	D3D11_STANDARD_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_STANDARD_COMPONENT_BIT_COUNT_DOUBLED	( 64 )

#define	D3D11_STANDARD_MAXIMUM_ELEMENT_ALIGNMENT_BYTE_MULTIPLE	( 4 )

#define	D3D11_STANDARD_PIXEL_COMPONENT_COUNT	( 128 )

#define	D3D11_STANDARD_PIXEL_ELEMENT_COUNT	( 32 )

#define	D3D11_STANDARD_VECTOR_SIZE	( 4 )

#define	D3D11_STANDARD_VERTEX_ELEMENT_COUNT	( 32 )

#define	D3D11_STANDARD_VERTEX_TOTAL_COMPONENT_COUNT	( 64 )

#define	D3D11_SUBPIXEL_FRACTIONAL_BIT_COUNT	( 8 )

#define	D3D11_SUBTEXEL_FRACTIONAL_BIT_COUNT	( 8 )

#define	D3D11_TESSELLATOR_MAX_EVEN_TESSELLATION_FACTOR	( 64 )

#define	D3D11_TESSELLATOR_MAX_ISOLINE_DENSITY_TESSELLATION_FACTOR	( 64 )

#define	D3D11_TESSELLATOR_MAX_ODD_TESSELLATION_FACTOR	( 63 )

#define	D3D11_TESSELLATOR_MAX_TESSELLATION_FACTOR	( 64 )

#define	D3D11_TESSELLATOR_MIN_EVEN_TESSELLATION_FACTOR	( 2 )

#define	D3D11_TESSELLATOR_MIN_ISOLINE_DENSITY_TESSELLATION_FACTOR	( 1 )

#define	D3D11_TESSELLATOR_MIN_ODD_TESSELLATION_FACTOR	( 1 )

#define	D3D11_TEXEL_ADDRESS_RANGE_BIT_COUNT	( 16 )

#define	D3D11_UNBOUND_MEMORY_ACCESS_RESULT	( 0 )

#define	D3D11_VIEWPORT_AND_SCISSORRECT_MAX_INDEX	( 15 )

#define	D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE	( 16 )

#define	D3D11_VIEWPORT_BOUNDS_MAX	( 32767 )

#define	D3D11_VIEWPORT_BOUNDS_MIN	( -32768 )

#define	D3D11_VS_INPUT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_VS_INPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_VS_INPUT_REGISTER_COUNT	( 32 )

#define	D3D11_VS_INPUT_REGISTER_READS_PER_INST	( 2 )

#define	D3D11_VS_INPUT_REGISTER_READ_PORTS	( 1 )

#define	D3D11_VS_OUTPUT_REGISTER_COMPONENTS	( 4 )

#define	D3D11_VS_OUTPUT_REGISTER_COMPONENT_BIT_COUNT	( 32 )

#define	D3D11_VS_OUTPUT_REGISTER_COUNT	( 32 )

#define	D3D11_WHQL_CONTEXT_COUNT_FOR_RESOURCE_LIMIT	( 10 )

#define	D3D11_WHQL_DRAWINDEXED_INDEX_COUNT_2_TO_EXP	( 25 )

#define	D3D11_WHQL_DRAW_VERTEX_COUNT_2_TO_EXP	( 25 )

#endif
#define	_FACD3D11	( 0x87c )

#define	_FACD3D11DEBUG	( ( _FACD3D11 + 1 )  )

#define MAKE_D3D11_HRESULT( code )  MAKE_HRESULT( 1, _FACD3D11, code )
#define MAKE_D3D11_STATUS( code )    MAKE_HRESULT( 0, _FACD3D11, code )
//#define D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS  MAKE_D3D11_HRESULT(1)
//#define D3D11_ERROR_FILE_NOT_FOUND  MAKE_D3D11_HRESULT(2)
//#define D3D11_ERROR_TOO_MANY_UNIQUE_VIEW_OBJECTS  MAKE_D3D11_HRESULT(3)
//#define D3D11_ERROR_DEFERRED_CONTEXT_MAP_WITHOUT_INITIAL_DISCARD  MAKE_D3D11_HRESULT(4)
#if __SAL_H_FULL_VER < 140050727
#undef __in_range
#undef __in_xcount_opt
#define __in_range(x, y)
#define __in_xcount_opt(x)
#endif
#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_DEFAULT {};
extern const DECLSPEC_SELECTANY CD3D11_DEFAULT D3D11_DEFAULT;
extern "C" {
#endif
    typedef
        enum D3D11_INPUT_CLASSIFICATION
    {
        D3D11_INPUT_PER_VERTEX_DATA = 0,
        D3D11_INPUT_PER_INSTANCE_DATA = 1
    } 	D3D11_INPUT_CLASSIFICATION;

#define	D3D11_APPEND_ALIGNED_ELEMENT	( 0xffffffff )

    typedef struct D3D11_INPUT_ELEMENT_DESC
    {
        LPCSTR SemanticName;
        UINT SemanticIndex;
        DXGI_FORMAT Format;
        UINT InputSlot;
        UINT AlignedByteOffset;
        D3D11_INPUT_CLASSIFICATION InputSlotClass;
        UINT InstanceDataStepRate;
    } 	D3D11_INPUT_ELEMENT_DESC;

    typedef
        enum D3D11_FILL_MODE
    {
        D3D11_FILL_WIREFRAME = 2,
        D3D11_FILL_SOLID = 3
    } 	D3D11_FILL_MODE;

    typedef D3D_PRIMITIVE_TOPOLOGY D3D11_PRIMITIVE_TOPOLOGY;

    typedef D3D_PRIMITIVE D3D11_PRIMITIVE;

    typedef
        enum D3D11_CULL_MODE
    {
        D3D11_CULL_NONE = 1,
        D3D11_CULL_FRONT = 2,
        D3D11_CULL_BACK = 3
    } 	D3D11_CULL_MODE;

    typedef struct D3D11_SO_DECLARATION_ENTRY
    {
        UINT Stream;
        LPCSTR SemanticName;
        UINT SemanticIndex;
        BYTE StartComponent;
        BYTE ComponentCount;
        BYTE OutputSlot;
    } 	D3D11_SO_DECLARATION_ENTRY;

    typedef struct D3D11_VIEWPORT
    {
        FLOAT TopLeftX;
        FLOAT TopLeftY;
        FLOAT Width;
        FLOAT Height;
        FLOAT MinDepth;
        FLOAT MaxDepth;
    } 	D3D11_VIEWPORT;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
inline bool operator==(const D3D11_VIEWPORT& l, const D3D11_VIEWPORT& r)
{
    return l.TopLeftX == r.TopLeftX && l.TopLeftY == r.TopLeftY && l.Width == r.Width &&
        l.Height == r.Height && l.MinDepth == r.MinDepth && l.MaxDepth == r.MaxDepth;
}
inline bool operator!=(const D3D11_VIEWPORT& l, const D3D11_VIEWPORT& r)
{
    return !(l == r);
}
extern "C" {
#endif
    typedef
        enum D3D11_RESOURCE_DIMENSION
    {
        D3D11_RESOURCE_DIMENSION_UNKNOWN = 0,
        D3D11_RESOURCE_DIMENSION_BUFFER = 1,
        D3D11_RESOURCE_DIMENSION_TEXTURE1D = 2,
        D3D11_RESOURCE_DIMENSION_TEXTURE2D = 3,
        D3D11_RESOURCE_DIMENSION_TEXTURE3D = 4
    } 	D3D11_RESOURCE_DIMENSION;

    typedef D3D_SRV_DIMENSION D3D11_SRV_DIMENSION;

    typedef
        enum D3D11_DSV_DIMENSION
    {
        D3D11_DSV_DIMENSION_UNKNOWN = 0,
        D3D11_DSV_DIMENSION_TEXTURE1D = 1,
        D3D11_DSV_DIMENSION_TEXTURE1DARRAY = 2,
        D3D11_DSV_DIMENSION_TEXTURE2D = 3,
        D3D11_DSV_DIMENSION_TEXTURE2DARRAY = 4,
        D3D11_DSV_DIMENSION_TEXTURE2DMS = 5,
        D3D11_DSV_DIMENSION_TEXTURE2DMSARRAY = 6
    } 	D3D11_DSV_DIMENSION;

    typedef
        enum D3D11_RTV_DIMENSION
    {
        D3D11_RTV_DIMENSION_UNKNOWN = 0,
        D3D11_RTV_DIMENSION_BUFFER = 1,
        D3D11_RTV_DIMENSION_TEXTURE1D = 2,
        D3D11_RTV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D11_RTV_DIMENSION_TEXTURE2D = 4,
        D3D11_RTV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D11_RTV_DIMENSION_TEXTURE2DMS = 6,
        D3D11_RTV_DIMENSION_TEXTURE2DMSARRAY = 7,
        D3D11_RTV_DIMENSION_TEXTURE3D = 8
    } 	D3D11_RTV_DIMENSION;

    typedef
        enum D3D11_UAV_DIMENSION
    {
        D3D11_UAV_DIMENSION_UNKNOWN = 0,
        D3D11_UAV_DIMENSION_BUFFER = 1,
        D3D11_UAV_DIMENSION_TEXTURE1D = 2,
        D3D11_UAV_DIMENSION_TEXTURE1DARRAY = 3,
        D3D11_UAV_DIMENSION_TEXTURE2D = 4,
        D3D11_UAV_DIMENSION_TEXTURE2DARRAY = 5,
        D3D11_UAV_DIMENSION_TEXTURE3D = 8
    } 	D3D11_UAV_DIMENSION;

    typedef
        enum D3D11_USAGE
    {
        D3D11_USAGE_DEFAULT = 0,
        D3D11_USAGE_IMMUTABLE = 1,
        D3D11_USAGE_DYNAMIC = 2,
        D3D11_USAGE_STAGING = 3
    } 	D3D11_USAGE;

    typedef
        enum D3D11_BIND_FLAG
    {
        D3D11_BIND_VERTEX_BUFFER = 0x1L,
        D3D11_BIND_INDEX_BUFFER = 0x2L,
        D3D11_BIND_CONSTANT_BUFFER = 0x4L,
        D3D11_BIND_SHADER_RESOURCE = 0x8L,
        D3D11_BIND_STREAM_OUTPUT = 0x10L,
        D3D11_BIND_RENDER_TARGET = 0x20L,
        D3D11_BIND_DEPTH_STENCIL = 0x40L,
        D3D11_BIND_UNORDERED_ACCESS = 0x80L
    } 	D3D11_BIND_FLAG;

    typedef
        enum D3D11_CPU_ACCESS_FLAG
    {
        D3D11_CPU_ACCESS_WRITE = 0x10000L,
        D3D11_CPU_ACCESS_READ = 0x20000L
    } 	D3D11_CPU_ACCESS_FLAG;

    typedef
        enum D3D11_RESOURCE_MISC_FLAG
    {
        D3D11_RESOURCE_MISC_GENERATE_MIPS = 0x1L,
        D3D11_RESOURCE_MISC_SHARED = 0x2L,
        D3D11_RESOURCE_MISC_TEXTURECUBE = 0x4L,
        D3D11_RESOURCE_MISC_DRAWINDIRECT_ARGS = 0x10L,
        D3D11_RESOURCE_MISC_BUFFER_ALLOW_RAW_VIEWS = 0x20L,
        D3D11_RESOURCE_MISC_BUFFER_STRUCTURED = 0x40L,
        D3D11_RESOURCE_MISC_RESOURCE_CLAMP = 0x80L,
        D3D11_RESOURCE_MISC_SHARED_KEYEDMUTEX = 0x100L,
        D3D11_RESOURCE_MISC_GDI_COMPATIBLE = 0x200L
    } 	D3D11_RESOURCE_MISC_FLAG;

    typedef
        enum D3D11_MAP
    {
        D3D11_MAP_READ = 1,
        D3D11_MAP_WRITE = 2,
        D3D11_MAP_READ_WRITE = 3,
        D3D11_MAP_WRITE_DISCARD = 4,
        D3D11_MAP_WRITE_NO_OVERWRITE = 5
    } 	D3D11_MAP;

    typedef
        enum D3D11_MAP_FLAG
    {
        D3D11_MAP_FLAG_DO_NOT_WAIT = 0x100000L
    } 	D3D11_MAP_FLAG;

    typedef
        enum D3D11_RAISE_FLAG
    {
        D3D11_RAISE_FLAG_DRIVER_INTERNAL_ERROR = 0x1L
    } 	D3D11_RAISE_FLAG;

    typedef
        enum D3D11_CLEAR_FLAG
    {
        D3D11_CLEAR_DEPTH = 0x1L,
        D3D11_CLEAR_STENCIL = 0x2L
    } 	D3D11_CLEAR_FLAG;

    typedef RECT D3D11_RECT;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_RECT : public D3D11_RECT
{
    CD3D11_RECT()
    {}
    explicit CD3D11_RECT(const D3D11_RECT& o) :
        D3D11_RECT(o)
    {}
    explicit CD3D11_RECT(
        LONG Left,
        LONG Top,
        LONG Right,
        LONG Bottom)
    {
        left = Left;
        top = Top;
        right = Right;
        bottom = Bottom;
    }
    ~CD3D11_RECT() {}
    operator const D3D11_RECT& () const { return *this; }
};
inline bool operator==(const D3D11_RECT& l, const D3D11_RECT& r)
{
    return l.left == r.left && l.top == r.top &&
        l.right == r.right && l.bottom == r.bottom;
}
inline bool operator!=(const D3D11_RECT& l, const D3D11_RECT& r)
{
    return !(l == r);
}
extern "C" {
#endif
    typedef struct D3D11_BOX
    {
        UINT left;
        UINT top;
        UINT front;
        UINT right;
        UINT bottom;
        UINT back;
    } 	D3D11_BOX;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_BOX : public D3D11_BOX
{
    CD3D11_BOX()
    {}
    explicit CD3D11_BOX(const D3D11_BOX& o) :
        D3D11_BOX(o)
    {}
    explicit CD3D11_BOX(
        LONG Left,
        LONG Top,
        LONG Front,
        LONG Right,
        LONG Bottom,
        LONG Back)
    {
        left = Left;
        top = Top;
        front = Front;
        right = Right;
        bottom = Bottom;
        back = Back;
    }
    ~CD3D11_BOX() {}
    operator const D3D11_BOX& () const { return *this; }
};
inline bool operator==(const D3D11_BOX& l, const D3D11_BOX& r)
{
    return l.left == r.left && l.top == r.top && l.front == r.front &&
        l.right == r.right && l.bottom == r.bottom && l.back == r.back;
}
inline bool operator!=(const D3D11_BOX& l, const D3D11_BOX& r)
{
    return !(l == r);
}
extern "C" {
#endif




    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0000_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0000_v0_0_s_ifspec;

#ifndef __ID3D11DeviceChild_INTERFACE_DEFINED__
#define __ID3D11DeviceChild_INTERFACE_DEFINED__

    /* interface ID3D11DeviceChild */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11DeviceChild;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1841e5c8-16b0-489b-bcc8-44cfb0d5deae")
        ID3D11DeviceChild : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE GetDevice(
            /* [annotation] */
            __out  ID3D11Device * *ppDevice) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPrivateData(
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPrivateData(
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11DeviceChildVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11DeviceChild* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11DeviceChild* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11DeviceChild* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11DeviceChild* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11DeviceChild* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11DeviceChild* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11DeviceChild* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11DeviceChildVtbl;

    interface ID3D11DeviceChild
    {
        CONST_VTBL struct ID3D11DeviceChildVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11DeviceChild_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11DeviceChild_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11DeviceChild_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11DeviceChild_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11DeviceChild_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11DeviceChild_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11DeviceChild_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11DeviceChild_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0001 */
    /* [local] */

    typedef
        enum D3D11_COMPARISON_FUNC
    {
        D3D11_COMPARISON_NEVER = 1,
        D3D11_COMPARISON_LESS = 2,
        D3D11_COMPARISON_EQUAL = 3,
        D3D11_COMPARISON_LESS_EQUAL = 4,
        D3D11_COMPARISON_GREATER = 5,
        D3D11_COMPARISON_NOT_EQUAL = 6,
        D3D11_COMPARISON_GREATER_EQUAL = 7,
        D3D11_COMPARISON_ALWAYS = 8
    } 	D3D11_COMPARISON_FUNC;

    typedef
        enum D3D11_DEPTH_WRITE_MASK
    {
        D3D11_DEPTH_WRITE_MASK_ZERO = 0,
        D3D11_DEPTH_WRITE_MASK_ALL = 1
    } 	D3D11_DEPTH_WRITE_MASK;

    typedef
        enum D3D11_STENCIL_OP
    {
        D3D11_STENCIL_OP_KEEP = 1,
        D3D11_STENCIL_OP_ZERO = 2,
        D3D11_STENCIL_OP_REPLACE = 3,
        D3D11_STENCIL_OP_INCR_SAT = 4,
        D3D11_STENCIL_OP_DECR_SAT = 5,
        D3D11_STENCIL_OP_INVERT = 6,
        D3D11_STENCIL_OP_INCR = 7,
        D3D11_STENCIL_OP_DECR = 8
    } 	D3D11_STENCIL_OP;

    typedef struct D3D11_DEPTH_STENCILOP_DESC
    {
        D3D11_STENCIL_OP StencilFailOp;
        D3D11_STENCIL_OP StencilDepthFailOp;
        D3D11_STENCIL_OP StencilPassOp;
        D3D11_COMPARISON_FUNC StencilFunc;
    } 	D3D11_DEPTH_STENCILOP_DESC;

    typedef struct D3D11_DEPTH_STENCIL_DESC
    {
        BOOL DepthEnable;
        D3D11_DEPTH_WRITE_MASK DepthWriteMask;
        D3D11_COMPARISON_FUNC DepthFunc;
        BOOL StencilEnable;
        UINT8 StencilReadMask;
        UINT8 StencilWriteMask;
        D3D11_DEPTH_STENCILOP_DESC FrontFace;
        D3D11_DEPTH_STENCILOP_DESC BackFace;
    } 	D3D11_DEPTH_STENCIL_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_DEPTH_STENCIL_DESC : public D3D11_DEPTH_STENCIL_DESC
{
    CD3D11_DEPTH_STENCIL_DESC()
    {}
    explicit CD3D11_DEPTH_STENCIL_DESC(const D3D11_DEPTH_STENCIL_DESC& o) :
        D3D11_DEPTH_STENCIL_DESC(o)
    {}
    explicit CD3D11_DEPTH_STENCIL_DESC(CD3D11_DEFAULT)
    {
        DepthEnable = TRUE;
        DepthWriteMask = D3D11_DEPTH_WRITE_MASK_ALL;
        DepthFunc = D3D11_COMPARISON_LESS;
        StencilEnable = FALSE;
        StencilReadMask = D3D11_DEFAULT_STENCIL_READ_MASK;
        StencilWriteMask = D3D11_DEFAULT_STENCIL_WRITE_MASK;
        const D3D11_DEPTH_STENCILOP_DESC defaultStencilOp =
        { D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_STENCIL_OP_KEEP, D3D11_COMPARISON_ALWAYS };
        FrontFace = defaultStencilOp;
        BackFace = defaultStencilOp;
    }
    explicit CD3D11_DEPTH_STENCIL_DESC(
        BOOL depthEnable,
        D3D11_DEPTH_WRITE_MASK depthWriteMask,
        D3D11_COMPARISON_FUNC depthFunc,
        BOOL stencilEnable,
        UINT8 stencilReadMask,
        UINT8 stencilWriteMask,
        D3D11_STENCIL_OP frontStencilFailOp,
        D3D11_STENCIL_OP frontStencilDepthFailOp,
        D3D11_STENCIL_OP frontStencilPassOp,
        D3D11_COMPARISON_FUNC frontStencilFunc,
        D3D11_STENCIL_OP backStencilFailOp,
        D3D11_STENCIL_OP backStencilDepthFailOp,
        D3D11_STENCIL_OP backStencilPassOp,
        D3D11_COMPARISON_FUNC backStencilFunc)
    {
        DepthEnable = depthEnable;
        DepthWriteMask = depthWriteMask;
        DepthFunc = depthFunc;
        StencilEnable = stencilEnable;
        StencilReadMask = stencilReadMask;
        StencilWriteMask = stencilWriteMask;
        FrontFace.StencilFailOp = frontStencilFailOp;
        FrontFace.StencilDepthFailOp = frontStencilDepthFailOp;
        FrontFace.StencilPassOp = frontStencilPassOp;
        FrontFace.StencilFunc = frontStencilFunc;
        BackFace.StencilFailOp = backStencilFailOp;
        BackFace.StencilDepthFailOp = backStencilDepthFailOp;
        BackFace.StencilPassOp = backStencilPassOp;
        BackFace.StencilFunc = backStencilFunc;
    }
    ~CD3D11_DEPTH_STENCIL_DESC() {}
    operator const D3D11_DEPTH_STENCIL_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0001_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0001_v0_0_s_ifspec;

#ifndef __ID3D11DepthStencilState_INTERFACE_DEFINED__
#define __ID3D11DepthStencilState_INTERFACE_DEFINED__

    /* interface ID3D11DepthStencilState */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11DepthStencilState;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("03823efb-8d8f-4e1c-9aa2-f64bb2cbfdf1")
        ID3D11DepthStencilState : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_DEPTH_STENCIL_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11DepthStencilStateVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11DepthStencilState* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11DepthStencilState* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11DepthStencilState* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11DepthStencilState* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11DepthStencilState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11DepthStencilState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11DepthStencilState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11DepthStencilState* This,
            /* [annotation] */
            __out  D3D11_DEPTH_STENCIL_DESC* pDesc);

        END_INTERFACE
    } ID3D11DepthStencilStateVtbl;

    interface ID3D11DepthStencilState
    {
        CONST_VTBL struct ID3D11DepthStencilStateVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11DepthStencilState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11DepthStencilState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11DepthStencilState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11DepthStencilState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11DepthStencilState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11DepthStencilState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11DepthStencilState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11DepthStencilState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11DepthStencilState_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0002 */
    /* [local] */

    typedef
        enum D3D11_BLEND
    {
        D3D11_BLEND_ZERO = 1,
        D3D11_BLEND_ONE = 2,
        D3D11_BLEND_SRC_COLOR = 3,
        D3D11_BLEND_INV_SRC_COLOR = 4,
        D3D11_BLEND_SRC_ALPHA = 5,
        D3D11_BLEND_INV_SRC_ALPHA = 6,
        D3D11_BLEND_DEST_ALPHA = 7,
        D3D11_BLEND_INV_DEST_ALPHA = 8,
        D3D11_BLEND_DEST_COLOR = 9,
        D3D11_BLEND_INV_DEST_COLOR = 10,
        D3D11_BLEND_SRC_ALPHA_SAT = 11,
        D3D11_BLEND_BLEND_FACTOR = 14,
        D3D11_BLEND_INV_BLEND_FACTOR = 15,
        D3D11_BLEND_SRC1_COLOR = 16,
        D3D11_BLEND_INV_SRC1_COLOR = 17,
        D3D11_BLEND_SRC1_ALPHA = 18,
        D3D11_BLEND_INV_SRC1_ALPHA = 19
    } 	D3D11_BLEND;

    typedef
        enum D3D11_BLEND_OP
    {
        D3D11_BLEND_OP_ADD = 1,
        D3D11_BLEND_OP_SUBTRACT = 2,
        D3D11_BLEND_OP_REV_SUBTRACT = 3,
        D3D11_BLEND_OP_MIN = 4,
        D3D11_BLEND_OP_MAX = 5
    } 	D3D11_BLEND_OP;

    typedef
        enum D3D11_COLOR_WRITE_ENABLE
    {
        D3D11_COLOR_WRITE_ENABLE_RED = 1,
        D3D11_COLOR_WRITE_ENABLE_GREEN = 2,
        D3D11_COLOR_WRITE_ENABLE_BLUE = 4,
        D3D11_COLOR_WRITE_ENABLE_ALPHA = 8,
        D3D11_COLOR_WRITE_ENABLE_ALL = (((D3D11_COLOR_WRITE_ENABLE_RED | D3D11_COLOR_WRITE_ENABLE_GREEN) | D3D11_COLOR_WRITE_ENABLE_BLUE) | D3D11_COLOR_WRITE_ENABLE_ALPHA)
    } 	D3D11_COLOR_WRITE_ENABLE;

    typedef struct D3D11_RENDER_TARGET_BLEND_DESC
    {
        BOOL BlendEnable;
        D3D11_BLEND SrcBlend;
        D3D11_BLEND DestBlend;
        D3D11_BLEND_OP BlendOp;
        D3D11_BLEND SrcBlendAlpha;
        D3D11_BLEND DestBlendAlpha;
        D3D11_BLEND_OP BlendOpAlpha;
        UINT8 RenderTargetWriteMask;
    } 	D3D11_RENDER_TARGET_BLEND_DESC;

    typedef struct D3D11_BLEND_DESC
    {
        BOOL AlphaToCoverageEnable;
        BOOL IndependentBlendEnable;
        D3D11_RENDER_TARGET_BLEND_DESC RenderTarget[8];
    } 	D3D11_BLEND_DESC;

    /* Note, the array size for RenderTarget[] above is D3D11_SIMULTANEOUS_RENDERTARGET_COUNT.
       IDL processing/generation of this header replaces the define; this comment is merely explaining what happened. */
#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_BLEND_DESC : public D3D11_BLEND_DESC
{
    CD3D11_BLEND_DESC()
    {}
    explicit CD3D11_BLEND_DESC(const D3D11_BLEND_DESC& o) :
        D3D11_BLEND_DESC(o)
    {}
    explicit CD3D11_BLEND_DESC(CD3D11_DEFAULT)
    {
        AlphaToCoverageEnable = FALSE;
        IndependentBlendEnable = FALSE;
        const D3D11_RENDER_TARGET_BLEND_DESC defaultRenderTargetBlendDesc =
        {
            FALSE,
            D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD,
            D3D11_BLEND_ONE, D3D11_BLEND_ZERO, D3D11_BLEND_OP_ADD,
            D3D11_COLOR_WRITE_ENABLE_ALL,
        };
        for (UINT i = 0; i < D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT; ++i)
            RenderTarget[i] = defaultRenderTargetBlendDesc;
    }
    ~CD3D11_BLEND_DESC() {}
    operator const D3D11_BLEND_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0002_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0002_v0_0_s_ifspec;

#ifndef __ID3D11BlendState_INTERFACE_DEFINED__
#define __ID3D11BlendState_INTERFACE_DEFINED__

    /* interface ID3D11BlendState */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11BlendState;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("75b68faa-347d-4159-8f45-a0640f01cd9a")
        ID3D11BlendState : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_BLEND_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11BlendStateVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11BlendState* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11BlendState* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11BlendState* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11BlendState* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11BlendState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11BlendState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11BlendState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11BlendState* This,
            /* [annotation] */
            __out  D3D11_BLEND_DESC* pDesc);

        END_INTERFACE
    } ID3D11BlendStateVtbl;

    interface ID3D11BlendState
    {
        CONST_VTBL struct ID3D11BlendStateVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11BlendState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11BlendState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11BlendState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11BlendState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11BlendState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11BlendState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11BlendState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11BlendState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11BlendState_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0003 */
    /* [local] */

    typedef struct D3D11_RASTERIZER_DESC
    {
        D3D11_FILL_MODE FillMode;
        D3D11_CULL_MODE CullMode;
        BOOL FrontCounterClockwise;
        INT DepthBias;
        FLOAT DepthBiasClamp;
        FLOAT SlopeScaledDepthBias;
        BOOL DepthClipEnable;
        BOOL ScissorEnable;
        BOOL MultisampleEnable;
        BOOL AntialiasedLineEnable;
    } 	D3D11_RASTERIZER_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_RASTERIZER_DESC : public D3D11_RASTERIZER_DESC
{
    CD3D11_RASTERIZER_DESC()
    {}
    explicit CD3D11_RASTERIZER_DESC(const D3D11_RASTERIZER_DESC& o) :
        D3D11_RASTERIZER_DESC(o)
    {}
    explicit CD3D11_RASTERIZER_DESC(CD3D11_DEFAULT)
    {
        FillMode = D3D11_FILL_SOLID;
        CullMode = D3D11_CULL_BACK;
        FrontCounterClockwise = FALSE;
        DepthBias = D3D11_DEFAULT_DEPTH_BIAS;
        DepthBiasClamp = D3D11_DEFAULT_DEPTH_BIAS_CLAMP;
        SlopeScaledDepthBias = D3D11_DEFAULT_SLOPE_SCALED_DEPTH_BIAS;
        DepthClipEnable = TRUE;
        ScissorEnable = FALSE;
        MultisampleEnable = FALSE;
        AntialiasedLineEnable = FALSE;
    }
    explicit CD3D11_RASTERIZER_DESC(
        D3D11_FILL_MODE fillMode,
        D3D11_CULL_MODE cullMode,
        BOOL frontCounterClockwise,
        INT depthBias,
        FLOAT depthBiasClamp,
        FLOAT slopeScaledDepthBias,
        BOOL depthClipEnable,
        BOOL scissorEnable,
        BOOL multisampleEnable,
        BOOL antialiasedLineEnable)
    {
        FillMode = fillMode;
        CullMode = cullMode;
        FrontCounterClockwise = frontCounterClockwise;
        DepthBias = depthBias;
        DepthBiasClamp = depthBiasClamp;
        SlopeScaledDepthBias = slopeScaledDepthBias;
        DepthClipEnable = depthClipEnable;
        ScissorEnable = scissorEnable;
        MultisampleEnable = multisampleEnable;
        AntialiasedLineEnable = antialiasedLineEnable;
    }
    ~CD3D11_RASTERIZER_DESC() {}
    operator const D3D11_RASTERIZER_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0003_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0003_v0_0_s_ifspec;

#ifndef __ID3D11RasterizerState_INTERFACE_DEFINED__
#define __ID3D11RasterizerState_INTERFACE_DEFINED__

    /* interface ID3D11RasterizerState */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11RasterizerState;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9bb4ab81-ab1a-4d8f-b506-fc04200b6ee7")
        ID3D11RasterizerState : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_RASTERIZER_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11RasterizerStateVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11RasterizerState* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11RasterizerState* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11RasterizerState* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11RasterizerState* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11RasterizerState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11RasterizerState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11RasterizerState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11RasterizerState* This,
            /* [annotation] */
            __out  D3D11_RASTERIZER_DESC* pDesc);

        END_INTERFACE
    } ID3D11RasterizerStateVtbl;

    interface ID3D11RasterizerState
    {
        CONST_VTBL struct ID3D11RasterizerStateVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11RasterizerState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11RasterizerState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11RasterizerState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11RasterizerState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11RasterizerState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11RasterizerState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11RasterizerState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11RasterizerState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11RasterizerState_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0004 */
    /* [local] */

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
inline UINT D3D11CalcSubresource(UINT MipSlice, UINT ArraySlice, UINT MipLevels)
{
    return MipSlice + ArraySlice * MipLevels;
}
extern "C" {
#endif
    typedef struct D3D11_SUBRESOURCE_DATA
    {
        const void* pSysMem;
        UINT SysMemPitch;
        UINT SysMemSlicePitch;
    } 	D3D11_SUBRESOURCE_DATA;

    typedef struct D3D11_MAPPED_SUBRESOURCE
    {
        void* pData;
        UINT RowPitch;
        UINT DepthPitch;
    } 	D3D11_MAPPED_SUBRESOURCE;



    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0004_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0004_v0_0_s_ifspec;

#ifndef __ID3D11Resource_INTERFACE_DEFINED__
#define __ID3D11Resource_INTERFACE_DEFINED__

    /* interface ID3D11Resource */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Resource;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("dc8e63f3-d12b-4952-b47b-5e45026a862d")
        ID3D11Resource : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE GetType(
            /* [annotation] */
            __out  D3D11_RESOURCE_DIMENSION * pResourceDimension) = 0;

        virtual void STDMETHODCALLTYPE SetEvictionPriority(
            /* [annotation] */
            __in  UINT EvictionPriority) = 0;

        virtual UINT STDMETHODCALLTYPE GetEvictionPriority(void) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11ResourceVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Resource* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Resource* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Resource* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Resource* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Resource* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Resource* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Resource* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetType)(
            ID3D11Resource* This,
            /* [annotation] */
            __out  D3D11_RESOURCE_DIMENSION* pResourceDimension);

        void (STDMETHODCALLTYPE* SetEvictionPriority)(
            ID3D11Resource* This,
            /* [annotation] */
            __in  UINT EvictionPriority);

        UINT(STDMETHODCALLTYPE* GetEvictionPriority)(
            ID3D11Resource* This);

        END_INTERFACE
    } ID3D11ResourceVtbl;

    interface ID3D11Resource
    {
        CONST_VTBL struct ID3D11ResourceVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Resource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Resource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Resource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Resource_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Resource_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Resource_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Resource_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Resource_GetType(This,pResourceDimension)	\
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) ) 

#define ID3D11Resource_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) ) 

#define ID3D11Resource_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Resource_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0005 */
    /* [local] */

    typedef struct D3D11_BUFFER_DESC
    {
        UINT ByteWidth;
        D3D11_USAGE Usage;
        UINT BindFlags;
        UINT CPUAccessFlags;
        UINT MiscFlags;
        UINT StructureByteStride;
    } 	D3D11_BUFFER_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_BUFFER_DESC : public D3D11_BUFFER_DESC
{
    CD3D11_BUFFER_DESC()
    {}
    explicit CD3D11_BUFFER_DESC(const D3D11_BUFFER_DESC& o) :
        D3D11_BUFFER_DESC(o)
    {}
    explicit CD3D11_BUFFER_DESC(
        UINT byteWidth,
        UINT bindFlags,
        D3D11_USAGE usage = D3D11_USAGE_DEFAULT,
        UINT cpuaccessFlags = 0,
        UINT miscFlags = 0,
        UINT structureByteStride = 0)
    {
        ByteWidth = byteWidth;
        Usage = usage;
        BindFlags = bindFlags;
        CPUAccessFlags = cpuaccessFlags;
        MiscFlags = miscFlags;
        StructureByteStride = structureByteStride;
    }
    ~CD3D11_BUFFER_DESC() {}
    operator const D3D11_BUFFER_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0005_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0005_v0_0_s_ifspec;

#ifndef __ID3D11Buffer_INTERFACE_DEFINED__
#define __ID3D11Buffer_INTERFACE_DEFINED__

    /* interface ID3D11Buffer */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Buffer;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("48570b85-d1ee-4fcd-a250-eb350722b037")
        ID3D11Buffer : public ID3D11Resource
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_BUFFER_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11BufferVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Buffer* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Buffer* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Buffer* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Buffer* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Buffer* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Buffer* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Buffer* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetType)(
            ID3D11Buffer* This,
            /* [annotation] */
            __out  D3D11_RESOURCE_DIMENSION* pResourceDimension);

        void (STDMETHODCALLTYPE* SetEvictionPriority)(
            ID3D11Buffer* This,
            /* [annotation] */
            __in  UINT EvictionPriority);

        UINT(STDMETHODCALLTYPE* GetEvictionPriority)(
            ID3D11Buffer* This);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11Buffer* This,
            /* [annotation] */
            __out  D3D11_BUFFER_DESC* pDesc);

        END_INTERFACE
    } ID3D11BufferVtbl;

    interface ID3D11Buffer
    {
        CONST_VTBL struct ID3D11BufferVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Buffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Buffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Buffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Buffer_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Buffer_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Buffer_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Buffer_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Buffer_GetType(This,pResourceDimension)	\
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) ) 

#define ID3D11Buffer_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) ) 

#define ID3D11Buffer_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) ) 


#define ID3D11Buffer_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Buffer_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0006 */
    /* [local] */

    typedef struct D3D11_TEXTURE1D_DESC
    {
        UINT Width;
        UINT MipLevels;
        UINT ArraySize;
        DXGI_FORMAT Format;
        D3D11_USAGE Usage;
        UINT BindFlags;
        UINT CPUAccessFlags;
        UINT MiscFlags;
    } 	D3D11_TEXTURE1D_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_TEXTURE1D_DESC : public D3D11_TEXTURE1D_DESC
{
    CD3D11_TEXTURE1D_DESC()
    {}
    explicit CD3D11_TEXTURE1D_DESC(const D3D11_TEXTURE1D_DESC& o) :
        D3D11_TEXTURE1D_DESC(o)
    {}
    explicit CD3D11_TEXTURE1D_DESC(
        DXGI_FORMAT format,
        UINT width,
        UINT arraySize = 1,
        UINT mipLevels = 0,
        UINT bindFlags = D3D11_BIND_SHADER_RESOURCE,
        D3D11_USAGE usage = D3D11_USAGE_DEFAULT,
        UINT cpuaccessFlags = 0,
        UINT miscFlags = 0)
    {
        Width = width;
        MipLevels = mipLevels;
        ArraySize = arraySize;
        Format = format;
        Usage = usage;
        BindFlags = bindFlags;
        CPUAccessFlags = cpuaccessFlags;
        MiscFlags = miscFlags;
    }
    ~CD3D11_TEXTURE1D_DESC() {}
    operator const D3D11_TEXTURE1D_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0006_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0006_v0_0_s_ifspec;

#ifndef __ID3D11Texture1D_INTERFACE_DEFINED__
#define __ID3D11Texture1D_INTERFACE_DEFINED__

    /* interface ID3D11Texture1D */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Texture1D;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("f8fb5c27-c6b3-4f75-a4c8-439af2ef564c")
        ID3D11Texture1D : public ID3D11Resource
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_TEXTURE1D_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11Texture1DVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Texture1D* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Texture1D* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Texture1D* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Texture1D* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Texture1D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Texture1D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Texture1D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetType)(
            ID3D11Texture1D* This,
            /* [annotation] */
            __out  D3D11_RESOURCE_DIMENSION* pResourceDimension);

        void (STDMETHODCALLTYPE* SetEvictionPriority)(
            ID3D11Texture1D* This,
            /* [annotation] */
            __in  UINT EvictionPriority);

        UINT(STDMETHODCALLTYPE* GetEvictionPriority)(
            ID3D11Texture1D* This);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11Texture1D* This,
            /* [annotation] */
            __out  D3D11_TEXTURE1D_DESC* pDesc);

        END_INTERFACE
    } ID3D11Texture1DVtbl;

    interface ID3D11Texture1D
    {
        CONST_VTBL struct ID3D11Texture1DVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Texture1D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Texture1D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Texture1D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Texture1D_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Texture1D_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Texture1D_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Texture1D_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Texture1D_GetType(This,pResourceDimension)	\
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) ) 

#define ID3D11Texture1D_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) ) 

#define ID3D11Texture1D_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) ) 


#define ID3D11Texture1D_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Texture1D_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0007 */
    /* [local] */

    typedef struct D3D11_TEXTURE2D_DESC
    {
        UINT Width;
        UINT Height;
        UINT MipLevels;
        UINT ArraySize;
        DXGI_FORMAT Format;
        DXGI_SAMPLE_DESC SampleDesc;
        D3D11_USAGE Usage;
        UINT BindFlags;
        UINT CPUAccessFlags;
        UINT MiscFlags;
    } 	D3D11_TEXTURE2D_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_TEXTURE2D_DESC : public D3D11_TEXTURE2D_DESC
{
    CD3D11_TEXTURE2D_DESC()
    {}
    explicit CD3D11_TEXTURE2D_DESC(const D3D11_TEXTURE2D_DESC& o) :
        D3D11_TEXTURE2D_DESC(o)
    {}
    explicit CD3D11_TEXTURE2D_DESC(
        DXGI_FORMAT format,
        UINT width,
        UINT height,
        UINT arraySize = 1,
        UINT mipLevels = 0,
        UINT bindFlags = D3D11_BIND_SHADER_RESOURCE,
        D3D11_USAGE usage = D3D11_USAGE_DEFAULT,
        UINT cpuaccessFlags = 0,
        UINT sampleCount = 1,
        UINT sampleQuality = 0,
        UINT miscFlags = 0)
    {
        Width = width;
        Height = height;
        MipLevels = mipLevels;
        ArraySize = arraySize;
        Format = format;
        SampleDesc.Count = sampleCount;
        SampleDesc.Quality = sampleQuality;
        Usage = usage;
        BindFlags = bindFlags;
        CPUAccessFlags = cpuaccessFlags;
        MiscFlags = miscFlags;
    }
    ~CD3D11_TEXTURE2D_DESC() {}
    operator const D3D11_TEXTURE2D_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0007_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0007_v0_0_s_ifspec;

#ifndef __ID3D11Texture2D_INTERFACE_DEFINED__
#define __ID3D11Texture2D_INTERFACE_DEFINED__

    /* interface ID3D11Texture2D */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Texture2D;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6f15aaf2-d208-4e89-9ab4-489535d34f9c")
        ID3D11Texture2D : public ID3D11Resource
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_TEXTURE2D_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11Texture2DVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Texture2D* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Texture2D* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Texture2D* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Texture2D* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Texture2D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Texture2D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Texture2D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetType)(
            ID3D11Texture2D* This,
            /* [annotation] */
            __out  D3D11_RESOURCE_DIMENSION* pResourceDimension);

        void (STDMETHODCALLTYPE* SetEvictionPriority)(
            ID3D11Texture2D* This,
            /* [annotation] */
            __in  UINT EvictionPriority);

        UINT(STDMETHODCALLTYPE* GetEvictionPriority)(
            ID3D11Texture2D* This);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11Texture2D* This,
            /* [annotation] */
            __out  D3D11_TEXTURE2D_DESC* pDesc);

        END_INTERFACE
    } ID3D11Texture2DVtbl;

    interface ID3D11Texture2D
    {
        CONST_VTBL struct ID3D11Texture2DVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Texture2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Texture2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Texture2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Texture2D_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Texture2D_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Texture2D_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Texture2D_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Texture2D_GetType(This,pResourceDimension)	\
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) ) 

#define ID3D11Texture2D_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) ) 

#define ID3D11Texture2D_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) ) 


#define ID3D11Texture2D_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Texture2D_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0008 */
    /* [local] */

    typedef struct D3D11_TEXTURE3D_DESC
    {
        UINT Width;
        UINT Height;
        UINT Depth;
        UINT MipLevels;
        DXGI_FORMAT Format;
        D3D11_USAGE Usage;
        UINT BindFlags;
        UINT CPUAccessFlags;
        UINT MiscFlags;
    } 	D3D11_TEXTURE3D_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_TEXTURE3D_DESC : public D3D11_TEXTURE3D_DESC
{
    CD3D11_TEXTURE3D_DESC()
    {}
    explicit CD3D11_TEXTURE3D_DESC(const D3D11_TEXTURE3D_DESC& o) :
        D3D11_TEXTURE3D_DESC(o)
    {}
    explicit CD3D11_TEXTURE3D_DESC(
        DXGI_FORMAT format,
        UINT width,
        UINT height,
        UINT depth,
        UINT mipLevels = 0,
        UINT bindFlags = D3D11_BIND_SHADER_RESOURCE,
        D3D11_USAGE usage = D3D11_USAGE_DEFAULT,
        UINT cpuaccessFlags = 0,
        UINT miscFlags = 0)
    {
        Width = width;
        Height = height;
        Depth = depth;
        MipLevels = mipLevels;
        Format = format;
        Usage = usage;
        BindFlags = bindFlags;
        CPUAccessFlags = cpuaccessFlags;
        MiscFlags = miscFlags;
    }
    ~CD3D11_TEXTURE3D_DESC() {}
    operator const D3D11_TEXTURE3D_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0008_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0008_v0_0_s_ifspec;

#ifndef __ID3D11Texture3D_INTERFACE_DEFINED__
#define __ID3D11Texture3D_INTERFACE_DEFINED__

    /* interface ID3D11Texture3D */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Texture3D;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("037e866e-f56d-4357-a8af-9dabbe6e250e")
        ID3D11Texture3D : public ID3D11Resource
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_TEXTURE3D_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11Texture3DVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Texture3D* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Texture3D* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Texture3D* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Texture3D* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Texture3D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Texture3D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Texture3D* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetType)(
            ID3D11Texture3D* This,
            /* [annotation] */
            __out  D3D11_RESOURCE_DIMENSION* pResourceDimension);

        void (STDMETHODCALLTYPE* SetEvictionPriority)(
            ID3D11Texture3D* This,
            /* [annotation] */
            __in  UINT EvictionPriority);

        UINT(STDMETHODCALLTYPE* GetEvictionPriority)(
            ID3D11Texture3D* This);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11Texture3D* This,
            /* [annotation] */
            __out  D3D11_TEXTURE3D_DESC* pDesc);

        END_INTERFACE
    } ID3D11Texture3DVtbl;

    interface ID3D11Texture3D
    {
        CONST_VTBL struct ID3D11Texture3DVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Texture3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Texture3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Texture3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Texture3D_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Texture3D_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Texture3D_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Texture3D_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Texture3D_GetType(This,pResourceDimension)	\
    ( (This)->lpVtbl -> GetType(This,pResourceDimension) ) 

#define ID3D11Texture3D_SetEvictionPriority(This,EvictionPriority)	\
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) ) 

#define ID3D11Texture3D_GetEvictionPriority(This)	\
    ( (This)->lpVtbl -> GetEvictionPriority(This) ) 


#define ID3D11Texture3D_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Texture3D_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0009 */
    /* [local] */

    typedef
        enum D3D11_TEXTURECUBE_FACE
    {
        D3D11_TEXTURECUBE_FACE_POSITIVE_X = 0,
        D3D11_TEXTURECUBE_FACE_NEGATIVE_X = 1,
        D3D11_TEXTURECUBE_FACE_POSITIVE_Y = 2,
        D3D11_TEXTURECUBE_FACE_NEGATIVE_Y = 3,
        D3D11_TEXTURECUBE_FACE_POSITIVE_Z = 4,
        D3D11_TEXTURECUBE_FACE_NEGATIVE_Z = 5
    } 	D3D11_TEXTURECUBE_FACE;



    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0009_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0009_v0_0_s_ifspec;

#ifndef __ID3D11View_INTERFACE_DEFINED__
#define __ID3D11View_INTERFACE_DEFINED__

    /* interface ID3D11View */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11View;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("839d1216-bb2e-412b-b7f4-a9dbebe08ed1")
        ID3D11View : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE GetResource(
            /* [annotation] */
            __out  ID3D11Resource * *ppResource) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11ViewVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11View* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11View* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11View* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11View* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11View* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11View* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11View* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetResource)(
            ID3D11View* This,
            /* [annotation] */
            __out  ID3D11Resource** ppResource);

        END_INTERFACE
    } ID3D11ViewVtbl;

    interface ID3D11View
    {
        CONST_VTBL struct ID3D11ViewVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11View_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11View_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11View_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11View_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11View_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11View_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11View_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11View_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11View_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0010 */
    /* [local] */

    typedef struct D3D11_BUFFER_SRV
    {
        union
        {
            UINT FirstElement;
            UINT ElementOffset;
        };
        union
        {
            UINT NumElements;
            UINT ElementWidth;
        };
    } 	D3D11_BUFFER_SRV;

    typedef
        enum D3D11_BUFFEREX_SRV_FLAG
    {
        D3D11_BUFFEREX_SRV_FLAG_RAW = 0x1
    } 	D3D11_BUFFEREX_SRV_FLAG;

    typedef struct D3D11_BUFFEREX_SRV
    {
        UINT FirstElement;
        UINT NumElements;
        UINT Flags;
    } 	D3D11_BUFFEREX_SRV;

    typedef struct D3D11_TEX1D_SRV
    {
        UINT MostDetailedMip;
        UINT MipLevels;
    } 	D3D11_TEX1D_SRV;

    typedef struct D3D11_TEX1D_ARRAY_SRV
    {
        UINT MostDetailedMip;
        UINT MipLevels;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX1D_ARRAY_SRV;

    typedef struct D3D11_TEX2D_SRV
    {
        UINT MostDetailedMip;
        UINT MipLevels;
    } 	D3D11_TEX2D_SRV;

    typedef struct D3D11_TEX2D_ARRAY_SRV
    {
        UINT MostDetailedMip;
        UINT MipLevels;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX2D_ARRAY_SRV;

    typedef struct D3D11_TEX3D_SRV
    {
        UINT MostDetailedMip;
        UINT MipLevels;
    } 	D3D11_TEX3D_SRV;

    typedef struct D3D11_TEXCUBE_SRV
    {
        UINT MostDetailedMip;
        UINT MipLevels;
    } 	D3D11_TEXCUBE_SRV;

    typedef struct D3D11_TEXCUBE_ARRAY_SRV
    {
        UINT MostDetailedMip;
        UINT MipLevels;
        UINT First2DArrayFace;
        UINT NumCubes;
    } 	D3D11_TEXCUBE_ARRAY_SRV;

    typedef struct D3D11_TEX2DMS_SRV
    {
        UINT UnusedField_NothingToDefine;
    } 	D3D11_TEX2DMS_SRV;

    typedef struct D3D11_TEX2DMS_ARRAY_SRV
    {
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX2DMS_ARRAY_SRV;

    typedef struct D3D11_SHADER_RESOURCE_VIEW_DESC
    {
        DXGI_FORMAT Format;
        D3D11_SRV_DIMENSION ViewDimension;
        union
        {
            D3D11_BUFFER_SRV Buffer;
            D3D11_TEX1D_SRV Texture1D;
            D3D11_TEX1D_ARRAY_SRV Texture1DArray;
            D3D11_TEX2D_SRV Texture2D;
            D3D11_TEX2D_ARRAY_SRV Texture2DArray;
            D3D11_TEX2DMS_SRV Texture2DMS;
            D3D11_TEX2DMS_ARRAY_SRV Texture2DMSArray;
            D3D11_TEX3D_SRV Texture3D;
            D3D11_TEXCUBE_SRV TextureCube;
            D3D11_TEXCUBE_ARRAY_SRV TextureCubeArray;
            D3D11_BUFFEREX_SRV BufferEx;
        };
    } 	D3D11_SHADER_RESOURCE_VIEW_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_SHADER_RESOURCE_VIEW_DESC : public D3D11_SHADER_RESOURCE_VIEW_DESC
{
    CD3D11_SHADER_RESOURCE_VIEW_DESC()
    {}
    explicit CD3D11_SHADER_RESOURCE_VIEW_DESC(const D3D11_SHADER_RESOURCE_VIEW_DESC& o) :
        D3D11_SHADER_RESOURCE_VIEW_DESC(o)
    {}
    explicit CD3D11_SHADER_RESOURCE_VIEW_DESC(
        D3D11_SRV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mostDetailedMip = 0, // FirstElement for BUFFER
        UINT mipLevels = -1, // NumElements for BUFFER
        UINT firstArraySlice = 0, // First2DArrayFace for TEXTURECUBEARRAY
        UINT arraySize = -1, // NumCubes for TEXTURECUBEARRAY
        UINT flags = 0) // BUFFEREX only
    {
        Format = format;
        ViewDimension = viewDimension;
        switch (viewDimension)
        {
        case D3D11_SRV_DIMENSION_BUFFER:
            Buffer.FirstElement = mostDetailedMip;
            Buffer.NumElements = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE1D:
            Texture1D.MostDetailedMip = mostDetailedMip;
            Texture1D.MipLevels = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MostDetailedMip = mostDetailedMip;
            Texture1DArray.MipLevels = mipLevels;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE2D:
            Texture2D.MostDetailedMip = mostDetailedMip;
            Texture2D.MipLevels = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MostDetailedMip = mostDetailedMip;
            Texture2DArray.MipLevels = mipLevels;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D11_SRV_DIMENSION_TEXTURE2DMSARRAY:
            Texture2DMSArray.FirstArraySlice = firstArraySlice;
            Texture2DMSArray.ArraySize = arraySize;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE3D:
            Texture3D.MostDetailedMip = mostDetailedMip;
            Texture3D.MipLevels = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURECUBE:
            TextureCube.MostDetailedMip = mostDetailedMip;
            TextureCube.MipLevels = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURECUBEARRAY:
            TextureCubeArray.MostDetailedMip = mostDetailedMip;
            TextureCubeArray.MipLevels = mipLevels;
            TextureCubeArray.First2DArrayFace = firstArraySlice;
            TextureCubeArray.NumCubes = arraySize;
            break;
        case D3D11_SRV_DIMENSION_BUFFEREX:
            BufferEx.FirstElement = mostDetailedMip;
            BufferEx.NumElements = mipLevels;
            BufferEx.Flags = flags;
            break;
        default: break;
        }
    }
    explicit CD3D11_SHADER_RESOURCE_VIEW_DESC(
        __in ID3D11Buffer*,
        DXGI_FORMAT format,
        UINT firstElement,
        UINT numElements,
        UINT flags = 0)
    {
        Format = format;
        ViewDimension = D3D11_SRV_DIMENSION_BUFFEREX;
        BufferEx.FirstElement = firstElement;
        BufferEx.NumElements = numElements;
        BufferEx.Flags = flags;
    }
    explicit CD3D11_SHADER_RESOURCE_VIEW_DESC(
        __in ID3D11Texture1D* pTex1D,
        D3D11_SRV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mostDetailedMip = 0,
        UINT mipLevels = -1,
        UINT firstArraySlice = 0,
        UINT arraySize = -1)
    {
        ViewDimension = viewDimension;
        if (DXGI_FORMAT_UNKNOWN == format || -1 == mipLevels ||
            (-1 == arraySize && D3D11_SRV_DIMENSION_TEXTURE1DARRAY == viewDimension))
        {
            D3D11_TEXTURE1D_DESC TexDesc;
            pTex1D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == mipLevels) mipLevels = TexDesc.MipLevels - mostDetailedMip;
            if (-1 == arraySize) arraySize = TexDesc.ArraySize - firstArraySlice;
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_SRV_DIMENSION_TEXTURE1D:
            Texture1D.MostDetailedMip = mostDetailedMip;
            Texture1D.MipLevels = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MostDetailedMip = mostDetailedMip;
            Texture1DArray.MipLevels = mipLevels;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_SHADER_RESOURCE_VIEW_DESC(
        __in ID3D11Texture2D* pTex2D,
        D3D11_SRV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mostDetailedMip = 0,
        UINT mipLevels = -1,
        UINT firstArraySlice = 0, // First2DArrayFace for TEXTURECUBEARRAY
        UINT arraySize = -1) // NumCubes for TEXTURECUBEARRAY
    {
        ViewDimension = viewDimension;
        if (DXGI_FORMAT_UNKNOWN == format ||
            (-1 == mipLevels &&
                D3D11_SRV_DIMENSION_TEXTURE2DMS != viewDimension &&
                D3D11_SRV_DIMENSION_TEXTURE2DMSARRAY != viewDimension) ||
            (-1 == arraySize &&
                (D3D11_SRV_DIMENSION_TEXTURE2DARRAY == viewDimension ||
                    D3D11_SRV_DIMENSION_TEXTURE2DMSARRAY == viewDimension ||
                    D3D11_SRV_DIMENSION_TEXTURECUBEARRAY == viewDimension)))
        {
            D3D11_TEXTURE2D_DESC TexDesc;
            pTex2D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == mipLevels) mipLevels = TexDesc.MipLevels - mostDetailedMip;
            if (-1 == arraySize)
            {
                arraySize = TexDesc.ArraySize - firstArraySlice;
                if (D3D11_SRV_DIMENSION_TEXTURECUBEARRAY == viewDimension) arraySize /= 6;
            }
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_SRV_DIMENSION_TEXTURE2D:
            Texture2D.MostDetailedMip = mostDetailedMip;
            Texture2D.MipLevels = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MostDetailedMip = mostDetailedMip;
            Texture2DArray.MipLevels = mipLevels;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        case D3D11_SRV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D11_SRV_DIMENSION_TEXTURE2DMSARRAY:
            Texture2DMSArray.FirstArraySlice = firstArraySlice;
            Texture2DMSArray.ArraySize = arraySize;
            break;
        case D3D11_SRV_DIMENSION_TEXTURECUBE:
            TextureCube.MostDetailedMip = mostDetailedMip;
            TextureCube.MipLevels = mipLevels;
            break;
        case D3D11_SRV_DIMENSION_TEXTURECUBEARRAY:
            TextureCubeArray.MostDetailedMip = mostDetailedMip;
            TextureCubeArray.MipLevels = mipLevels;
            TextureCubeArray.First2DArrayFace = firstArraySlice;
            TextureCubeArray.NumCubes = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_SHADER_RESOURCE_VIEW_DESC(
        __in ID3D11Texture3D* pTex3D,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mostDetailedMip = 0,
        UINT mipLevels = -1)
    {
        ViewDimension = D3D11_SRV_DIMENSION_TEXTURE3D;
        if (DXGI_FORMAT_UNKNOWN == format || -1 == mipLevels)
        {
            D3D11_TEXTURE3D_DESC TexDesc;
            pTex3D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == mipLevels) mipLevels = TexDesc.MipLevels - mostDetailedMip;
        }
        Format = format;
        Texture3D.MostDetailedMip = mostDetailedMip;
        Texture3D.MipLevels = mipLevels;
    }
    ~CD3D11_SHADER_RESOURCE_VIEW_DESC() {}
    operator const D3D11_SHADER_RESOURCE_VIEW_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0010_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0010_v0_0_s_ifspec;

#ifndef __ID3D11ShaderResourceView_INTERFACE_DEFINED__
#define __ID3D11ShaderResourceView_INTERFACE_DEFINED__

    /* interface ID3D11ShaderResourceView */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11ShaderResourceView;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("b0e06fe0-8192-4e1a-b1ca-36d7414710b2")
        ID3D11ShaderResourceView : public ID3D11View
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11ShaderResourceViewVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11ShaderResourceView* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11ShaderResourceView* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11ShaderResourceView* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11ShaderResourceView* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11ShaderResourceView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11ShaderResourceView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11ShaderResourceView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetResource)(
            ID3D11ShaderResourceView* This,
            /* [annotation] */
            __out  ID3D11Resource** ppResource);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11ShaderResourceView* This,
            /* [annotation] */
            __out  D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc);

        END_INTERFACE
    } ID3D11ShaderResourceViewVtbl;

    interface ID3D11ShaderResourceView
    {
        CONST_VTBL struct ID3D11ShaderResourceViewVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11ShaderResourceView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11ShaderResourceView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11ShaderResourceView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11ShaderResourceView_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11ShaderResourceView_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11ShaderResourceView_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11ShaderResourceView_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11ShaderResourceView_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) ) 


#define ID3D11ShaderResourceView_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11ShaderResourceView_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0011 */
    /* [local] */

    typedef struct D3D11_BUFFER_RTV
    {
        union
        {
            UINT FirstElement;
            UINT ElementOffset;
        };
        union
        {
            UINT NumElements;
            UINT ElementWidth;
        };
    } 	D3D11_BUFFER_RTV;

    typedef struct D3D11_TEX1D_RTV
    {
        UINT MipSlice;
    } 	D3D11_TEX1D_RTV;

    typedef struct D3D11_TEX1D_ARRAY_RTV
    {
        UINT MipSlice;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX1D_ARRAY_RTV;

    typedef struct D3D11_TEX2D_RTV
    {
        UINT MipSlice;
    } 	D3D11_TEX2D_RTV;

    typedef struct D3D11_TEX2DMS_RTV
    {
        UINT UnusedField_NothingToDefine;
    } 	D3D11_TEX2DMS_RTV;

    typedef struct D3D11_TEX2D_ARRAY_RTV
    {
        UINT MipSlice;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX2D_ARRAY_RTV;

    typedef struct D3D11_TEX2DMS_ARRAY_RTV
    {
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX2DMS_ARRAY_RTV;

    typedef struct D3D11_TEX3D_RTV
    {
        UINT MipSlice;
        UINT FirstWSlice;
        UINT WSize;
    } 	D3D11_TEX3D_RTV;

    typedef struct D3D11_RENDER_TARGET_VIEW_DESC
    {
        DXGI_FORMAT Format;
        D3D11_RTV_DIMENSION ViewDimension;
        union
        {
            D3D11_BUFFER_RTV Buffer;
            D3D11_TEX1D_RTV Texture1D;
            D3D11_TEX1D_ARRAY_RTV Texture1DArray;
            D3D11_TEX2D_RTV Texture2D;
            D3D11_TEX2D_ARRAY_RTV Texture2DArray;
            D3D11_TEX2DMS_RTV Texture2DMS;
            D3D11_TEX2DMS_ARRAY_RTV Texture2DMSArray;
            D3D11_TEX3D_RTV Texture3D;
        };
    } 	D3D11_RENDER_TARGET_VIEW_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_RENDER_TARGET_VIEW_DESC : public D3D11_RENDER_TARGET_VIEW_DESC
{
    CD3D11_RENDER_TARGET_VIEW_DESC()
    {}
    explicit CD3D11_RENDER_TARGET_VIEW_DESC(const D3D11_RENDER_TARGET_VIEW_DESC& o) :
        D3D11_RENDER_TARGET_VIEW_DESC(o)
    {}
    explicit CD3D11_RENDER_TARGET_VIEW_DESC(
        D3D11_RTV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0, // FirstElement for BUFFER
        UINT firstArraySlice = 0, // NumElements for BUFFER, FirstWSlice for TEXTURE3D
        UINT arraySize = -1) // WSize for TEXTURE3D
    {
        Format = format;
        ViewDimension = viewDimension;
        switch (viewDimension)
        {
        case D3D11_RTV_DIMENSION_BUFFER:
            Buffer.FirstElement = mipSlice;
            Buffer.NumElements = firstArraySlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE1D:
            Texture1D.MipSlice = mipSlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MipSlice = mipSlice;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2D:
            Texture2D.MipSlice = mipSlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MipSlice = mipSlice;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DMSARRAY:
            Texture2DMSArray.FirstArraySlice = firstArraySlice;
            Texture2DMSArray.ArraySize = arraySize;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE3D:
            Texture3D.MipSlice = mipSlice;
            Texture3D.FirstWSlice = firstArraySlice;
            Texture3D.WSize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_RENDER_TARGET_VIEW_DESC(
        __in ID3D11Buffer*,
        DXGI_FORMAT format,
        UINT firstElement,
        UINT numElements)
    {
        Format = format;
        ViewDimension = D3D11_RTV_DIMENSION_BUFFER;
        Buffer.FirstElement = firstElement;
        Buffer.NumElements = numElements;
    }
    explicit CD3D11_RENDER_TARGET_VIEW_DESC(
        __in ID3D11Texture1D* pTex1D,
        D3D11_RTV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstArraySlice = 0,
        UINT arraySize = -1)
    {
        ViewDimension = viewDimension;
        if (DXGI_FORMAT_UNKNOWN == format ||
            (-1 == arraySize && D3D11_RTV_DIMENSION_TEXTURE1DARRAY == viewDimension))
        {
            D3D11_TEXTURE1D_DESC TexDesc;
            pTex1D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == arraySize) arraySize = TexDesc.ArraySize - firstArraySlice;
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_RTV_DIMENSION_TEXTURE1D:
            Texture1D.MipSlice = mipSlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MipSlice = mipSlice;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_RENDER_TARGET_VIEW_DESC(
        __in ID3D11Texture2D* pTex2D,
        D3D11_RTV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstArraySlice = 0,
        UINT arraySize = -1)
    {
        ViewDimension = viewDimension;
        if (DXGI_FORMAT_UNKNOWN == format ||
            (-1 == arraySize &&
                (D3D11_RTV_DIMENSION_TEXTURE2DARRAY == viewDimension ||
                    D3D11_RTV_DIMENSION_TEXTURE2DMSARRAY == viewDimension)))
        {
            D3D11_TEXTURE2D_DESC TexDesc;
            pTex2D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == arraySize) arraySize = TexDesc.ArraySize - firstArraySlice;
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_RTV_DIMENSION_TEXTURE2D:
            Texture2D.MipSlice = mipSlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MipSlice = mipSlice;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DMSARRAY:
            Texture2DMSArray.FirstArraySlice = firstArraySlice;
            Texture2DMSArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_RENDER_TARGET_VIEW_DESC(
        __in ID3D11Texture3D* pTex3D,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstWSlice = 0,
        UINT wSize = -1)
    {
        ViewDimension = D3D11_RTV_DIMENSION_TEXTURE3D;
        if (DXGI_FORMAT_UNKNOWN == format || -1 == wSize)
        {
            D3D11_TEXTURE3D_DESC TexDesc;
            pTex3D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == wSize) wSize = TexDesc.Depth - firstWSlice;
        }
        Format = format;
        Texture3D.MipSlice = mipSlice;
        Texture3D.FirstWSlice = firstWSlice;
        Texture3D.WSize = wSize;
    }
    ~CD3D11_RENDER_TARGET_VIEW_DESC() {}
    operator const D3D11_RENDER_TARGET_VIEW_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0011_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0011_v0_0_s_ifspec;

#ifndef __ID3D11RenderTargetView_INTERFACE_DEFINED__
#define __ID3D11RenderTargetView_INTERFACE_DEFINED__

    /* interface ID3D11RenderTargetView */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11RenderTargetView;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("dfdba067-0b8d-4865-875b-d7b4516cc164")
        ID3D11RenderTargetView : public ID3D11View
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_RENDER_TARGET_VIEW_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11RenderTargetViewVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11RenderTargetView* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11RenderTargetView* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11RenderTargetView* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11RenderTargetView* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11RenderTargetView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11RenderTargetView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11RenderTargetView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetResource)(
            ID3D11RenderTargetView* This,
            /* [annotation] */
            __out  ID3D11Resource** ppResource);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11RenderTargetView* This,
            /* [annotation] */
            __out  D3D11_RENDER_TARGET_VIEW_DESC* pDesc);

        END_INTERFACE
    } ID3D11RenderTargetViewVtbl;

    interface ID3D11RenderTargetView
    {
        CONST_VTBL struct ID3D11RenderTargetViewVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11RenderTargetView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11RenderTargetView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11RenderTargetView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11RenderTargetView_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11RenderTargetView_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11RenderTargetView_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11RenderTargetView_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11RenderTargetView_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) ) 


#define ID3D11RenderTargetView_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11RenderTargetView_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0012 */
    /* [local] */

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_VIEWPORT : public D3D11_VIEWPORT
{
    CD3D11_VIEWPORT()
    {}
    explicit CD3D11_VIEWPORT(const D3D11_VIEWPORT& o) :
        D3D11_VIEWPORT(o)
    {}
    explicit CD3D11_VIEWPORT(
        FLOAT topLeftX,
        FLOAT topLeftY,
        FLOAT width,
        FLOAT height,
        FLOAT minDepth = D3D11_MIN_DEPTH,
        FLOAT maxDepth = D3D11_MAX_DEPTH)
    {
        TopLeftX = topLeftX;
        TopLeftY = topLeftY;
        Width = width;
        Height = height;
        MinDepth = minDepth;
        MaxDepth = maxDepth;
    }
    explicit CD3D11_VIEWPORT(
        __in ID3D11Buffer*,
        __in ID3D11RenderTargetView* pRTView,
        FLOAT topLeftX = 0.0f,
        FLOAT minDepth = D3D11_MIN_DEPTH,
        FLOAT maxDepth = D3D11_MAX_DEPTH)
    {
        D3D11_RENDER_TARGET_VIEW_DESC RTVDesc;
        pRTView->GetDesc(&RTVDesc);
        UINT NumElements = 0;
        switch (RTVDesc.ViewDimension)
        {
        case D3D11_RTV_DIMENSION_BUFFER:
            NumElements = RTVDesc.Buffer.NumElements;
            break;
        default: break;
        }
        TopLeftX = topLeftX;
        TopLeftY = 0.0f;
        Width = NumElements - topLeftX;
        Height = 1.0f;
        MinDepth = minDepth;
        MaxDepth = maxDepth;
    }
    explicit CD3D11_VIEWPORT(
        __in ID3D11Texture1D* pTex1D,
        __in ID3D11RenderTargetView* pRTView,
        FLOAT topLeftX = 0.0f,
        FLOAT minDepth = D3D11_MIN_DEPTH,
        FLOAT maxDepth = D3D11_MAX_DEPTH)
    {
        D3D11_TEXTURE1D_DESC TexDesc;
        pTex1D->GetDesc(&TexDesc);
        D3D11_RENDER_TARGET_VIEW_DESC RTVDesc;
        pRTView->GetDesc(&RTVDesc);
        UINT MipSlice = 0;
        switch (RTVDesc.ViewDimension)
        {
        case D3D11_RTV_DIMENSION_TEXTURE1D:
            MipSlice = RTVDesc.Texture1D.MipSlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE1DARRAY:
            MipSlice = RTVDesc.Texture1DArray.MipSlice;
            break;
        default: break;
        }
        const UINT SubResourceWidth = TexDesc.Width / (UINT(1) << MipSlice);
        TopLeftX = topLeftX;
        TopLeftY = 0.0f;
        Width = (SubResourceWidth ? SubResourceWidth : 1) - topLeftX;
        Height = 1.0f;
        MinDepth = minDepth;
        MaxDepth = maxDepth;
    }
    explicit CD3D11_VIEWPORT(
        __in ID3D11Texture2D* pTex2D,
        __in ID3D11RenderTargetView* pRTView,
        FLOAT topLeftX = 0.0f,
        FLOAT topLeftY = 0.0f,
        FLOAT minDepth = D3D11_MIN_DEPTH,
        FLOAT maxDepth = D3D11_MAX_DEPTH)
    {
        D3D11_TEXTURE2D_DESC TexDesc;
        pTex2D->GetDesc(&TexDesc);
        D3D11_RENDER_TARGET_VIEW_DESC RTVDesc;
        pRTView->GetDesc(&RTVDesc);
        UINT MipSlice = 0;
        switch (RTVDesc.ViewDimension)
        {
        case D3D11_RTV_DIMENSION_TEXTURE2D:
            MipSlice = RTVDesc.Texture2D.MipSlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DARRAY:
            MipSlice = RTVDesc.Texture2DArray.MipSlice;
            break;
        case D3D11_RTV_DIMENSION_TEXTURE2DMS:
        case D3D11_RTV_DIMENSION_TEXTURE2DMSARRAY:
            break;
        default: break;
        }
        const UINT SubResourceWidth = TexDesc.Width / (UINT(1) << MipSlice);
        const UINT SubResourceHeight = TexDesc.Height / (UINT(1) << MipSlice);
        TopLeftX = topLeftX;
        TopLeftY = topLeftY;
        Width = (SubResourceWidth ? SubResourceWidth : 1) - topLeftX;
        Height = (SubResourceHeight ? SubResourceHeight : 1) - topLeftY;
        MinDepth = minDepth;
        MaxDepth = maxDepth;
    }
    explicit CD3D11_VIEWPORT(
        __in ID3D11Texture3D* pTex3D,
        __in ID3D11RenderTargetView* pRTView,
        FLOAT topLeftX = 0.0f,
        FLOAT topLeftY = 0.0f,
        FLOAT minDepth = D3D11_MIN_DEPTH,
        FLOAT maxDepth = D3D11_MAX_DEPTH)
    {
        D3D11_TEXTURE3D_DESC TexDesc;
        pTex3D->GetDesc(&TexDesc);
        D3D11_RENDER_TARGET_VIEW_DESC RTVDesc;
        pRTView->GetDesc(&RTVDesc);
        UINT MipSlice = 0;
        switch (RTVDesc.ViewDimension)
        {
        case D3D11_RTV_DIMENSION_TEXTURE3D:
            MipSlice = RTVDesc.Texture3D.MipSlice;
            break;
        default: break;
        }
        const UINT SubResourceWidth = TexDesc.Width / (UINT(1) << MipSlice);
        const UINT SubResourceHeight = TexDesc.Height / (UINT(1) << MipSlice);
        TopLeftX = topLeftX;
        TopLeftY = topLeftY;
        Width = (SubResourceWidth ? SubResourceWidth : 1) - topLeftX;
        Height = (SubResourceHeight ? SubResourceHeight : 1) - topLeftY;
        MinDepth = minDepth;
        MaxDepth = maxDepth;
    }
    ~CD3D11_VIEWPORT() {}
    operator const D3D11_VIEWPORT& () const { return *this; }
};
extern "C" {
#endif
    typedef struct D3D11_TEX1D_DSV
    {
        UINT MipSlice;
    } 	D3D11_TEX1D_DSV;

    typedef struct D3D11_TEX1D_ARRAY_DSV
    {
        UINT MipSlice;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX1D_ARRAY_DSV;

    typedef struct D3D11_TEX2D_DSV
    {
        UINT MipSlice;
    } 	D3D11_TEX2D_DSV;

    typedef struct D3D11_TEX2D_ARRAY_DSV
    {
        UINT MipSlice;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX2D_ARRAY_DSV;

    typedef struct D3D11_TEX2DMS_DSV
    {
        UINT UnusedField_NothingToDefine;
    } 	D3D11_TEX2DMS_DSV;

    typedef struct D3D11_TEX2DMS_ARRAY_DSV
    {
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX2DMS_ARRAY_DSV;

    typedef
        enum D3D11_DSV_FLAG
    {
        D3D11_DSV_READ_ONLY_DEPTH = 0x1L,
        D3D11_DSV_READ_ONLY_STENCIL = 0x2L
    } 	D3D11_DSV_FLAG;

    typedef struct D3D11_DEPTH_STENCIL_VIEW_DESC
    {
        DXGI_FORMAT Format;
        D3D11_DSV_DIMENSION ViewDimension;
        UINT Flags;
        union
        {
            D3D11_TEX1D_DSV Texture1D;
            D3D11_TEX1D_ARRAY_DSV Texture1DArray;
            D3D11_TEX2D_DSV Texture2D;
            D3D11_TEX2D_ARRAY_DSV Texture2DArray;
            D3D11_TEX2DMS_DSV Texture2DMS;
            D3D11_TEX2DMS_ARRAY_DSV Texture2DMSArray;
        };
    } 	D3D11_DEPTH_STENCIL_VIEW_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_DEPTH_STENCIL_VIEW_DESC : public D3D11_DEPTH_STENCIL_VIEW_DESC
{
    CD3D11_DEPTH_STENCIL_VIEW_DESC()
    {}
    explicit CD3D11_DEPTH_STENCIL_VIEW_DESC(const D3D11_DEPTH_STENCIL_VIEW_DESC& o) :
        D3D11_DEPTH_STENCIL_VIEW_DESC(o)
    {}
    explicit CD3D11_DEPTH_STENCIL_VIEW_DESC(
        D3D11_DSV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstArraySlice = 0,
        UINT arraySize = -1,
        UINT flags = 0)
    {
        Format = format;
        ViewDimension = viewDimension;
        Flags = flags;
        switch (viewDimension)
        {
        case D3D11_DSV_DIMENSION_TEXTURE1D:
            Texture1D.MipSlice = mipSlice;
            break;
        case D3D11_DSV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MipSlice = mipSlice;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        case D3D11_DSV_DIMENSION_TEXTURE2D:
            Texture2D.MipSlice = mipSlice;
            break;
        case D3D11_DSV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MipSlice = mipSlice;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        case D3D11_DSV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D11_DSV_DIMENSION_TEXTURE2DMSARRAY:
            Texture2DMSArray.FirstArraySlice = firstArraySlice;
            Texture2DMSArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_DEPTH_STENCIL_VIEW_DESC(
        __in ID3D11Texture1D* pTex1D,
        D3D11_DSV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstArraySlice = 0,
        UINT arraySize = -1,
        UINT flags = 0)
    {
        ViewDimension = viewDimension;
        Flags = flags;
        if (DXGI_FORMAT_UNKNOWN == format ||
            (-1 == arraySize && D3D11_DSV_DIMENSION_TEXTURE1DARRAY == viewDimension))
        {
            D3D11_TEXTURE1D_DESC TexDesc;
            pTex1D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == arraySize) arraySize = TexDesc.ArraySize - firstArraySlice;
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_DSV_DIMENSION_TEXTURE1D:
            Texture1D.MipSlice = mipSlice;
            break;
        case D3D11_DSV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MipSlice = mipSlice;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_DEPTH_STENCIL_VIEW_DESC(
        __in ID3D11Texture2D* pTex2D,
        D3D11_DSV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstArraySlice = 0,
        UINT arraySize = -1,
        UINT flags = 0)
    {
        ViewDimension = viewDimension;
        Flags = flags;
        if (DXGI_FORMAT_UNKNOWN == format ||
            (-1 == arraySize &&
                (D3D11_DSV_DIMENSION_TEXTURE2DARRAY == viewDimension ||
                    D3D11_DSV_DIMENSION_TEXTURE2DMSARRAY == viewDimension)))
        {
            D3D11_TEXTURE2D_DESC TexDesc;
            pTex2D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == arraySize) arraySize = TexDesc.ArraySize - firstArraySlice;
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_DSV_DIMENSION_TEXTURE2D:
            Texture2D.MipSlice = mipSlice;
            break;
        case D3D11_DSV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MipSlice = mipSlice;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        case D3D11_DSV_DIMENSION_TEXTURE2DMS:
            break;
        case D3D11_DSV_DIMENSION_TEXTURE2DMSARRAY:
            Texture2DMSArray.FirstArraySlice = firstArraySlice;
            Texture2DMSArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    ~CD3D11_DEPTH_STENCIL_VIEW_DESC() {}
    operator const D3D11_DEPTH_STENCIL_VIEW_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0012_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0012_v0_0_s_ifspec;

#ifndef __ID3D11DepthStencilView_INTERFACE_DEFINED__
#define __ID3D11DepthStencilView_INTERFACE_DEFINED__

    /* interface ID3D11DepthStencilView */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11DepthStencilView;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9fdac92a-1876-48c3-afad-25b94f84a9b6")
        ID3D11DepthStencilView : public ID3D11View
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11DepthStencilViewVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11DepthStencilView* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11DepthStencilView* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11DepthStencilView* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11DepthStencilView* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11DepthStencilView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11DepthStencilView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11DepthStencilView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetResource)(
            ID3D11DepthStencilView* This,
            /* [annotation] */
            __out  ID3D11Resource** ppResource);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11DepthStencilView* This,
            /* [annotation] */
            __out  D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc);

        END_INTERFACE
    } ID3D11DepthStencilViewVtbl;

    interface ID3D11DepthStencilView
    {
        CONST_VTBL struct ID3D11DepthStencilViewVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11DepthStencilView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11DepthStencilView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11DepthStencilView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11DepthStencilView_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11DepthStencilView_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11DepthStencilView_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11DepthStencilView_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11DepthStencilView_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) ) 


#define ID3D11DepthStencilView_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11DepthStencilView_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0013 */
    /* [local] */

    typedef
        enum D3D11_BUFFER_UAV_FLAG
    {
        D3D11_BUFFER_UAV_FLAG_RAW = 0x1,
        D3D11_BUFFER_UAV_FLAG_APPEND = 0x2,
        D3D11_BUFFER_UAV_FLAG_COUNTER = 0x4
    } 	D3D11_BUFFER_UAV_FLAG;

    typedef struct D3D11_BUFFER_UAV
    {
        UINT FirstElement;
        UINT NumElements;
        UINT Flags;
    } 	D3D11_BUFFER_UAV;

    typedef struct D3D11_TEX1D_UAV
    {
        UINT MipSlice;
    } 	D3D11_TEX1D_UAV;

    typedef struct D3D11_TEX1D_ARRAY_UAV
    {
        UINT MipSlice;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX1D_ARRAY_UAV;

    typedef struct D3D11_TEX2D_UAV
    {
        UINT MipSlice;
    } 	D3D11_TEX2D_UAV;

    typedef struct D3D11_TEX2D_ARRAY_UAV
    {
        UINT MipSlice;
        UINT FirstArraySlice;
        UINT ArraySize;
    } 	D3D11_TEX2D_ARRAY_UAV;

    typedef struct D3D11_TEX3D_UAV
    {
        UINT MipSlice;
        UINT FirstWSlice;
        UINT WSize;
    } 	D3D11_TEX3D_UAV;

    typedef struct D3D11_UNORDERED_ACCESS_VIEW_DESC
    {
        DXGI_FORMAT Format;
        D3D11_UAV_DIMENSION ViewDimension;
        union
        {
            D3D11_BUFFER_UAV Buffer;
            D3D11_TEX1D_UAV Texture1D;
            D3D11_TEX1D_ARRAY_UAV Texture1DArray;
            D3D11_TEX2D_UAV Texture2D;
            D3D11_TEX2D_ARRAY_UAV Texture2DArray;
            D3D11_TEX3D_UAV Texture3D;
        };
    } 	D3D11_UNORDERED_ACCESS_VIEW_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_UNORDERED_ACCESS_VIEW_DESC : public D3D11_UNORDERED_ACCESS_VIEW_DESC
{
    CD3D11_UNORDERED_ACCESS_VIEW_DESC()
    {}
    explicit CD3D11_UNORDERED_ACCESS_VIEW_DESC(const D3D11_UNORDERED_ACCESS_VIEW_DESC& o) :
        D3D11_UNORDERED_ACCESS_VIEW_DESC(o)
    {}
    explicit CD3D11_UNORDERED_ACCESS_VIEW_DESC(
        D3D11_UAV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0, // FirstElement for BUFFER
        UINT firstArraySlice = 0, // NumElements for BUFFER, FirstWSlice for TEXTURE3D
        UINT arraySize = -1, // WSize for TEXTURE3D
        UINT flags = 0) // BUFFER only
    {
        Format = format;
        ViewDimension = viewDimension;
        switch (viewDimension)
        {
        case D3D11_UAV_DIMENSION_BUFFER:
            Buffer.FirstElement = mipSlice;
            Buffer.NumElements = firstArraySlice;
            Buffer.Flags = flags;
            break;
        case D3D11_UAV_DIMENSION_TEXTURE1D:
            Texture1D.MipSlice = mipSlice;
            break;
        case D3D11_UAV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MipSlice = mipSlice;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        case D3D11_UAV_DIMENSION_TEXTURE2D:
            Texture2D.MipSlice = mipSlice;
            break;
        case D3D11_UAV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MipSlice = mipSlice;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        case D3D11_UAV_DIMENSION_TEXTURE3D:
            Texture3D.MipSlice = mipSlice;
            Texture3D.FirstWSlice = firstArraySlice;
            Texture3D.WSize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_UNORDERED_ACCESS_VIEW_DESC(
        __in ID3D11Buffer*,
        DXGI_FORMAT format,
        UINT firstElement,
        UINT numElements,
        UINT flags = 0)
    {
        Format = format;
        ViewDimension = D3D11_UAV_DIMENSION_BUFFER;
        Buffer.FirstElement = firstElement;
        Buffer.NumElements = numElements;
        Buffer.Flags = flags;
    }
    explicit CD3D11_UNORDERED_ACCESS_VIEW_DESC(
        __in ID3D11Texture1D* pTex1D,
        D3D11_UAV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstArraySlice = 0,
        UINT arraySize = -1)
    {
        ViewDimension = viewDimension;
        if (DXGI_FORMAT_UNKNOWN == format ||
            (-1 == arraySize && D3D11_UAV_DIMENSION_TEXTURE1DARRAY == viewDimension))
        {
            D3D11_TEXTURE1D_DESC TexDesc;
            pTex1D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == arraySize) arraySize = TexDesc.ArraySize - firstArraySlice;
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_UAV_DIMENSION_TEXTURE1D:
            Texture1D.MipSlice = mipSlice;
            break;
        case D3D11_UAV_DIMENSION_TEXTURE1DARRAY:
            Texture1DArray.MipSlice = mipSlice;
            Texture1DArray.FirstArraySlice = firstArraySlice;
            Texture1DArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_UNORDERED_ACCESS_VIEW_DESC(
        __in ID3D11Texture2D* pTex2D,
        D3D11_UAV_DIMENSION viewDimension,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstArraySlice = 0,
        UINT arraySize = -1)
    {
        ViewDimension = viewDimension;
        if (DXGI_FORMAT_UNKNOWN == format ||
            (-1 == arraySize && D3D11_UAV_DIMENSION_TEXTURE2DARRAY == viewDimension))
        {
            D3D11_TEXTURE2D_DESC TexDesc;
            pTex2D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == arraySize) arraySize = TexDesc.ArraySize - firstArraySlice;
        }
        Format = format;
        switch (viewDimension)
        {
        case D3D11_UAV_DIMENSION_TEXTURE2D:
            Texture2D.MipSlice = mipSlice;
            break;
        case D3D11_UAV_DIMENSION_TEXTURE2DARRAY:
            Texture2DArray.MipSlice = mipSlice;
            Texture2DArray.FirstArraySlice = firstArraySlice;
            Texture2DArray.ArraySize = arraySize;
            break;
        default: break;
        }
    }
    explicit CD3D11_UNORDERED_ACCESS_VIEW_DESC(
        __in ID3D11Texture3D* pTex3D,
        DXGI_FORMAT format = DXGI_FORMAT_UNKNOWN,
        UINT mipSlice = 0,
        UINT firstWSlice = 0,
        UINT wSize = -1)
    {
        ViewDimension = D3D11_UAV_DIMENSION_TEXTURE3D;
        if (DXGI_FORMAT_UNKNOWN == format || -1 == wSize)
        {
            D3D11_TEXTURE3D_DESC TexDesc;
            pTex3D->GetDesc(&TexDesc);
            if (DXGI_FORMAT_UNKNOWN == format) format = TexDesc.Format;
            if (-1 == wSize) wSize = TexDesc.Depth - firstWSlice;
        }
        Format = format;
        Texture3D.MipSlice = mipSlice;
        Texture3D.FirstWSlice = firstWSlice;
        Texture3D.WSize = wSize;
    }
    ~CD3D11_UNORDERED_ACCESS_VIEW_DESC() {}
    operator const D3D11_UNORDERED_ACCESS_VIEW_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0013_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0013_v0_0_s_ifspec;

#ifndef __ID3D11UnorderedAccessView_INTERFACE_DEFINED__
#define __ID3D11UnorderedAccessView_INTERFACE_DEFINED__

    /* interface ID3D11UnorderedAccessView */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11UnorderedAccessView;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("28acf509-7f5c-48f6-8611-f316010a6380")
        ID3D11UnorderedAccessView : public ID3D11View
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11UnorderedAccessViewVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11UnorderedAccessView* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11UnorderedAccessView* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11UnorderedAccessView* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11UnorderedAccessView* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11UnorderedAccessView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11UnorderedAccessView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11UnorderedAccessView* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetResource)(
            ID3D11UnorderedAccessView* This,
            /* [annotation] */
            __out  ID3D11Resource** ppResource);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11UnorderedAccessView* This,
            /* [annotation] */
            __out  D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc);

        END_INTERFACE
    } ID3D11UnorderedAccessViewVtbl;

    interface ID3D11UnorderedAccessView
    {
        CONST_VTBL struct ID3D11UnorderedAccessViewVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11UnorderedAccessView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11UnorderedAccessView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11UnorderedAccessView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11UnorderedAccessView_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11UnorderedAccessView_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11UnorderedAccessView_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11UnorderedAccessView_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11UnorderedAccessView_GetResource(This,ppResource)	\
    ( (This)->lpVtbl -> GetResource(This,ppResource) ) 


#define ID3D11UnorderedAccessView_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11UnorderedAccessView_INTERFACE_DEFINED__ */


#ifndef __ID3D11VertexShader_INTERFACE_DEFINED__
#define __ID3D11VertexShader_INTERFACE_DEFINED__

    /* interface ID3D11VertexShader */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11VertexShader;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("3b301d64-d678-4289-8897-22f8928b72f3")
        ID3D11VertexShader : public ID3D11DeviceChild
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11VertexShaderVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11VertexShader* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11VertexShader* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11VertexShader* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11VertexShader* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11VertexShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11VertexShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11VertexShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11VertexShaderVtbl;

    interface ID3D11VertexShader
    {
        CONST_VTBL struct ID3D11VertexShaderVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11VertexShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11VertexShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11VertexShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11VertexShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11VertexShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11VertexShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11VertexShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11VertexShader_INTERFACE_DEFINED__ */


#ifndef __ID3D11HullShader_INTERFACE_DEFINED__
#define __ID3D11HullShader_INTERFACE_DEFINED__

    /* interface ID3D11HullShader */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11HullShader;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8e5c6061-628a-4c8e-8264-bbe45cb3d5dd")
        ID3D11HullShader : public ID3D11DeviceChild
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11HullShaderVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11HullShader* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11HullShader* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11HullShader* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11HullShader* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11HullShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11HullShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11HullShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11HullShaderVtbl;

    interface ID3D11HullShader
    {
        CONST_VTBL struct ID3D11HullShaderVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11HullShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11HullShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11HullShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11HullShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11HullShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11HullShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11HullShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11HullShader_INTERFACE_DEFINED__ */


#ifndef __ID3D11DomainShader_INTERFACE_DEFINED__
#define __ID3D11DomainShader_INTERFACE_DEFINED__

    /* interface ID3D11DomainShader */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11DomainShader;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("f582c508-0f36-490c-9977-31eece268cfa")
        ID3D11DomainShader : public ID3D11DeviceChild
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11DomainShaderVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11DomainShader* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11DomainShader* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11DomainShader* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11DomainShader* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11DomainShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11DomainShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11DomainShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11DomainShaderVtbl;

    interface ID3D11DomainShader
    {
        CONST_VTBL struct ID3D11DomainShaderVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11DomainShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11DomainShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11DomainShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11DomainShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11DomainShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11DomainShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11DomainShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11DomainShader_INTERFACE_DEFINED__ */


#ifndef __ID3D11GeometryShader_INTERFACE_DEFINED__
#define __ID3D11GeometryShader_INTERFACE_DEFINED__

    /* interface ID3D11GeometryShader */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11GeometryShader;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("38325b96-effb-4022-ba02-2e795b70275c")
        ID3D11GeometryShader : public ID3D11DeviceChild
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11GeometryShaderVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11GeometryShader* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11GeometryShader* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11GeometryShader* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11GeometryShader* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11GeometryShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11GeometryShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11GeometryShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11GeometryShaderVtbl;

    interface ID3D11GeometryShader
    {
        CONST_VTBL struct ID3D11GeometryShaderVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11GeometryShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11GeometryShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11GeometryShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11GeometryShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11GeometryShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11GeometryShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11GeometryShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11GeometryShader_INTERFACE_DEFINED__ */


#ifndef __ID3D11PixelShader_INTERFACE_DEFINED__
#define __ID3D11PixelShader_INTERFACE_DEFINED__

    /* interface ID3D11PixelShader */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11PixelShader;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ea82e40d-51dc-4f33-93d4-db7c9125ae8c")
        ID3D11PixelShader : public ID3D11DeviceChild
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11PixelShaderVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11PixelShader* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11PixelShader* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11PixelShader* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11PixelShader* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11PixelShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11PixelShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11PixelShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11PixelShaderVtbl;

    interface ID3D11PixelShader
    {
        CONST_VTBL struct ID3D11PixelShaderVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11PixelShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11PixelShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11PixelShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11PixelShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11PixelShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11PixelShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11PixelShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11PixelShader_INTERFACE_DEFINED__ */


#ifndef __ID3D11ComputeShader_INTERFACE_DEFINED__
#define __ID3D11ComputeShader_INTERFACE_DEFINED__

    /* interface ID3D11ComputeShader */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11ComputeShader;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4f5b196e-c2bd-495e-bd01-1fded38e4969")
        ID3D11ComputeShader : public ID3D11DeviceChild
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11ComputeShaderVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11ComputeShader* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11ComputeShader* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11ComputeShader* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11ComputeShader* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11ComputeShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11ComputeShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11ComputeShader* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11ComputeShaderVtbl;

    interface ID3D11ComputeShader
    {
        CONST_VTBL struct ID3D11ComputeShaderVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11ComputeShader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11ComputeShader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11ComputeShader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11ComputeShader_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11ComputeShader_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11ComputeShader_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11ComputeShader_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11ComputeShader_INTERFACE_DEFINED__ */


#ifndef __ID3D11InputLayout_INTERFACE_DEFINED__
#define __ID3D11InputLayout_INTERFACE_DEFINED__

    /* interface ID3D11InputLayout */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11InputLayout;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("e4819ddc-4cf0-4025-bd26-5de82a3e07b7")
        ID3D11InputLayout : public ID3D11DeviceChild
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11InputLayoutVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11InputLayout* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11InputLayout* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11InputLayout* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11InputLayout* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11InputLayout* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11InputLayout* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11InputLayout* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        END_INTERFACE
    } ID3D11InputLayoutVtbl;

    interface ID3D11InputLayout
    {
        CONST_VTBL struct ID3D11InputLayoutVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11InputLayout_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11InputLayout_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11InputLayout_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11InputLayout_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11InputLayout_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11InputLayout_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11InputLayout_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11InputLayout_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0021 */
    /* [local] */

    typedef
        enum D3D11_FILTER
    {
        D3D11_FILTER_MIN_MAG_MIP_POINT = 0,
        D3D11_FILTER_MIN_MAG_POINT_MIP_LINEAR = 0x1,
        D3D11_FILTER_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x4,
        D3D11_FILTER_MIN_POINT_MAG_MIP_LINEAR = 0x5,
        D3D11_FILTER_MIN_LINEAR_MAG_MIP_POINT = 0x10,
        D3D11_FILTER_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x11,
        D3D11_FILTER_MIN_MAG_LINEAR_MIP_POINT = 0x14,
        D3D11_FILTER_MIN_MAG_MIP_LINEAR = 0x15,
        D3D11_FILTER_ANISOTROPIC = 0x55,
        D3D11_FILTER_COMPARISON_MIN_MAG_MIP_POINT = 0x80,
        D3D11_FILTER_COMPARISON_MIN_MAG_POINT_MIP_LINEAR = 0x81,
        D3D11_FILTER_COMPARISON_MIN_POINT_MAG_LINEAR_MIP_POINT = 0x84,
        D3D11_FILTER_COMPARISON_MIN_POINT_MAG_MIP_LINEAR = 0x85,
        D3D11_FILTER_COMPARISON_MIN_LINEAR_MAG_MIP_POINT = 0x90,
        D3D11_FILTER_COMPARISON_MIN_LINEAR_MAG_POINT_MIP_LINEAR = 0x91,
        D3D11_FILTER_COMPARISON_MIN_MAG_LINEAR_MIP_POINT = 0x94,
        D3D11_FILTER_COMPARISON_MIN_MAG_MIP_LINEAR = 0x95,
        D3D11_FILTER_COMPARISON_ANISOTROPIC = 0xd5
    } 	D3D11_FILTER;

    typedef
        enum D3D11_FILTER_TYPE
    {
        D3D11_FILTER_TYPE_POINT = 0,
        D3D11_FILTER_TYPE_LINEAR = 1
    } 	D3D11_FILTER_TYPE;

#define	D3D11_FILTER_TYPE_MASK	( 0x3 )

#define	D3D11_MIN_FILTER_SHIFT	( 4 )

#define	D3D11_MAG_FILTER_SHIFT	( 2 )

#define	D3D11_MIP_FILTER_SHIFT	( 0 )

#define	D3D11_COMPARISON_FILTERING_BIT	( 0x80 )

#define	D3D11_ANISOTROPIC_FILTERING_BIT	( 0x40 )

#define D3D11_ENCODE_BASIC_FILTER( min, mag, mip, bComparison )                                           \
                                   ( ( D3D11_FILTER ) (                                                   \
                                   ( ( bComparison ) ? D3D11_COMPARISON_FILTERING_BIT : 0 ) |             \
                                   ( ( ( min ) & D3D11_FILTER_TYPE_MASK ) << D3D11_MIN_FILTER_SHIFT ) |   \
                                   ( ( ( mag ) & D3D11_FILTER_TYPE_MASK ) << D3D11_MAG_FILTER_SHIFT ) |   \
                                   ( ( ( mip ) & D3D11_FILTER_TYPE_MASK ) << D3D11_MIP_FILTER_SHIFT ) ) )   
#define D3D11_ENCODE_ANISOTROPIC_FILTER( bComparison )                                                \
                                         ( ( D3D11_FILTER ) (                                         \
                                         D3D11_ANISOTROPIC_FILTERING_BIT |                            \
                                         D3D11_ENCODE_BASIC_FILTER( D3D11_FILTER_TYPE_LINEAR,         \
                                                                    D3D11_FILTER_TYPE_LINEAR,         \
                                                                    D3D11_FILTER_TYPE_LINEAR,         \
                                                                    bComparison ) ) )                   
#define D3D11_DECODE_MIN_FILTER( d3d11Filter )                                                              \
                                 ( ( D3D11_FILTER_TYPE )                                                    \
                                 ( ( ( d3d11Filter ) >> D3D11_MIN_FILTER_SHIFT ) & D3D11_FILTER_TYPE_MASK ) ) 
#define D3D11_DECODE_MAG_FILTER( d3d11Filter )                                                              \
                                 ( ( D3D11_FILTER_TYPE )                                                    \
                                 ( ( ( d3d11Filter ) >> D3D11_MAG_FILTER_SHIFT ) & D3D11_FILTER_TYPE_MASK ) ) 
#define D3D11_DECODE_MIP_FILTER( d3d11Filter )                                                              \
                                 ( ( D3D11_FILTER_TYPE )                                                    \
                                 ( ( ( d3d11Filter ) >> D3D11_MIP_FILTER_SHIFT ) & D3D11_FILTER_TYPE_MASK ) ) 
#define D3D11_DECODE_IS_COMPARISON_FILTER( d3d11Filter )                                                    \
                                 ( ( d3d11Filter ) & D3D11_COMPARISON_FILTERING_BIT )                         
#define D3D11_DECODE_IS_ANISOTROPIC_FILTER( d3d11Filter )                                               \
                            ( ( ( d3d11Filter ) & D3D11_ANISOTROPIC_FILTERING_BIT ) &&                  \
                            ( D3D11_FILTER_TYPE_LINEAR == D3D11_DECODE_MIN_FILTER( d3d11Filter ) ) &&   \
                            ( D3D11_FILTER_TYPE_LINEAR == D3D11_DECODE_MAG_FILTER( d3d11Filter ) ) &&   \
                            ( D3D11_FILTER_TYPE_LINEAR == D3D11_DECODE_MIP_FILTER( d3d11Filter ) ) )      
    typedef
        enum D3D11_TEXTURE_ADDRESS_MODE
    {
        D3D11_TEXTURE_ADDRESS_WRAP = 1,
        D3D11_TEXTURE_ADDRESS_MIRROR = 2,
        D3D11_TEXTURE_ADDRESS_CLAMP = 3,
        D3D11_TEXTURE_ADDRESS_BORDER = 4,
        D3D11_TEXTURE_ADDRESS_MIRROR_ONCE = 5
    } 	D3D11_TEXTURE_ADDRESS_MODE;

    typedef struct D3D11_SAMPLER_DESC
    {
        D3D11_FILTER Filter;
        D3D11_TEXTURE_ADDRESS_MODE AddressU;
        D3D11_TEXTURE_ADDRESS_MODE AddressV;
        D3D11_TEXTURE_ADDRESS_MODE AddressW;
        FLOAT MipLODBias;
        UINT MaxAnisotropy;
        D3D11_COMPARISON_FUNC ComparisonFunc;
        FLOAT BorderColor[4];
        FLOAT MinLOD;
        FLOAT MaxLOD;
    } 	D3D11_SAMPLER_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_SAMPLER_DESC : public D3D11_SAMPLER_DESC
{
    CD3D11_SAMPLER_DESC()
    {}
    explicit CD3D11_SAMPLER_DESC(const D3D11_SAMPLER_DESC& o) :
        D3D11_SAMPLER_DESC(o)
    {}
    explicit CD3D11_SAMPLER_DESC(CD3D11_DEFAULT)
    {
        Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
        AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
        AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
        AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
        MipLODBias = 0;
        MaxAnisotropy = 1;
        ComparisonFunc = D3D11_COMPARISON_NEVER;
        BorderColor[0] = 1.0f;
        BorderColor[1] = 1.0f;
        BorderColor[2] = 1.0f;
        BorderColor[3] = 1.0f;
        MinLOD = -3.402823466e+38F; // -FLT_MAX
        MaxLOD = 3.402823466e+38F; // FLT_MAX
    }
    explicit CD3D11_SAMPLER_DESC(
        D3D11_FILTER filter,
        D3D11_TEXTURE_ADDRESS_MODE addressU,
        D3D11_TEXTURE_ADDRESS_MODE addressV,
        D3D11_TEXTURE_ADDRESS_MODE addressW,
        FLOAT mipLODBias,
        UINT maxAnisotropy,
        D3D11_COMPARISON_FUNC comparisonFunc,
        __in_ecount_opt(4) const FLOAT* borderColor, // RGBA
        FLOAT minLOD,
        FLOAT maxLOD)
    {
        Filter = filter;
        AddressU = addressU;
        AddressV = addressV;
        AddressW = addressW;
        MipLODBias = mipLODBias;
        MaxAnisotropy = maxAnisotropy;
        ComparisonFunc = comparisonFunc;
        const float defaultColor[4] = { 1.0f, 1.0f, 1.0f, 1.0f };
        if (!borderColor) borderColor = defaultColor;
        BorderColor[0] = borderColor[0];
        BorderColor[1] = borderColor[1];
        BorderColor[2] = borderColor[2];
        BorderColor[3] = borderColor[3];
        MinLOD = minLOD;
        MaxLOD = maxLOD;
    }
    ~CD3D11_SAMPLER_DESC() {}
    operator const D3D11_SAMPLER_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0021_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0021_v0_0_s_ifspec;

#ifndef __ID3D11SamplerState_INTERFACE_DEFINED__
#define __ID3D11SamplerState_INTERFACE_DEFINED__

    /* interface ID3D11SamplerState */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11SamplerState;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("da6fea51-564c-4487-9810-f0d0f9b4e3a5")
        ID3D11SamplerState : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_SAMPLER_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11SamplerStateVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11SamplerState* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11SamplerState* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11SamplerState* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11SamplerState* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11SamplerState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11SamplerState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11SamplerState* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11SamplerState* This,
            /* [annotation] */
            __out  D3D11_SAMPLER_DESC* pDesc);

        END_INTERFACE
    } ID3D11SamplerStateVtbl;

    interface ID3D11SamplerState
    {
        CONST_VTBL struct ID3D11SamplerStateVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11SamplerState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11SamplerState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11SamplerState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11SamplerState_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11SamplerState_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11SamplerState_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11SamplerState_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11SamplerState_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11SamplerState_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0022 */
    /* [local] */

    typedef
        enum D3D11_FORMAT_SUPPORT
    {
        D3D11_FORMAT_SUPPORT_BUFFER = 0x1,
        D3D11_FORMAT_SUPPORT_IA_VERTEX_BUFFER = 0x2,
        D3D11_FORMAT_SUPPORT_IA_INDEX_BUFFER = 0x4,
        D3D11_FORMAT_SUPPORT_SO_BUFFER = 0x8,
        D3D11_FORMAT_SUPPORT_TEXTURE1D = 0x10,
        D3D11_FORMAT_SUPPORT_TEXTURE2D = 0x20,
        D3D11_FORMAT_SUPPORT_TEXTURE3D = 0x40,
        D3D11_FORMAT_SUPPORT_TEXTURECUBE = 0x80,
        D3D11_FORMAT_SUPPORT_SHADER_LOAD = 0x100,
        D3D11_FORMAT_SUPPORT_SHADER_SAMPLE = 0x200,
        D3D11_FORMAT_SUPPORT_SHADER_SAMPLE_COMPARISON = 0x400,
        D3D11_FORMAT_SUPPORT_SHADER_SAMPLE_MONO_TEXT = 0x800,
        D3D11_FORMAT_SUPPORT_MIP = 0x1000,
        D3D11_FORMAT_SUPPORT_MIP_AUTOGEN = 0x2000,
        D3D11_FORMAT_SUPPORT_RENDER_TARGET = 0x4000,
        D3D11_FORMAT_SUPPORT_BLENDABLE = 0x8000,
        D3D11_FORMAT_SUPPORT_DEPTH_STENCIL = 0x10000,
        D3D11_FORMAT_SUPPORT_CPU_LOCKABLE = 0x20000,
        D3D11_FORMAT_SUPPORT_MULTISAMPLE_RESOLVE = 0x40000,
        D3D11_FORMAT_SUPPORT_DISPLAY = 0x80000,
        D3D11_FORMAT_SUPPORT_CAST_WITHIN_BIT_LAYOUT = 0x100000,
        D3D11_FORMAT_SUPPORT_MULTISAMPLE_RENDERTARGET = 0x200000,
        D3D11_FORMAT_SUPPORT_MULTISAMPLE_LOAD = 0x400000,
        D3D11_FORMAT_SUPPORT_SHADER_GATHER = 0x800000,
        D3D11_FORMAT_SUPPORT_BACK_BUFFER_CAST = 0x1000000,
        D3D11_FORMAT_SUPPORT_TYPED_UNORDERED_ACCESS_VIEW = 0x2000000,
        D3D11_FORMAT_SUPPORT_SHADER_GATHER_COMPARISON = 0x4000000
    } 	D3D11_FORMAT_SUPPORT;

    typedef
        enum D3D11_FORMAT_SUPPORT2
    {
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_ADD = 0x1,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_BITWISE_OPS = 0x2,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_COMPARE_STORE_OR_COMPARE_EXCHANGE = 0x4,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_EXCHANGE = 0x8,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_SIGNED_MIN_OR_MAX = 0x10,
        D3D11_FORMAT_SUPPORT2_UAV_ATOMIC_UNSIGNED_MIN_OR_MAX = 0x20,
        D3D11_FORMAT_SUPPORT2_UAV_TYPED_LOAD = 0x40,
        D3D11_FORMAT_SUPPORT2_UAV_TYPED_STORE = 0x80
    } 	D3D11_FORMAT_SUPPORT2;



    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0022_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0022_v0_0_s_ifspec;

#ifndef __ID3D11Asynchronous_INTERFACE_DEFINED__
#define __ID3D11Asynchronous_INTERFACE_DEFINED__

    /* interface ID3D11Asynchronous */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Asynchronous;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("4b35d0cd-1e15-4258-9c98-1b1333f6dd3b")
        ID3D11Asynchronous : public ID3D11DeviceChild
    {
    public:
        virtual UINT STDMETHODCALLTYPE GetDataSize(void) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11AsynchronousVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Asynchronous* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Asynchronous* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Asynchronous* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Asynchronous* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Asynchronous* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Asynchronous* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Asynchronous* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        UINT(STDMETHODCALLTYPE* GetDataSize)(
            ID3D11Asynchronous* This);

        END_INTERFACE
    } ID3D11AsynchronousVtbl;

    interface ID3D11Asynchronous
    {
        CONST_VTBL struct ID3D11AsynchronousVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Asynchronous_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Asynchronous_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Asynchronous_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Asynchronous_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Asynchronous_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Asynchronous_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Asynchronous_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Asynchronous_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Asynchronous_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0023 */
    /* [local] */

    typedef
        enum D3D11_ASYNC_GETDATA_FLAG
    {
        D3D11_ASYNC_GETDATA_DONOTFLUSH = 0x1
    } 	D3D11_ASYNC_GETDATA_FLAG;

    typedef
        enum D3D11_QUERY
    {
        D3D11_QUERY_EVENT = 0,
        D3D11_QUERY_OCCLUSION = (D3D11_QUERY_EVENT + 1),
        D3D11_QUERY_TIMESTAMP = (D3D11_QUERY_OCCLUSION + 1),
        D3D11_QUERY_TIMESTAMP_DISJOINT = (D3D11_QUERY_TIMESTAMP + 1),
        D3D11_QUERY_PIPELINE_STATISTICS = (D3D11_QUERY_TIMESTAMP_DISJOINT + 1),
        D3D11_QUERY_OCCLUSION_PREDICATE = (D3D11_QUERY_PIPELINE_STATISTICS + 1),
        D3D11_QUERY_SO_STATISTICS = (D3D11_QUERY_OCCLUSION_PREDICATE + 1),
        D3D11_QUERY_SO_OVERFLOW_PREDICATE = (D3D11_QUERY_SO_STATISTICS + 1),
        D3D11_QUERY_SO_STATISTICS_STREAM0 = (D3D11_QUERY_SO_OVERFLOW_PREDICATE + 1),
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM0 = (D3D11_QUERY_SO_STATISTICS_STREAM0 + 1),
        D3D11_QUERY_SO_STATISTICS_STREAM1 = (D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM0 + 1),
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM1 = (D3D11_QUERY_SO_STATISTICS_STREAM1 + 1),
        D3D11_QUERY_SO_STATISTICS_STREAM2 = (D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM1 + 1),
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM2 = (D3D11_QUERY_SO_STATISTICS_STREAM2 + 1),
        D3D11_QUERY_SO_STATISTICS_STREAM3 = (D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM2 + 1),
        D3D11_QUERY_SO_OVERFLOW_PREDICATE_STREAM3 = (D3D11_QUERY_SO_STATISTICS_STREAM3 + 1)
    } 	D3D11_QUERY;

    typedef
        enum D3D11_QUERY_MISC_FLAG
    {
        D3D11_QUERY_MISC_PREDICATEHINT = 0x1
    } 	D3D11_QUERY_MISC_FLAG;

    typedef struct D3D11_QUERY_DESC
    {
        D3D11_QUERY Query;
        UINT MiscFlags;
    } 	D3D11_QUERY_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_QUERY_DESC : public D3D11_QUERY_DESC
{
    CD3D11_QUERY_DESC()
    {}
    explicit CD3D11_QUERY_DESC(const D3D11_QUERY_DESC& o) :
        D3D11_QUERY_DESC(o)
    {}
    explicit CD3D11_QUERY_DESC(
        D3D11_QUERY query,
        UINT miscFlags = 0)
    {
        Query = query;
        MiscFlags = miscFlags;
    }
    ~CD3D11_QUERY_DESC() {}
    operator const D3D11_QUERY_DESC& () const { return *this; }
};
extern "C" {
#endif


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0023_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0023_v0_0_s_ifspec;

#ifndef __ID3D11Query_INTERFACE_DEFINED__
#define __ID3D11Query_INTERFACE_DEFINED__

    /* interface ID3D11Query */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Query;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("d6c00747-87b7-425e-b84d-44d108560afd")
        ID3D11Query : public ID3D11Asynchronous
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_QUERY_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11QueryVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Query* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Query* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Query* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Query* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Query* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Query* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Query* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        UINT(STDMETHODCALLTYPE* GetDataSize)(
            ID3D11Query* This);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11Query* This,
            /* [annotation] */
            __out  D3D11_QUERY_DESC* pDesc);

        END_INTERFACE
    } ID3D11QueryVtbl;

    interface ID3D11Query
    {
        CONST_VTBL struct ID3D11QueryVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Query_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Query_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Query_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Query_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Query_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Query_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Query_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Query_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) ) 


#define ID3D11Query_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Query_INTERFACE_DEFINED__ */


#ifndef __ID3D11Predicate_INTERFACE_DEFINED__
#define __ID3D11Predicate_INTERFACE_DEFINED__

    /* interface ID3D11Predicate */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Predicate;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9eb576dd-9f77-4d86-81aa-8bab5fe490e2")
        ID3D11Predicate : public ID3D11Query
    {
    public:
    };

#else 	/* C style interface */

    typedef struct ID3D11PredicateVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Predicate* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Predicate* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Predicate* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Predicate* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Predicate* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Predicate* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Predicate* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        UINT(STDMETHODCALLTYPE* GetDataSize)(
            ID3D11Predicate* This);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11Predicate* This,
            /* [annotation] */
            __out  D3D11_QUERY_DESC* pDesc);

        END_INTERFACE
    } ID3D11PredicateVtbl;

    interface ID3D11Predicate
    {
        CONST_VTBL struct ID3D11PredicateVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Predicate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Predicate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Predicate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Predicate_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Predicate_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Predicate_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Predicate_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Predicate_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) ) 


#define ID3D11Predicate_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Predicate_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0025 */
    /* [local] */

    typedef struct D3D11_QUERY_DATA_TIMESTAMP_DISJOINT
    {
        UINT64 Frequency;
        BOOL Disjoint;
    } 	D3D11_QUERY_DATA_TIMESTAMP_DISJOINT;

    typedef struct D3D11_QUERY_DATA_PIPELINE_STATISTICS
    {
        UINT64 IAVertices;
        UINT64 IAPrimitives;
        UINT64 VSInvocations;
        UINT64 GSInvocations;
        UINT64 GSPrimitives;
        UINT64 CInvocations;
        UINT64 CPrimitives;
        UINT64 PSInvocations;
        UINT64 HSInvocations;
        UINT64 DSInvocations;
        UINT64 CSInvocations;
    } 	D3D11_QUERY_DATA_PIPELINE_STATISTICS;

    typedef struct D3D11_QUERY_DATA_SO_STATISTICS
    {
        UINT64 NumPrimitivesWritten;
        UINT64 PrimitivesStorageNeeded;
    } 	D3D11_QUERY_DATA_SO_STATISTICS;

    typedef
        enum D3D11_COUNTER
    {
        D3D11_COUNTER_DEVICE_DEPENDENT_0 = 0x40000000
    } 	D3D11_COUNTER;

    typedef
        enum D3D11_COUNTER_TYPE
    {
        D3D11_COUNTER_TYPE_FLOAT32 = 0,
        D3D11_COUNTER_TYPE_UINT16 = (D3D11_COUNTER_TYPE_FLOAT32 + 1),
        D3D11_COUNTER_TYPE_UINT32 = (D3D11_COUNTER_TYPE_UINT16 + 1),
        D3D11_COUNTER_TYPE_UINT64 = (D3D11_COUNTER_TYPE_UINT32 + 1)
    } 	D3D11_COUNTER_TYPE;

    typedef struct D3D11_COUNTER_DESC
    {
        D3D11_COUNTER Counter;
        UINT MiscFlags;
    } 	D3D11_COUNTER_DESC;

#if !defined( D3D11_NO_HELPERS ) && defined( __cplusplus )
}
struct CD3D11_COUNTER_DESC : public D3D11_COUNTER_DESC
{
    CD3D11_COUNTER_DESC()
    {}
    explicit CD3D11_COUNTER_DESC(const D3D11_COUNTER_DESC& o) :
        D3D11_COUNTER_DESC(o)
    {}
    explicit CD3D11_COUNTER_DESC(
        D3D11_COUNTER counter,
        UINT miscFlags = 0)
    {
        Counter = counter;
        MiscFlags = miscFlags;
    }
    ~CD3D11_COUNTER_DESC() {}
    operator const D3D11_COUNTER_DESC& () const { return *this; }
};
extern "C" {
#endif
    typedef struct D3D11_COUNTER_INFO
    {
        D3D11_COUNTER LastDeviceDependentCounter;
        UINT NumSimultaneousCounters;
        UINT8 NumDetectableParallelUnits;
    } 	D3D11_COUNTER_INFO;



    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0025_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0025_v0_0_s_ifspec;

#ifndef __ID3D11Counter_INTERFACE_DEFINED__
#define __ID3D11Counter_INTERFACE_DEFINED__

    /* interface ID3D11Counter */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Counter;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6e8c49fb-a371-4770-b440-29086022b741")
        ID3D11Counter : public ID3D11Asynchronous
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_COUNTER_DESC * pDesc) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11CounterVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Counter* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Counter* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Counter* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11Counter* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Counter* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Counter* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Counter* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        UINT(STDMETHODCALLTYPE* GetDataSize)(
            ID3D11Counter* This);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11Counter* This,
            /* [annotation] */
            __out  D3D11_COUNTER_DESC* pDesc);

        END_INTERFACE
    } ID3D11CounterVtbl;

    interface ID3D11Counter
    {
        CONST_VTBL struct ID3D11CounterVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Counter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Counter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Counter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Counter_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11Counter_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Counter_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Counter_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11Counter_GetDataSize(This)	\
    ( (This)->lpVtbl -> GetDataSize(This) ) 


#define ID3D11Counter_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Counter_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0026 */
    /* [local] */

    typedef
        enum D3D11_STANDARD_MULTISAMPLE_QUALITY_LEVELS
    {
        D3D11_STANDARD_MULTISAMPLE_PATTERN = 0xffffffff,
        D3D11_CENTER_MULTISAMPLE_PATTERN = 0xfffffffe
    } 	D3D11_STANDARD_MULTISAMPLE_QUALITY_LEVELS;

    typedef
        enum D3D11_DEVICE_CONTEXT_TYPE
    {
        D3D11_DEVICE_CONTEXT_IMMEDIATE = 0,
        D3D11_DEVICE_CONTEXT_DEFERRED = (D3D11_DEVICE_CONTEXT_IMMEDIATE + 1)
    } 	D3D11_DEVICE_CONTEXT_TYPE;

    typedef struct D3D11_CLASS_INSTANCE_DESC
    {
        UINT InstanceId;
        UINT InstanceIndex;
        UINT TypeId;
        UINT ConstantBuffer;
        UINT BaseConstantBufferOffset;
        UINT BaseTexture;
        UINT BaseSampler;
        BOOL Created;
    } 	D3D11_CLASS_INSTANCE_DESC;



    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0026_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0026_v0_0_s_ifspec;

#ifndef __ID3D11ClassInstance_INTERFACE_DEFINED__
#define __ID3D11ClassInstance_INTERFACE_DEFINED__

    /* interface ID3D11ClassInstance */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11ClassInstance;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("a6cd7faa-b0b7-4a2f-9436-8662a65797cb")
        ID3D11ClassInstance : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE GetClassLinkage(
            /* [annotation] */
            __out  ID3D11ClassLinkage * *ppLinkage) = 0;

        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            __out  D3D11_CLASS_INSTANCE_DESC* pDesc) = 0;

        virtual void STDMETHODCALLTYPE GetInstanceName(
            /* [annotation] */
            __out_ecount_opt(*pBufferLength)  LPSTR pInstanceName,
            /* [annotation] */
            __inout  SIZE_T* pBufferLength) = 0;

        virtual void STDMETHODCALLTYPE GetTypeName(
            /* [annotation] */
            __out_ecount_opt(*pBufferLength)  LPSTR pTypeName,
            /* [annotation] */
            __inout  SIZE_T* pBufferLength) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11ClassInstanceVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11ClassInstance* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11ClassInstance* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11ClassInstance* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* GetClassLinkage)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __out  ID3D11ClassLinkage** ppLinkage);

        void (STDMETHODCALLTYPE* GetDesc)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __out  D3D11_CLASS_INSTANCE_DESC* pDesc);

        void (STDMETHODCALLTYPE* GetInstanceName)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __out_ecount_opt(*pBufferLength)  LPSTR pInstanceName,
            /* [annotation] */
            __inout  SIZE_T* pBufferLength);

        void (STDMETHODCALLTYPE* GetTypeName)(
            ID3D11ClassInstance* This,
            /* [annotation] */
            __out_ecount_opt(*pBufferLength)  LPSTR pTypeName,
            /* [annotation] */
            __inout  SIZE_T* pBufferLength);

        END_INTERFACE
    } ID3D11ClassInstanceVtbl;

    interface ID3D11ClassInstance
    {
        CONST_VTBL struct ID3D11ClassInstanceVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11ClassInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11ClassInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11ClassInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11ClassInstance_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11ClassInstance_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11ClassInstance_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11ClassInstance_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11ClassInstance_GetClassLinkage(This,ppLinkage)	\
    ( (This)->lpVtbl -> GetClassLinkage(This,ppLinkage) ) 

#define ID3D11ClassInstance_GetDesc(This,pDesc)	\
    ( (This)->lpVtbl -> GetDesc(This,pDesc) ) 

#define ID3D11ClassInstance_GetInstanceName(This,pInstanceName,pBufferLength)	\
    ( (This)->lpVtbl -> GetInstanceName(This,pInstanceName,pBufferLength) ) 

#define ID3D11ClassInstance_GetTypeName(This,pTypeName,pBufferLength)	\
    ( (This)->lpVtbl -> GetTypeName(This,pTypeName,pBufferLength) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11ClassInstance_INTERFACE_DEFINED__ */


#ifndef __ID3D11ClassLinkage_INTERFACE_DEFINED__
#define __ID3D11ClassLinkage_INTERFACE_DEFINED__

    /* interface ID3D11ClassLinkage */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11ClassLinkage;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ddf57cba-9543-46e4-a12b-f207a0fe7fed")
        ID3D11ClassLinkage : public ID3D11DeviceChild
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetClassInstance(
            /* [annotation] */
            __in  LPCSTR pClassInstanceName,
            /* [annotation] */
            __in  UINT InstanceIndex,
            /* [annotation] */
            __out  ID3D11ClassInstance * *ppInstance) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateClassInstance(
            /* [annotation] */
            __in  LPCSTR pClassTypeName,
            /* [annotation] */
            __in  UINT ConstantBufferOffset,
            /* [annotation] */
            __in  UINT ConstantVectorOffset,
            /* [annotation] */
            __in  UINT TextureOffset,
            /* [annotation] */
            __in  UINT SamplerOffset,
            /* [annotation] */
            __out  ID3D11ClassInstance** ppInstance) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11ClassLinkageVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11ClassLinkage* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11ClassLinkage* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11ClassLinkage* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11ClassLinkage* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11ClassLinkage* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11ClassLinkage* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11ClassLinkage* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        HRESULT(STDMETHODCALLTYPE* GetClassInstance)(
            ID3D11ClassLinkage* This,
            /* [annotation] */
            __in  LPCSTR pClassInstanceName,
            /* [annotation] */
            __in  UINT InstanceIndex,
            /* [annotation] */
            __out  ID3D11ClassInstance** ppInstance);

        HRESULT(STDMETHODCALLTYPE* CreateClassInstance)(
            ID3D11ClassLinkage* This,
            /* [annotation] */
            __in  LPCSTR pClassTypeName,
            /* [annotation] */
            __in  UINT ConstantBufferOffset,
            /* [annotation] */
            __in  UINT ConstantVectorOffset,
            /* [annotation] */
            __in  UINT TextureOffset,
            /* [annotation] */
            __in  UINT SamplerOffset,
            /* [annotation] */
            __out  ID3D11ClassInstance** ppInstance);

        END_INTERFACE
    } ID3D11ClassLinkageVtbl;

    interface ID3D11ClassLinkage
    {
        CONST_VTBL struct ID3D11ClassLinkageVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11ClassLinkage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11ClassLinkage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11ClassLinkage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11ClassLinkage_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11ClassLinkage_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11ClassLinkage_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11ClassLinkage_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11ClassLinkage_GetClassInstance(This,pClassInstanceName,InstanceIndex,ppInstance)	\
    ( (This)->lpVtbl -> GetClassInstance(This,pClassInstanceName,InstanceIndex,ppInstance) ) 

#define ID3D11ClassLinkage_CreateClassInstance(This,pClassTypeName,ConstantBufferOffset,ConstantVectorOffset,TextureOffset,SamplerOffset,ppInstance)	\
    ( (This)->lpVtbl -> CreateClassInstance(This,pClassTypeName,ConstantBufferOffset,ConstantVectorOffset,TextureOffset,SamplerOffset,ppInstance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11ClassLinkage_INTERFACE_DEFINED__ */


#ifndef __ID3D11CommandList_INTERFACE_DEFINED__
#define __ID3D11CommandList_INTERFACE_DEFINED__

    /* interface ID3D11CommandList */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11CommandList;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("a24bc4d1-769e-43f7-8013-98ff566c18e2")
        ID3D11CommandList : public ID3D11DeviceChild
    {
    public:
        virtual UINT STDMETHODCALLTYPE GetContextFlags(void) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11CommandListVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11CommandList* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11CommandList* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11CommandList* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11CommandList* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11CommandList* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11CommandList* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11CommandList* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        UINT(STDMETHODCALLTYPE* GetContextFlags)(
            ID3D11CommandList* This);

        END_INTERFACE
    } ID3D11CommandListVtbl;

    interface ID3D11CommandList
    {
        CONST_VTBL struct ID3D11CommandListVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11CommandList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11CommandList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11CommandList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11CommandList_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11CommandList_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11CommandList_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11CommandList_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11CommandList_GetContextFlags(This)	\
    ( (This)->lpVtbl -> GetContextFlags(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11CommandList_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0029 */
    /* [local] */

    typedef
        enum D3D11_FEATURE
    {
        D3D11_FEATURE_THREADING = 0,
        D3D11_FEATURE_DOUBLES = (D3D11_FEATURE_THREADING + 1),
        D3D11_FEATURE_FORMAT_SUPPORT = (D3D11_FEATURE_DOUBLES + 1),
        D3D11_FEATURE_FORMAT_SUPPORT2 = (D3D11_FEATURE_FORMAT_SUPPORT + 1),
        D3D11_FEATURE_D3D10_X_HARDWARE_OPTIONS = (D3D11_FEATURE_FORMAT_SUPPORT2 + 1)
    } 	D3D11_FEATURE;

    typedef struct D3D11_FEATURE_DATA_THREADING
    {
        BOOL DriverConcurrentCreates;
        BOOL DriverCommandLists;
    } 	D3D11_FEATURE_DATA_THREADING;

    typedef struct D3D11_FEATURE_DATA_DOUBLES
    {
        BOOL DoublePrecisionFloatShaderOps;
    } 	D3D11_FEATURE_DATA_DOUBLES;

    typedef struct D3D11_FEATURE_DATA_FORMAT_SUPPORT
    {
        DXGI_FORMAT InFormat;
        UINT OutFormatSupport;
    } 	D3D11_FEATURE_DATA_FORMAT_SUPPORT;

    typedef struct D3D11_FEATURE_DATA_FORMAT_SUPPORT2
    {
        DXGI_FORMAT InFormat;
        UINT OutFormatSupport2;
    } 	D3D11_FEATURE_DATA_FORMAT_SUPPORT2;

    typedef struct D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS
    {
        BOOL ComputeShaders_Plus_RawAndStructuredBuffers_Via_Shader_4_x;
    } 	D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS;



    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0029_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0029_v0_0_s_ifspec;

#ifndef __ID3D11DeviceContext_INTERFACE_DEFINED__
#define __ID3D11DeviceContext_INTERFACE_DEFINED__

    /* interface ID3D11DeviceContext */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11DeviceContext;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("c0bfa96c-e089-44fb-8eaf-26f8796190da")
        ID3D11DeviceContext : public ID3D11DeviceChild
    {
    public:
        virtual void STDMETHODCALLTYPE VSSetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE PSSetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE PSSetShader(
            /* [annotation] */
            __in_opt  ID3D11PixelShader* pPixelShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSSetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE VSSetShader(
            /* [annotation] */
            __in_opt  ID3D11VertexShader* pVertexShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexed(
            /* [annotation] */
            __in  UINT IndexCount,
            /* [annotation] */
            __in  UINT StartIndexLocation,
            /* [annotation] */
            __in  INT BaseVertexLocation) = 0;

        virtual void STDMETHODCALLTYPE Draw(
            /* [annotation] */
            __in  UINT VertexCount,
            /* [annotation] */
            __in  UINT StartVertexLocation) = 0;

        virtual HRESULT STDMETHODCALLTYPE Map(
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in  UINT Subresource,
            /* [annotation] */
            __in  D3D11_MAP MapType,
            /* [annotation] */
            __in  UINT MapFlags,
            /* [annotation] */
            __out  D3D11_MAPPED_SUBRESOURCE* pMappedResource) = 0;

        virtual void STDMETHODCALLTYPE Unmap(
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in  UINT Subresource) = 0;

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE IASetInputLayout(
            /* [annotation] */
            __in_opt  ID3D11InputLayout* pInputLayout) = 0;

        virtual void STDMETHODCALLTYPE IASetVertexBuffers(
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppVertexBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  const UINT* pStrides,
            /* [annotation] */
            __in_ecount(NumBuffers)  const UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE IASetIndexBuffer(
            /* [annotation] */
            __in_opt  ID3D11Buffer* pIndexBuffer,
            /* [annotation] */
            __in  DXGI_FORMAT Format,
            /* [annotation] */
            __in  UINT Offset) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexedInstanced(
            /* [annotation] */
            __in  UINT IndexCountPerInstance,
            /* [annotation] */
            __in  UINT InstanceCount,
            /* [annotation] */
            __in  UINT StartIndexLocation,
            /* [annotation] */
            __in  INT BaseVertexLocation,
            /* [annotation] */
            __in  UINT StartInstanceLocation) = 0;

        virtual void STDMETHODCALLTYPE DrawInstanced(
            /* [annotation] */
            __in  UINT VertexCountPerInstance,
            /* [annotation] */
            __in  UINT InstanceCount,
            /* [annotation] */
            __in  UINT StartVertexLocation,
            /* [annotation] */
            __in  UINT StartInstanceLocation) = 0;

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE GSSetShader(
            /* [annotation] */
            __in_opt  ID3D11GeometryShader* pShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE IASetPrimitiveTopology(
            /* [annotation] */
            __in  D3D11_PRIMITIVE_TOPOLOGY Topology) = 0;

        virtual void STDMETHODCALLTYPE VSSetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE VSSetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE Begin(
            /* [annotation] */
            __in  ID3D11Asynchronous* pAsync) = 0;

        virtual void STDMETHODCALLTYPE End(
            /* [annotation] */
            __in  ID3D11Asynchronous* pAsync) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetData(
            /* [annotation] */
            __in  ID3D11Asynchronous* pAsync,
            /* [annotation] */
            __out_bcount_opt(DataSize)  void* pData,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in  UINT GetDataFlags) = 0;

        virtual void STDMETHODCALLTYPE SetPredication(
            /* [annotation] */
            __in_opt  ID3D11Predicate* pPredicate,
            /* [annotation] */
            __in  BOOL PredicateValue) = 0;

        virtual void STDMETHODCALLTYPE GSSetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE GSSetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE OMSetRenderTargets(
            /* [annotation] */
            __in_range(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            __in_ecount_opt(NumViews)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            __in_opt  ID3D11DepthStencilView* pDepthStencilView) = 0;

        virtual void STDMETHODCALLTYPE OMSetRenderTargetsAndUnorderedAccessViews(
            /* [annotation] */
            __in  UINT NumRTVs,
            /* [annotation] */
            __in_ecount_opt(NumRTVs)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            __in_opt  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            __in  UINT NumUAVs,
            /* [annotation] */
            __in_ecount_opt(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            __in_ecount_opt(NumUAVs)  const UINT* pUAVInitialCounts) = 0;

        virtual void STDMETHODCALLTYPE OMSetBlendState(
            /* [annotation] */
            __in_opt  ID3D11BlendState* pBlendState,
            /* [annotation] */
            __in_opt  const FLOAT BlendFactor[4],
            /* [annotation] */
            __in  UINT SampleMask) = 0;

        virtual void STDMETHODCALLTYPE OMSetDepthStencilState(
            /* [annotation] */
            __in_opt  ID3D11DepthStencilState* pDepthStencilState,
            /* [annotation] */
            __in  UINT StencilRef) = 0;

        virtual void STDMETHODCALLTYPE SOSetTargets(
            /* [annotation] */
            __in_range(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount_opt(NumBuffers)  ID3D11Buffer* const* ppSOTargets,
            /* [annotation] */
            __in_ecount_opt(NumBuffers)  const UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE DrawAuto(void) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexedInstancedIndirect(
            /* [annotation] */
            __in  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            __in  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE DrawInstancedIndirect(
            /* [annotation] */
            __in  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            __in  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE Dispatch(
            /* [annotation] */
            __in  UINT ThreadGroupCountX,
            /* [annotation] */
            __in  UINT ThreadGroupCountY,
            /* [annotation] */
            __in  UINT ThreadGroupCountZ) = 0;

        virtual void STDMETHODCALLTYPE DispatchIndirect(
            /* [annotation] */
            __in  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            __in  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE RSSetState(
            /* [annotation] */
            __in_opt  ID3D11RasterizerState* pRasterizerState) = 0;

        virtual void STDMETHODCALLTYPE RSSetViewports(
            /* [annotation] */
            __in_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumViewports,
            /* [annotation] */
            __in_ecount_opt(NumViewports)  const D3D11_VIEWPORT* pViewports) = 0;

        virtual void STDMETHODCALLTYPE RSSetScissorRects(
            /* [annotation] */
            __in_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumRects,
            /* [annotation] */
            __in_ecount_opt(NumRects)  const D3D11_RECT* pRects) = 0;

        virtual void STDMETHODCALLTYPE CopySubresourceRegion(
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  UINT DstSubresource,
            /* [annotation] */
            __in  UINT DstX,
            /* [annotation] */
            __in  UINT DstY,
            /* [annotation] */
            __in  UINT DstZ,
            /* [annotation] */
            __in  ID3D11Resource* pSrcResource,
            /* [annotation] */
            __in  UINT SrcSubresource,
            /* [annotation] */
            __in_opt  const D3D11_BOX* pSrcBox) = 0;

        virtual void STDMETHODCALLTYPE CopyResource(
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  ID3D11Resource* pSrcResource) = 0;

        virtual void STDMETHODCALLTYPE UpdateSubresource(
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  UINT DstSubresource,
            /* [annotation] */
            __in_opt  const D3D11_BOX* pDstBox,
            /* [annotation] */
            __in  const void* pSrcData,
            /* [annotation] */
            __in  UINT SrcRowPitch,
            /* [annotation] */
            __in  UINT SrcDepthPitch) = 0;

        virtual void STDMETHODCALLTYPE CopyStructureCount(
            /* [annotation] */
            __in  ID3D11Buffer* pDstBuffer,
            /* [annotation] */
            __in  UINT DstAlignedByteOffset,
            /* [annotation] */
            __in  ID3D11UnorderedAccessView* pSrcView) = 0;

        virtual void STDMETHODCALLTYPE ClearRenderTargetView(
            /* [annotation] */
            __in  ID3D11RenderTargetView* pRenderTargetView,
            /* [annotation] */
            __in  const FLOAT ColorRGBA[4]) = 0;

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewUint(
            /* [annotation] */
            __in  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            __in  const UINT Values[4]) = 0;

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewFloat(
            /* [annotation] */
            __in  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            __in  const FLOAT Values[4]) = 0;

        virtual void STDMETHODCALLTYPE ClearDepthStencilView(
            /* [annotation] */
            __in  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            __in  UINT ClearFlags,
            /* [annotation] */
            __in  FLOAT Depth,
            /* [annotation] */
            __in  UINT8 Stencil) = 0;

        virtual void STDMETHODCALLTYPE GenerateMips(
            /* [annotation] */
            __in  ID3D11ShaderResourceView* pShaderResourceView) = 0;

        virtual void STDMETHODCALLTYPE SetResourceMinLOD(
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            FLOAT MinLOD) = 0;

        virtual FLOAT STDMETHODCALLTYPE GetResourceMinLOD(
            /* [annotation] */
            __in  ID3D11Resource* pResource) = 0;

        virtual void STDMETHODCALLTYPE ResolveSubresource(
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  UINT DstSubresource,
            /* [annotation] */
            __in  ID3D11Resource* pSrcResource,
            /* [annotation] */
            __in  UINT SrcSubresource,
            /* [annotation] */
            __in  DXGI_FORMAT Format) = 0;

        virtual void STDMETHODCALLTYPE ExecuteCommandList(
            /* [annotation] */
            __in  ID3D11CommandList* pCommandList,
            BOOL RestoreContextState) = 0;

        virtual void STDMETHODCALLTYPE HSSetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE HSSetShader(
            /* [annotation] */
            __in_opt  ID3D11HullShader* pHullShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE HSSetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE DSSetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE DSSetShader(
            /* [annotation] */
            __in_opt  ID3D11DomainShader* pDomainShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DSSetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE CSSetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE CSSetUnorderedAccessViews(
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            __in_ecount(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            __in_ecount(NumUAVs)  const UINT* pUAVInitialCounts) = 0;

        virtual void STDMETHODCALLTYPE CSSetShader(
            /* [annotation] */
            __in_opt  ID3D11ComputeShader* pComputeShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE CSSetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE PSGetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE PSGetShader(
            /* [annotation] */
            __out  ID3D11PixelShader** ppPixelShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSGetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE VSGetShader(
            /* [annotation] */
            __out  ID3D11VertexShader** ppVertexShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE IAGetInputLayout(
            /* [annotation] */
            __out  ID3D11InputLayout** ppInputLayout) = 0;

        virtual void STDMETHODCALLTYPE IAGetVertexBuffers(
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount_opt(NumBuffers)  ID3D11Buffer** ppVertexBuffers,
            /* [annotation] */
            __out_ecount_opt(NumBuffers)  UINT* pStrides,
            /* [annotation] */
            __out_ecount_opt(NumBuffers)  UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE IAGetIndexBuffer(
            /* [annotation] */
            __out_opt  ID3D11Buffer** pIndexBuffer,
            /* [annotation] */
            __out_opt  DXGI_FORMAT* Format,
            /* [annotation] */
            __out_opt  UINT* Offset) = 0;

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE GSGetShader(
            /* [annotation] */
            __out  ID3D11GeometryShader** ppGeometryShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE IAGetPrimitiveTopology(
            /* [annotation] */
            __out  D3D11_PRIMITIVE_TOPOLOGY* pTopology) = 0;

        virtual void STDMETHODCALLTYPE VSGetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE VSGetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE GetPredication(
            /* [annotation] */
            __out_opt  ID3D11Predicate** ppPredicate,
            /* [annotation] */
            __out_opt  BOOL* pPredicateValue) = 0;

        virtual void STDMETHODCALLTYPE GSGetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE GSGetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE OMGetRenderTargets(
            /* [annotation] */
            __in_range(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            __out_ecount_opt(NumViews)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilView** ppDepthStencilView) = 0;

        virtual void STDMETHODCALLTYPE OMGetRenderTargetsAndUnorderedAccessViews(
            /* [annotation] */
            __in_range(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumRTVs,
            /* [annotation] */
            __out_ecount_opt(NumRTVs)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilView** ppDepthStencilView,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot)  UINT NumUAVs,
            /* [annotation] */
            __out_ecount_opt(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) = 0;

        virtual void STDMETHODCALLTYPE OMGetBlendState(
            /* [annotation] */
            __out_opt  ID3D11BlendState** ppBlendState,
            /* [annotation] */
            __out_opt  FLOAT BlendFactor[4],
            /* [annotation] */
            __out_opt  UINT* pSampleMask) = 0;

        virtual void STDMETHODCALLTYPE OMGetDepthStencilState(
            /* [annotation] */
            __out_opt  ID3D11DepthStencilState** ppDepthStencilState,
            /* [annotation] */
            __out_opt  UINT* pStencilRef) = 0;

        virtual void STDMETHODCALLTYPE SOGetTargets(
            /* [annotation] */
            __in_range(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppSOTargets) = 0;

        virtual void STDMETHODCALLTYPE RSGetState(
            /* [annotation] */
            __out  ID3D11RasterizerState** ppRasterizerState) = 0;

        virtual void STDMETHODCALLTYPE RSGetViewports(
            /* [annotation] */
            __inout /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumViewports,
            /* [annotation] */
            __out_ecount_opt(*pNumViewports)  D3D11_VIEWPORT* pViewports) = 0;

        virtual void STDMETHODCALLTYPE RSGetScissorRects(
            /* [annotation] */
            __inout /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumRects,
            /* [annotation] */
            __out_ecount_opt(*pNumRects)  D3D11_RECT* pRects) = 0;

        virtual void STDMETHODCALLTYPE HSGetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE HSGetShader(
            /* [annotation] */
            __out  ID3D11HullShader** ppHullShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE HSGetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE DSGetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE DSGetShader(
            /* [annotation] */
            __out  ID3D11DomainShader** ppDomainShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DSGetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE CSGetShaderResources(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE CSGetUnorderedAccessViews(
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            __out_ecount(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) = 0;

        virtual void STDMETHODCALLTYPE CSGetShader(
            /* [annotation] */
            __out  ID3D11ComputeShader** ppComputeShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE CSGetSamplers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers(
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE ClearState(void) = 0;

        virtual void STDMETHODCALLTYPE Flush(void) = 0;

        virtual D3D11_DEVICE_CONTEXT_TYPE STDMETHODCALLTYPE GetType(void) = 0;

        virtual UINT STDMETHODCALLTYPE GetContextFlags(void) = 0;

        virtual HRESULT STDMETHODCALLTYPE FinishCommandList(
            BOOL RestoreDeferredContextState,
            /* [annotation] */
            __out_opt  ID3D11CommandList** ppCommandList) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11DeviceContextVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11DeviceContext* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11DeviceContext* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11DeviceContext* This);

        void (STDMETHODCALLTYPE* GetDevice)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11Device** ppDevice);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        void (STDMETHODCALLTYPE* VSSetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers);

        void (STDMETHODCALLTYPE* PSSetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews);

        void (STDMETHODCALLTYPE* PSSetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11PixelShader* pPixelShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances);

        void (STDMETHODCALLTYPE* PSSetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers);

        void (STDMETHODCALLTYPE* VSSetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11VertexShader* pVertexShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances);

        void (STDMETHODCALLTYPE* DrawIndexed)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  UINT IndexCount,
            /* [annotation] */
            __in  UINT StartIndexLocation,
            /* [annotation] */
            __in  INT BaseVertexLocation);

        void (STDMETHODCALLTYPE* Draw)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  UINT VertexCount,
            /* [annotation] */
            __in  UINT StartVertexLocation);

        HRESULT(STDMETHODCALLTYPE* Map)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in  UINT Subresource,
            /* [annotation] */
            __in  D3D11_MAP MapType,
            /* [annotation] */
            __in  UINT MapFlags,
            /* [annotation] */
            __out  D3D11_MAPPED_SUBRESOURCE* pMappedResource);

        void (STDMETHODCALLTYPE* Unmap)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in  UINT Subresource);

        void (STDMETHODCALLTYPE* PSSetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers);

        void (STDMETHODCALLTYPE* IASetInputLayout)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11InputLayout* pInputLayout);

        void (STDMETHODCALLTYPE* IASetVertexBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppVertexBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  const UINT* pStrides,
            /* [annotation] */
            __in_ecount(NumBuffers)  const UINT* pOffsets);

        void (STDMETHODCALLTYPE* IASetIndexBuffer)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11Buffer* pIndexBuffer,
            /* [annotation] */
            __in  DXGI_FORMAT Format,
            /* [annotation] */
            __in  UINT Offset);

        void (STDMETHODCALLTYPE* DrawIndexedInstanced)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  UINT IndexCountPerInstance,
            /* [annotation] */
            __in  UINT InstanceCount,
            /* [annotation] */
            __in  UINT StartIndexLocation,
            /* [annotation] */
            __in  INT BaseVertexLocation,
            /* [annotation] */
            __in  UINT StartInstanceLocation);

        void (STDMETHODCALLTYPE* DrawInstanced)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  UINT VertexCountPerInstance,
            /* [annotation] */
            __in  UINT InstanceCount,
            /* [annotation] */
            __in  UINT StartVertexLocation,
            /* [annotation] */
            __in  UINT StartInstanceLocation);

        void (STDMETHODCALLTYPE* GSSetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers);

        void (STDMETHODCALLTYPE* GSSetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11GeometryShader* pShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances);

        void (STDMETHODCALLTYPE* IASetPrimitiveTopology)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  D3D11_PRIMITIVE_TOPOLOGY Topology);

        void (STDMETHODCALLTYPE* VSSetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews);

        void (STDMETHODCALLTYPE* VSSetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers);

        void (STDMETHODCALLTYPE* Begin)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Asynchronous* pAsync);

        void (STDMETHODCALLTYPE* End)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Asynchronous* pAsync);

        HRESULT(STDMETHODCALLTYPE* GetData)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Asynchronous* pAsync,
            /* [annotation] */
            __out_bcount_opt(DataSize)  void* pData,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in  UINT GetDataFlags);

        void (STDMETHODCALLTYPE* SetPredication)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11Predicate* pPredicate,
            /* [annotation] */
            __in  BOOL PredicateValue);

        void (STDMETHODCALLTYPE* GSSetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews);

        void (STDMETHODCALLTYPE* GSSetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers);

        void (STDMETHODCALLTYPE* OMSetRenderTargets)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            __in_ecount_opt(NumViews)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            __in_opt  ID3D11DepthStencilView* pDepthStencilView);

        void (STDMETHODCALLTYPE* OMSetRenderTargetsAndUnorderedAccessViews)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  UINT NumRTVs,
            /* [annotation] */
            __in_ecount_opt(NumRTVs)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            __in_opt  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            __in  UINT NumUAVs,
            /* [annotation] */
            __in_ecount_opt(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            __in_ecount_opt(NumUAVs)  const UINT* pUAVInitialCounts);

        void (STDMETHODCALLTYPE* OMSetBlendState)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11BlendState* pBlendState,
            /* [annotation] */
            __in_opt  const FLOAT BlendFactor[4],
            /* [annotation] */
            __in  UINT SampleMask);

        void (STDMETHODCALLTYPE* OMSetDepthStencilState)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11DepthStencilState* pDepthStencilState,
            /* [annotation] */
            __in  UINT StencilRef);

        void (STDMETHODCALLTYPE* SOSetTargets)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount_opt(NumBuffers)  ID3D11Buffer* const* ppSOTargets,
            /* [annotation] */
            __in_ecount_opt(NumBuffers)  const UINT* pOffsets);

        void (STDMETHODCALLTYPE* DrawAuto)(
            ID3D11DeviceContext* This);

        void (STDMETHODCALLTYPE* DrawIndexedInstancedIndirect)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            __in  UINT AlignedByteOffsetForArgs);

        void (STDMETHODCALLTYPE* DrawInstancedIndirect)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            __in  UINT AlignedByteOffsetForArgs);

        void (STDMETHODCALLTYPE* Dispatch)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  UINT ThreadGroupCountX,
            /* [annotation] */
            __in  UINT ThreadGroupCountY,
            /* [annotation] */
            __in  UINT ThreadGroupCountZ);

        void (STDMETHODCALLTYPE* DispatchIndirect)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            __in  UINT AlignedByteOffsetForArgs);

        void (STDMETHODCALLTYPE* RSSetState)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11RasterizerState* pRasterizerState);

        void (STDMETHODCALLTYPE* RSSetViewports)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumViewports,
            /* [annotation] */
            __in_ecount_opt(NumViewports)  const D3D11_VIEWPORT* pViewports);

        void (STDMETHODCALLTYPE* RSSetScissorRects)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumRects,
            /* [annotation] */
            __in_ecount_opt(NumRects)  const D3D11_RECT* pRects);

        void (STDMETHODCALLTYPE* CopySubresourceRegion)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  UINT DstSubresource,
            /* [annotation] */
            __in  UINT DstX,
            /* [annotation] */
            __in  UINT DstY,
            /* [annotation] */
            __in  UINT DstZ,
            /* [annotation] */
            __in  ID3D11Resource* pSrcResource,
            /* [annotation] */
            __in  UINT SrcSubresource,
            /* [annotation] */
            __in_opt  const D3D11_BOX* pSrcBox);

        void (STDMETHODCALLTYPE* CopyResource)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  ID3D11Resource* pSrcResource);

        void (STDMETHODCALLTYPE* UpdateSubresource)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  UINT DstSubresource,
            /* [annotation] */
            __in_opt  const D3D11_BOX* pDstBox,
            /* [annotation] */
            __in  const void* pSrcData,
            /* [annotation] */
            __in  UINT SrcRowPitch,
            /* [annotation] */
            __in  UINT SrcDepthPitch);

        void (STDMETHODCALLTYPE* CopyStructureCount)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Buffer* pDstBuffer,
            /* [annotation] */
            __in  UINT DstAlignedByteOffset,
            /* [annotation] */
            __in  ID3D11UnorderedAccessView* pSrcView);

        void (STDMETHODCALLTYPE* ClearRenderTargetView)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11RenderTargetView* pRenderTargetView,
            /* [annotation] */
            __in  const FLOAT ColorRGBA[4]);

        void (STDMETHODCALLTYPE* ClearUnorderedAccessViewUint)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            __in  const UINT Values[4]);

        void (STDMETHODCALLTYPE* ClearUnorderedAccessViewFloat)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            __in  const FLOAT Values[4]);

        void (STDMETHODCALLTYPE* ClearDepthStencilView)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            __in  UINT ClearFlags,
            /* [annotation] */
            __in  FLOAT Depth,
            /* [annotation] */
            __in  UINT8 Stencil);

        void (STDMETHODCALLTYPE* GenerateMips)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11ShaderResourceView* pShaderResourceView);

        void (STDMETHODCALLTYPE* SetResourceMinLOD)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            FLOAT MinLOD);

        FLOAT(STDMETHODCALLTYPE* GetResourceMinLOD)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource);

        void (STDMETHODCALLTYPE* ResolveSubresource)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11Resource* pDstResource,
            /* [annotation] */
            __in  UINT DstSubresource,
            /* [annotation] */
            __in  ID3D11Resource* pSrcResource,
            /* [annotation] */
            __in  UINT SrcSubresource,
            /* [annotation] */
            __in  DXGI_FORMAT Format);

        void (STDMETHODCALLTYPE* ExecuteCommandList)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in  ID3D11CommandList* pCommandList,
            BOOL RestoreContextState);

        void (STDMETHODCALLTYPE* HSSetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews);

        void (STDMETHODCALLTYPE* HSSetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11HullShader* pHullShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances);

        void (STDMETHODCALLTYPE* HSSetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers);

        void (STDMETHODCALLTYPE* HSSetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers);

        void (STDMETHODCALLTYPE* DSSetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews);

        void (STDMETHODCALLTYPE* DSSetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11DomainShader* pDomainShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances);

        void (STDMETHODCALLTYPE* DSSetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers);

        void (STDMETHODCALLTYPE* DSSetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers);

        void (STDMETHODCALLTYPE* CSSetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __in_ecount(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews);

        void (STDMETHODCALLTYPE* CSSetUnorderedAccessViews)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            __in_ecount(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            __in_ecount(NumUAVs)  const UINT* pUAVInitialCounts);

        void (STDMETHODCALLTYPE* CSSetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_opt  ID3D11ComputeShader* pComputeShader,
            /* [annotation] */
            __in_ecount_opt(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances);

        void (STDMETHODCALLTYPE* CSSetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __in_ecount(NumSamplers)  ID3D11SamplerState* const* ppSamplers);

        void (STDMETHODCALLTYPE* CSSetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __in_ecount(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers);

        void (STDMETHODCALLTYPE* VSGetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers);

        void (STDMETHODCALLTYPE* PSGetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews);

        void (STDMETHODCALLTYPE* PSGetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11PixelShader** ppPixelShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances);

        void (STDMETHODCALLTYPE* PSGetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers);

        void (STDMETHODCALLTYPE* VSGetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11VertexShader** ppVertexShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances);

        void (STDMETHODCALLTYPE* PSGetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers);

        void (STDMETHODCALLTYPE* IAGetInputLayout)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11InputLayout** ppInputLayout);

        void (STDMETHODCALLTYPE* IAGetVertexBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount_opt(NumBuffers)  ID3D11Buffer** ppVertexBuffers,
            /* [annotation] */
            __out_ecount_opt(NumBuffers)  UINT* pStrides,
            /* [annotation] */
            __out_ecount_opt(NumBuffers)  UINT* pOffsets);

        void (STDMETHODCALLTYPE* IAGetIndexBuffer)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out_opt  ID3D11Buffer** pIndexBuffer,
            /* [annotation] */
            __out_opt  DXGI_FORMAT* Format,
            /* [annotation] */
            __out_opt  UINT* Offset);

        void (STDMETHODCALLTYPE* GSGetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers);

        void (STDMETHODCALLTYPE* GSGetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11GeometryShader** ppGeometryShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances);

        void (STDMETHODCALLTYPE* IAGetPrimitiveTopology)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  D3D11_PRIMITIVE_TOPOLOGY* pTopology);

        void (STDMETHODCALLTYPE* VSGetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews);

        void (STDMETHODCALLTYPE* VSGetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers);

        void (STDMETHODCALLTYPE* GetPredication)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out_opt  ID3D11Predicate** ppPredicate,
            /* [annotation] */
            __out_opt  BOOL* pPredicateValue);

        void (STDMETHODCALLTYPE* GSGetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews);

        void (STDMETHODCALLTYPE* GSGetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers);

        void (STDMETHODCALLTYPE* OMGetRenderTargets)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            __out_ecount_opt(NumViews)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilView** ppDepthStencilView);

        void (STDMETHODCALLTYPE* OMGetRenderTargetsAndUnorderedAccessViews)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumRTVs,
            /* [annotation] */
            __out_ecount_opt(NumRTVs)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilView** ppDepthStencilView,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot)  UINT NumUAVs,
            /* [annotation] */
            __out_ecount_opt(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews);

        void (STDMETHODCALLTYPE* OMGetBlendState)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out_opt  ID3D11BlendState** ppBlendState,
            /* [annotation] */
            __out_opt  FLOAT BlendFactor[4],
            /* [annotation] */
            __out_opt  UINT* pSampleMask);

        void (STDMETHODCALLTYPE* OMGetDepthStencilState)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilState** ppDepthStencilState,
            /* [annotation] */
            __out_opt  UINT* pStencilRef);

        void (STDMETHODCALLTYPE* SOGetTargets)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppSOTargets);

        void (STDMETHODCALLTYPE* RSGetState)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11RasterizerState** ppRasterizerState);

        void (STDMETHODCALLTYPE* RSGetViewports)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __inout /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumViewports,
            /* [annotation] */
            __out_ecount_opt(*pNumViewports)  D3D11_VIEWPORT* pViewports);

        void (STDMETHODCALLTYPE* RSGetScissorRects)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __inout /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumRects,
            /* [annotation] */
            __out_ecount_opt(*pNumRects)  D3D11_RECT* pRects);

        void (STDMETHODCALLTYPE* HSGetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews);

        void (STDMETHODCALLTYPE* HSGetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11HullShader** ppHullShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances);

        void (STDMETHODCALLTYPE* HSGetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers);

        void (STDMETHODCALLTYPE* HSGetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers);

        void (STDMETHODCALLTYPE* DSGetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews);

        void (STDMETHODCALLTYPE* DSGetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11DomainShader** ppDomainShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances);

        void (STDMETHODCALLTYPE* DSGetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers);

        void (STDMETHODCALLTYPE* DSGetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers);

        void (STDMETHODCALLTYPE* CSGetShaderResources)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            __out_ecount(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews);

        void (STDMETHODCALLTYPE* CSGetUnorderedAccessViews)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_PS_CS_UAV_REGISTER_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            __out_ecount(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews);

        void (STDMETHODCALLTYPE* CSGetShader)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __out  ID3D11ComputeShader** ppComputeShader,
            /* [annotation] */
            __out_ecount_opt(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            __inout_opt  UINT* pNumClassInstances);

        void (STDMETHODCALLTYPE* CSGetSamplers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            __out_ecount(NumSamplers)  ID3D11SamplerState** ppSamplers);

        void (STDMETHODCALLTYPE* CSGetConstantBuffers)(
            ID3D11DeviceContext* This,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            __in_range(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            __out_ecount(NumBuffers)  ID3D11Buffer** ppConstantBuffers);

        void (STDMETHODCALLTYPE* ClearState)(
            ID3D11DeviceContext* This);

        void (STDMETHODCALLTYPE* Flush)(
            ID3D11DeviceContext* This);

        D3D11_DEVICE_CONTEXT_TYPE(STDMETHODCALLTYPE* GetType)(
            ID3D11DeviceContext* This);

        UINT(STDMETHODCALLTYPE* GetContextFlags)(
            ID3D11DeviceContext* This);

        HRESULT(STDMETHODCALLTYPE* FinishCommandList)(
            ID3D11DeviceContext* This,
            BOOL RestoreDeferredContextState,
            /* [annotation] */
            __out_opt  ID3D11CommandList** ppCommandList);

        END_INTERFACE
    } ID3D11DeviceContextVtbl;

    interface ID3D11DeviceContext
    {
        CONST_VTBL struct ID3D11DeviceContextVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11DeviceContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11DeviceContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11DeviceContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11DeviceContext_GetDevice(This,ppDevice)	\
    ( (This)->lpVtbl -> GetDevice(This,ppDevice) ) 

#define ID3D11DeviceContext_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11DeviceContext_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11DeviceContext_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 


#define ID3D11DeviceContext_VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> VSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> PSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances)	\
    ( (This)->lpVtbl -> PSSetShader(This,pPixelShader,ppClassInstances,NumClassInstances) ) 

#define ID3D11DeviceContext_PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> PSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances)	\
    ( (This)->lpVtbl -> VSSetShader(This,pVertexShader,ppClassInstances,NumClassInstances) ) 

#define ID3D11DeviceContext_DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation)	\
    ( (This)->lpVtbl -> DrawIndexed(This,IndexCount,StartIndexLocation,BaseVertexLocation) ) 

#define ID3D11DeviceContext_Draw(This,VertexCount,StartVertexLocation)	\
    ( (This)->lpVtbl -> Draw(This,VertexCount,StartVertexLocation) ) 

#define ID3D11DeviceContext_Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource)	\
    ( (This)->lpVtbl -> Map(This,pResource,Subresource,MapType,MapFlags,pMappedResource) ) 

#define ID3D11DeviceContext_Unmap(This,pResource,Subresource)	\
    ( (This)->lpVtbl -> Unmap(This,pResource,Subresource) ) 

#define ID3D11DeviceContext_PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> PSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_IASetInputLayout(This,pInputLayout)	\
    ( (This)->lpVtbl -> IASetInputLayout(This,pInputLayout) ) 

#define ID3D11DeviceContext_IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets)	\
    ( (This)->lpVtbl -> IASetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ) 

#define ID3D11DeviceContext_IASetIndexBuffer(This,pIndexBuffer,Format,Offset)	\
    ( (This)->lpVtbl -> IASetIndexBuffer(This,pIndexBuffer,Format,Offset) ) 

#define ID3D11DeviceContext_DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation)	\
    ( (This)->lpVtbl -> DrawIndexedInstanced(This,IndexCountPerInstance,InstanceCount,StartIndexLocation,BaseVertexLocation,StartInstanceLocation) ) 

#define ID3D11DeviceContext_DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation)	\
    ( (This)->lpVtbl -> DrawInstanced(This,VertexCountPerInstance,InstanceCount,StartVertexLocation,StartInstanceLocation) ) 

#define ID3D11DeviceContext_GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> GSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_GSSetShader(This,pShader,ppClassInstances,NumClassInstances)	\
    ( (This)->lpVtbl -> GSSetShader(This,pShader,ppClassInstances,NumClassInstances) ) 

#define ID3D11DeviceContext_IASetPrimitiveTopology(This,Topology)	\
    ( (This)->lpVtbl -> IASetPrimitiveTopology(This,Topology) ) 

#define ID3D11DeviceContext_VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> VSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> VSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_Begin(This,pAsync)	\
    ( (This)->lpVtbl -> Begin(This,pAsync) ) 

#define ID3D11DeviceContext_End(This,pAsync)	\
    ( (This)->lpVtbl -> End(This,pAsync) ) 

#define ID3D11DeviceContext_GetData(This,pAsync,pData,DataSize,GetDataFlags)	\
    ( (This)->lpVtbl -> GetData(This,pAsync,pData,DataSize,GetDataFlags) ) 

#define ID3D11DeviceContext_SetPredication(This,pPredicate,PredicateValue)	\
    ( (This)->lpVtbl -> SetPredication(This,pPredicate,PredicateValue) ) 

#define ID3D11DeviceContext_GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> GSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> GSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView)	\
    ( (This)->lpVtbl -> OMSetRenderTargets(This,NumViews,ppRenderTargetViews,pDepthStencilView) ) 

#define ID3D11DeviceContext_OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts)	\
    ( (This)->lpVtbl -> OMSetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,pDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ) 

#define ID3D11DeviceContext_OMSetBlendState(This,pBlendState,BlendFactor,SampleMask)	\
    ( (This)->lpVtbl -> OMSetBlendState(This,pBlendState,BlendFactor,SampleMask) ) 

#define ID3D11DeviceContext_OMSetDepthStencilState(This,pDepthStencilState,StencilRef)	\
    ( (This)->lpVtbl -> OMSetDepthStencilState(This,pDepthStencilState,StencilRef) ) 

#define ID3D11DeviceContext_SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets)	\
    ( (This)->lpVtbl -> SOSetTargets(This,NumBuffers,ppSOTargets,pOffsets) ) 

#define ID3D11DeviceContext_DrawAuto(This)	\
    ( (This)->lpVtbl -> DrawAuto(This) ) 

#define ID3D11DeviceContext_DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs)	\
    ( (This)->lpVtbl -> DrawIndexedInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ) 

#define ID3D11DeviceContext_DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs)	\
    ( (This)->lpVtbl -> DrawInstancedIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ) 

#define ID3D11DeviceContext_Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ)	\
    ( (This)->lpVtbl -> Dispatch(This,ThreadGroupCountX,ThreadGroupCountY,ThreadGroupCountZ) ) 

#define ID3D11DeviceContext_DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs)	\
    ( (This)->lpVtbl -> DispatchIndirect(This,pBufferForArgs,AlignedByteOffsetForArgs) ) 

#define ID3D11DeviceContext_RSSetState(This,pRasterizerState)	\
    ( (This)->lpVtbl -> RSSetState(This,pRasterizerState) ) 

#define ID3D11DeviceContext_RSSetViewports(This,NumViewports,pViewports)	\
    ( (This)->lpVtbl -> RSSetViewports(This,NumViewports,pViewports) ) 

#define ID3D11DeviceContext_RSSetScissorRects(This,NumRects,pRects)	\
    ( (This)->lpVtbl -> RSSetScissorRects(This,NumRects,pRects) ) 

#define ID3D11DeviceContext_CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox)	\
    ( (This)->lpVtbl -> CopySubresourceRegion(This,pDstResource,DstSubresource,DstX,DstY,DstZ,pSrcResource,SrcSubresource,pSrcBox) ) 

#define ID3D11DeviceContext_CopyResource(This,pDstResource,pSrcResource)	\
    ( (This)->lpVtbl -> CopyResource(This,pDstResource,pSrcResource) ) 

#define ID3D11DeviceContext_UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch)	\
    ( (This)->lpVtbl -> UpdateSubresource(This,pDstResource,DstSubresource,pDstBox,pSrcData,SrcRowPitch,SrcDepthPitch) ) 

#define ID3D11DeviceContext_CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView)	\
    ( (This)->lpVtbl -> CopyStructureCount(This,pDstBuffer,DstAlignedByteOffset,pSrcView) ) 

#define ID3D11DeviceContext_ClearRenderTargetView(This,pRenderTargetView,ColorRGBA)	\
    ( (This)->lpVtbl -> ClearRenderTargetView(This,pRenderTargetView,ColorRGBA) ) 

#define ID3D11DeviceContext_ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values)	\
    ( (This)->lpVtbl -> ClearUnorderedAccessViewUint(This,pUnorderedAccessView,Values) ) 

#define ID3D11DeviceContext_ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values)	\
    ( (This)->lpVtbl -> ClearUnorderedAccessViewFloat(This,pUnorderedAccessView,Values) ) 

#define ID3D11DeviceContext_ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil)	\
    ( (This)->lpVtbl -> ClearDepthStencilView(This,pDepthStencilView,ClearFlags,Depth,Stencil) ) 

#define ID3D11DeviceContext_GenerateMips(This,pShaderResourceView)	\
    ( (This)->lpVtbl -> GenerateMips(This,pShaderResourceView) ) 

#define ID3D11DeviceContext_SetResourceMinLOD(This,pResource,MinLOD)	\
    ( (This)->lpVtbl -> SetResourceMinLOD(This,pResource,MinLOD) ) 

#define ID3D11DeviceContext_GetResourceMinLOD(This,pResource)	\
    ( (This)->lpVtbl -> GetResourceMinLOD(This,pResource) ) 

#define ID3D11DeviceContext_ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format)	\
    ( (This)->lpVtbl -> ResolveSubresource(This,pDstResource,DstSubresource,pSrcResource,SrcSubresource,Format) ) 

#define ID3D11DeviceContext_ExecuteCommandList(This,pCommandList,RestoreContextState)	\
    ( (This)->lpVtbl -> ExecuteCommandList(This,pCommandList,RestoreContextState) ) 

#define ID3D11DeviceContext_HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> HSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances)	\
    ( (This)->lpVtbl -> HSSetShader(This,pHullShader,ppClassInstances,NumClassInstances) ) 

#define ID3D11DeviceContext_HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> HSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> HSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> DSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances)	\
    ( (This)->lpVtbl -> DSSetShader(This,pDomainShader,ppClassInstances,NumClassInstances) ) 

#define ID3D11DeviceContext_DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> DSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> DSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> CSSetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts)	\
    ( (This)->lpVtbl -> CSSetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews,pUAVInitialCounts) ) 

#define ID3D11DeviceContext_CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances)	\
    ( (This)->lpVtbl -> CSSetShader(This,pComputeShader,ppClassInstances,NumClassInstances) ) 

#define ID3D11DeviceContext_CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> CSSetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> CSSetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> VSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> PSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances)	\
    ( (This)->lpVtbl -> PSGetShader(This,ppPixelShader,ppClassInstances,pNumClassInstances) ) 

#define ID3D11DeviceContext_PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> PSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances)	\
    ( (This)->lpVtbl -> VSGetShader(This,ppVertexShader,ppClassInstances,pNumClassInstances) ) 

#define ID3D11DeviceContext_PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> PSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_IAGetInputLayout(This,ppInputLayout)	\
    ( (This)->lpVtbl -> IAGetInputLayout(This,ppInputLayout) ) 

#define ID3D11DeviceContext_IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets)	\
    ( (This)->lpVtbl -> IAGetVertexBuffers(This,StartSlot,NumBuffers,ppVertexBuffers,pStrides,pOffsets) ) 

#define ID3D11DeviceContext_IAGetIndexBuffer(This,pIndexBuffer,Format,Offset)	\
    ( (This)->lpVtbl -> IAGetIndexBuffer(This,pIndexBuffer,Format,Offset) ) 

#define ID3D11DeviceContext_GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> GSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances)	\
    ( (This)->lpVtbl -> GSGetShader(This,ppGeometryShader,ppClassInstances,pNumClassInstances) ) 

#define ID3D11DeviceContext_IAGetPrimitiveTopology(This,pTopology)	\
    ( (This)->lpVtbl -> IAGetPrimitiveTopology(This,pTopology) ) 

#define ID3D11DeviceContext_VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> VSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> VSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_GetPredication(This,ppPredicate,pPredicateValue)	\
    ( (This)->lpVtbl -> GetPredication(This,ppPredicate,pPredicateValue) ) 

#define ID3D11DeviceContext_GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> GSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> GSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView)	\
    ( (This)->lpVtbl -> OMGetRenderTargets(This,NumViews,ppRenderTargetViews,ppDepthStencilView) ) 

#define ID3D11DeviceContext_OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews)	\
    ( (This)->lpVtbl -> OMGetRenderTargetsAndUnorderedAccessViews(This,NumRTVs,ppRenderTargetViews,ppDepthStencilView,UAVStartSlot,NumUAVs,ppUnorderedAccessViews) ) 

#define ID3D11DeviceContext_OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask)	\
    ( (This)->lpVtbl -> OMGetBlendState(This,ppBlendState,BlendFactor,pSampleMask) ) 

#define ID3D11DeviceContext_OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef)	\
    ( (This)->lpVtbl -> OMGetDepthStencilState(This,ppDepthStencilState,pStencilRef) ) 

#define ID3D11DeviceContext_SOGetTargets(This,NumBuffers,ppSOTargets)	\
    ( (This)->lpVtbl -> SOGetTargets(This,NumBuffers,ppSOTargets) ) 

#define ID3D11DeviceContext_RSGetState(This,ppRasterizerState)	\
    ( (This)->lpVtbl -> RSGetState(This,ppRasterizerState) ) 

#define ID3D11DeviceContext_RSGetViewports(This,pNumViewports,pViewports)	\
    ( (This)->lpVtbl -> RSGetViewports(This,pNumViewports,pViewports) ) 

#define ID3D11DeviceContext_RSGetScissorRects(This,pNumRects,pRects)	\
    ( (This)->lpVtbl -> RSGetScissorRects(This,pNumRects,pRects) ) 

#define ID3D11DeviceContext_HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> HSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances)	\
    ( (This)->lpVtbl -> HSGetShader(This,ppHullShader,ppClassInstances,pNumClassInstances) ) 

#define ID3D11DeviceContext_HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> HSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> HSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> DSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances)	\
    ( (This)->lpVtbl -> DSGetShader(This,ppDomainShader,ppClassInstances,pNumClassInstances) ) 

#define ID3D11DeviceContext_DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> DSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> DSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews)	\
    ( (This)->lpVtbl -> CSGetShaderResources(This,StartSlot,NumViews,ppShaderResourceViews) ) 

#define ID3D11DeviceContext_CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews)	\
    ( (This)->lpVtbl -> CSGetUnorderedAccessViews(This,StartSlot,NumUAVs,ppUnorderedAccessViews) ) 

#define ID3D11DeviceContext_CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances)	\
    ( (This)->lpVtbl -> CSGetShader(This,ppComputeShader,ppClassInstances,pNumClassInstances) ) 

#define ID3D11DeviceContext_CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers)	\
    ( (This)->lpVtbl -> CSGetSamplers(This,StartSlot,NumSamplers,ppSamplers) ) 

#define ID3D11DeviceContext_CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers)	\
    ( (This)->lpVtbl -> CSGetConstantBuffers(This,StartSlot,NumBuffers,ppConstantBuffers) ) 

#define ID3D11DeviceContext_ClearState(This)	\
    ( (This)->lpVtbl -> ClearState(This) ) 

#define ID3D11DeviceContext_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define ID3D11DeviceContext_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define ID3D11DeviceContext_GetContextFlags(This)	\
    ( (This)->lpVtbl -> GetContextFlags(This) ) 

#define ID3D11DeviceContext_FinishCommandList(This,RestoreDeferredContextState,ppCommandList)	\
    ( (This)->lpVtbl -> FinishCommandList(This,RestoreDeferredContextState,ppCommandList) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11DeviceContext_INTERFACE_DEFINED__ */


#ifndef __ID3D11Device_INTERFACE_DEFINED__
#define __ID3D11Device_INTERFACE_DEFINED__

    /* interface ID3D11Device */
    /* [unique][local][object][uuid] */


    EXTERN_C const IID IID_ID3D11Device;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("db6f6ddb-ac77-4e88-8253-819df9bbf140")
        ID3D11Device : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateBuffer(
            /* [annotation] */
            __in  const D3D11_BUFFER_DESC * pDesc,
            /* [annotation] */
            __in_opt  const D3D11_SUBRESOURCE_DATA * pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Buffer * *ppBuffer) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateTexture1D(
            /* [annotation] */
            __in  const D3D11_TEXTURE1D_DESC* pDesc,
            /* [annotation] */
            __in_xcount_opt(pDesc->MipLevels* pDesc->ArraySize)  const D3D11_SUBRESOURCE_DATA* pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Texture1D** ppTexture1D) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateTexture2D(
            /* [annotation] */
            __in  const D3D11_TEXTURE2D_DESC* pDesc,
            /* [annotation] */
            __in_xcount_opt(pDesc->MipLevels* pDesc->ArraySize)  const D3D11_SUBRESOURCE_DATA* pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Texture2D** ppTexture2D) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateTexture3D(
            /* [annotation] */
            __in  const D3D11_TEXTURE3D_DESC* pDesc,
            /* [annotation] */
            __in_xcount_opt(pDesc->MipLevels)  const D3D11_SUBRESOURCE_DATA* pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Texture3D** ppTexture3D) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateShaderResourceView(
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11ShaderResourceView** ppSRView) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateUnorderedAccessView(
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11UnorderedAccessView** ppUAView) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateRenderTargetView(
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_RENDER_TARGET_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11RenderTargetView** ppRTView) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateDepthStencilView(
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilView** ppDepthStencilView) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateInputLayout(
            /* [annotation] */
            __in_ecount(NumElements)  const D3D11_INPUT_ELEMENT_DESC* pInputElementDescs,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT)  UINT NumElements,
            /* [annotation] */
            __in  const void* pShaderBytecodeWithInputSignature,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __out_opt  ID3D11InputLayout** ppInputLayout) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateVertexShader(
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11VertexShader** ppVertexShader) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateGeometryShader(
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11GeometryShader** ppGeometryShader) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateGeometryShaderWithStreamOutput(
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_ecount_opt(NumEntries)  const D3D11_SO_DECLARATION_ENTRY* pSODeclaration,
            /* [annotation] */
            __in_range(0, D3D11_SO_STREAM_COUNT* D3D11_SO_OUTPUT_COMPONENT_COUNT)  UINT NumEntries,
            /* [annotation] */
            __in_ecount_opt(NumStrides)  const UINT* pBufferStrides,
            /* [annotation] */
            __in_range(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumStrides,
            /* [annotation] */
            __in  UINT RasterizedStream,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11GeometryShader** ppGeometryShader) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreatePixelShader(
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11PixelShader** ppPixelShader) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateHullShader(
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11HullShader** ppHullShader) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateDomainShader(
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11DomainShader** ppDomainShader) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateComputeShader(
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11ComputeShader** ppComputeShader) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateClassLinkage(
            /* [annotation] */
            __out  ID3D11ClassLinkage** ppLinkage) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateBlendState(
            /* [annotation] */
            __in  const D3D11_BLEND_DESC* pBlendStateDesc,
            /* [annotation] */
            __out_opt  ID3D11BlendState** ppBlendState) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateDepthStencilState(
            /* [annotation] */
            __in  const D3D11_DEPTH_STENCIL_DESC* pDepthStencilDesc,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilState** ppDepthStencilState) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateRasterizerState(
            /* [annotation] */
            __in  const D3D11_RASTERIZER_DESC* pRasterizerDesc,
            /* [annotation] */
            __out_opt  ID3D11RasterizerState** ppRasterizerState) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateSamplerState(
            /* [annotation] */
            __in  const D3D11_SAMPLER_DESC* pSamplerDesc,
            /* [annotation] */
            __out_opt  ID3D11SamplerState** ppSamplerState) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateQuery(
            /* [annotation] */
            __in  const D3D11_QUERY_DESC* pQueryDesc,
            /* [annotation] */
            __out_opt  ID3D11Query** ppQuery) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreatePredicate(
            /* [annotation] */
            __in  const D3D11_QUERY_DESC* pPredicateDesc,
            /* [annotation] */
            __out_opt  ID3D11Predicate** ppPredicate) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateCounter(
            /* [annotation] */
            __in  const D3D11_COUNTER_DESC* pCounterDesc,
            /* [annotation] */
            __out_opt  ID3D11Counter** ppCounter) = 0;

        virtual HRESULT STDMETHODCALLTYPE CreateDeferredContext(
            UINT ContextFlags,
            /* [annotation] */
            __out_opt  ID3D11DeviceContext** ppDeferredContext) = 0;

        virtual HRESULT STDMETHODCALLTYPE OpenSharedResource(
            /* [annotation] */
            __in  HANDLE hResource,
            /* [annotation] */
            __in  REFIID ReturnedInterface,
            /* [annotation] */
            __out_opt  void** ppResource) = 0;

        virtual HRESULT STDMETHODCALLTYPE CheckFormatSupport(
            /* [annotation] */
            __in  DXGI_FORMAT Format,
            /* [annotation] */
            __out  UINT* pFormatSupport) = 0;

        virtual HRESULT STDMETHODCALLTYPE CheckMultisampleQualityLevels(
            /* [annotation] */
            __in  DXGI_FORMAT Format,
            /* [annotation] */
            __in  UINT SampleCount,
            /* [annotation] */
            __out  UINT* pNumQualityLevels) = 0;

        virtual void STDMETHODCALLTYPE CheckCounterInfo(
            /* [annotation] */
            __out  D3D11_COUNTER_INFO* pCounterInfo) = 0;

        virtual HRESULT STDMETHODCALLTYPE CheckCounter(
            /* [annotation] */
            __in  const D3D11_COUNTER_DESC* pDesc,
            /* [annotation] */
            __out  D3D11_COUNTER_TYPE* pType,
            /* [annotation] */
            __out  UINT* pActiveCounters,
            /* [annotation] */
            __out_ecount_opt(*pNameLength)  LPSTR szName,
            /* [annotation] */
            __inout_opt  UINT* pNameLength,
            /* [annotation] */
            __out_ecount_opt(*pUnitsLength)  LPSTR szUnits,
            /* [annotation] */
            __inout_opt  UINT* pUnitsLength,
            /* [annotation] */
            __out_ecount_opt(*pDescriptionLength)  LPSTR szDescription,
            /* [annotation] */
            __inout_opt  UINT* pDescriptionLength) = 0;

        virtual HRESULT STDMETHODCALLTYPE CheckFeatureSupport(
            D3D11_FEATURE Feature,
            /* [annotation] */
            __out_bcount(FeatureSupportDataSize)  void* pFeatureSupportData,
            UINT FeatureSupportDataSize) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetPrivateData(
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPrivateData(
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData) = 0;

        virtual D3D_FEATURE_LEVEL STDMETHODCALLTYPE GetFeatureLevel(void) = 0;

        virtual UINT STDMETHODCALLTYPE GetCreationFlags(void) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetDeviceRemovedReason(void) = 0;

        virtual void STDMETHODCALLTYPE GetImmediateContext(
            /* [annotation] */
            __out  ID3D11DeviceContext** ppImmediateContext) = 0;

        virtual HRESULT STDMETHODCALLTYPE SetExceptionMode(
            UINT RaiseFlags) = 0;

        virtual UINT STDMETHODCALLTYPE GetExceptionMode(void) = 0;

    };

#else 	/* C style interface */

    typedef struct ID3D11DeviceVtbl
    {
        BEGIN_INTERFACE

            HRESULT(STDMETHODCALLTYPE* QueryInterface)(
                ID3D11Device* This,
                /* [in] */ REFIID riid,
                /* [annotation][iid_is][out] */
                __RPC__deref_out  void** ppvObject);

        ULONG(STDMETHODCALLTYPE* AddRef)(
            ID3D11Device* This);

        ULONG(STDMETHODCALLTYPE* Release)(
            ID3D11Device* This);

        HRESULT(STDMETHODCALLTYPE* CreateBuffer)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_BUFFER_DESC* pDesc,
            /* [annotation] */
            __in_opt  const D3D11_SUBRESOURCE_DATA* pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Buffer** ppBuffer);

        HRESULT(STDMETHODCALLTYPE* CreateTexture1D)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_TEXTURE1D_DESC* pDesc,
            /* [annotation] */
            __in_xcount_opt(pDesc->MipLevels* pDesc->ArraySize)  const D3D11_SUBRESOURCE_DATA* pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Texture1D** ppTexture1D);

        HRESULT(STDMETHODCALLTYPE* CreateTexture2D)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_TEXTURE2D_DESC* pDesc,
            /* [annotation] */
            __in_xcount_opt(pDesc->MipLevels* pDesc->ArraySize)  const D3D11_SUBRESOURCE_DATA* pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Texture2D** ppTexture2D);

        HRESULT(STDMETHODCALLTYPE* CreateTexture3D)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_TEXTURE3D_DESC* pDesc,
            /* [annotation] */
            __in_xcount_opt(pDesc->MipLevels)  const D3D11_SUBRESOURCE_DATA* pInitialData,
            /* [annotation] */
            __out_opt  ID3D11Texture3D** ppTexture3D);

        HRESULT(STDMETHODCALLTYPE* CreateShaderResourceView)(
            ID3D11Device* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11ShaderResourceView** ppSRView);

        HRESULT(STDMETHODCALLTYPE* CreateUnorderedAccessView)(
            ID3D11Device* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11UnorderedAccessView** ppUAView);

        HRESULT(STDMETHODCALLTYPE* CreateRenderTargetView)(
            ID3D11Device* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_RENDER_TARGET_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11RenderTargetView** ppRTView);

        HRESULT(STDMETHODCALLTYPE* CreateDepthStencilView)(
            ID3D11Device* This,
            /* [annotation] */
            __in  ID3D11Resource* pResource,
            /* [annotation] */
            __in_opt  const D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilView** ppDepthStencilView);

        HRESULT(STDMETHODCALLTYPE* CreateInputLayout)(
            ID3D11Device* This,
            /* [annotation] */
            __in_ecount(NumElements)  const D3D11_INPUT_ELEMENT_DESC* pInputElementDescs,
            /* [annotation] */
            __in_range(0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT)  UINT NumElements,
            /* [annotation] */
            __in  const void* pShaderBytecodeWithInputSignature,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __out_opt  ID3D11InputLayout** ppInputLayout);

        HRESULT(STDMETHODCALLTYPE* CreateVertexShader)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11VertexShader** ppVertexShader);

        HRESULT(STDMETHODCALLTYPE* CreateGeometryShader)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11GeometryShader** ppGeometryShader);

        HRESULT(STDMETHODCALLTYPE* CreateGeometryShaderWithStreamOutput)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_ecount_opt(NumEntries)  const D3D11_SO_DECLARATION_ENTRY* pSODeclaration,
            /* [annotation] */
            __in_range(0, D3D11_SO_STREAM_COUNT* D3D11_SO_OUTPUT_COMPONENT_COUNT)  UINT NumEntries,
            /* [annotation] */
            __in_ecount_opt(NumStrides)  const UINT* pBufferStrides,
            /* [annotation] */
            __in_range(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumStrides,
            /* [annotation] */
            __in  UINT RasterizedStream,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11GeometryShader** ppGeometryShader);

        HRESULT(STDMETHODCALLTYPE* CreatePixelShader)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11PixelShader** ppPixelShader);

        HRESULT(STDMETHODCALLTYPE* CreateHullShader)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11HullShader** ppHullShader);

        HRESULT(STDMETHODCALLTYPE* CreateDomainShader)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11DomainShader** ppDomainShader);

        HRESULT(STDMETHODCALLTYPE* CreateComputeShader)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const void* pShaderBytecode,
            /* [annotation] */
            __in  SIZE_T BytecodeLength,
            /* [annotation] */
            __in_opt  ID3D11ClassLinkage* pClassLinkage,
            /* [annotation] */
            __out_opt  ID3D11ComputeShader** ppComputeShader);

        HRESULT(STDMETHODCALLTYPE* CreateClassLinkage)(
            ID3D11Device* This,
            /* [annotation] */
            __out  ID3D11ClassLinkage** ppLinkage);

        HRESULT(STDMETHODCALLTYPE* CreateBlendState)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_BLEND_DESC* pBlendStateDesc,
            /* [annotation] */
            __out_opt  ID3D11BlendState** ppBlendState);

        HRESULT(STDMETHODCALLTYPE* CreateDepthStencilState)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_DEPTH_STENCIL_DESC* pDepthStencilDesc,
            /* [annotation] */
            __out_opt  ID3D11DepthStencilState** ppDepthStencilState);

        HRESULT(STDMETHODCALLTYPE* CreateRasterizerState)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_RASTERIZER_DESC* pRasterizerDesc,
            /* [annotation] */
            __out_opt  ID3D11RasterizerState** ppRasterizerState);

        HRESULT(STDMETHODCALLTYPE* CreateSamplerState)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_SAMPLER_DESC* pSamplerDesc,
            /* [annotation] */
            __out_opt  ID3D11SamplerState** ppSamplerState);

        HRESULT(STDMETHODCALLTYPE* CreateQuery)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_QUERY_DESC* pQueryDesc,
            /* [annotation] */
            __out_opt  ID3D11Query** ppQuery);

        HRESULT(STDMETHODCALLTYPE* CreatePredicate)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_QUERY_DESC* pPredicateDesc,
            /* [annotation] */
            __out_opt  ID3D11Predicate** ppPredicate);

        HRESULT(STDMETHODCALLTYPE* CreateCounter)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_COUNTER_DESC* pCounterDesc,
            /* [annotation] */
            __out_opt  ID3D11Counter** ppCounter);

        HRESULT(STDMETHODCALLTYPE* CreateDeferredContext)(
            ID3D11Device* This,
            UINT ContextFlags,
            /* [annotation] */
            __out_opt  ID3D11DeviceContext** ppDeferredContext);

        HRESULT(STDMETHODCALLTYPE* OpenSharedResource)(
            ID3D11Device* This,
            /* [annotation] */
            __in  HANDLE hResource,
            /* [annotation] */
            __in  REFIID ReturnedInterface,
            /* [annotation] */
            __out_opt  void** ppResource);

        HRESULT(STDMETHODCALLTYPE* CheckFormatSupport)(
            ID3D11Device* This,
            /* [annotation] */
            __in  DXGI_FORMAT Format,
            /* [annotation] */
            __out  UINT* pFormatSupport);

        HRESULT(STDMETHODCALLTYPE* CheckMultisampleQualityLevels)(
            ID3D11Device* This,
            /* [annotation] */
            __in  DXGI_FORMAT Format,
            /* [annotation] */
            __in  UINT SampleCount,
            /* [annotation] */
            __out  UINT* pNumQualityLevels);

        void (STDMETHODCALLTYPE* CheckCounterInfo)(
            ID3D11Device* This,
            /* [annotation] */
            __out  D3D11_COUNTER_INFO* pCounterInfo);

        HRESULT(STDMETHODCALLTYPE* CheckCounter)(
            ID3D11Device* This,
            /* [annotation] */
            __in  const D3D11_COUNTER_DESC* pDesc,
            /* [annotation] */
            __out  D3D11_COUNTER_TYPE* pType,
            /* [annotation] */
            __out  UINT* pActiveCounters,
            /* [annotation] */
            __out_ecount_opt(*pNameLength)  LPSTR szName,
            /* [annotation] */
            __inout_opt  UINT* pNameLength,
            /* [annotation] */
            __out_ecount_opt(*pUnitsLength)  LPSTR szUnits,
            /* [annotation] */
            __inout_opt  UINT* pUnitsLength,
            /* [annotation] */
            __out_ecount_opt(*pDescriptionLength)  LPSTR szDescription,
            /* [annotation] */
            __inout_opt  UINT* pDescriptionLength);

        HRESULT(STDMETHODCALLTYPE* CheckFeatureSupport)(
            ID3D11Device* This,
            D3D11_FEATURE Feature,
            /* [annotation] */
            __out_bcount(FeatureSupportDataSize)  void* pFeatureSupportData,
            UINT FeatureSupportDataSize);

        HRESULT(STDMETHODCALLTYPE* GetPrivateData)(
            ID3D11Device* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __inout  UINT* pDataSize,
            /* [annotation] */
            __out_bcount_opt(*pDataSize)  void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateData)(
            ID3D11Device* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in  UINT DataSize,
            /* [annotation] */
            __in_bcount_opt(DataSize)  const void* pData);

        HRESULT(STDMETHODCALLTYPE* SetPrivateDataInterface)(
            ID3D11Device* This,
            /* [annotation] */
            __in  REFGUID guid,
            /* [annotation] */
            __in_opt  const IUnknown* pData);

        D3D_FEATURE_LEVEL(STDMETHODCALLTYPE* GetFeatureLevel)(
            ID3D11Device* This);

        UINT(STDMETHODCALLTYPE* GetCreationFlags)(
            ID3D11Device* This);

        HRESULT(STDMETHODCALLTYPE* GetDeviceRemovedReason)(
            ID3D11Device* This);

        void (STDMETHODCALLTYPE* GetImmediateContext)(
            ID3D11Device* This,
            /* [annotation] */
            __out  ID3D11DeviceContext** ppImmediateContext);

        HRESULT(STDMETHODCALLTYPE* SetExceptionMode)(
            ID3D11Device* This,
            UINT RaiseFlags);

        UINT(STDMETHODCALLTYPE* GetExceptionMode)(
            ID3D11Device* This);

        END_INTERFACE
    } ID3D11DeviceVtbl;

    interface ID3D11Device
    {
        CONST_VTBL struct ID3D11DeviceVtbl* lpVtbl;
    };



#ifdef COBJMACROS


#define ID3D11Device_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ID3D11Device_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ID3D11Device_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ID3D11Device_CreateBuffer(This,pDesc,pInitialData,ppBuffer)	\
    ( (This)->lpVtbl -> CreateBuffer(This,pDesc,pInitialData,ppBuffer) ) 

#define ID3D11Device_CreateTexture1D(This,pDesc,pInitialData,ppTexture1D)	\
    ( (This)->lpVtbl -> CreateTexture1D(This,pDesc,pInitialData,ppTexture1D) ) 

#define ID3D11Device_CreateTexture2D(This,pDesc,pInitialData,ppTexture2D)	\
    ( (This)->lpVtbl -> CreateTexture2D(This,pDesc,pInitialData,ppTexture2D) ) 

#define ID3D11Device_CreateTexture3D(This,pDesc,pInitialData,ppTexture3D)	\
    ( (This)->lpVtbl -> CreateTexture3D(This,pDesc,pInitialData,ppTexture3D) ) 

#define ID3D11Device_CreateShaderResourceView(This,pResource,pDesc,ppSRView)	\
    ( (This)->lpVtbl -> CreateShaderResourceView(This,pResource,pDesc,ppSRView) ) 

#define ID3D11Device_CreateUnorderedAccessView(This,pResource,pDesc,ppUAView)	\
    ( (This)->lpVtbl -> CreateUnorderedAccessView(This,pResource,pDesc,ppUAView) ) 

#define ID3D11Device_CreateRenderTargetView(This,pResource,pDesc,ppRTView)	\
    ( (This)->lpVtbl -> CreateRenderTargetView(This,pResource,pDesc,ppRTView) ) 

#define ID3D11Device_CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView)	\
    ( (This)->lpVtbl -> CreateDepthStencilView(This,pResource,pDesc,ppDepthStencilView) ) 

#define ID3D11Device_CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout)	\
    ( (This)->lpVtbl -> CreateInputLayout(This,pInputElementDescs,NumElements,pShaderBytecodeWithInputSignature,BytecodeLength,ppInputLayout) ) 

#define ID3D11Device_CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader)	\
    ( (This)->lpVtbl -> CreateVertexShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppVertexShader) ) 

#define ID3D11Device_CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader)	\
    ( (This)->lpVtbl -> CreateGeometryShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppGeometryShader) ) 

#define ID3D11Device_CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader)	\
    ( (This)->lpVtbl -> CreateGeometryShaderWithStreamOutput(This,pShaderBytecode,BytecodeLength,pSODeclaration,NumEntries,pBufferStrides,NumStrides,RasterizedStream,pClassLinkage,ppGeometryShader) ) 

#define ID3D11Device_CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader)	\
    ( (This)->lpVtbl -> CreatePixelShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppPixelShader) ) 

#define ID3D11Device_CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader)	\
    ( (This)->lpVtbl -> CreateHullShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppHullShader) ) 

#define ID3D11Device_CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader)	\
    ( (This)->lpVtbl -> CreateDomainShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppDomainShader) ) 

#define ID3D11Device_CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader)	\
    ( (This)->lpVtbl -> CreateComputeShader(This,pShaderBytecode,BytecodeLength,pClassLinkage,ppComputeShader) ) 

#define ID3D11Device_CreateClassLinkage(This,ppLinkage)	\
    ( (This)->lpVtbl -> CreateClassLinkage(This,ppLinkage) ) 

#define ID3D11Device_CreateBlendState(This,pBlendStateDesc,ppBlendState)	\
    ( (This)->lpVtbl -> CreateBlendState(This,pBlendStateDesc,ppBlendState) ) 

#define ID3D11Device_CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState)	\
    ( (This)->lpVtbl -> CreateDepthStencilState(This,pDepthStencilDesc,ppDepthStencilState) ) 

#define ID3D11Device_CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState)	\
    ( (This)->lpVtbl -> CreateRasterizerState(This,pRasterizerDesc,ppRasterizerState) ) 

#define ID3D11Device_CreateSamplerState(This,pSamplerDesc,ppSamplerState)	\
    ( (This)->lpVtbl -> CreateSamplerState(This,pSamplerDesc,ppSamplerState) ) 

#define ID3D11Device_CreateQuery(This,pQueryDesc,ppQuery)	\
    ( (This)->lpVtbl -> CreateQuery(This,pQueryDesc,ppQuery) ) 

#define ID3D11Device_CreatePredicate(This,pPredicateDesc,ppPredicate)	\
    ( (This)->lpVtbl -> CreatePredicate(This,pPredicateDesc,ppPredicate) ) 

#define ID3D11Device_CreateCounter(This,pCounterDesc,ppCounter)	\
    ( (This)->lpVtbl -> CreateCounter(This,pCounterDesc,ppCounter) ) 

#define ID3D11Device_CreateDeferredContext(This,ContextFlags,ppDeferredContext)	\
    ( (This)->lpVtbl -> CreateDeferredContext(This,ContextFlags,ppDeferredContext) ) 

#define ID3D11Device_OpenSharedResource(This,hResource,ReturnedInterface,ppResource)	\
    ( (This)->lpVtbl -> OpenSharedResource(This,hResource,ReturnedInterface,ppResource) ) 

#define ID3D11Device_CheckFormatSupport(This,Format,pFormatSupport)	\
    ( (This)->lpVtbl -> CheckFormatSupport(This,Format,pFormatSupport) ) 

#define ID3D11Device_CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels)	\
    ( (This)->lpVtbl -> CheckMultisampleQualityLevels(This,Format,SampleCount,pNumQualityLevels) ) 

#define ID3D11Device_CheckCounterInfo(This,pCounterInfo)	\
    ( (This)->lpVtbl -> CheckCounterInfo(This,pCounterInfo) ) 

#define ID3D11Device_CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength)	\
    ( (This)->lpVtbl -> CheckCounter(This,pDesc,pType,pActiveCounters,szName,pNameLength,szUnits,pUnitsLength,szDescription,pDescriptionLength) ) 

#define ID3D11Device_CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize)	\
    ( (This)->lpVtbl -> CheckFeatureSupport(This,Feature,pFeatureSupportData,FeatureSupportDataSize) ) 

#define ID3D11Device_GetPrivateData(This,guid,pDataSize,pData)	\
    ( (This)->lpVtbl -> GetPrivateData(This,guid,pDataSize,pData) ) 

#define ID3D11Device_SetPrivateData(This,guid,DataSize,pData)	\
    ( (This)->lpVtbl -> SetPrivateData(This,guid,DataSize,pData) ) 

#define ID3D11Device_SetPrivateDataInterface(This,guid,pData)	\
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,guid,pData) ) 

#define ID3D11Device_GetFeatureLevel(This)	\
    ( (This)->lpVtbl -> GetFeatureLevel(This) ) 

#define ID3D11Device_GetCreationFlags(This)	\
    ( (This)->lpVtbl -> GetCreationFlags(This) ) 

#define ID3D11Device_GetDeviceRemovedReason(This)	\
    ( (This)->lpVtbl -> GetDeviceRemovedReason(This) ) 

#define ID3D11Device_GetImmediateContext(This,ppImmediateContext)	\
    ( (This)->lpVtbl -> GetImmediateContext(This,ppImmediateContext) ) 

#define ID3D11Device_SetExceptionMode(This,RaiseFlags)	\
    ( (This)->lpVtbl -> SetExceptionMode(This,RaiseFlags) ) 

#define ID3D11Device_GetExceptionMode(This)	\
    ( (This)->lpVtbl -> GetExceptionMode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ID3D11Device_INTERFACE_DEFINED__ */


    /* interface __MIDL_itf_d3d11_0000_0031 */
    /* [local] */

    typedef
        enum D3D11_CREATE_DEVICE_FLAG
    {
        D3D11_CREATE_DEVICE_SINGLETHREADED = 0x1,
        D3D11_CREATE_DEVICE_DEBUG = 0x2,
        D3D11_CREATE_DEVICE_SWITCH_TO_REF = 0x4,
        D3D11_CREATE_DEVICE_PREVENT_INTERNAL_THREADING_OPTIMIZATIONS = 0x8,
        D3D11_CREATE_DEVICE_BGRA_SUPPORT = 0x20
    } 	D3D11_CREATE_DEVICE_FLAG;

#define	D3D11_SDK_VERSION	( 7 )

#include "d3d10_1.h"
#if !defined( D3D11_IGNORE_SDK_LAYERS ) 
#include "d3d11sdklayers.h" 
#endif 
#include "d3d10misc.h" 
#include "d3d10shader.h" 
#include "d3d10effect.h" 
#include "d3d10_1shader.h" 

    ///////////////////////////////////////////////////////////////////////////
    // D3D11CreateDevice
    // ------------------
    //
    // pAdapter
    //      If NULL, D3D11CreateDevice will choose the primary adapter and
    //      create a new instance from a temporarily created IDXGIFactory.
    //      If non-NULL, D3D11CreateDevice will register the appropriate
    //      device, if necessary (via IDXGIAdapter::RegisterDrver), before
    //      creating the device.
    // DriverType
    //      Specifies the driver type to be created: hardware, reference or
    //      null.
    // Software
    //      HMODULE of a DLL implementing a software rasterizer. Must be NULL for
    //      non-Software driver types.
    // Flags
    //      Any of those documented for D3D11CreateDeviceAndSwapChain.
    // pFeatureLevels
    //      Any of those documented for D3D11CreateDeviceAndSwapChain.
    // FeatureLevels
    //      Size of feature levels array.
    // SDKVersion
    //      SDK version. Use the D3D11_SDK_VERSION macro.
    // ppDevice
    //      Pointer to returned interface. May be NULL.
    // pFeatureLevel
    //      Pointer to returned feature level. May be NULL.
    // ppImmediateContext
    //      Pointer to returned interface. May be NULL.
    //
    // Return Values
    //  Any of those documented for 
    //          CreateDXGIFactory1
    //          IDXGIFactory::EnumAdapters
    //          IDXGIAdapter::RegisterDriver
    //          D3D11CreateDevice
    //
    ///////////////////////////////////////////////////////////////////////////
    typedef HRESULT(WINAPI* PFN_D3D11_CREATE_DEVICE)(__in_opt IDXGIAdapter*,
        D3D_DRIVER_TYPE, HMODULE, UINT,
        __in_ecount_opt(FeatureLevels) CONST D3D_FEATURE_LEVEL*,
        UINT FeatureLevels, UINT, __out_opt ID3D11Device**,
        __out_opt D3D_FEATURE_LEVEL*, __out_opt ID3D11DeviceContext**);

    HRESULT WINAPI D3D11CreateDevice(
        __in_opt IDXGIAdapter* pAdapter,
        D3D_DRIVER_TYPE DriverType,
        HMODULE Software,
        UINT Flags,
        __in_ecount_opt(FeatureLevels) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
        UINT FeatureLevels,
        UINT SDKVersion,
        __out_opt ID3D11Device** ppDevice,
        __out_opt D3D_FEATURE_LEVEL* pFeatureLevel,
        __out_opt ID3D11DeviceContext** ppImmediateContext);

    ///////////////////////////////////////////////////////////////////////////
    // D3D11CreateDeviceAndSwapChain
    // ------------------------------
    //
    // ppAdapter
    //      If NULL, D3D11CreateDevice will choose the primary adapter and 
    //      create a new instance from a temporarily created IDXGIFactory.
    //      If non-NULL, D3D11CreateDevice will register the appropriate
    //      device, if necessary (via IDXGIAdapter::RegisterDrver), before
    //      creating the device.
    // DriverType
    //      Specifies the driver type to be created: hardware, reference or
    //      null.
    // Software
    //      HMODULE of a DLL implementing a software rasterizer. Must be NULL for
    //      non-Software driver types.
    // Flags
    //      Any of those documented for D3D11CreateDevice.
    // pFeatureLevels
    //      Array of any of the following:
    //          D3D_FEATURE_LEVEL_11_0
    //          D3D_FEATURE_LEVEL_10_1
    //          D3D_FEATURE_LEVEL_10_0
    //          D3D_FEATURE_LEVEL_9_3
    //          D3D_FEATURE_LEVEL_9_2
    //          D3D_FEATURE_LEVEL_9_1
    //      Order indicates sequence in which instantiation will be attempted. If
    //      NULL, then the implied order is the same as previously listed (i.e. 
    //      prefer most features available). 
    // FeatureLevels
    //      Size of feature levels array.
    // SDKVersion
    //      SDK version. Use the D3D11_SDK_VERSION macro.
    // pSwapChainDesc
    //      Swap chain description, may be NULL.
    // ppSwapChain
    //      Pointer to returned interface. May be NULL.
    // ppDevice
    //      Pointer to returned interface. May be NULL.
    // pFeatureLevel
    //      Pointer to returned feature level. May be NULL.
    // ppImmediateContext
    //      Pointer to returned interface. May be NULL.
    //
    // Return Values
    //  Any of those documented for 
    //          CreateDXGIFactory1
    //          IDXGIFactory::EnumAdapters
    //          IDXGIAdapter::RegisterDriver
    //          D3D11CreateDevice
    //          IDXGIFactory::CreateSwapChain
    //
    ///////////////////////////////////////////////////////////////////////////
    typedef HRESULT(WINAPI* PFN_D3D11_CREATE_DEVICE_AND_SWAP_CHAIN)(__in_opt IDXGIAdapter*,
        D3D_DRIVER_TYPE, HMODULE, UINT,
        __in_ecount_opt(FeatureLevels) CONST D3D_FEATURE_LEVEL*,
        UINT FeatureLevels, UINT, __in_opt CONST DXGI_SWAP_CHAIN_DESC*,
        __out_opt IDXGISwapChain**, __out_opt ID3D11Device**,
        __out_opt D3D_FEATURE_LEVEL*, __out_opt ID3D11DeviceContext**);

    HRESULT WINAPI D3D11CreateDeviceAndSwapChain(
        __in_opt IDXGIAdapter* pAdapter,
        D3D_DRIVER_TYPE DriverType,
        HMODULE Software,
        UINT Flags,
        __in_ecount_opt(FeatureLevels) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
        UINT FeatureLevels,
        UINT SDKVersion,
        __in_opt CONST DXGI_SWAP_CHAIN_DESC* pSwapChainDesc,
        __out_opt IDXGISwapChain** ppSwapChain,
        __out_opt ID3D11Device** ppDevice,
        __out_opt D3D_FEATURE_LEVEL* pFeatureLevel,
        __out_opt ID3D11DeviceContext** ppImmediateContext);

    DEFINE_GUID(IID_ID3D11DeviceChild, 0x1841e5c8, 0x16b0, 0x489b, 0xbc, 0xc8, 0x44, 0xcf, 0xb0, 0xd5, 0xde, 0xae);
    DEFINE_GUID(IID_ID3D11DepthStencilState, 0x03823efb, 0x8d8f, 0x4e1c, 0x9a, 0xa2, 0xf6, 0x4b, 0xb2, 0xcb, 0xfd, 0xf1);
    DEFINE_GUID(IID_ID3D11BlendState, 0x75b68faa, 0x347d, 0x4159, 0x8f, 0x45, 0xa0, 0x64, 0x0f, 0x01, 0xcd, 0x9a);
    DEFINE_GUID(IID_ID3D11RasterizerState, 0x9bb4ab81, 0xab1a, 0x4d8f, 0xb5, 0x06, 0xfc, 0x04, 0x20, 0x0b, 0x6e, 0xe7);
    DEFINE_GUID(IID_ID3D11Resource, 0xdc8e63f3, 0xd12b, 0x4952, 0xb4, 0x7b, 0x5e, 0x45, 0x02, 0x6a, 0x86, 0x2d);
    DEFINE_GUID(IID_ID3D11Buffer, 0x48570b85, 0xd1ee, 0x4fcd, 0xa2, 0x50, 0xeb, 0x35, 0x07, 0x22, 0xb0, 0x37);
    DEFINE_GUID(IID_ID3D11Texture1D, 0xf8fb5c27, 0xc6b3, 0x4f75, 0xa4, 0xc8, 0x43, 0x9a, 0xf2, 0xef, 0x56, 0x4c);
    DEFINE_GUID(IID_ID3D11Texture2D, 0x6f15aaf2, 0xd208, 0x4e89, 0x9a, 0xb4, 0x48, 0x95, 0x35, 0xd3, 0x4f, 0x9c);
    DEFINE_GUID(IID_ID3D11Texture3D, 0x037e866e, 0xf56d, 0x4357, 0xa8, 0xaf, 0x9d, 0xab, 0xbe, 0x6e, 0x25, 0x0e);
    DEFINE_GUID(IID_ID3D11View, 0x839d1216, 0xbb2e, 0x412b, 0xb7, 0xf4, 0xa9, 0xdb, 0xeb, 0xe0, 0x8e, 0xd1);
    DEFINE_GUID(IID_ID3D11ShaderResourceView, 0xb0e06fe0, 0x8192, 0x4e1a, 0xb1, 0xca, 0x36, 0xd7, 0x41, 0x47, 0x10, 0xb2);
    DEFINE_GUID(IID_ID3D11RenderTargetView, 0xdfdba067, 0x0b8d, 0x4865, 0x87, 0x5b, 0xd7, 0xb4, 0x51, 0x6c, 0xc1, 0x64);
    DEFINE_GUID(IID_ID3D11DepthStencilView, 0x9fdac92a, 0x1876, 0x48c3, 0xaf, 0xad, 0x25, 0xb9, 0x4f, 0x84, 0xa9, 0xb6);
    DEFINE_GUID(IID_ID3D11UnorderedAccessView, 0x28acf509, 0x7f5c, 0x48f6, 0x86, 0x11, 0xf3, 0x16, 0x01, 0x0a, 0x63, 0x80);
    DEFINE_GUID(IID_ID3D11VertexShader, 0x3b301d64, 0xd678, 0x4289, 0x88, 0x97, 0x22, 0xf8, 0x92, 0x8b, 0x72, 0xf3);
    DEFINE_GUID(IID_ID3D11HullShader, 0x8e5c6061, 0x628a, 0x4c8e, 0x82, 0x64, 0xbb, 0xe4, 0x5c, 0xb3, 0xd5, 0xdd);
    DEFINE_GUID(IID_ID3D11DomainShader, 0xf582c508, 0x0f36, 0x490c, 0x99, 0x77, 0x31, 0xee, 0xce, 0x26, 0x8c, 0xfa);
    DEFINE_GUID(IID_ID3D11GeometryShader, 0x38325b96, 0xeffb, 0x4022, 0xba, 0x02, 0x2e, 0x79, 0x5b, 0x70, 0x27, 0x5c);
    DEFINE_GUID(IID_ID3D11PixelShader, 0xea82e40d, 0x51dc, 0x4f33, 0x93, 0xd4, 0xdb, 0x7c, 0x91, 0x25, 0xae, 0x8c);
    DEFINE_GUID(IID_ID3D11ComputeShader, 0x4f5b196e, 0xc2bd, 0x495e, 0xbd, 0x01, 0x1f, 0xde, 0xd3, 0x8e, 0x49, 0x69);
    DEFINE_GUID(IID_ID3D11InputLayout, 0xe4819ddc, 0x4cf0, 0x4025, 0xbd, 0x26, 0x5d, 0xe8, 0x2a, 0x3e, 0x07, 0xb7);
    DEFINE_GUID(IID_ID3D11SamplerState, 0xda6fea51, 0x564c, 0x4487, 0x98, 0x10, 0xf0, 0xd0, 0xf9, 0xb4, 0xe3, 0xa5);
    DEFINE_GUID(IID_ID3D11Asynchronous, 0x4b35d0cd, 0x1e15, 0x4258, 0x9c, 0x98, 0x1b, 0x13, 0x33, 0xf6, 0xdd, 0x3b);
    DEFINE_GUID(IID_ID3D11Query, 0xd6c00747, 0x87b7, 0x425e, 0xb8, 0x4d, 0x44, 0xd1, 0x08, 0x56, 0x0a, 0xfd);
    DEFINE_GUID(IID_ID3D11Predicate, 0x9eb576dd, 0x9f77, 0x4d86, 0x81, 0xaa, 0x8b, 0xab, 0x5f, 0xe4, 0x90, 0xe2);
    DEFINE_GUID(IID_ID3D11Counter, 0x6e8c49fb, 0xa371, 0x4770, 0xb4, 0x40, 0x29, 0x08, 0x60, 0x22, 0xb7, 0x41);
    DEFINE_GUID(IID_ID3D11ClassInstance, 0xa6cd7faa, 0xb0b7, 0x4a2f, 0x94, 0x36, 0x86, 0x62, 0xa6, 0x57, 0x97, 0xcb);
    DEFINE_GUID(IID_ID3D11ClassLinkage, 0xddf57cba, 0x9543, 0x46e4, 0xa1, 0x2b, 0xf2, 0x07, 0xa0, 0xfe, 0x7f, 0xed);
    DEFINE_GUID(IID_ID3D11CommandList, 0xa24bc4d1, 0x769e, 0x43f7, 0x80, 0x13, 0x98, 0xff, 0x56, 0x6c, 0x18, 0xe2);
    DEFINE_GUID(IID_ID3D11DeviceContext, 0xc0bfa96c, 0xe089, 0x44fb, 0x8e, 0xaf, 0x26, 0xf8, 0x79, 0x61, 0x90, 0xda);
    DEFINE_GUID(IID_ID3D11Device, 0xdb6f6ddb, 0xac77, 0x4e88, 0x82, 0x53, 0x81, 0x9d, 0xf9, 0xbb, 0xf1, 0x40);


    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0031_v0_0_c_ifspec;
    extern RPC_IF_HANDLE __MIDL_itf_d3d11_0000_0031_v0_0_s_ifspec;

    /* Additional Prototypes for ALL interfaces */

    /* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


