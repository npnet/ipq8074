/* DO NOT EDIT
 * This dissector is autogenerated
 *   ronnie sahlberg 2005
 */
/* packet-dcerpc-budb.h
 * Routines for BUDB packet disassembly
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __PACKET_DCERPC_BUDB_H
#define __PACKET_DCERPC_BUDB_H



/* INCLUDED FILE : ETH_HDR */
#define BU_MAXNAMELEN		128
#define BU_MAXTAPELEN		256
#define BU_MAXHOSTLEN		128
#define BU_MAXTOKENLEN		16
#define BU_MAXUNAMELEN		256
#define BU_MAXCELLLEN		256
#define BU_MAXINAMELEN		128
#define BU_MAXPATHLEN		256
#define BU_MAXGENNAMELEN		512
#define BU_MAXVOLCOUNT		64
#define BUDB_MAJORVERSION		1
#define BUDB_PROVIDER_VERSION		2
#define TB_DUMPSCHEDULE		0
#define TB_VOLUMESET		1
#define TB_TAPEHOSTS		2
#define TB_NUM		3
#define TB_MAX		6
#define BUDB_DUMP_INCOMPLETE		1<<0
#define BUDB_DUMP_TAPEERROR		1<<1
#define BUDB_DUMP_INPROGRESS		1<<2
#define BUDB_DUMP_ABORTED		1<<3
#define BUDB_TAPE_TAPEERROR		1<<0
#define BUDB_TAPE_DELETED		1<<1
#define BUDB_TAPE_BEINGWRITTEN		1<<2
#define BUDB_TAPE_ABORTED		1<<3
#define BUDB_TAPE_STAGED		1<<4
#define BUDB_TAPE_WRITTEN		1<<5
#define BUDB_VOL_TAPEERROR		1<<0
#define BUDB_VOL_FILEERROR		1<<1
#define BUDB_VOL_BEINGWRITTEN		1<<2
#define BUDB_VOL_FIRSTFRAG		1<<3
#define BUDB_VOL_LASTFRAG		1<<4
#define BUDB_VOL_ABORTED		1<<5
#define BUDB_OP_NAMES		0x7
#define BUDB_OP_STARTS		0x7<<3
#define BUDB_OP_ENDS		0x7<<6
#define BUDB_OP_TIMES		0x3<<9
#define BUDB_OP_MISC		0xff<<16
#define BUDB_OP_DUMPNAME		1<<0
#define BUDB_OP_VOLUMENAME		2<<0
#define BUDB_OP_TAPENAME		3<<0
#define BUDB_OP_STARTTIME		1<<3
#define BUDB_OP_RANGE		1<<6
#define BUDB_OP_NPREVIOUS		2<<6
#define BUDB_OP_NFOLLOWING		3<<6
#define BUDB_OP_DUMPID		2<<3
#define BUDB_OP_CLONETIME		1<<9
#define BUDB_OP_DUMPTIME		2<<9
#define BUDB_OP_INCTIME		3<<9
#define BUDB_OP_FIRSTFRAG		1<<16
#define BUDB_MAX_RETURN_LIST		1000
#define BUDB_MAX_CHAR_LIST		1024
#define BUDB_MAX_VOL_COUNT		64
#define BUDB_TEXT_COMPLETE		1
#define SD_DBHEADER		1
#define SD_DUMP		2
#define SD_TAPE		3
#define SD_VOLUME		4
#define SD_TEXT_DUMPSCHEDULE		5
#define SD_TEXT_VOLUMESET		6
#define SD_TEXT_TAPEHOSTS		7
#define SD_END		8
int budb_dissect_principal(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_tapeSet(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_dumpEntry(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_tapeEntry(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_volumeEntry(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_volumeList(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_dumpList(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_tapeList(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_charListT(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_DbHeader(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_dbVolume(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_structDumpHeader(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_dfs_interfaceDescription(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
int budb_dissect_dfs_interfaceList(tvbuff_t *tvb, int offset, packet_info *pinfo, proto_tree *tree, dcerpc_info *di, guint8 *drep, int hf_index, guint32 param);
/* END OF INCLUDED FILE : ETH_HDR */



#endif /* packet-dcerpc-budb.h */