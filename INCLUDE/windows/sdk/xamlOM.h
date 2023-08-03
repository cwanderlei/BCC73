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

#ifndef __xamlom_h__
#define __xamlom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IVisualTreeServiceCallback_FWD_DEFINED__
#define __IVisualTreeServiceCallback_FWD_DEFINED__
typedef interface IVisualTreeServiceCallback IVisualTreeServiceCallback;

#endif 	/* __IVisualTreeServiceCallback_FWD_DEFINED__ */


#ifndef __IVisualTreeService_FWD_DEFINED__
#define __IVisualTreeService_FWD_DEFINED__
typedef interface IVisualTreeService IVisualTreeService;

#endif 	/* __IVisualTreeService_FWD_DEFINED__ */


#ifndef __IXamlDiagnostics_FWD_DEFINED__
#define __IXamlDiagnostics_FWD_DEFINED__
typedef interface IXamlDiagnostics IXamlDiagnostics;

#endif 	/* __IXamlDiagnostics_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_xamlom_0000_0000 */
/* [local] */ 

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4668) 
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
// Win32 API definitions
#define E_NOTFOUND HRESULT_FROM_WIN32(ERROR_NOT_FOUND)
_Check_return_ HRESULT InitializeXamlDiagnostic(_In_ LPCWSTR endPointName, _In_ DWORD pid, _In_ LPCWSTR wszDllXamlDiagnostics, _In_ LPCWSTR wszTAPDllName,  _In_ CLSID tapClsid);
_Check_return_ HRESULT InitializeXamlDiagnosticsEx(_In_ LPCWSTR endPointName, _In_ DWORD pid, _In_ LPCWSTR wszDllXamlDiagnostics, _In_ LPCWSTR wszTAPDllName, _In_ CLSID tapClsid, _In_ LPCWSTR wszInitializationData);
typedef MIDL_uhyper InstanceHandle;

typedef 
enum VisualMutationType
    {
        Add	= 0,
        Remove	= ( Add + 1 ) 
    } 	VisualMutationType;

typedef 
enum BaseValueSource
    {
        BaseValueSourceUnknown	= 0,
        BaseValueSourceDefault	= ( BaseValueSourceUnknown + 1 ) ,
        BaseValueSourceBuiltInStyle	= ( BaseValueSourceDefault + 1 ) ,
        BaseValueSourceStyle	= ( BaseValueSourceBuiltInStyle + 1 ) ,
        BaseValueSourceLocal	= ( BaseValueSourceStyle + 1 ) ,
        Inherited	= ( BaseValueSourceLocal + 1 ) ,
        DefaultStyleTrigger	= ( Inherited + 1 ) ,
        TemplateTrigger	= ( DefaultStyleTrigger + 1 ) ,
        StyleTrigger	= ( TemplateTrigger + 1 ) ,
        ImplicitStyleReference	= ( StyleTrigger + 1 ) ,
        ParentTemplate	= ( ImplicitStyleReference + 1 ) ,
        ParentTemplateTrigger	= ( ParentTemplate + 1 ) ,
        Animation	= ( ParentTemplateTrigger + 1 ) ,
        Coercion	= ( Animation + 1 ) 
    } 	BaseValueSource;

typedef struct SourceInfo
    {
    BSTR FileName;
    unsigned int LineNumber;
    unsigned int ColumnNumber;
    unsigned int CharPosition;
    BSTR Hash;
    } 	SourceInfo;

typedef struct ParentChildRelation
    {
    InstanceHandle Parent;
    InstanceHandle Child;
    unsigned int ChildIndex;
    } 	ParentChildRelation;

typedef struct VisualElement
    {
    InstanceHandle Handle;
    SourceInfo SrcInfo;
    BSTR Type;
    BSTR Name;
    unsigned int NumChildren;
    } 	VisualElement;

typedef struct PropertyChainSource
    {
    InstanceHandle Handle;
    BSTR TargetType;
    BSTR Name;
    BaseValueSource Source;
    SourceInfo SrcInfo;
    } 	PropertyChainSource;

typedef 
enum MetadataBit
    {
        IsValueHandle	= 0x1,
        IsPropertyReadOnly	= 0x2,
        IsValueCollection	= 0x4,
        IsValueCollectionReadOnly	= 0x8
    } 	MetadataBit;

