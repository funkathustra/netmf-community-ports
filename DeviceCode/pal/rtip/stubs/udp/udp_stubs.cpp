////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>

//--//

#include "xnconf.h"
#include "dhcpconf.h"
#include "rtip.h"
#include "rtipapi.h"

extern "C"
{
int         xn_udp_initialize(void){ return 0; }

/*
PUDPPORT    os_alloc_udpport(void) { return 0; }
void        os_free_udpport(PUDPPORT port) { }
*/
void        clear_udp_iface_cache(void) { }
void        udp_invalidate_sockets(RTP_PFUINT8 ip_addr) { }
}

