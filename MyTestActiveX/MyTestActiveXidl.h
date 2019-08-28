

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MyTestActiveX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __MyTestActiveXidl_h__
#define __MyTestActiveXidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DMyTestActiveX_FWD_DEFINED__
#define ___DMyTestActiveX_FWD_DEFINED__
typedef interface _DMyTestActiveX _DMyTestActiveX;

#endif 	/* ___DMyTestActiveX_FWD_DEFINED__ */


#ifndef ___DMyTestActiveXEvents_FWD_DEFINED__
#define ___DMyTestActiveXEvents_FWD_DEFINED__
typedef interface _DMyTestActiveXEvents _DMyTestActiveXEvents;

#endif 	/* ___DMyTestActiveXEvents_FWD_DEFINED__ */


#ifndef __MyTestActiveX_FWD_DEFINED__
#define __MyTestActiveX_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyTestActiveX MyTestActiveX;
#else
typedef struct MyTestActiveX MyTestActiveX;
#endif /* __cplusplus */

#endif 	/* __MyTestActiveX_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_MyTestActiveX_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_MyTestActiveX_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_MyTestActiveX_0000_0000_v0_0_s_ifspec;


#ifndef __MyTestActiveXLib_LIBRARY_DEFINED__
#define __MyTestActiveXLib_LIBRARY_DEFINED__

/* library MyTestActiveXLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_MyTestActiveXLib;

#ifndef ___DMyTestActiveX_DISPINTERFACE_DEFINED__
#define ___DMyTestActiveX_DISPINTERFACE_DEFINED__

/* dispinterface _DMyTestActiveX */
/* [uuid] */ 


EXTERN_C const IID DIID__DMyTestActiveX;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7ca273da-32bb-458a-978e-17a674d8b9cd")
    _DMyTestActiveX : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMyTestActiveXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMyTestActiveX * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMyTestActiveX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMyTestActiveX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMyTestActiveX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMyTestActiveX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMyTestActiveX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMyTestActiveX * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMyTestActiveXVtbl;

    interface _DMyTestActiveX
    {
        CONST_VTBL struct _DMyTestActiveXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMyTestActiveX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMyTestActiveX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMyTestActiveX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMyTestActiveX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMyTestActiveX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMyTestActiveX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMyTestActiveX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMyTestActiveX_DISPINTERFACE_DEFINED__ */


#ifndef ___DMyTestActiveXEvents_DISPINTERFACE_DEFINED__
#define ___DMyTestActiveXEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DMyTestActiveXEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DMyTestActiveXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("a1711394-9c97-4208-aa34-4c7daaa8fddf")
    _DMyTestActiveXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DMyTestActiveXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DMyTestActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DMyTestActiveXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DMyTestActiveXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DMyTestActiveXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DMyTestActiveXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DMyTestActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DMyTestActiveXEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DMyTestActiveXEventsVtbl;

    interface _DMyTestActiveXEvents
    {
        CONST_VTBL struct _DMyTestActiveXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DMyTestActiveXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DMyTestActiveXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DMyTestActiveXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DMyTestActiveXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DMyTestActiveXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DMyTestActiveXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DMyTestActiveXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DMyTestActiveXEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MyTestActiveX;

#ifdef __cplusplus

class DECLSPEC_UUID("2f4202f3-b529-44de-aef6-d5b81e3ed9ed")
MyTestActiveX;
#endif
#endif /* __MyTestActiveXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


