﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#ifdef PR_KOZANIREMOTEMANAGER_LIBID_UUID
#undef PR_KOZANIREMOTEMANAGER_LIBID_UUID
#define PR_KOZANIREMOTEMANAGER_LIBID_UUID        04256783-1404-4421-8499-9adbead6794d
#endif

#ifdef PR_KOZANIREMOTEMANAGER_CLSID_UUID
#undef PR_KOZANIREMOTEMANAGER_CLSID_UUID
#define PR_KOZANIREMOTEMANAGER_CLSID_UUID        4b2dd96b-f224-462b-bf09-de636dc8e328
#endif

#ifdef PR_KOZANIREMOTEMANAGER_CLSID_STRING
#undef PR_KOZANIREMOTEMANAGER_CLSID_STRING
#define PR_KOZANIREMOTEMANAGER_CLSID_STRING      _STRINGIZE(PR_KOZANIREMOTEMANAGER_CLSID_UUID)
#endif

#ifdef PR_KOZANIREMOTEMANAGER_CLSID_GUID
#undef PR_KOZANIREMOTEMANAGER_CLSID_GUID
#define PR_KOZANIREMOTEMANAGER_CLSID_GUID        0x4b2dd96b, 0xf224, 0x462b, { 0xbf, 0x09, 0xde, 0x63, 0x6d, 0xc8, 0xe3, 0x28 }
#endif
