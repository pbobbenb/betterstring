/***************************************************************************

 BetterString.mcc - A better String gadget MUI Custom Class
 Copyright (C) 1997-2000 Allan Odgaard
 Copyright (C) 2005-2020 BetterString.mcc Open Source Team

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 TextEditor class Support Site:  http://www.sf.net/projects/texteditor-mcc

 $Id$

***************************************************************************/

#include <stdint.h>

#if !defined(__MORPHOS__)
#if defined(__AROS__)
const uint8_t icon32[] =
{
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x0d, 0x00, 0x00, 0x00, 0xff, 0xa7, 0xa7, 0xa7, 0xff, 0xb2, 0xb2, 0xb2,
	0xff, 0xbc, 0xbc, 0xbc, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xd1, 0xd1, 0xd1, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0xec, 0xec, 0xec, 0xff, 0xf3, 0xf3, 0xf3, 0xff, 0xf9, 0xf9, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf9, 0xf9,
	0xff, 0xf3, 0xf3, 0xf3, 0xff, 0xec, 0xec, 0xec, 0xff, 0xe5, 0xe5, 0xe5, 0xff, 0xdc, 0xdc, 0xdc, 0xff, 0xd1, 0xd1, 0xd1, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xbc, 0xbc, 0xbc, 0xff, 0xb2, 0xb2, 0xb2, 0x0d, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x1b, 0x00, 0x00, 0x00, 0xff, 0xa7, 0xa7, 0xa7, 0xff, 0x7b, 0x7b, 0x7b, 0xff, 0x81, 0x81, 0x81, 0xff, 0x8a, 0x8a, 0x8a, 0xff, 0x90, 0x90, 0x90, 0xff, 0x96, 0x96, 0x96, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0xa2, 0xa2, 0xa2,
	0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa5, 0xa5, 0xa5, 0xff, 0xa2, 0xa2, 0xa2, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x96, 0x96, 0x96, 0xff, 0x90, 0x90, 0x90, 0xff, 0x8a, 0x8a, 0x8a,
	0xff, 0x81, 0x81, 0x81, 0xff, 0xb2, 0xb2, 0xb2, 0x1b, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0xa7, 0xa7, 0xa7, 0xff, 0x81, 0x81, 0x81, 0x6e, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00,
	0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00,
	0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0xff, 0x8a, 0x8a, 0x8a, 0xff, 0xb2, 0xb2, 0xb2, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00,
	0xff, 0xa5, 0xa5, 0xa5, 0xff, 0x8a, 0x8a, 0x8a, 0x54, 0x00, 0x00, 0x00, 0xff, 0xa8, 0x5d, 0x5d, 0xff, 0xbb, 0x70, 0x70, 0xff, 0xb0, 0x65, 0x65, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
	0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0xff, 0x93, 0x93, 0x93, 0xff, 0xb0, 0xb0, 0xb0,
	0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0x9f, 0x9f, 0x9f, 0xff, 0x90, 0x90, 0x90, 0x3a, 0x00, 0x00, 0x00, 0xff, 0xcb, 0x71, 0x71, 0xff, 0xef, 0x96, 0x96, 0xff, 0xda, 0x80, 0x80,
	0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
	0x14, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0xff, 0x99, 0x99, 0x99, 0xff, 0xaa, 0xaa, 0xaa, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x96, 0x96, 0x96,
	0x3b, 0x00, 0x00, 0x00, 0xff, 0xc9, 0x6f, 0x6f, 0xff, 0xe0, 0x86, 0x86, 0xff, 0xd3, 0x79, 0x79, 0x15, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
	0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0xff, 0xa2, 0xa2, 0xa2, 0xff, 0xa5, 0xa5, 0xa5, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0x97, 0x97, 0x97, 0xff, 0x9c, 0x9c, 0x9c, 0x41, 0x00, 0x00, 0x00, 0xff, 0xb4, 0x5a, 0x5a, 0xff, 0xc5, 0x6b, 0x6b, 0xff, 0xbb, 0x61, 0x61, 0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
	0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00,
	0xff, 0xa8, 0xa8, 0xa8, 0xff, 0x9f, 0x9f, 0x9f, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0x92, 0x92, 0x92, 0xff, 0xa2, 0xa2, 0xa2, 0x4a, 0x00, 0x00, 0x00, 0xff, 0x9c, 0x42, 0x42,
	0xff, 0xa5, 0x4b, 0x4b, 0xff, 0xa0, 0x46, 0x46, 0x27, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
	0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0xff, 0xab, 0xab, 0xab, 0xff, 0x9a, 0x9a, 0x9a, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00,
	0xff, 0x8a, 0x8a, 0x8a, 0xff, 0xa5, 0xa5, 0xa5, 0x48, 0x00, 0x00, 0x00, 0xff, 0x7c, 0x22, 0x22, 0xff, 0x85, 0x2b, 0x2b, 0xff, 0x80, 0x26, 0x26, 0x24, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
	0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0xff, 0xb1, 0xb1, 0xb1, 0xff, 0x92, 0x92, 0x92,
	0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0x85, 0x85, 0x85, 0xff, 0xa5, 0xa5, 0xa5, 0x41, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00,
	0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
	0x14, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0xff, 0xb1, 0xb1, 0xb1, 0xff, 0x8d, 0x8d, 0x8d, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0x7d, 0x7d, 0x7d, 0xff, 0xa5, 0xa5, 0xa5,
	0xff, 0xb1, 0xb1, 0xb1, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xc9, 0xc9, 0xc9, 0xff, 0xd5, 0xd5, 0xd5, 0xff, 0xe0, 0xe0, 0xe0, 0xff, 0xea, 0xea, 0xea, 0xff, 0xf1, 0xf1, 0xf1, 0xff, 0xf9, 0xf9, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf9, 0xf9,
	0xff, 0xf1, 0xf1, 0xf1, 0xff, 0xea, 0xea, 0xea, 0xff, 0xe0, 0xe0, 0xe0, 0xff, 0xd5, 0xd5, 0xd5, 0xff, 0xc9, 0xc9, 0xc9, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0xb1, 0xb1, 0xb1, 0xff, 0x85, 0x85, 0x85, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x2a, 0x00, 0x00, 0x00, 0xff, 0x75, 0x75, 0x75, 0xff, 0x7d, 0x7d, 0x7d, 0xff, 0x82, 0x82, 0x82, 0xff, 0x87, 0x87, 0x87, 0xff, 0x8d, 0x8d, 0x8d, 0xff, 0x92, 0x92, 0x92, 0xff, 0x97, 0x97, 0x97, 0xff, 0x9a, 0x9a, 0x9a,
	0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x9a, 0x9a, 0x9a, 0xff, 0x97, 0x97, 0x97, 0xff, 0x92, 0x92, 0x92, 0xff, 0x8d, 0x8d, 0x8d, 0xff, 0x87, 0x87, 0x87,
	0xff, 0x82, 0x82, 0x82, 0xff, 0x7d, 0x7d, 0x7d, 0x2a, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
	0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
	0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x0d, 0x00, 0x00, 0x00,
	0x1b, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00,
	0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
	0x0d, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
};
#else
const uint32_t icon32[] =
{
	0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff,
	0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff,
	0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff,
	0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff,
	0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x0d000000, 0xffa7a7a7, 0xffb2b2b2, 0xffbcbcbc, 0xffc7c7c7, 0xffd1d1d1, 0xffdcdcdc, 0xffe5e5e5,
	0xffececec, 0xfff3f3f3, 0xfff9f9f9, 0xffffffff, 0xfff9f9f9, 0xfff3f3f3, 0xffececec, 0xffe5e5e5, 0xffdcdcdc, 0xffd1d1d1, 0xffc7c7c7, 0xffbcbcbc, 0xffb2b2b2, 0x0d000000, 0x00ff00ff, 0x00ff00ff, 0x1b000000, 0xffa7a7a7, 0xff7b7b7b, 0xff818181, 0xff8a8a8a,
	0xff909090, 0xff969696, 0xff9c9c9c, 0xffa2a2a2, 0xffa5a5a5, 0xffa5a5a5, 0xffa5a5a5, 0xffa5a5a5, 0xffa5a5a5, 0xffa2a2a2, 0xff9c9c9c, 0xff969696, 0xff909090, 0xff8a8a8a, 0xff818181, 0xffb2b2b2, 0x1b000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xffa7a7a7,
	0xff818181, 0x6e000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x61000000, 0x6e000000, 0xff8a8a8a, 0xffb2b2b2, 0x2a000000, 0x00ff00ff,
	0x00ff00ff, 0x2a000000, 0xffa5a5a5, 0xff8a8a8a, 0x54000000, 0xffa85d5d, 0xffbb7070, 0xffb06565, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x3a000000, 0x54000000, 0xff939393,
	0xffb0b0b0, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xff9f9f9f, 0xff909090, 0x3a000000, 0xffcb7171, 0xffef9696, 0xffda8080, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000,
	0x14000000, 0x3a000000, 0xff999999, 0xffaaaaaa, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xff9c9c9c, 0xff969696, 0x3b000000, 0xffc96f6f, 0xffe08686, 0xffd37979, 0x15000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000,
	0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x3a000000, 0xffa2a2a2, 0xffa5a5a5, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xff979797, 0xff9c9c9c, 0x41000000, 0xffb45a5a, 0xffc56b6b, 0xffbb6161, 0x1c000000, 0x14000000, 0x14000000, 0x14000000,
	0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x3a000000, 0xffa8a8a8, 0xff9f9f9f, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xff929292, 0xffa2a2a2, 0x4a000000, 0xff9c4242, 0xffa54b4b, 0xffa04646, 0x27000000,
	0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x3a000000, 0xffababab, 0xff9a9a9a, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xff8a8a8a, 0xffa5a5a5, 0x48000000, 0xff7c2222,
	0xff852b2b, 0xff802626, 0x24000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x3a000000, 0xffb1b1b1, 0xff929292, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xff858585,
	0xffa5a5a5, 0x41000000, 0x29000000, 0x31000000, 0x29000000, 0x1c000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x14000000, 0x3a000000, 0xffb1b1b1, 0xff8d8d8d, 0x2a000000, 0x00ff00ff,
	0x00ff00ff, 0x2a000000, 0xff7d7d7d, 0xffa5a5a5, 0xffb1b1b1, 0xffbdbdbd, 0xffc9c9c9, 0xffd5d5d5, 0xffe0e0e0, 0xffeaeaea, 0xfff1f1f1, 0xfff9f9f9, 0xffffffff, 0xfff9f9f9, 0xfff1f1f1, 0xffeaeaea, 0xffe0e0e0, 0xffd5d5d5, 0xffc9c9c9, 0xffbdbdbd, 0xffb1b1b1,
	0xff858585, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x2a000000, 0xff757575, 0xff7d7d7d, 0xff828282, 0xff878787, 0xff8d8d8d, 0xff929292, 0xff979797, 0xff9a9a9a, 0xff9c9c9c, 0xff9c9c9c, 0xff9c9c9c, 0xff9c9c9c, 0xff9c9c9c, 0xff9a9a9a, 0xff979797, 0xff929292,
	0xff8d8d8d, 0xff878787, 0xff828282, 0xff7d7d7d, 0x2a000000, 0x00ff00ff, 0x00ff00ff, 0x1b000000, 0x38000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000,
	0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x54000000, 0x38000000, 0x1b000000, 0x00ff00ff, 0x00ff00ff, 0x0d000000, 0x1b000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000,
	0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x2a000000, 0x1b000000, 0x0d000000, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff,
	0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff,
	0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff, 0x00ff00ff,
};
#endif
#else // !__MORPHOS__
const uint8_t icon32[] =
{
#if defined(__PPC__)
	0x00, 0x00, 0x00, 0x18,
	0x00, 0x00, 0x00, 0x14,
	'B', 'Z', '2', '\0',
	0x00, 0x00, 0x01, 0xf1,
#else
	0x18, 0x00, 0x00, 0x00,
	0x14, 0x00, 0x00, 0x00,
	'B', 'Z', '2', '\0',
	0xf1, 0x01, 0x00, 0x00,
#endif

	0x42, 0x5A, 0x68, 0x39, 0x31, 0x41, 0x59, 0x26, 0x53, 0x59, 0x73, 0xA8, 0x12, 0xFB, 0x00, 0x01,
	0x36, 0x7F, 0xFF, 0xE0, 0x02, 0x06, 0x0C, 0x15, 0xB8, 0x20, 0x58, 0x31, 0x58, 0x04, 0x12, 0x22,
	0x09, 0xE2, 0x2E, 0x73, 0x92, 0x59, 0xB4, 0xD2, 0xD8, 0x74, 0x0E, 0x02, 0xA8, 0x2A, 0x14, 0x42,
	0x14, 0xA8, 0x20, 0xC0, 0x01, 0xB3, 0xB2, 0x0D, 0xA1, 0xA4, 0x89, 0xA9, 0xEA, 0x6F, 0x45, 0x36,
	0x9A, 0x8C, 0x4C, 0x27, 0x92, 0x19, 0x06, 0x99, 0x3D, 0x4F, 0x69, 0xAA, 0x36, 0x9A, 0x9E, 0x26,
	0x9A, 0x20, 0xC2, 0x19, 0x19, 0x0C, 0x32, 0x40, 0x4D, 0x35, 0x35, 0x32, 0x68, 0xC9, 0x93, 0x4D,
	0x00, 0x07, 0xA1, 0x0C, 0x26, 0x9A, 0x1A, 0x00, 0x00, 0x00, 0x18, 0xE3, 0x26, 0x4D, 0x1A, 0x03,
	0x46, 0x98, 0x8C, 0x8D, 0x0C, 0x43, 0x02, 0x68, 0xD3, 0x10, 0x62, 0x34, 0x18, 0x40, 0x01, 0x82,
	0x44, 0xA9, 0xA8, 0x00, 0x00, 0x0D, 0x34, 0x00, 0x6C, 0xA6, 0x9E, 0xA6, 0x9A, 0x0D, 0x1A, 0x01,
	0xA6, 0x80, 0x06, 0x86, 0x9A, 0x14, 0xDA, 0x0A, 0x42, 0x02, 0x96, 0x09, 0x46, 0xB9, 0xF1, 0x49,
	0x58, 0x09, 0x06, 0x8C, 0x90, 0x9A, 0x8D, 0x36, 0x10, 0x04, 0x59, 0x59, 0x54, 0xC1, 0x10, 0x05,
	0x64, 0x01, 0x05, 0xE8, 0xE8, 0x02, 0x69, 0x02, 0x61, 0x59, 0x0B, 0x11, 0xE8, 0xEA, 0xEA, 0x0A,
	0x49, 0x53, 0x29, 0xAC, 0x02, 0x6C, 0xE5, 0x4A, 0x41, 0x24, 0x81, 0xFE, 0x4A, 0x48, 0x06, 0xD8,
	0x26, 0x21, 0x0C, 0x42, 0x63, 0xB3, 0x04, 0xB4, 0x01, 0x25, 0xB6, 0xE4, 0x64, 0x86, 0x34, 0x53,
	0xD1, 0xA2, 0x5F, 0xBA, 0xB0, 0xBD, 0x81, 0xF8, 0x21, 0x8A, 0x49, 0xA7, 0x6C, 0xE0, 0x80, 0x6C,
	0x10, 0x3F, 0x5A, 0xA5, 0x7C, 0xC0, 0x01, 0x0C, 0x47, 0x90, 0x5F, 0xE3, 0x96, 0x86, 0x33, 0x3D,
	0x44, 0x88, 0x08, 0xF3, 0x22, 0x74, 0xAC, 0x08, 0xAD, 0xFA, 0x37, 0x5B, 0xDF, 0x0C, 0x8B, 0xE8,
	0x8B, 0x87, 0xCF, 0x4C, 0x8E, 0x4A, 0x3B, 0xBE, 0x15, 0x98, 0x1B, 0xB4, 0x18, 0x8C, 0x05, 0xE5,
	0x3E, 0x9A, 0x0A, 0x11, 0x80, 0x30, 0xED, 0x0D, 0xA8, 0x6C, 0x65, 0xBE, 0xEA, 0x05, 0xA0, 0xD3,
	0x21, 0x0C, 0x09, 0xC8, 0x4C, 0x29, 0x90, 0x98, 0x4E, 0x40, 0x31, 0x3E, 0xF2, 0x62, 0x13, 0x2E,
	0x35, 0x0B, 0xC4, 0x4F, 0xC8, 0xAC, 0x42, 0x61, 0x3C, 0x36, 0x81, 0x80, 0x56, 0x20, 0x63, 0xA8,
	0x30, 0x62, 0xA8, 0xA1, 0xA6, 0x21, 0x89, 0x35, 0xE6, 0x26, 0x4C, 0x70, 0x90, 0x7A, 0x12, 0xC3,
	0x68, 0xF5, 0x03, 0x8C, 0x50, 0x0C, 0x68, 0xF6, 0x06, 0x7B, 0x83, 0x5F, 0x00, 0xD6, 0xE8, 0x35,
	0xF2, 0x0D, 0x5B, 0x06, 0xBE, 0x81, 0xAD, 0x40, 0x67, 0xD8, 0x33, 0xF0, 0x19, 0x70, 0x1A, 0xFD,
	0x06, 0x5D, 0x0B, 0xA4, 0x1F, 0xC0, 0x72, 0x08, 0x40, 0x88, 0x1A, 0x4B, 0x39, 0xCB, 0xC1, 0x16,
	0x64, 0xAB, 0x2C, 0xD5, 0x6D, 0x51, 0x92, 0xDC, 0x75, 0x2D, 0xEF, 0x34, 0x3A, 0xE4, 0xBB, 0x36,
	0xA6, 0x6D, 0xAA, 0x12, 0x0D, 0xC1, 0x19, 0xE2, 0xC1, 0xB4, 0xD7, 0xAD, 0x12, 0x75, 0x80, 0xE8,
	0xCE, 0xDE, 0x88, 0x65, 0xAD, 0xFD, 0x70, 0xBB, 0x49, 0xBC, 0x00, 0x50, 0xAC, 0xA9, 0x07, 0x8D,
	0x89, 0x18, 0x15, 0x0B, 0xF7, 0xD8, 0x3B, 0x8B, 0x47, 0x37, 0x83, 0xEF, 0xB9, 0x91, 0x0C, 0xD1,
	0x43, 0x4A, 0x20, 0xFE, 0x50, 0x30, 0xEC, 0x0C, 0x4A, 0x96, 0x52, 0xC2, 0x4E, 0x98, 0x72, 0x5F,
	0x82, 0x48, 0xF7, 0x5F, 0x01, 0x83, 0x20, 0xBB, 0x92, 0x29, 0xC2, 0x84, 0x83, 0x9D, 0x40, 0x97,
	0xD8,
};
#endif // !__MORPHOS__
