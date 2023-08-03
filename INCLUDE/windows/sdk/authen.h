#pragma option push -b -a8 -pc -A- /*P_O_Push*/


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0499 */
/* Compiler settings for authen.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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

#ifndef __authen_h__
#define __authen_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMSAuthenticationPlugin_FWD_DEFINED__
#define __IWMSAuthenticationPlugin_FWD_DEFINED__
typedef interface IWMSAuthenticationPlugin IWMSAuthenticationPlugin;
#endif 	/* __IWMSAuthenticationPlugin_FWD_DEFINED__ */


#ifndef __IWMSAuthenticationContext_FWD_DEFINED__
#define __IWMSAuthenticationContext_FWD_DEFINED__
typedef interface IWMSAuthenticationContext IWMSAuthenticationContext;
#endif 	/* __IWMSAuthenticationContext_FWD_DEFINED__ */


#ifndef __IWMSAuthenticationCallback_FWD_DEFINED__
#define __IWMSAuthenticationCallback_FWD_DEFINED__
typedef interface IWMSAuthenticationCallback IWMSAuthenticationCallback;
#endif 	/* __IWMSAuthenticationCallback_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "WMSContext.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_authen_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows Media Technologies
//  Copyright (C) Microsoft Corporation. All rights reserved.
//
//  Automatically generated by Midl
//
//  DO NOT EDIT THIS FILE.
//
//--------------------------------------------------------------------------
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
EXTERN_GUID( IID_IWMSAuthenticationPlugin , 0xBE185FF9,0x6932,0x11d2,0x8B,0x3B,0x00,0x60,0x97,0xB0,0x12,0x06  );
EXTERN_GUID( IID_IWMSAuthenticationContext , 0xBE185FFA,0x6932,0x11d2,0x8B,0x3B,0x00,0x60,0x97,0xB0,0x12,0x06  );
EXTERN_GUID( IID_IWMSAuthenticationCallback , 0xBE185FFB,0x6932,0x11d2,0x8B,0x3B,0x00,0x60,0x97,0xB0,0x12,0x06  );





extern RPC_IF_HANDLE __MIDL_itf_authen_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_authen_0000_0000_v0_0_s_ifspec;

#ifndef __IWMSAuthenticationPlugin_INTERFACE_DEFINED__
#define __IWMSAuthenticationPlugin_INTERFACE_DEFINED__

/* interface IWMSAuthenticationPlugin */
/* [helpstring][unique][version][uuid][object] */ 

typedef /* [public] */ 
enum WMS_AUTHENTICATION_FLAGS
    {	WMS_AUTHENTICATION_TEXT_CHALLENGE	= 0x1,
	WMS_AUTHENTICATION_CLIENT_SHOWS_UI	= 0x2,
	WMS_AUTHENTICATION_ANONYMOUS	= 0x4,
	WMS_AUTHENTICATION_CHALLENGE_FIRST	= 0x8
    } 	WMS_AUTHENTICATION_FLAGS;


