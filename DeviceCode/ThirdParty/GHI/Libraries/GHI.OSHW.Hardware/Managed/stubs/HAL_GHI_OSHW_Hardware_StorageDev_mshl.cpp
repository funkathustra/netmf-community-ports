//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "HAL.h"
#include "HAL_GHI_OSHW_Hardware_StorageDev.h"

using namespace GHI::OSHW::Hardware;


HRESULT Library_HAL_GHI_OSHW_Hardware_StorageDev::MountSDToSystem___STATIC__VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        StorageDev::MountSDToSystem( hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_OSHW_Hardware_StorageDev::MountSDToSystem___STATIC__VOID__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        StorageDev::MountSDToSystem( param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_HAL_GHI_OSHW_Hardware_StorageDev::UnmountSD___STATIC__VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        StorageDev::UnmountSD( hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}
