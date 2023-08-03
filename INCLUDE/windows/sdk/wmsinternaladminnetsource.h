#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0611 */
/* @@MIDL_FILE_HEADING(  ) */



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
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __wmsinternaladminnetsource_h__
#define __wmsinternaladminnetsource_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWMSInternalAdminNetSource_FWD_DEFINED__
#define __IWMSInternalAdminNetSource_FWD_DEFINED__
typedef interface IWMSInternalAdminNetSource IWMSInternalAdminNetSource;

#endif 	/* __IWMSInternalAdminNetSource_FWD_DEFINED__ */


#ifndef __IWMSInternalAdminNetSource2_FWD_DEFINED__
#define __IWMSInternalAdminNetSource2_FWD_DEFINED__
typedef interface IWMSInternalAdminNetSource2 IWMSInternalAdminNetSource2;

#endif 	/* __IWMSInternalAdminNetSource2_FWD_DEFINED__ */


#ifndef __IWMSInternalAdminNetSource3_FWD_DEFINED__
#define __IWMSInternalAdminNetSource3_FWD_DEFINED__
typedef interface IWMSInternalAdminNetSource3 IWMSInternalAdminNetSource3;

#endif 	/* __IWMSInternalAdminNetSource3_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "wmnetsourcecreator.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wmsinternaladminnetsource_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows Media
//  Copyright (C) Microsoft Corporation. All rights reserved.
//
//  Automatically generated by Midl from WMSInternalAdminNetSource.idl 
//
// DO NOT EDIT THIS FILE.
//
//--------------------------------------------------------------------------
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( IID_IWMSInternalAdminNetSource, 0x8BB23E5F,0xD127,0x4afb,0x8D,0x02,0xAE,0x5B,0x66,0xD5,0x4C,0x78  );
EXTERN_GUID( IID_IWMSInternalAdminNetSource2, 0xE74D58C3,0xCF77,0x4b51,0xAF,0x17,0x74,0x46,0x87,0xC4,0x3E,0xAE  );
EXTERN_GUID( IID_IWMSInternalAdminNetSource3, 0x6b63d08e,0x4590,0x44af,0x9e,0xb3,0x57,0xff,0x1e,0x73,0xbf,0x80  );
typedef /* [uuid][public] */  DECLSPEC_UUID("068A6457-4099-4c72-9AA9-9105C1C03177") 
enum NETSOURCE_URLCREDPOLICY_SETTINGS
    {
        NETSOURCE_URLCREDPOLICY_SETTING_SILENTLOGONOK	= 0,
        NETSOURCE_URLCREDPOLICY_SETTING_MUSTPROMPTUSER	= 1,
        NETSOURCE_URLCREDPOLICY_SETTING_ANONYMOUSONLY	= 2
    } 	NETSOURCE_URLCREDPOLICY_SETTINGS;



extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0000_v0_0_s_ifspec;

#ifndef __IWMSInternalAdminNetSource_INTERFACE_DEFINED__
#define __IWMSInternalAdminNetSource_INTERFACE_DEFINED__

