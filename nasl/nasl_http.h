/* Based on work Copyright (C) 2002 - 2003 Michel Arboi and Renaud Deraison
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

#ifndef NASL_NASL_HTTP_H
#define NASL_NASL_HTTP_H

#include "nasl_lex_ctxt.h"

tree_cell *
http_open_socket (lex_ctxt *);

tree_cell *
http_close_socket (lex_ctxt *);

tree_cell *
http_get (lex_ctxt *);

tree_cell *
http_head (lex_ctxt *);

tree_cell *
http_post (lex_ctxt *);

tree_cell *
http_delete (lex_ctxt *);

tree_cell *
http_put (lex_ctxt *);

tree_cell *
nasl_http_recv_headers (lex_ctxt *);

tree_cell *
cgibin (lex_ctxt *);

tree_cell *
nasl_is_cgi_installed (lex_ctxt *);

tree_cell *
nasl_http_keepalive_send_recv (lex_ctxt *);

tree_cell *
nasl_http_share_exists (lex_ctxt *);

#endif
