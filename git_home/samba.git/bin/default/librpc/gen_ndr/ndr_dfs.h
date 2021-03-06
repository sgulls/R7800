/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/librpc/gen_ndr/dfs.h"

#ifndef _HEADER_NDR_netdfs
#define _HEADER_NDR_netdfs

#define NDR_NETDFS_UUID "4fc742e0-4a10-11cf-8273-00aa004ae673"
#define NDR_NETDFS_VERSION 3.0
#define NDR_NETDFS_NAME "netdfs"
#define NDR_NETDFS_HELPSTRING "Settings for Microsoft Distributed File System"
extern const struct ndr_interface_table ndr_table_netdfs;
#define NDR_DFS_GETMANAGERVERSION (0x00)

#define NDR_DFS_ADD (0x01)

#define NDR_DFS_REMOVE (0x02)

#define NDR_DFS_SETINFO (0x03)

#define NDR_DFS_GETINFO (0x04)

#define NDR_DFS_ENUM (0x05)

#define NDR_DFS_RENAME (0x06)

#define NDR_DFS_MOVE (0x07)

#define NDR_DFS_MANAGERGETCONFIGINFO (0x08)

#define NDR_DFS_MANAGERSENDSITEINFO (0x09)

#define NDR_DFS_ADDFTROOT (0x0a)

#define NDR_DFS_REMOVEFTROOT (0x0b)

#define NDR_DFS_ADDSTDROOT (0x0c)

#define NDR_DFS_REMOVESTDROOT (0x0d)

#define NDR_DFS_MANAGERINITIALIZE (0x0e)

#define NDR_DFS_ADDSTDROOTFORCED (0x0f)

#define NDR_DFS_GETDCADDRESS (0x10)

#define NDR_DFS_SETDCADDRESS (0x11)

#define NDR_DFS_FLUSHFTTABLE (0x12)

#define NDR_DFS_ADD2 (0x13)

#define NDR_DFS_REMOVE2 (0x14)

#define NDR_DFS_ENUMEX (0x15)

#define NDR_DFS_SETINFO2 (0x16)