/* interface IWMSInternalAdminNetSource */
/* [unique][helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_IWMSInternalAdminNetSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BB23E5F-D127-4afb-8D02-AE5B66D54C78")
    IWMSInternalAdminNetSource : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IUnknown *pSharedNamespace,
            /* [in] */ IUnknown *pNamespaceNode,
            /* [in] */ INSNetSourceCreator *pNetSourceCreator,
            /* [in] */ BOOL fEmbeddedInServer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNetSourceCreator( 
            /* [out] */ INSNetSourceCreator **ppNetSourceCreator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCredentials( 
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BOOL fPersist,
            /* [in] */ BOOL fConfirmedGood) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCredentials( 
            /* [in] */ BSTR bstrRealm,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrPassword,
            /* [out] */ BOOL *pfConfirmedGood) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteCredentials( 
            /* [in] */ BSTR bstrRealm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCredentialFlags( 
            /* [out] */ DWORD *lpdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCredentialFlags( 
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindProxyForURL( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrHost,
            /* [out] */ BOOL *pfProxyEnabled,
            /* [out] */ BSTR *pbstrProxyServer,
            /* [out] */ DWORD *pdwProxyPort,
            /* [out][in] */ DWORD *pdwProxyContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterProxyFailure( 
            /* [in] */ HRESULT hrParam,
            /* [in] */ DWORD dwProxyContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShutdownProxyContext( 
            /* [in] */ DWORD dwProxyContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUsingIE( 
            /* [in] */ DWORD dwProxyContext,
            /* [out] */ BOOL *pfIsUsingIE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWMSInternalAdminNetSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMSInternalAdminNetSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMSInternalAdminNetSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ IUnknown *pSharedNamespace,
            /* [in] */ IUnknown *pNamespaceNode,
            /* [in] */ INSNetSourceCreator *pNetSourceCreator,
            /* [in] */ BOOL fEmbeddedInServer);
        
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceCreator )( 
            IWMSInternalAdminNetSource * This,
            /* [out] */ INSNetSourceCreator **ppNetSourceCreator);
        
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BOOL fPersist,
            /* [in] */ BOOL fConfirmedGood);
        
        HRESULT ( STDMETHODCALLTYPE *GetCredentials )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ BSTR bstrRealm,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrPassword,
            /* [out] */ BOOL *pfConfirmedGood);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteCredentials )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ BSTR bstrRealm);
        
        HRESULT ( STDMETHODCALLTYPE *GetCredentialFlags )( 
            IWMSInternalAdminNetSource * This,
            /* [out] */ DWORD *lpdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetCredentialFlags )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURL )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrHost,
            /* [out] */ BOOL *pfProxyEnabled,
            /* [out] */ BSTR *pbstrProxyServer,
            /* [out] */ DWORD *pdwProxyPort,
            /* [out][in] */ DWORD *pdwProxyContext);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterProxyFailure )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ HRESULT hrParam,
            /* [in] */ DWORD dwProxyContext);
        
        HRESULT ( STDMETHODCALLTYPE *ShutdownProxyContext )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ DWORD dwProxyContext);
        
        HRESULT ( STDMETHODCALLTYPE *IsUsingIE )( 
            IWMSInternalAdminNetSource * This,
            /* [in] */ DWORD dwProxyContext,
            /* [out] */ BOOL *pfIsUsingIE);
        
        END_INTERFACE
    } IWMSInternalAdminNetSourceVtbl;

    interface IWMSInternalAdminNetSource
    {
        CONST_VTBL struct IWMSInternalAdminNetSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMSInternalAdminNetSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMSInternalAdminNetSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMSInternalAdminNetSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMSInternalAdminNetSource_Initialize(This,pSharedNamespace,pNamespaceNode,pNetSourceCreator,fEmbeddedInServer)	\
    ( (This)->lpVtbl -> Initialize(This,pSharedNamespace,pNamespaceNode,pNetSourceCreator,fEmbeddedInServer) ) 

#define IWMSInternalAdminNetSource_GetNetSourceCreator(This,ppNetSourceCreator)	\
    ( (This)->lpVtbl -> GetNetSourceCreator(This,ppNetSourceCreator) ) 

#define IWMSInternalAdminNetSource_SetCredentials(This,bstrRealm,bstrName,bstrPassword,fPersist,fConfirmedGood)	\
    ( (This)->lpVtbl -> SetCredentials(This,bstrRealm,bstrName,bstrPassword,fPersist,fConfirmedGood) ) 

#define IWMSInternalAdminNetSource_GetCredentials(This,bstrRealm,pbstrName,pbstrPassword,pfConfirmedGood)	\
    ( (This)->lpVtbl -> GetCredentials(This,bstrRealm,pbstrName,pbstrPassword,pfConfirmedGood) ) 

#define IWMSInternalAdminNetSource_DeleteCredentials(This,bstrRealm)	\
    ( (This)->lpVtbl -> DeleteCredentials(This,bstrRealm) ) 

#define IWMSInternalAdminNetSource_GetCredentialFlags(This,lpdwFlags)	\
    ( (This)->lpVtbl -> GetCredentialFlags(This,lpdwFlags) ) 

#define IWMSInternalAdminNetSource_SetCredentialFlags(This,dwFlags)	\
    ( (This)->lpVtbl -> SetCredentialFlags(This,dwFlags) ) 

#define IWMSInternalAdminNetSource_FindProxyForURL(This,bstrProtocol,bstrHost,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext)	\
    ( (This)->lpVtbl -> FindProxyForURL(This,bstrProtocol,bstrHost,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) ) 

#define IWMSInternalAdminNetSource_RegisterProxyFailure(This,hrParam,dwProxyContext)	\
    ( (This)->lpVtbl -> RegisterProxyFailure(This,hrParam,dwProxyContext) ) 

#define IWMSInternalAdminNetSource_ShutdownProxyContext(This,dwProxyContext)	\
    ( (This)->lpVtbl -> ShutdownProxyContext(This,dwProxyContext) ) 

#define IWMSInternalAdminNetSource_IsUsingIE(This,dwProxyContext,pfIsUsingIE)	\
    ( (This)->lpVtbl -> IsUsingIE(This,dwProxyContext,pfIsUsingIE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMSInternalAdminNetSource_INTERFACE_DEFINED__ */


#ifndef __IWMSInternalAdminNetSource2_INTERFACE_DEFINED__
#define __IWMSInternalAdminNetSource2_INTERFACE_DEFINED__

/* interface IWMSInternalAdminNetSource2 */
/* [unique][helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_IWMSInternalAdminNetSource2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E74D58C3-CF77-4b51-AF17-744687C43EAE")
    IWMSInternalAdminNetSource2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetCredentialsEx( 
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BOOL fPersist,
            /* [in] */ BOOL fConfirmedGood) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCredentialsEx( 
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [out] */ NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrPassword,
            /* [out] */ BOOL *pfConfirmedGood) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteCredentialsEx( 
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindProxyForURLEx( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrHost,
            /* [in] */ BSTR bstrUrl,
            /* [out] */ BOOL *pfProxyEnabled,
            /* [out] */ BSTR *pbstrProxyServer,
            /* [out] */ DWORD *pdwProxyPort,
            /* [out][in] */ DWORD *pdwProxyContext) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWMSInternalAdminNetSource2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMSInternalAdminNetSource2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMSInternalAdminNetSource2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMSInternalAdminNetSource2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCredentialsEx )( 
            IWMSInternalAdminNetSource2 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BOOL fPersist,
            /* [in] */ BOOL fConfirmedGood);
        
        HRESULT ( STDMETHODCALLTYPE *GetCredentialsEx )( 
            IWMSInternalAdminNetSource2 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [out] */ NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrPassword,
            /* [out] */ BOOL *pfConfirmedGood);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteCredentialsEx )( 
            IWMSInternalAdminNetSource2 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy);
        
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURLEx )( 
            IWMSInternalAdminNetSource2 * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrHost,
            /* [in] */ BSTR bstrUrl,
            /* [out] */ BOOL *pfProxyEnabled,
            /* [out] */ BSTR *pbstrProxyServer,
            /* [out] */ DWORD *pdwProxyPort,
            /* [out][in] */ DWORD *pdwProxyContext);
        
        END_INTERFACE
    } IWMSInternalAdminNetSource2Vtbl;

    interface IWMSInternalAdminNetSource2
    {
        CONST_VTBL struct IWMSInternalAdminNetSource2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMSInternalAdminNetSource2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMSInternalAdminNetSource2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMSInternalAdminNetSource2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMSInternalAdminNetSource2_SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood)	\
    ( (This)->lpVtbl -> SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) ) 

