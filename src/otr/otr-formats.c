/*
 * Off-the-Record Messaging (OTR) modules for IRC
 *
 * Copyright (C) - 2012  David Goulet <dgoulet@ev0ke.net>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA 02110-1301,USA
 */

#include "otr.h"
#include "otr-formats.h"

FORMAT_REC fe_otr_formats[] = {
	{ MODULE_NAME, "Core", 0 },

	/* Status bar format. */
	{ NULL, "OTR Statusbar", 0 } ,

	{ "otr_stb_plaintext", "{sb plaintext}", 0},
	{ "otr_stb_finished", "{sb %yfinished%n}", 0},
	{ "otr_stb_unknown", "{sb {hilight state unknown (BUG!)}}", 0},
	{ "otr_stb_untrusted", "{sb %GOTR%n (%runverified%n)}", 0},
	{ "otr_stb_trust", "{sb %GOTR%n}", 0},

	/* OTR format. */
	{ NULL, "OTR", 0 },
	{ "otr_key_generation_error", "OTR key generation for {hilight $0} failed: {error $1}", 2, { 0, 0 }},
	{ "otr_key_generation_completed", "OTR key generation for {hilight $0} completed", 1, { 0 }},
	{ "otr_key_generation_started", "OTR key generation for {hilight $0} started", 1, { 0 }},
	{ "otr_key_generation_running", "OTR key generation for {hilight $0} is still in progress", 1, { 0 }},

	{ "otr_fingerprint_info", "OTR key fingerprint: {hilight $1} for {hilight $0}", 2, { 0, 0 }},
	{ "otr_error_no_keys", "{error No OTR keys available}", 0},

	{ "otr_session_already_secured", "Secure session with {hilight $0} already established", 1, { 0 }},
	{ "otr_session_initiating", "Initiating OTR session ...", 0},

	{ "otr_context_missing_error", "{error No active OTR contexts found}", 0},
	{ "otr_context_list_header", "Contexts", 0},
	{ "otr_context_list_encrypted_state_line", "{hilight $0} - {hilight $1} (Encrypted)", 2, { 0, 0 }},
	{ "otr_context_list_plaintext_state_line", "{hilight $0} - {hilight $1} (Plaintext)", 2, { 0, 0 }},
	{ "otr_context_list_finished_state_line", "{hilight $0} - {hilight $1} (Finished)", 2, { 0, 0 }},
	{ "otr_context_list_unknown_state_line", "{hilight $0} - {hilight $1} (Unknown)", 2, { 0, 0 }},
	{ "otr_context_list_unused_state_line", "{hilight $0} - {hilight $1} (Unused)", 2, { 0, 0 }},
	{ "otr_context_list_smp_state_line", "  {hilight $0} (SMP)", 1, { 0, 0 }},
	{ "otr_context_list_manual_state_line", "  {hilight $0} (Manual)", 1, { 0, 0 }},
	{ "otr_context_list_unverified_state_line", "  {hilight $0} (Unverified)", 1, { 0, 0 }},
	{ "otr_context_list_footer", "", 0},

	/* Last element. */
	{ NULL, NULL, 0 }
};