#define NDR_NETDFS_CALL_COUNT (23)
void ndr_print_dfs_ManagerVersion(struct ndr_print *ndr, const char *name, enum dfs_ManagerVersion r);
void ndr_print_dfs_Info0(struct ndr_print *ndr, const char *name, const struct dfs_Info0 *r);
void ndr_print_dfs_Info1(struct ndr_print *ndr, const char *name, const struct dfs_Info1 *r);
enum ndr_err_code ndr_push_dfs_VolumeState(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_dfs_VolumeState(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_dfs_VolumeState(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_dfs_Info2(struct ndr_print *ndr, const char *name, const struct dfs_Info2 *r);
enum ndr_err_code ndr_push_dfs_StorageState(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_dfs_StorageState(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_dfs_StorageState(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_dfs_StorageInfo(struct ndr_print *ndr, const char *name, const struct dfs_StorageInfo *r);
void ndr_print_dfs_Info3(struct ndr_print *ndr, const char *name, const struct dfs_Info3 *r);
void ndr_print_dfs_Info4(struct ndr_print *ndr, const char *name, const struct dfs_Info4 *r);
enum ndr_err_code ndr_push_dfs_PropertyFlags(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_dfs_PropertyFlags(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_dfs_PropertyFlags(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_dfs_Info5(struct ndr_print *ndr, const char *name, const struct dfs_Info5 *r);
void ndr_print_dfs_Target_PriorityClass(struct ndr_print *ndr, const char *name, enum dfs_Target_PriorityClass r);
void ndr_print_dfs_Target_Priority(struct ndr_print *ndr, const char *name, const struct dfs_Target_Priority *r);
void ndr_print_dfs_StorageInfo2(struct ndr_print *ndr, const char *name, const struct dfs_StorageInfo2 *r);
void ndr_print_dfs_Info6(struct ndr_print *ndr, const char *name, const struct dfs_Info6 *r);
void ndr_print_dfs_Info7(struct ndr_print *ndr, const char *name, const struct dfs_Info7 *r);
void ndr_print_dfs_Info100(struct ndr_print *ndr, const char *name, const struct dfs_Info100 *r);
void ndr_print_dfs_Info101(struct ndr_print *ndr, const char *name, const struct dfs_Info101 *r);
void ndr_print_dfs_Info102(struct ndr_print *ndr, const char *name, const struct dfs_Info102 *r);
void ndr_print_dfs_Info103(struct ndr_print *ndr, const char *name, const struct dfs_Info103 *r);
void ndr_print_dfs_Info104(struct ndr_print *ndr, const char *name, const struct dfs_Info104 *r);
void ndr_print_dfs_Info105(struct ndr_print *ndr, const char *name, const struct dfs_Info105 *r);
void ndr_print_dfs_Info106(struct ndr_print *ndr, const char *name, const struct dfs_Info106 *r);
void ndr_print_dfs_Info200(struct ndr_print *ndr, const char *name, const struct dfs_Info200 *r);
void ndr_print_dfs_VolumeFlavor(struct ndr_print *ndr, const char *name, enum dfs_VolumeFlavor r);
void ndr_print_dfs_Info300(struct ndr_print *ndr, const char *name, const struct dfs_Info300 *r);
void ndr_print_dfs_Info(struct ndr_print *ndr, const char *name, const union dfs_Info *r);
void ndr_print_dfs_EnumArray1(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray1 *r);
void ndr_print_dfs_EnumArray2(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray2 *r);
void ndr_print_dfs_EnumArray3(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray3 *r);
void ndr_print_dfs_EnumArray4(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray4 *r);
void ndr_print_dfs_EnumArray5(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray5 *r);
void ndr_print_dfs_EnumArray6(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray6 *r);
void ndr_print_dfs_EnumArray200(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray200 *r);
void ndr_print_dfs_EnumArray300(struct ndr_print *ndr, const char *name, const struct dfs_EnumArray300 *r);
void ndr_print_dfs_EnumInfo(struct ndr_print *ndr, const char *name, const union dfs_EnumInfo *r);
void ndr_print_dfs_EnumStruct(struct ndr_print *ndr, const char *name, const struct dfs_EnumStruct *r);
void ndr_print_dfs_UnknownStruct(struct ndr_print *ndr, const char *name, const struct dfs_UnknownStruct *r);
enum ndr_err_code ndr_push_dfs_GetManagerVersion(struct ndr_push *ndr, int flags, const struct dfs_GetManagerVersion *r);
enum ndr_err_code ndr_pull_dfs_GetManagerVersion(struct ndr_pull *ndr, int flags, struct dfs_GetManagerVersion *r);
void ndr_print_dfs_GetManagerVersion(struct ndr_print *ndr, const char *name, int flags, const struct dfs_GetManagerVersion *r);
void ndr_print_dfs_Add(struct ndr_print *ndr, const char *name, int flags, const struct dfs_Add *r);
void ndr_print_dfs_Remove(struct ndr_print *ndr, const char *name, int flags, const struct dfs_Remove *r);
void ndr_print_dfs_SetInfo(struct ndr_print *ndr, const char *name, int flags, const struct dfs_SetInfo *r);
void ndr_print_dfs_GetInfo(struct ndr_print *ndr, const char *name, int flags, const struct dfs_GetInfo *r);
void ndr_print_dfs_Enum(struct ndr_print *ndr, const char *name, int flags, const struct dfs_Enum *r);
void ndr_print_dfs_Rename(struct ndr_print *ndr, const char *name, int flags, const struct dfs_Rename *r);
void ndr_print_dfs_Move(struct ndr_print *ndr, const char *name, int flags, const struct dfs_Move *r);
void ndr_print_dfs_ManagerGetConfigInfo(struct ndr_print *ndr, const char *name, int flags, const struct dfs_ManagerGetConfigInfo *r);
void ndr_print_dfs_ManagerSendSiteInfo(struct ndr_print *ndr, const char *name, int flags, const struct dfs_ManagerSendSiteInfo *r);
void ndr_print_dfs_AddFtRoot(struct ndr_print *ndr, const char *name, int flags, const struct dfs_AddFtRoot *r);
void ndr_print_dfs_RemoveFtRoot(struct ndr_print *ndr, const char *name, int flags, const struct dfs_RemoveFtRoot *r);
void ndr_print_dfs_AddStdRoot(struct ndr_print *ndr, const char *name, int flags, const struct dfs_AddStdRoot *r);
void ndr_print_dfs_RemoveStdRoot(struct ndr_print *ndr, const char *name, int flags, const struct dfs_RemoveStdRoot *r);
void ndr_print_dfs_ManagerInitialize(struct ndr_print *ndr, const char *name, int flags, const struct dfs_ManagerInitialize *r);
void ndr_print_dfs_AddStdRootForced(struct ndr_print *ndr, const char *name, int flags, const struct dfs_AddStdRootForced *r);
void ndr_print_dfs_GetDcAddress(struct ndr_print *ndr, const char *name, int flags, const struct dfs_GetDcAddress *r);
void ndr_print_dfs_SetDcAddress(struct ndr_print *ndr, const char *name, int flags, const struct dfs_SetDcAddress *r);
void ndr_print_dfs_FlushFtTable(struct ndr_print *ndr, const char *name, int flags, const struct dfs_FlushFtTable *r);
void ndr_print_dfs_Add2(struct ndr_print *ndr, const char *name, int flags, const struct dfs_Add2 *r);
void ndr_print_dfs_Remove2(struct ndr_print *ndr, const char *name, int flags, const struct dfs_Remove2 *r);
enum ndr_err_code ndr_push_dfs_EnumEx(struct ndr_push *ndr, int flags, const struct dfs_EnumEx *r);
enum ndr_err_code ndr_pull_dfs_EnumEx(struct ndr_pull *ndr, int flags, struct dfs_EnumEx *r);
void ndr_print_dfs_EnumEx(struct ndr_print *ndr, const char *name, int flags, const struct dfs_EnumEx *r);
void ndr_print_dfs_SetInfo2(struct ndr_print *ndr, const char *name, int flags, const struct dfs_SetInfo2 *r);
#endif /* _HEADER_NDR_netdfs */
