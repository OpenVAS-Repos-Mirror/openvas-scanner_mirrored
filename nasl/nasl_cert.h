/* Copyright (C) 2012-2022 Greenbone Networks GmbH
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
 * @file nasl_cert.h
 * @brief Protos and data structures for CERT functions used by NASL scripts
 *
 * This file contains the protos for \ref nasl_cert.c
 */

#ifndef NASL_NASL_CERT_H
#define NASL_NASL_CERT_H

#include "nasl_lex_ctxt.h"

tree_cell *
nasl_cert_open (lex_ctxt *lexic);

tree_cell *
nasl_cert_close (lex_ctxt *lexic);

tree_cell *
nasl_cert_query (lex_ctxt *lexic);

#endif /*NASL_NASL_CERT_H*/
