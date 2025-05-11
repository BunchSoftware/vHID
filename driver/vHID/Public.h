/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_vHID,
    0xb938946f,0xe8cc,0x48d6,0xb9,0x99,0x53,0xda,0xb9,0xf2,0xf8,0x3f);
// {b938946f-e8cc-48d6-b999-53dab9f2f83f}