#define IWMSInternalAdminNetSource2_GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood)	\
    ( (This)->lpVtbl -> GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) ) 

#define IWMSInternalAdminNetSource2_DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy)	\
    ( (This)->lpVtbl -> DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) ) 

#define IWMSInternalAdminNetSource2_FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext)	\
    ( (This)->lpVtbl -> FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMSInternalAdminNetSource2_INTERFACE_DEFINED__ */


#ifndef __IWMSInternalAdminNetSource3_INTERFACE_DEFINED__
#define __IWMSInternalAdminNetSource3_INTERFACE_DEFINED__

/* interface IWMSInternalAdminNetSource3 */
/* [unique][helpstring][uuid][object][local] */ 


EXTERN_C const IID IID_IWMSInternalAdminNetSource3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6b63d08e-4590-44af-9eb3-57ff1e73bf80")
    IWMSInternalAdminNetSource3 : public IWMSInternalAdminNetSource2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNetSourceCreator2( 
            /* [out] */ IUnknown **ppNetSourceCreator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindProxyForURLEx2( 
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrHost,
            /* [in] */ BSTR bstrUrl,
            /* [out] */ BOOL *pfProxyEnabled,
            /* [out] */ BSTR *pbstrProxyServer,
            /* [out] */ DWORD *pdwProxyPort,
            /* [out][in] */ QWORD *pqwProxyContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterProxyFailure2( 
            /* [in] */ HRESULT hrParam,
            /* [in] */ QWORD qwProxyContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShutdownProxyContext2( 
            /* [in] */ QWORD qwProxyContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUsingIE2( 
            /* [in] */ QWORD qwProxyContext,
            /* [out] */ BOOL *pfIsUsingIE) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCredentialsEx2( 
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BOOL fPersist,
            /* [in] */ BOOL fConfirmedGood,
            /* [in] */ BOOL fClearTextAuthentication) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCredentialsEx2( 
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [in] */ BOOL fClearTextAuthentication,
            /* [out] */ NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrPassword,
            /* [out] */ BOOL *pfConfirmedGood) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWMSInternalAdminNetSource3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWMSInternalAdminNetSource3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWMSInternalAdminNetSource3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCredentialsEx )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BOOL fPersist,
            /* [in] */ BOOL fConfirmedGood);
        
        HRESULT ( STDMETHODCALLTYPE *GetCredentialsEx )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [out] */ NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrPassword,
            /* [out] */ BOOL *pfConfirmedGood);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteCredentialsEx )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy);
        
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURLEx )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrHost,
            /* [in] */ BSTR bstrUrl,
            /* [out] */ BOOL *pfProxyEnabled,
            /* [out] */ BSTR *pbstrProxyServer,
            /* [out] */ DWORD *pdwProxyPort,
            /* [out][in] */ DWORD *pdwProxyContext);
        
        HRESULT ( STDMETHODCALLTYPE *GetNetSourceCreator2 )( 
            IWMSInternalAdminNetSource3 * This,
            /* [out] */ IUnknown **ppNetSourceCreator);
        
        HRESULT ( STDMETHODCALLTYPE *FindProxyForURLEx2 )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ BSTR bstrProtocol,
            /* [in] */ BSTR bstrHost,
            /* [in] */ BSTR bstrUrl,
            /* [out] */ BOOL *pfProxyEnabled,
            /* [out] */ BSTR *pbstrProxyServer,
            /* [out] */ DWORD *pdwProxyPort,
            /* [out][in] */ QWORD *pqwProxyContext);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterProxyFailure2 )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ HRESULT hrParam,
            /* [in] */ QWORD qwProxyContext);
        
        HRESULT ( STDMETHODCALLTYPE *ShutdownProxyContext2 )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ QWORD qwProxyContext);
        
        HRESULT ( STDMETHODCALLTYPE *IsUsingIE2 )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ QWORD qwProxyContext,
            /* [out] */ BOOL *pfIsUsingIE);
        
        HRESULT ( STDMETHODCALLTYPE *SetCredentialsEx2 )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [in] */ BSTR bstrName,
            /* [in] */ BSTR bstrPassword,
            /* [in] */ BOOL fPersist,
            /* [in] */ BOOL fConfirmedGood,
            /* [in] */ BOOL fClearTextAuthentication);
        
        HRESULT ( STDMETHODCALLTYPE *GetCredentialsEx2 )( 
            IWMSInternalAdminNetSource3 * This,
            /* [in] */ BSTR bstrRealm,
            /* [in] */ BSTR bstrUrl,
            /* [in] */ BOOL fProxy,
            /* [in] */ BOOL fClearTextAuthentication,
            /* [out] */ NETSOURCE_URLCREDPOLICY_SETTINGS *pdwUrlPolicy,
            /* [out] */ BSTR *pbstrName,
            /* [out] */ BSTR *pbstrPassword,
            /* [out] */ BOOL *pfConfirmedGood);
        
        END_INTERFACE
    } IWMSInternalAdminNetSource3Vtbl;

    interface IWMSInternalAdminNetSource3
    {
        CONST_VTBL struct IWMSInternalAdminNetSource3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWMSInternalAdminNetSource3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWMSInternalAdminNetSource3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWMSInternalAdminNetSource3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWMSInternalAdminNetSource3_SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood)	\
    ( (This)->lpVtbl -> SetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood) ) 

