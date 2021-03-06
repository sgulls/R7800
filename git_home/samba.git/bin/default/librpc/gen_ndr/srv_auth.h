#include "bin/default/librpc/gen_ndr/ndr_auth.h"
#ifndef __SRV_AUTH__
#define __SRV_AUTH__
const struct api_struct *auth_get_pipe_fns(int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_auth_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_auth_shutdown(void);
#endif /* __SRV_AUTH__ */
