/**/
/** \file mm.c
 * \brief AAL-Host: Memory management misc functions (not implemented yet)
 *
 * (C) Copyright 2011 Taku Shimosawa.
 */
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/mm.h>
#include <linux/io.h>
#include <linux/slab.h>
#include <asm/bitops.h>

#include <ihk/ihk_host_driver.h>

void *aal_host_map_generic(aal_device_t dev, unsigned long phys,
                           void *virt, unsigned long size, int flags)
{
	printk("%s: not implemented -> %lx, %p, %lx, %x\n",
	       __FUNCTION__, phys, virt, size, flags);

	return NULL;
}

int aal_host_unmap_generic(aal_device_t dev, void *virt, unsigned long size)
{
	printk("%s: not implemented -> %p, %lx\n", __FUNCTION__, virt, size);

	return -ENOSYS;
}

EXPORT_SYMBOL(aal_host_map_generic);
EXPORT_SYMBOL(aal_host_unmap_generic);