#define IWMSInternalAdminNetSource3_GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood)	\
    ( (This)->lpVtbl -> GetCredentialsEx(This,bstrRealm,bstrUrl,fProxy,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) ) 

#define IWMSInternalAdminNetSource3_DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy)	\
    ( (This)->lpVtbl -> DeleteCredentialsEx(This,bstrRealm,bstrUrl,fProxy) ) 

#define IWMSInternalAdminNetSource3_FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext)	\
    ( (This)->lpVtbl -> FindProxyForURLEx(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pdwProxyContext) ) 


#define IWMSInternalAdminNetSource3_GetNetSourceCreator2(This,ppNetSourceCreator)	\
    ( (This)->lpVtbl -> GetNetSourceCreator2(This,ppNetSourceCreator) ) 

#define IWMSInternalAdminNetSource3_FindProxyForURLEx2(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pqwProxyContext)	\
    ( (This)->lpVtbl -> FindProxyForURLEx2(This,bstrProtocol,bstrHost,bstrUrl,pfProxyEnabled,pbstrProxyServer,pdwProxyPort,pqwProxyContext) ) 

#define IWMSInternalAdminNetSource3_RegisterProxyFailure2(This,hrParam,qwProxyContext)	\
    ( (This)->lpVtbl -> RegisterProxyFailure2(This,hrParam,qwProxyContext) ) 

#define IWMSInternalAdminNetSource3_ShutdownProxyContext2(This,qwProxyContext)	\
    ( (This)->lpVtbl -> ShutdownProxyContext2(This,qwProxyContext) ) 

#define IWMSInternalAdminNetSource3_IsUsingIE2(This,qwProxyContext,pfIsUsingIE)	\
    ( (This)->lpVtbl -> IsUsingIE2(This,qwProxyContext,pfIsUsingIE) ) 

#define IWMSInternalAdminNetSource3_SetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood,fClearTextAuthentication)	\
    ( (This)->lpVtbl -> SetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,bstrName,bstrPassword,fPersist,fConfirmedGood,fClearTextAuthentication) ) 

#define IWMSInternalAdminNetSource3_GetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,fClearTextAuthentication,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood)	\
    ( (This)->lpVtbl -> GetCredentialsEx2(This,bstrRealm,bstrUrl,fProxy,fClearTextAuthentication,pdwUrlPolicy,pbstrName,pbstrPassword,pfConfirmedGood) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWMSInternalAdminNetSource3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wmsinternaladminnetsource_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsinternaladminnetsource_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


#pragma option pop /*P_O_Pop*/
