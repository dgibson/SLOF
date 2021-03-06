/******************************************************************************
 * Copyright (c) 2007, 2012, 2013 IBM Corporation
 * All rights reserved.
 * This program and the accompanying materials
 * are made available under the terms of the BSD License
 * which accompanies this distribution, and is available at
 * http://www.opensource.org/licenses/bsd-license.php
 *
 * Contributors:
 *     IBM Corporation - initial implementation
 *****************************************************************************/
/*
 * USB SLOF Prototypes
 */

#ifndef _USB_SLOF_H
#define _USB_SLOF_H

#include <stdint.h>

extern uint32_t SLOF_GetTimer(void);
extern void SLOF_msleep(uint32_t time);
extern void *SLOF_dma_alloc(long size);
extern void SLOF_dma_free(void *virt, long size);
extern void *SLOF_alloc_mem(long size);
extern void *SLOF_alloc_mem_aligned(long align, long size);
extern void SLOF_free_mem(void *addr, long size);
extern long SLOF_dma_map_in(void *virt, long size, int cacheable);
extern void SLOF_dma_map_out(long phys, void *virt, long size);

#endif
