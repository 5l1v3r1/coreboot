/*
 * This file is part of the coreboot project.
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#include <bootblock_common.h>
#include <console/console.h>
#include "bmcinfo.h"

/*
 * Display board serial early
 */

void bootblock_mainboard_init(void)
{
	if (CONFIG(BOOTBLOCK_CONSOLE))
		printk(BIOS_SPEW, "Board Serial: %s.\n", bmcinfo_serial());
}
