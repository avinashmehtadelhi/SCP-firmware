/*
 * Arm SCP/MCP Software
 * Copyright (c) 2020-2021, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FMW_IO_H
#define FMW_IO_H

#include <fwk_id.h>
#include <fwk_module_idx.h>

#ifndef BUILD_HAS_MOD_F_UART3
#define FMW_IO_STDIN_ID FWK_ID_NONE
#define FMW_IO_STDOUT_ID FWK_ID_NONE
#else
#define FMW_IO_STDIN_ID FWK_ID_NONE
#define FMW_IO_STDOUT_ID FWK_ID_ELEMENT(FWK_MODULE_IDX_F_UART3, 0)
#endif

#endif /* FMW_IO_H */
