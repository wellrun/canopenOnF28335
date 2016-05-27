/*
This file is part of CanFestival, a library implementing CanOpen Stack.

Copyright (C): Edouard TISSERANT and Francis DUPIN
C2000 Port: Michael LUTZ

See COPYING file for copyrights details.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


#ifndef __CAN_CANFESTIVAL__
#define __CAN_CANFESTIVAL__

#include "applicfg.h"
#include "data.h"

// ---------  to be called by user app ---------
CAN_PORT canInit(int port, CO_Data *ObjDict_Data, unsigned long bitrate);
UNS8 canSetBitrate(CAN_PORT port, unsigned long bitrate);
void initCanTimer(void);
UNS8 canSend(CAN_PORT port, Message *m);
UNS8 canChangeBaudRate(CAN_PORT port, char *rate);
void canSetMsgFilter(CAN_PORT p, UNS8 nodeId);

#endif