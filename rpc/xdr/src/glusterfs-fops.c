/*
  Copyright (c) 2007-2016 Red Hat, Inc. <http://www.redhat.com>
  This file is part of GlusterFS.

  This file is licensed to you under your choice of the GNU Lesser
  General Public License, version 3 or any later version (LGPLv3 or
  later), or the GNU General Public License, version 2 (GPLv2), in all
  cases as published by the Free Software Foundation.
*/

#include "compat.h"

#if defined(__GNUC__)
#if __GNUC__ >= 4
#if !defined(__clang__)
#if !defined(__NetBSD__)
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-variable"
#endif
#else
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-value"
#endif
#endif
#endif

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "../../../rpc/xdr/src/glusterfs-fops.h"

bool_t
xdr_glusterfs_fop_t (XDR *xdrs, glusterfs_fop_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_glusterfs_event_t (XDR *xdrs, glusterfs_event_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_glusterfs_compound_fop_t (XDR *xdrs, glusterfs_compound_fop_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_glusterfs_mgmt_t (XDR *xdrs, glusterfs_mgmt_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gf_op_type_t (XDR *xdrs, gf_op_type_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_glusterfs_lk_cmds_t (XDR *xdrs, glusterfs_lk_cmds_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_glusterfs_lk_types_t (XDR *xdrs, glusterfs_lk_types_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gf_lease_types_t (XDR *xdrs, gf_lease_types_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gf_lease_cmds_t (XDR *xdrs, gf_lease_cmds_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}
#define LEASE_ID_SIZE 16 /* 128bits */

bool_t
xdr_gf_lease (XDR *xdrs, gf_lease *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_gf_lease_cmds_t (xdrs, &objp->cmd))
		 return FALSE;
	 if (!xdr_gf_lease_types_t (xdrs, &objp->lease_type))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->lease_id, LEASE_ID_SIZE,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->lease_flags))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_glusterfs_lk_recovery_cmds_t (XDR *xdrs, glusterfs_lk_recovery_cmds_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gf_lk_domain_t (XDR *xdrs, gf_lk_domain_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_entrylk_cmd (XDR *xdrs, entrylk_cmd *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_entrylk_type (XDR *xdrs, entrylk_type *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}
#define GF_MAX_LOCK_OWNER_LEN 1024 /* 1kB as per NLM */
#define GF_LKOWNER_BUF_SIZE ((GF_MAX_LOCK_OWNER_LEN * 2) + (GF_MAX_LOCK_OWNER_LEN / 8))

bool_t
xdr_gf_lkowner_t (XDR *xdrs, gf_lkowner_t *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->len))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->data, GF_MAX_LOCK_OWNER_LEN,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gf_xattrop_flags_t (XDR *xdrs, gf_xattrop_flags_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gf_seek_what_t (XDR *xdrs, gf_seek_what_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gf_upcall_flags_t (XDR *xdrs, gf_upcall_flags_t *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}