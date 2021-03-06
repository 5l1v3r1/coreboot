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
 */

#ifndef BUTTERFLY_EC_H
#define BUTTERFLY_EC_H

#define EC_SCI_GPI  13   /* GPIO13 is EC_SCI# */

/* EC SMI sources TODO: MLR- make defines */

#ifndef __ACPI__
extern void butterfly_ec_init(void);
#endif

#endif // BUTTERFLY_EC_H
