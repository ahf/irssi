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

#ifndef IRSSI_OTR_FORMATS_H
#define IRSSI_OTR_FORMATS_H

#include "formats.h"

/*
 * Must be in sync with the fe_otr_formats array.
 */
enum otr_status_format {
	TXT_OTR_MODULE_NAME,

	/* Status bar format. */
	TXT_OTR_FILL_1,
	TXT_OTR_STB_PLAINTEXT,
	TXT_OTR_STB_FINISHED,
	TXT_OTR_STB_UNKNOWN,
	TXT_OTR_STB_UNTRUSTED,
	TXT_OTR_STB_TRUST,

	/* OTR format. */
	TXT_OTR_FILL_2,
	TXT_OTR_KEY_GENERATION_ERROR,
	TXT_OTR_KEY_GENERATION_COMPLETED,
	TXT_OTR_KEY_GENERATION_STARTED,
	TXT_OTR_KEY_GENERATION_RUNNING,
	TXT_OTR_FINGERPRINT_INFO,
	TXT_OTR_ERROR_NO_KEYS,
	TXT_OTR_SESSION_ALREADY_SECURED,
	TXT_OTR_SESSION_INITIATING,
	TXT_OTR_CONTEXT_MISSING_ERROR,
	TXT_OTR_CONTEXT_LIST_HEADER,
	TXT_OTR_CONTEXT_LIST_ENCRYPTED_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_PLAINTEXT_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_FINISHED_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_UNKNOWN_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_UNUSED_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_SMP_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_MANUAL_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_UNVERIFIED_STATE_LINE,
	TXT_OTR_CONTEXT_LIST_FOOTER
};

extern FORMAT_REC fe_otr_formats[];

#endif /* IRSSI_OTR_FORMATS_H */