typedef struct PropertyChainValue
    {
    unsigned int Index;
    BSTR Type;
    BSTR DeclaringType;
    BSTR ValueType;
    BSTR ItemType;
    BSTR Value;
    BOOL Overridden;
    hyper MetadataBits;
    BSTR PropertyName;
    unsigned int PropertyChainIndex;
    } 	PropertyChainValue;

typedef struct EnumType
    {
    BSTR Name;
    SAFEARRAY * ValueInts;
    SAFEARRAY * ValueStrings;
    } 	EnumType;

typedef struct CollectionElementValue
    {
    unsigned int Index;
    BSTR ValueType;
    BSTR Value;
    hyper MetadataBits;
    } 	CollectionElementValue;



extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0000_v0_0_s_ifspec;

#ifndef __IVisualTreeServiceCallback_INTERFACE_DEFINED__
#define __IVisualTreeServiceCallback_INTERFACE_DEFINED__

/* interface IVisualTreeServiceCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVisualTreeServiceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA7A8931-80E4-4FEC-8F3B-553F87B4966E")
    IVisualTreeServiceCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnVisualTreeChange( 
            /* [in] */ ParentChildRelation relation,
            /* [in] */ VisualElement element,
            /* [in] */ VisualMutationType mutationType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisualTreeServiceCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVisualTreeServiceCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVisualTreeServiceCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVisualTreeServiceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnVisualTreeChange )( 
            __RPC__in IVisualTreeServiceCallback * This,
            /* [in] */ ParentChildRelation relation,
            /* [in] */ VisualElement element,
            /* [in] */ VisualMutationType mutationType);
        
        END_INTERFACE
    } IVisualTreeServiceCallbackVtbl;

    interface IVisualTreeServiceCallback
    {
        CONST_VTBL struct IVisualTreeServiceCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisualTreeServiceCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisualTreeServiceCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisualTreeServiceCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisualTreeServiceCallback_OnVisualTreeChange(This,relation,element,mutationType)	\
    ( (This)->lpVtbl -> OnVisualTreeChange(This,relation,element,mutationType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisualTreeServiceCallback_INTERFACE_DEFINED__ */


#ifndef __IVisualTreeService_INTERFACE_DEFINED__
#define __IVisualTreeService_INTERFACE_DEFINED__

/* interface IVisualTreeService */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IVisualTreeService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A593B11A-D17F-48BB-8F66-83910731C8A5")
    IVisualTreeService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AdviseVisualTreeChange( 
            /* [in] */ __RPC__in_opt IVisualTreeServiceCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnadviseVisualTreeChange( 
            /* [in] */ __RPC__in_opt IVisualTreeServiceCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnums( 
            /* [out] */ __RPC__out unsigned int *pCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) EnumType **ppEnums) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [in] */ __RPC__in BSTR typeName,
            /* [in] */ __RPC__in BSTR value,
            /* [retval][out] */ __RPC__out InstanceHandle *pInstanceHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyValuesChain( 
            /* [in] */ InstanceHandle instanceHandle,
            /* [out] */ __RPC__out unsigned int *pSourceCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pSourceCount) PropertyChainSource **ppPropertySources,
            /* [out] */ __RPC__out unsigned int *pPropertyCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pPropertyCount) PropertyChainValue **ppPropertyValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ InstanceHandle instanceHandle,
            /* [in] */ InstanceHandle value,
            /* [in] */ unsigned int propertyIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearProperty( 
            /* [in] */ InstanceHandle instanceHandle,
            /* [in] */ unsigned int propertyIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCollectionCount( 
            /* [in] */ InstanceHandle instanceHandle,
            /* [out] */ __RPC__out unsigned int *pCollectionSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCollectionElements( 
            /* [in] */ InstanceHandle instanceHandle,
            /* [in] */ unsigned int startIndex,
            /* [out][in] */ __RPC__inout unsigned int *pElementCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pElementCount) CollectionElementValue **ppElementValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddChild( 
            /* [in] */ InstanceHandle parent,
            /* [in] */ InstanceHandle child,
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveChild( 
            /* [in] */ InstanceHandle parent,
            /* [in] */ unsigned int index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearChildren( 
            /* [in] */ InstanceHandle parent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVisualTreeServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IVisualTreeService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IVisualTreeService * This);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseVisualTreeChange )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *UnadviseVisualTreeChange )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ __RPC__in_opt IVisualTreeServiceCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnums )( 
            __RPC__in IVisualTreeService * This,
            /* [out] */ __RPC__out unsigned int *pCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) EnumType **ppEnums);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ __RPC__in BSTR typeName,
            /* [in] */ __RPC__in BSTR value,
            /* [retval][out] */ __RPC__out InstanceHandle *pInstanceHandle);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyValuesChain )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle instanceHandle,
            /* [out] */ __RPC__out unsigned int *pSourceCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pSourceCount) PropertyChainSource **ppPropertySources,
            /* [out] */ __RPC__out unsigned int *pPropertyCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pPropertyCount) PropertyChainValue **ppPropertyValues);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle instanceHandle,
            /* [in] */ InstanceHandle value,
            /* [in] */ unsigned int propertyIndex);
        
        HRESULT ( STDMETHODCALLTYPE *ClearProperty )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle instanceHandle,
            /* [in] */ unsigned int propertyIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetCollectionCount )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle instanceHandle,
            /* [out] */ __RPC__out unsigned int *pCollectionSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetCollectionElements )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle instanceHandle,
            /* [in] */ unsigned int startIndex,
            /* [out][in] */ __RPC__inout unsigned int *pElementCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pElementCount) CollectionElementValue **ppElementValues);
        
        HRESULT ( STDMETHODCALLTYPE *AddChild )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle parent,
            /* [in] */ InstanceHandle child,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveChild )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle parent,
            /* [in] */ unsigned int index);
        
        HRESULT ( STDMETHODCALLTYPE *ClearChildren )( 
            __RPC__in IVisualTreeService * This,
            /* [in] */ InstanceHandle parent);
        
        END_INTERFACE
    } IVisualTreeServiceVtbl;

    interface IVisualTreeService
    {
        CONST_VTBL struct IVisualTreeServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVisualTreeService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVisualTreeService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVisualTreeService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVisualTreeService_AdviseVisualTreeChange(This,pCallback)	\
    ( (This)->lpVtbl -> AdviseVisualTreeChange(This,pCallback) ) 

#define IVisualTreeService_UnadviseVisualTreeChange(This,pCallback)	\
    ( (This)->lpVtbl -> UnadviseVisualTreeChange(This,pCallback) ) 

#define IVisualTreeService_GetEnums(This,pCount,ppEnums)	\
    ( (This)->lpVtbl -> GetEnums(This,pCount,ppEnums) ) 

#define IVisualTreeService_CreateInstance(This,typeName,value,pInstanceHandle)	\
    ( (This)->lpVtbl -> CreateInstance(This,typeName,value,pInstanceHandle) ) 

#define IVisualTreeService_GetPropertyValuesChain(This,instanceHandle,pSourceCount,ppPropertySources,pPropertyCount,ppPropertyValues)	\
    ( (This)->lpVtbl -> GetPropertyValuesChain(This,instanceHandle,pSourceCount,ppPropertySources,pPropertyCount,ppPropertyValues) ) 

#define IVisualTreeService_SetProperty(This,instanceHandle,value,propertyIndex)	\
    ( (This)->lpVtbl -> SetProperty(This,instanceHandle,value,propertyIndex) ) 

#define IVisualTreeService_ClearProperty(This,instanceHandle,propertyIndex)	\
    ( (This)->lpVtbl -> ClearProperty(This,instanceHandle,propertyIndex) ) 

#define IVisualTreeService_GetCollectionCount(This,instanceHandle,pCollectionSize)	\
    ( (This)->lpVtbl -> GetCollectionCount(This,instanceHandle,pCollectionSize) ) 

#define IVisualTreeService_GetCollectionElements(This,instanceHandle,startIndex,pElementCount,ppElementValues)	\
    ( (This)->lpVtbl -> GetCollectionElements(This,instanceHandle,startIndex,pElementCount,ppElementValues) ) 

#define IVisualTreeService_AddChild(This,parent,child,index)	\
    ( (This)->lpVtbl -> AddChild(This,parent,child,index) ) 

#define IVisualTreeService_RemoveChild(This,parent,index)	\
    ( (This)->lpVtbl -> RemoveChild(This,parent,index) ) 

#define IVisualTreeService_ClearChildren(This,parent)	\
    ( (This)->lpVtbl -> ClearChildren(This,parent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVisualTreeService_INTERFACE_DEFINED__ */


#ifndef __IXamlDiagnostics_INTERFACE_DEFINED__
#define __IXamlDiagnostics_INTERFACE_DEFINED__

/* interface IXamlDiagnostics */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IXamlDiagnostics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18C9E2B6-3F43-4116-9F2B-FF935D7770D2")
    IXamlDiagnostics : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDispatcher( 
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppDispatcher) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUiLayer( 
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppLayer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplication( 
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppApplication) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIInspectableFromHandle( 
            /* [in] */ InstanceHandle instanceHandle,
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppInstance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHandleFromIInspectable( 
            /* [in] */ __RPC__in_opt IInspectable *pInstance,
            /* [retval][out] */ __RPC__out InstanceHandle *pHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HitTest( 
            /* [in] */ RECT rect,
            /* [out] */ __RPC__out unsigned int *pCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) InstanceHandle **ppInstanceHandles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterInstance( 
            /* [in] */ __RPC__in_opt IInspectable *pInstance,
            /* [retval][out] */ __RPC__out InstanceHandle *pInstanceHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInitializationData( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pInitializationData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXamlDiagnosticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IXamlDiagnostics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IXamlDiagnostics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IXamlDiagnostics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDispatcher )( 
            __RPC__in IXamlDiagnostics * This,
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppDispatcher);
        
        HRESULT ( STDMETHODCALLTYPE *GetUiLayer )( 
            __RPC__in IXamlDiagnostics * This,
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppLayer);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplication )( 
            __RPC__in IXamlDiagnostics * This,
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppApplication);
        
        HRESULT ( STDMETHODCALLTYPE *GetIInspectableFromHandle )( 
            __RPC__in IXamlDiagnostics * This,
            /* [in] */ InstanceHandle instanceHandle,
            /* [retval][out] */ __RPC__deref_out_opt IInspectable **ppInstance);
        
        HRESULT ( STDMETHODCALLTYPE *GetHandleFromIInspectable )( 
            __RPC__in IXamlDiagnostics * This,
            /* [in] */ __RPC__in_opt IInspectable *pInstance,
            /* [retval][out] */ __RPC__out InstanceHandle *pHandle);
        
        HRESULT ( STDMETHODCALLTYPE *HitTest )( 
            __RPC__in IXamlDiagnostics * This,
            /* [in] */ RECT rect,
            /* [out] */ __RPC__out unsigned int *pCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pCount) InstanceHandle **ppInstanceHandles);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterInstance )( 
            __RPC__in IXamlDiagnostics * This,
            /* [in] */ __RPC__in_opt IInspectable *pInstance,
            /* [retval][out] */ __RPC__out InstanceHandle *pInstanceHandle);
        
        HRESULT ( STDMETHODCALLTYPE *GetInitializationData )( 
            __RPC__in IXamlDiagnostics * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pInitializationData);
        
        END_INTERFACE
    } IXamlDiagnosticsVtbl;

    interface IXamlDiagnostics
    {
        CONST_VTBL struct IXamlDiagnosticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXamlDiagnostics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXamlDiagnostics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXamlDiagnostics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXamlDiagnostics_GetDispatcher(This,ppDispatcher)	\
    ( (This)->lpVtbl -> GetDispatcher(This,ppDispatcher) ) 

#define IXamlDiagnostics_GetUiLayer(This,ppLayer)	\
    ( (This)->lpVtbl -> GetUiLayer(This,ppLayer) ) 

#define IXamlDiagnostics_GetApplication(This,ppApplication)	\
    ( (This)->lpVtbl -> GetApplication(This,ppApplication) ) 

#define IXamlDiagnostics_GetIInspectableFromHandle(This,instanceHandle,ppInstance)	\
    ( (This)->lpVtbl -> GetIInspectableFromHandle(This,instanceHandle,ppInstance) ) 

#define IXamlDiagnostics_GetHandleFromIInspectable(This,pInstance,pHandle)	\
    ( (This)->lpVtbl -> GetHandleFromIInspectable(This,pInstance,pHandle) ) 

#define IXamlDiagnostics_HitTest(This,rect,pCount,ppInstanceHandles)	\
    ( (This)->lpVtbl -> HitTest(This,rect,pCount,ppInstanceHandles) ) 

#define IXamlDiagnostics_RegisterInstance(This,pInstance,pInstanceHandle)	\
    ( (This)->lpVtbl -> RegisterInstance(This,pInstance,pInstanceHandle) ) 

#define IXamlDiagnostics_GetInitializationData(This,pInitializationData)	\
    ( (This)->lpVtbl -> GetInitializationData(This,pInitializationData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXamlDiagnostics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xamlom_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */ 
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xamlom_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


#pragma option pop /*P_O_Pop*/
