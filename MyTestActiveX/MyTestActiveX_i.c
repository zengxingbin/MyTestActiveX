

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_MyTestActiveXLib,0xbd9b6991,0xe0f8,0x4a12,0x8f,0xe2,0x62,0x49,0x06,0xa3,0x5b,0xcc);


MIDL_DEFINE_GUID(IID, DIID__DMyTestActiveX,0x7ca273da,0x32bb,0x458a,0x97,0x8e,0x17,0xa6,0x74,0xd8,0xb9,0xcd);


MIDL_DEFINE_GUID(IID, DIID__DMyTestActiveXEvents,0xa1711394,0x9c97,0x4208,0xaa,0x34,0x4c,0x7d,0xaa,0xa8,0xfd,0xdf);


MIDL_DEFINE_GUID(CLSID, CLSID_MyTestActiveX,0x2f4202f3,0xb529,0x44de,0xae,0xf6,0xd5,0xb8,0x1e,0x3e,0xd9,0xed);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



