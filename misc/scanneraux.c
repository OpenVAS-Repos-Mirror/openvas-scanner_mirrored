/* Copyright (C) 2009-2022 Greenbone Networks GmbH
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
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
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/**
 * @file scanneraux.c
 * @brief Auxiliary functions and structures for scanner.
 */

#include "scanneraux.h"

void
destroy_scan_globals (struct scan_globals *globals)
{
  if (globals == NULL)
    return;

  g_free (globals->scan_id);

  if (globals->files_translation)
    g_hash_table_destroy (globals->files_translation);

  if (globals->files_size_translation)
    g_hash_table_destroy (globals->files_size_translation);

  g_free (globals);
  globals = NULL;
}
