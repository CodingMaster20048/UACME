/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2018 - 2020
*
*  TITLE:       ELVINT.H
*
*  VERSION:     3.50
*
*  DATE:        14 Sep 2020
*
*  Prototypes and definitions for elevated interface methods.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once
 
typedef interface IColorDataProxy IColorDataProxy;
typedef interface ICMLuaUtil ICMLuaUtil;
typedef interface IEditionUpgradeManager IEditionUpgradeManager;
typedef interface ISecurityEditor ISecurityEditor;

//VTBL DEF

typedef struct IColorDataProxyVtbl {

    BEGIN_INTERFACE

        HRESULT(STDMETHODCALLTYPE *QueryInterface)(
            __RPC__in IColorDataProxy * This,
            __RPC__in REFIID riid,
            _COM_Outptr_  void **ppvObject);

        ULONG(STDMETHODCALLTYPE *AddRef)(
            __RPC__in IColorDataProxy * This);

        ULONG(STDMETHODCALLTYPE *Release)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method1)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method2)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method3)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method4)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method5)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method6)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method7)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method8)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method9)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method10)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *Method11)(
            __RPC__in IColorDataProxy * This);

        HRESULT(STDMETHODCALLTYPE *LaunchDccw)(
            __RPC__in IColorDataProxy * This,
            _In_      HWND hwnd);

    END_INTERFACE

} *PIColorDataProxyVtbl;

typedef struct ICMLuaUtilVtbl {

    BEGIN_INTERFACE

        HRESULT(STDMETHODCALLTYPE *QueryInterface)(
            __RPC__in ICMLuaUtil * This,
            __RPC__in REFIID riid,
            _COM_Outptr_  void **ppvObject);

        ULONG(STDMETHODCALLTYPE *AddRef)(
            __RPC__in ICMLuaUtil * This);

        ULONG(STDMETHODCALLTYPE *Release)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *SetRasCredentials)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *SetRasEntryProperties)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *DeleteRasEntry)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *LaunchInfSection)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *LaunchInfSectionEx)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *CreateLayerDirectory)(
            __RPC__in ICMLuaUtil * This);

        HRESULT(STDMETHODCALLTYPE *ShellExec)(
            __RPC__in ICMLuaUtil * This,
            _In_     LPCTSTR lpFile,
            _In_opt_  LPCTSTR lpParameters,
            _In_opt_  LPCTSTR lpDirectory,
            _In_      ULONG fMask,
            _In_      ULONG nShow);

        HRESULT(STDMETHODCALLTYPE *SetRegistryStringValue)(
            __RPC__in ICMLuaUtil * This,
            _In_      HKEY hKey,
            _In_opt_  LPCTSTR lpSubKey,
            _In_opt_  LPCTSTR lpValueName,
            _In_      LPCTSTR lpValueString);

        HRESULT(STDMETHODCALLTYPE *DeleteRegistryStringValue)(
            __RPC__in ICMLuaUtil * This,
            _In_      HKEY hKey,
            _In_      LPCTSTR lpSubKey,
            _In_      LPCTSTR lpValueName);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *DeleteRegKeysWithoutSubKeys)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *DeleteRegTree)(
            __RPC__in ICMLuaUtil * This);

        HRESULT(STDMETHODCALLTYPE *ExitWindowsFunc)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *AllowAccessToTheWorld)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *CreateFileAndClose)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *DeleteHiddenCmProfileFiles)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *CallCustomActionDll)(
            __RPC__in ICMLuaUtil * This);

        HRESULT(STDMETHODCALLTYPE *RunCustomActionExe)(
            __RPC__in       ICMLuaUtil * This,
            _In_            LPCTSTR lpFile,
            _In_opt_        LPCTSTR lpParameters,
            _COM_Outptr_    LPCTSTR *pszHandleAsHexString);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *SetRasSubEntryProperties)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *DeleteRasSubEntry)(
            __RPC__in ICMLuaUtil * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *SetCustomAuthData)(
            __RPC__in ICMLuaUtil * This);

    END_INTERFACE

} *PICMLuaUtilVtbl;

typedef struct IEditionUpgradeManagerVtbl {

    BEGIN_INTERFACE

        HRESULT(STDMETHODCALLTYPE *QueryInterface)(
            __RPC__in IEditionUpgradeManager * This,
            __RPC__in REFIID riid,
            _COM_Outptr_  void **ppvObject);

        ULONG(STDMETHODCALLTYPE *AddRef)(
            __RPC__in IEditionUpgradeManager * This);

        ULONG(STDMETHODCALLTYPE *Release)(
            __RPC__in IEditionUpgradeManager * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *InitializeWindow)(
            __RPC__in IEditionUpgradeManager * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *UpdateOperatingSystem)(
            __RPC__in IEditionUpgradeManager * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *ShowProductKeyUI)(
            __RPC__in IEditionUpgradeManager * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *UpdateOperatingSystemWithParams)(
            __RPC__in IEditionUpgradeManager * This);

        //incomplete definition
        HRESULT(STDMETHODCALLTYPE *AcquireModernLicenseForWindows)(
            __RPC__in IEditionUpgradeManager * This);

        HRESULT(STDMETHODCALLTYPE *AcquireModernLicenseWithPreviousId)(
            __RPC__in IEditionUpgradeManager * This,
            __RPC__in LPWSTR PreviousId,
            __RPC__in DWORD *Data);

    //incomplete, irrelevant
    END_INTERFACE

} *PIEditionUpgradeManagerVtbl;

typedef struct ISecurityEditorVtbl {

    BEGIN_INTERFACE

        HRESULT(STDMETHODCALLTYPE *QueryInterface)(
            __RPC__in ISecurityEditor * This,
            __RPC__in REFIID riid,
            _COM_Outptr_  void **ppvObject);

        ULONG(STDMETHODCALLTYPE *AddRef)(
            __RPC__in ISecurityEditor * This);

        ULONG(STDMETHODCALLTYPE *Release)(
            __RPC__in ISecurityEditor * This);

        HRESULT(STDMETHODCALLTYPE *GetSecurity)(
            __RPC__in ISecurityEditor * This,
            _In_ LPCOLESTR ObjectName,
            _In_ SE_OBJECT_TYPE ObjectType,
            _In_ SECURITY_INFORMATION SecurityInfo,
            _Out_opt_ LPCOLESTR * ppSDDLStr);

        HRESULT(STDMETHODCALLTYPE *SetSecurity)(
            __RPC__in ISecurityEditor * This,
            _In_ LPCOLESTR ObjectName,
            _In_ SE_OBJECT_TYPE ObjectType,
            _In_ SECURITY_INFORMATION SecurityInfo,
            _In_ LPCOLESTR ppSDDLStr);

    END_INTERFACE

} *PISecurityEditorVtbl;

// INTERFACE DEF

interface IColorDataProxy { CONST_VTBL struct IColorDataProxyVtbl *lpVtbl; };
interface ICMLuaUtil { CONST_VTBL struct ICMLuaUtilVtbl *lpVtbl; };
interface IEditionUpgradeManager { CONST_VTBL struct IEditionUpgradeManagerVtbl *lpVtbl; };
interface ISecurityEditor { CONST_VTBL struct ISecurityEditorVtbl *lpVtbl; };