EXTERN_C const IID IID_IWMSAuthenticationPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE185FF9-6932-11d2-8B3B-006097B01206")
    IWMSAuthenticationPlugin : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPackageName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPackageName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetProtocolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrProtocolName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [retval][out] */ __RPC__out long *plFlags) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateAuthenticationContext( 
            /* [retval][out] */ __RPC__deref_out_opt IWMSAuthenticationContext **ppAuthenCtx) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMSAuthenticationPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMSAuthenticationPlugin * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMSAuthenticationPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMSAuthenticationPlugin * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPackageName )( 
            IWMSAuthenticationPlugin * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrPackageName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetProtocolName )( 
            IWMSAuthenticationPlugin * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrProtocolName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IWMSAuthenticationPlugin * This,
            /* [retval][out] */ __RPC__out long *plFlags);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateAuthenticationContext )( 
            IWMSAuthenticationPlugin * This,
            /* [retval][out] */ __RPC__deref_out_opt IWMSAuthenticationContext **ppAuthenCtx);
        
        END_INTERFACE
    } IWMSAuthenticationPluginVtbl;

    interface IWMSAuthenticationPlugin
    {
        CONST_VTBL struct IWMSAuthenticationPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMSAuthenticationPlugin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMSAuthenticationPlugin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMSAuthenticationPlugin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMSAuthenticationPlugin_GetPackageName(This,pbstrPackageName)	\
    ( (This)->lpVtbl -> GetPackageName(This,pbstrPackageName) ) 

#define IWMSAuthenticationPlugin_GetProtocolName(This,pbstrProtocolName)	\
    ( (This)->lpVtbl -> GetProtocolName(This,pbstrProtocolName) ) 

#define IWMSAuthenticationPlugin_GetFlags(This,plFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,plFlags) ) 

#define IWMSAuthenticationPlugin_CreateAuthenticationContext(This,ppAuthenCtx)	\
    ( (This)->lpVtbl -> CreateAuthenticationContext(This,ppAuthenCtx) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMSAuthenticationPlugin_INTERFACE_DEFINED__ */


#ifndef __IWMSAuthenticationContext_INTERFACE_DEFINED__
#define __IWMSAuthenticationContext_INTERFACE_DEFINED__

/* interface IWMSAuthenticationContext */
/* [helpstring][unique][version][uuid][object] */ 


EXTERN_C const IID IID_IWMSAuthenticationContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE185FFA-6932-11d2-8B3B-006097B01206")
    IWMSAuthenticationContext : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetAuthenticationPlugin( 
            /* [retval][out] */ __RPC__deref_out_opt IWMSAuthenticationPlugin **ppAuthenPlugin) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Authenticate( 
            /* [in] */ VARIANT ResponseBlob,
            /* [in] */ __RPC__in_opt IWMSContext *pUserCtx,
            /* [in] */ __RPC__in_opt IWMSContext *pPresentationCtx,
            /* [in] */ __RPC__in_opt IWMSCommandContext *pCommandContext,
            /* [in] */ __RPC__in_opt IWMSAuthenticationCallback *pCallback,
            /* [in] */ VARIANT Context) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLogicalUserID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrUserID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetImpersonationAccountName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAccountName) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetImpersonationToken( 
            /* [retval][out] */ __RPC__out long *plToken) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMSAuthenticationContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMSAuthenticationContext * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMSAuthenticationContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMSAuthenticationContext * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetAuthenticationPlugin )( 
            IWMSAuthenticationContext * This,
            /* [retval][out] */ __RPC__deref_out_opt IWMSAuthenticationPlugin **ppAuthenPlugin);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Authenticate )( 
            IWMSAuthenticationContext * This,
            /* [in] */ VARIANT ResponseBlob,
            /* [in] */ __RPC__in_opt IWMSContext *pUserCtx,
            /* [in] */ __RPC__in_opt IWMSContext *pPresentationCtx,
            /* [in] */ __RPC__in_opt IWMSCommandContext *pCommandContext,
            /* [in] */ __RPC__in_opt IWMSAuthenticationCallback *pCallback,
            /* [in] */ VARIANT Context);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLogicalUserID )( 
            IWMSAuthenticationContext * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrUserID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetImpersonationAccountName )( 
            IWMSAuthenticationContext * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pbstrAccountName);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetImpersonationToken )( 
            IWMSAuthenticationContext * This,
            /* [retval][out] */ __RPC__out long *plToken);
        
        END_INTERFACE
    } IWMSAuthenticationContextVtbl;

    interface IWMSAuthenticationContext
    {
        CONST_VTBL struct IWMSAuthenticationContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMSAuthenticationContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMSAuthenticationContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMSAuthenticationContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMSAuthenticationContext_GetAuthenticationPlugin(This,ppAuthenPlugin)	\
    ( (This)->lpVtbl -> GetAuthenticationPlugin(This,ppAuthenPlugin) ) 

#define IWMSAuthenticationContext_Authenticate(This,ResponseBlob,pUserCtx,pPresentationCtx,pCommandContext,pCallback,Context)	\
    ( (This)->lpVtbl -> Authenticate(This,ResponseBlob,pUserCtx,pPresentationCtx,pCommandContext,pCallback,Context) ) 

#define IWMSAuthenticationContext_GetLogicalUserID(This,pbstrUserID)	\
    ( (This)->lpVtbl -> GetLogicalUserID(This,pbstrUserID) ) 

#define IWMSAuthenticationContext_GetImpersonationAccountName(This,pbstrAccountName)	\
    ( (This)->lpVtbl -> GetImpersonationAccountName(This,pbstrAccountName) ) 

#define IWMSAuthenticationContext_GetImpersonationToken(This,plToken)	\
    ( (This)->lpVtbl -> GetImpersonationToken(This,plToken) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMSAuthenticationContext_INTERFACE_DEFINED__ */


#ifndef __IWMSAuthenticationCallback_INTERFACE_DEFINED__
#define __IWMSAuthenticationCallback_INTERFACE_DEFINED__

/* interface IWMSAuthenticationCallback */
/* [helpstring][unique][version][uuid][object] */ 

typedef /* [public] */ 
enum WMS_AUTHENTICATION_RESULT
    {	WMS_AUTHENTICATION_SUCCESS	= 0x1,
	WMS_AUTHENTICATION_DENIED	= 0x2,
	WMS_AUTHENTICATION_CONTINUE	= 0x3,
	WMS_AUTHENTICATION_ERROR	= 0x4
    } 	WMS_AUTHENTICATION_RESULT;


EXTERN_C const IID IID_IWMSAuthenticationCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE185FFB-6932-11d2-8B3B-006097B01206")
    IWMSAuthenticationCallback : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE OnAuthenticateComplete( 
            /* [in] */ WMS_AUTHENTICATION_RESULT AuthResult,
            /* [in] */ VARIANT ChallengeBlob,
            /* [in] */ VARIANT Context) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IWMSAuthenticationCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMSAuthenticationCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMSAuthenticationCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMSAuthenticationCallback * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *OnAuthenticateComplete )( 
            IWMSAuthenticationCallback * This,
            /* [in] */ WMS_AUTHENTICATION_RESULT AuthResult,
            /* [in] */ VARIANT ChallengeBlob,
            /* [in] */ VARIANT Context);
        
        END_INTERFACE
    } IWMSAuthenticationCallbackVtbl;

    interface IWMSAuthenticationCallback
    {
        CONST_VTBL struct IWMSAuthenticationCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMSAuthenticationCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMSAuthenticationCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMSAuthenticationCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMSAuthenticationCallback_OnAuthenticateComplete(This,AuthResult,ChallengeBlob,Context)	\
    ( (This)->lpVtbl -> OnAuthenticateComplete(This,AuthResult,ChallengeBlob,Context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMSAuthenticationCallback_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif




#pragma option pop /*P_O_Pop*/
