/* Copyright (C) 2002 - 2003 Michel Arboi and Renaud Deraison
 *
 * SPDX-License-Identifier: GPL-2.0-only
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
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

#ifndef NASL_EXEC_H
#define NASL_EXEC_H

#include "nasl_lex_ctxt.h"

tree_cell *
nasl_exec (lex_ctxt *, tree_cell *);

long int
cell_cmp (lex_ctxt *, tree_cell *, tree_cell *);

tree_cell *
cell2atom (lex_ctxt *, tree_cell *);

#endif
