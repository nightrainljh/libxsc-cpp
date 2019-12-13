/*
  Copyright 2019 www.dev5.cn, Inc. dev5@qq.com
 
  This file is part of X-MSG-IM.
 
  X-MSG-IM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  X-MSG-IM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 
  You should have received a copy of the GNU Affero General Public License
  along with X-MSG-IM.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef RUDP_XSCRUDPCFG_H_
#define RUDP_XSCRUDPCFG_H_

#if !defined (__LIBXSC_H__) && !defined (LIBXSC)
#error only libxsc.h can be included directly.
#endif

#include "../udp/XscUdpCfg.h"

class XscRudpCfg: public XscUdpCfg
{
public:
	uint lazyClose; 
	uint heartbeat; 
	uint n2hZombie; 
	uint n2hTransTimeout; 
	bool kcpNodelay; 
	uint kcpInterval; 
	uint kcpResend; 
	bool kcpNc; 
	uint kcpRcvWind; 
	uint kcpSndWind; 
	uint kcpMtu; 
	uint kcpMinRto; 
public:
	XscRudpCfg();
	virtual ~XscRudpCfg();
};

#endif 
