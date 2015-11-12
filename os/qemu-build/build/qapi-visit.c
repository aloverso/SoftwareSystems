/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI visitor functions
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#include "qemu-common.h"
#include "qapi-visit.h"

void visit_type_int32List(Visitor *m, int32List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        int32List *native_i = (int32List *)i;
        visit_type_int32(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_int16List(Visitor *m, int16List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        int16List *native_i = (int16List *)i;
        visit_type_int16(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_intList(Visitor *m, intList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        intList *native_i = (intList *)i;
        visit_type_int(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_uint8List(Visitor *m, uint8List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        uint8List *native_i = (uint8List *)i;
        visit_type_uint8(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_numberList(Visitor *m, numberList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        numberList *native_i = (numberList *)i;
        visit_type_number(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_int8List(Visitor *m, int8List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        int8List *native_i = (int8List *)i;
        visit_type_int8(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_sizeList(Visitor *m, sizeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        sizeList *native_i = (sizeList *)i;
        visit_type_size(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_uint64List(Visitor *m, uint64List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        uint64List *native_i = (uint64List *)i;
        visit_type_uint64(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_uint16List(Visitor *m, uint16List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        uint16List *native_i = (uint16List *)i;
        visit_type_uint16(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_boolList(Visitor *m, boolList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        boolList *native_i = (boolList *)i;
        visit_type_bool(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_strList(Visitor *m, strList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        strList *native_i = (strList *)i;
        visit_type_str(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_int64List(Visitor *m, int64List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        int64List *native_i = (int64List *)i;
        visit_type_int64(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_uint32List(Visitor *m, uint32List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        uint32List *native_i = (uint32List *)i;
        visit_type_uint32(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ErrorClassList(Visitor *m, ErrorClassList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ErrorClassList *native_i = (ErrorClassList *)i;
        visit_type_ErrorClass(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ErrorClass(Visitor *m, ErrorClass *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, ErrorClass_lookup, "ErrorClass", name, errp);
}

static void visit_type_VersionTriple_fields(Visitor *m, VersionTriple **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->major, "major", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->minor, "minor", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->micro, "micro", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_VersionTriple(Visitor *m, VersionTriple **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "VersionTriple", name, sizeof(VersionTriple), &err);
    if (!err) {
        if (*obj) {
            visit_type_VersionTriple_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_VersionTripleList(Visitor *m, VersionTripleList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VersionTripleList *native_i = (VersionTripleList *)i;
        visit_type_VersionTriple(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_VersionInfo_fields(Visitor *m, VersionInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_VersionTriple(m, &(*obj)->qemu, "qemu", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->package, "package", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_VersionInfo(Visitor *m, VersionInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "VersionInfo", name, sizeof(VersionInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_VersionInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_VersionInfoList(Visitor *m, VersionInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VersionInfoList *native_i = (VersionInfoList *)i;
        visit_type_VersionInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_CommandInfo_fields(Visitor *m, CommandInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_CommandInfo(Visitor *m, CommandInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "CommandInfo", name, sizeof(CommandInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_CommandInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_CommandInfoList(Visitor *m, CommandInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        CommandInfoList *native_i = (CommandInfoList *)i;
        visit_type_CommandInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_OnOffAutoList(Visitor *m, OnOffAutoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        OnOffAutoList *native_i = (OnOffAutoList *)i;
        visit_type_OnOffAuto(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_OnOffAuto(Visitor *m, OnOffAuto *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, OnOffAuto_lookup, "OnOffAuto", name, errp);
}

static void visit_type_SnapshotInfo_fields(Visitor *m, SnapshotInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->vm_state_size, "vm-state-size", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->date_sec, "date-sec", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->date_nsec, "date-nsec", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->vm_clock_sec, "vm-clock-sec", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->vm_clock_nsec, "vm-clock-nsec", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_SnapshotInfo(Visitor *m, SnapshotInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "SnapshotInfo", name, sizeof(SnapshotInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_SnapshotInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_SnapshotInfoList(Visitor *m, SnapshotInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        SnapshotInfoList *native_i = (SnapshotInfoList *)i;
        visit_type_SnapshotInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ImageInfoSpecificQCow2_fields(Visitor *m, ImageInfoSpecificQCow2 **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->compat, "compat", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_lazy_refcounts, "lazy-refcounts", &err);
    if (!err && (*obj)->has_lazy_refcounts) {
        visit_type_bool(m, &(*obj)->lazy_refcounts, "lazy-refcounts", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_corrupt, "corrupt", &err);
    if (!err && (*obj)->has_corrupt) {
        visit_type_bool(m, &(*obj)->corrupt, "corrupt", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->refcount_bits, "refcount-bits", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ImageInfoSpecificQCow2(Visitor *m, ImageInfoSpecificQCow2 **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ImageInfoSpecificQCow2", name, sizeof(ImageInfoSpecificQCow2), &err);
    if (!err) {
        if (*obj) {
            visit_type_ImageInfoSpecificQCow2_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ImageInfoSpecificQCow2List(Visitor *m, ImageInfoSpecificQCow2List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ImageInfoSpecificQCow2List *native_i = (ImageInfoSpecificQCow2List *)i;
        visit_type_ImageInfoSpecificQCow2(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ImageInfoSpecificVmdk_fields(Visitor *m, ImageInfoSpecificVmdk **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->create_type, "create-type", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->cid, "cid", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->parent_cid, "parent-cid", &err);
    if (err) {
        goto out;
    }
    visit_type_ImageInfoList(m, &(*obj)->extents, "extents", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ImageInfoSpecificVmdk(Visitor *m, ImageInfoSpecificVmdk **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ImageInfoSpecificVmdk", name, sizeof(ImageInfoSpecificVmdk), &err);
    if (!err) {
        if (*obj) {
            visit_type_ImageInfoSpecificVmdk_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ImageInfoSpecificVmdkList(Visitor *m, ImageInfoSpecificVmdkList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ImageInfoSpecificVmdkList *native_i = (ImageInfoSpecificVmdkList *)i;
        visit_type_ImageInfoSpecificVmdk(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ImageInfoSpecificKind(Visitor *m, ImageInfoSpecificKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, ImageInfoSpecificKind_lookup, "ImageInfoSpecificKind", name, errp);
}

void visit_type_ImageInfoSpecific(Visitor *m, ImageInfoSpecific **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ImageInfoSpecific", name, sizeof(ImageInfoSpecific), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_ImageInfoSpecificKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case IMAGE_INFO_SPECIFIC_KIND_QCOW2:
            visit_type_ImageInfoSpecificQCow2(m, &(*obj)->qcow2, "data", &err);
            break;
        case IMAGE_INFO_SPECIFIC_KIND_VMDK:
            visit_type_ImageInfoSpecificVmdk(m, &(*obj)->vmdk, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ImageInfoSpecificList(Visitor *m, ImageInfoSpecificList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ImageInfoSpecificList *native_i = (ImageInfoSpecificList *)i;
        visit_type_ImageInfoSpecific(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ImageInfo_fields(Visitor *m, ImageInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->filename, "filename", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->format, "format", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_dirty_flag, "dirty-flag", &err);
    if (!err && (*obj)->has_dirty_flag) {
        visit_type_bool(m, &(*obj)->dirty_flag, "dirty-flag", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_actual_size, "actual-size", &err);
    if (!err && (*obj)->has_actual_size) {
        visit_type_int(m, &(*obj)->actual_size, "actual-size", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->virtual_size, "virtual-size", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cluster_size, "cluster-size", &err);
    if (!err && (*obj)->has_cluster_size) {
        visit_type_int(m, &(*obj)->cluster_size, "cluster-size", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_encrypted, "encrypted", &err);
    if (!err && (*obj)->has_encrypted) {
        visit_type_bool(m, &(*obj)->encrypted, "encrypted", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_compressed, "compressed", &err);
    if (!err && (*obj)->has_compressed) {
        visit_type_bool(m, &(*obj)->compressed, "compressed", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_backing_filename, "backing-filename", &err);
    if (!err && (*obj)->has_backing_filename) {
        visit_type_str(m, &(*obj)->backing_filename, "backing-filename", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_full_backing_filename, "full-backing-filename", &err);
    if (!err && (*obj)->has_full_backing_filename) {
        visit_type_str(m, &(*obj)->full_backing_filename, "full-backing-filename", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_backing_filename_format, "backing-filename-format", &err);
    if (!err && (*obj)->has_backing_filename_format) {
        visit_type_str(m, &(*obj)->backing_filename_format, "backing-filename-format", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_snapshots, "snapshots", &err);
    if (!err && (*obj)->has_snapshots) {
        visit_type_SnapshotInfoList(m, &(*obj)->snapshots, "snapshots", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_backing_image, "backing-image", &err);
    if (!err && (*obj)->has_backing_image) {
        visit_type_ImageInfo(m, &(*obj)->backing_image, "backing-image", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_format_specific, "format-specific", &err);
    if (!err && (*obj)->has_format_specific) {
        visit_type_ImageInfoSpecific(m, &(*obj)->format_specific, "format-specific", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ImageInfo(Visitor *m, ImageInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ImageInfo", name, sizeof(ImageInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_ImageInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ImageInfoList(Visitor *m, ImageInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ImageInfoList *native_i = (ImageInfoList *)i;
        visit_type_ImageInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ImageCheck_fields(Visitor *m, ImageCheck **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->filename, "filename", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->format, "format", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->check_errors, "check-errors", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_image_end_offset, "image-end-offset", &err);
    if (!err && (*obj)->has_image_end_offset) {
        visit_type_int(m, &(*obj)->image_end_offset, "image-end-offset", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_corruptions, "corruptions", &err);
    if (!err && (*obj)->has_corruptions) {
        visit_type_int(m, &(*obj)->corruptions, "corruptions", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_leaks, "leaks", &err);
    if (!err && (*obj)->has_leaks) {
        visit_type_int(m, &(*obj)->leaks, "leaks", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_corruptions_fixed, "corruptions-fixed", &err);
    if (!err && (*obj)->has_corruptions_fixed) {
        visit_type_int(m, &(*obj)->corruptions_fixed, "corruptions-fixed", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_leaks_fixed, "leaks-fixed", &err);
    if (!err && (*obj)->has_leaks_fixed) {
        visit_type_int(m, &(*obj)->leaks_fixed, "leaks-fixed", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_total_clusters, "total-clusters", &err);
    if (!err && (*obj)->has_total_clusters) {
        visit_type_int(m, &(*obj)->total_clusters, "total-clusters", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_allocated_clusters, "allocated-clusters", &err);
    if (!err && (*obj)->has_allocated_clusters) {
        visit_type_int(m, &(*obj)->allocated_clusters, "allocated-clusters", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_fragmented_clusters, "fragmented-clusters", &err);
    if (!err && (*obj)->has_fragmented_clusters) {
        visit_type_int(m, &(*obj)->fragmented_clusters, "fragmented-clusters", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_compressed_clusters, "compressed-clusters", &err);
    if (!err && (*obj)->has_compressed_clusters) {
        visit_type_int(m, &(*obj)->compressed_clusters, "compressed-clusters", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ImageCheck(Visitor *m, ImageCheck **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ImageCheck", name, sizeof(ImageCheck), &err);
    if (!err) {
        if (*obj) {
            visit_type_ImageCheck_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ImageCheckList(Visitor *m, ImageCheckList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ImageCheckList *native_i = (ImageCheckList *)i;
        visit_type_ImageCheck(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevCacheInfo_fields(Visitor *m, BlockdevCacheInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_bool(m, &(*obj)->writeback, "writeback", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->direct, "direct", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->no_flush, "no-flush", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevCacheInfo(Visitor *m, BlockdevCacheInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevCacheInfo", name, sizeof(BlockdevCacheInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevCacheInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevCacheInfoList(Visitor *m, BlockdevCacheInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevCacheInfoList *native_i = (BlockdevCacheInfoList *)i;
        visit_type_BlockdevCacheInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockDeviceInfo_fields(Visitor *m, BlockDeviceInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->file, "file", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_node_name, "node-name", &err);
    if (!err && (*obj)->has_node_name) {
        visit_type_str(m, &(*obj)->node_name, "node-name", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->ro, "ro", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->drv, "drv", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_backing_file, "backing_file", &err);
    if (!err && (*obj)->has_backing_file) {
        visit_type_str(m, &(*obj)->backing_file, "backing_file", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->backing_file_depth, "backing_file_depth", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->encrypted, "encrypted", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->encryption_key_missing, "encryption_key_missing", &err);
    if (err) {
        goto out;
    }
    visit_type_BlockdevDetectZeroesOptions(m, &(*obj)->detect_zeroes, "detect_zeroes", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->bps, "bps", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->bps_rd, "bps_rd", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->bps_wr, "bps_wr", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->iops, "iops", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->iops_rd, "iops_rd", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->iops_wr, "iops_wr", &err);
    if (err) {
        goto out;
    }
    visit_type_ImageInfo(m, &(*obj)->image, "image", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_bps_max, "bps_max", &err);
    if (!err && (*obj)->has_bps_max) {
        visit_type_int(m, &(*obj)->bps_max, "bps_max", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_bps_rd_max, "bps_rd_max", &err);
    if (!err && (*obj)->has_bps_rd_max) {
        visit_type_int(m, &(*obj)->bps_rd_max, "bps_rd_max", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_bps_wr_max, "bps_wr_max", &err);
    if (!err && (*obj)->has_bps_wr_max) {
        visit_type_int(m, &(*obj)->bps_wr_max, "bps_wr_max", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_iops_max, "iops_max", &err);
    if (!err && (*obj)->has_iops_max) {
        visit_type_int(m, &(*obj)->iops_max, "iops_max", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_iops_rd_max, "iops_rd_max", &err);
    if (!err && (*obj)->has_iops_rd_max) {
        visit_type_int(m, &(*obj)->iops_rd_max, "iops_rd_max", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_iops_wr_max, "iops_wr_max", &err);
    if (!err && (*obj)->has_iops_wr_max) {
        visit_type_int(m, &(*obj)->iops_wr_max, "iops_wr_max", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_iops_size, "iops_size", &err);
    if (!err && (*obj)->has_iops_size) {
        visit_type_int(m, &(*obj)->iops_size, "iops_size", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_group, "group", &err);
    if (!err && (*obj)->has_group) {
        visit_type_str(m, &(*obj)->group, "group", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_BlockdevCacheInfo(m, &(*obj)->cache, "cache", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->write_threshold, "write_threshold", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockDeviceInfo(Visitor *m, BlockDeviceInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockDeviceInfo", name, sizeof(BlockDeviceInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockDeviceInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockDeviceInfoList(Visitor *m, BlockDeviceInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockDeviceInfoList *native_i = (BlockDeviceInfoList *)i;
        visit_type_BlockDeviceInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockDeviceIoStatusList(Visitor *m, BlockDeviceIoStatusList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockDeviceIoStatusList *native_i = (BlockDeviceIoStatusList *)i;
        visit_type_BlockDeviceIoStatus(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockDeviceIoStatus(Visitor *m, BlockDeviceIoStatus *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockDeviceIoStatus_lookup, "BlockDeviceIoStatus", name, errp);
}

static void visit_type_BlockDeviceMapEntry_fields(Visitor *m, BlockDeviceMapEntry **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->start, "start", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->length, "length", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->depth, "depth", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->zero, "zero", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->data, "data", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_offset, "offset", &err);
    if (!err && (*obj)->has_offset) {
        visit_type_int(m, &(*obj)->offset, "offset", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockDeviceMapEntry(Visitor *m, BlockDeviceMapEntry **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockDeviceMapEntry", name, sizeof(BlockDeviceMapEntry), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockDeviceMapEntry_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockDeviceMapEntryList(Visitor *m, BlockDeviceMapEntryList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockDeviceMapEntryList *native_i = (BlockDeviceMapEntryList *)i;
        visit_type_BlockDeviceMapEntry(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_DirtyBitmapStatusList(Visitor *m, DirtyBitmapStatusList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        DirtyBitmapStatusList *native_i = (DirtyBitmapStatusList *)i;
        visit_type_DirtyBitmapStatus(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_DirtyBitmapStatus(Visitor *m, DirtyBitmapStatus *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, DirtyBitmapStatus_lookup, "DirtyBitmapStatus", name, errp);
}

static void visit_type_BlockDirtyInfo_fields(Visitor *m, BlockDirtyInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_name, "name", &err);
    if (!err && (*obj)->has_name) {
        visit_type_str(m, &(*obj)->name, "name", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->count, "count", &err);
    if (err) {
        goto out;
    }
    visit_type_uint32(m, &(*obj)->granularity, "granularity", &err);
    if (err) {
        goto out;
    }
    visit_type_DirtyBitmapStatus(m, &(*obj)->status, "status", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockDirtyInfo(Visitor *m, BlockDirtyInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockDirtyInfo", name, sizeof(BlockDirtyInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockDirtyInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockDirtyInfoList(Visitor *m, BlockDirtyInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockDirtyInfoList *native_i = (BlockDirtyInfoList *)i;
        visit_type_BlockDirtyInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockInfo_fields(Visitor *m, BlockInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->device, "device", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->removable, "removable", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->locked, "locked", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_inserted, "inserted", &err);
    if (!err && (*obj)->has_inserted) {
        visit_type_BlockDeviceInfo(m, &(*obj)->inserted, "inserted", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_tray_open, "tray_open", &err);
    if (!err && (*obj)->has_tray_open) {
        visit_type_bool(m, &(*obj)->tray_open, "tray_open", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_io_status, "io-status", &err);
    if (!err && (*obj)->has_io_status) {
        visit_type_BlockDeviceIoStatus(m, &(*obj)->io_status, "io-status", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_dirty_bitmaps, "dirty-bitmaps", &err);
    if (!err && (*obj)->has_dirty_bitmaps) {
        visit_type_BlockDirtyInfoList(m, &(*obj)->dirty_bitmaps, "dirty-bitmaps", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockInfo(Visitor *m, BlockInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockInfo", name, sizeof(BlockInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockInfoList(Visitor *m, BlockInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockInfoList *native_i = (BlockInfoList *)i;
        visit_type_BlockInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockDeviceStats_fields(Visitor *m, BlockDeviceStats **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->rd_bytes, "rd_bytes", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->wr_bytes, "wr_bytes", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->rd_operations, "rd_operations", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->wr_operations, "wr_operations", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->flush_operations, "flush_operations", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->flush_total_time_ns, "flush_total_time_ns", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->wr_total_time_ns, "wr_total_time_ns", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->rd_total_time_ns, "rd_total_time_ns", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->wr_highest_offset, "wr_highest_offset", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->rd_merged, "rd_merged", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->wr_merged, "wr_merged", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockDeviceStats(Visitor *m, BlockDeviceStats **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockDeviceStats", name, sizeof(BlockDeviceStats), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockDeviceStats_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockDeviceStatsList(Visitor *m, BlockDeviceStatsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockDeviceStatsList *native_i = (BlockDeviceStatsList *)i;
        visit_type_BlockDeviceStats(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockStats_fields(Visitor *m, BlockStats **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_device, "device", &err);
    if (!err && (*obj)->has_device) {
        visit_type_str(m, &(*obj)->device, "device", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_node_name, "node-name", &err);
    if (!err && (*obj)->has_node_name) {
        visit_type_str(m, &(*obj)->node_name, "node-name", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_BlockDeviceStats(m, &(*obj)->stats, "stats", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_parent, "parent", &err);
    if (!err && (*obj)->has_parent) {
        visit_type_BlockStats(m, &(*obj)->parent, "parent", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_backing, "backing", &err);
    if (!err && (*obj)->has_backing) {
        visit_type_BlockStats(m, &(*obj)->backing, "backing", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockStats(Visitor *m, BlockStats **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockStats", name, sizeof(BlockStats), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockStats_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockStatsList(Visitor *m, BlockStatsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockStatsList *native_i = (BlockStatsList *)i;
        visit_type_BlockStats(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOnErrorList(Visitor *m, BlockdevOnErrorList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOnErrorList *native_i = (BlockdevOnErrorList *)i;
        visit_type_BlockdevOnError(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOnError(Visitor *m, BlockdevOnError *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockdevOnError_lookup, "BlockdevOnError", name, errp);
}

void visit_type_MirrorSyncModeList(Visitor *m, MirrorSyncModeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MirrorSyncModeList *native_i = (MirrorSyncModeList *)i;
        visit_type_MirrorSyncMode(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MirrorSyncMode(Visitor *m, MirrorSyncMode *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, MirrorSyncMode_lookup, "MirrorSyncMode", name, errp);
}

void visit_type_BlockJobTypeList(Visitor *m, BlockJobTypeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockJobTypeList *native_i = (BlockJobTypeList *)i;
        visit_type_BlockJobType(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockJobType(Visitor *m, BlockJobType *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockJobType_lookup, "BlockJobType", name, errp);
}

static void visit_type_BlockJobInfo_fields(Visitor *m, BlockJobInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->device, "device", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->len, "len", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->offset, "offset", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->busy, "busy", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->paused, "paused", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->speed, "speed", &err);
    if (err) {
        goto out;
    }
    visit_type_BlockDeviceIoStatus(m, &(*obj)->io_status, "io-status", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->ready, "ready", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockJobInfo(Visitor *m, BlockJobInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockJobInfo", name, sizeof(BlockJobInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockJobInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockJobInfoList(Visitor *m, BlockJobInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockJobInfoList *native_i = (BlockJobInfoList *)i;
        visit_type_BlockJobInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NewImageModeList(Visitor *m, NewImageModeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NewImageModeList *native_i = (NewImageModeList *)i;
        visit_type_NewImageMode(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NewImageMode(Visitor *m, NewImageMode *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, NewImageMode_lookup, "NewImageMode", name, errp);
}

static void visit_type_BlockdevSnapshot_fields(Visitor *m, BlockdevSnapshot **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_device, "device", &err);
    if (!err && (*obj)->has_device) {
        visit_type_str(m, &(*obj)->device, "device", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_node_name, "node-name", &err);
    if (!err && (*obj)->has_node_name) {
        visit_type_str(m, &(*obj)->node_name, "node-name", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->snapshot_file, "snapshot-file", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_snapshot_node_name, "snapshot-node-name", &err);
    if (!err && (*obj)->has_snapshot_node_name) {
        visit_type_str(m, &(*obj)->snapshot_node_name, "snapshot-node-name", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_format, "format", &err);
    if (!err && (*obj)->has_format) {
        visit_type_str(m, &(*obj)->format, "format", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_mode, "mode", &err);
    if (!err && (*obj)->has_mode) {
        visit_type_NewImageMode(m, &(*obj)->mode, "mode", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevSnapshot(Visitor *m, BlockdevSnapshot **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevSnapshot", name, sizeof(BlockdevSnapshot), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevSnapshot_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevSnapshotList(Visitor *m, BlockdevSnapshotList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevSnapshotList *native_i = (BlockdevSnapshotList *)i;
        visit_type_BlockdevSnapshot(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_DriveBackup_fields(Visitor *m, DriveBackup **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->device, "device", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->target, "target", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_format, "format", &err);
    if (!err && (*obj)->has_format) {
        visit_type_str(m, &(*obj)->format, "format", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_MirrorSyncMode(m, &(*obj)->sync, "sync", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_mode, "mode", &err);
    if (!err && (*obj)->has_mode) {
        visit_type_NewImageMode(m, &(*obj)->mode, "mode", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_speed, "speed", &err);
    if (!err && (*obj)->has_speed) {
        visit_type_int(m, &(*obj)->speed, "speed", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_bitmap, "bitmap", &err);
    if (!err && (*obj)->has_bitmap) {
        visit_type_str(m, &(*obj)->bitmap, "bitmap", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_on_source_error, "on-source-error", &err);
    if (!err && (*obj)->has_on_source_error) {
        visit_type_BlockdevOnError(m, &(*obj)->on_source_error, "on-source-error", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_on_target_error, "on-target-error", &err);
    if (!err && (*obj)->has_on_target_error) {
        visit_type_BlockdevOnError(m, &(*obj)->on_target_error, "on-target-error", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_DriveBackup(Visitor *m, DriveBackup **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "DriveBackup", name, sizeof(DriveBackup), &err);
    if (!err) {
        if (*obj) {
            visit_type_DriveBackup_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_DriveBackupList(Visitor *m, DriveBackupList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        DriveBackupList *native_i = (DriveBackupList *)i;
        visit_type_DriveBackup(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevBackup_fields(Visitor *m, BlockdevBackup **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->device, "device", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->target, "target", &err);
    if (err) {
        goto out;
    }
    visit_type_MirrorSyncMode(m, &(*obj)->sync, "sync", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_speed, "speed", &err);
    if (!err && (*obj)->has_speed) {
        visit_type_int(m, &(*obj)->speed, "speed", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_on_source_error, "on-source-error", &err);
    if (!err && (*obj)->has_on_source_error) {
        visit_type_BlockdevOnError(m, &(*obj)->on_source_error, "on-source-error", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_on_target_error, "on-target-error", &err);
    if (!err && (*obj)->has_on_target_error) {
        visit_type_BlockdevOnError(m, &(*obj)->on_target_error, "on-target-error", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevBackup(Visitor *m, BlockdevBackup **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevBackup", name, sizeof(BlockdevBackup), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevBackup_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevBackupList(Visitor *m, BlockdevBackupList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevBackupList *native_i = (BlockdevBackupList *)i;
        visit_type_BlockdevBackup(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockDirtyBitmap_fields(Visitor *m, BlockDirtyBitmap **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->node, "node", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockDirtyBitmap(Visitor *m, BlockDirtyBitmap **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockDirtyBitmap", name, sizeof(BlockDirtyBitmap), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockDirtyBitmap_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockDirtyBitmapList(Visitor *m, BlockDirtyBitmapList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockDirtyBitmapList *native_i = (BlockDirtyBitmapList *)i;
        visit_type_BlockDirtyBitmap(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockDirtyBitmapAdd_fields(Visitor *m, BlockDirtyBitmapAdd **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->node, "node", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_granularity, "granularity", &err);
    if (!err && (*obj)->has_granularity) {
        visit_type_uint32(m, &(*obj)->granularity, "granularity", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockDirtyBitmapAdd(Visitor *m, BlockDirtyBitmapAdd **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockDirtyBitmapAdd", name, sizeof(BlockDirtyBitmapAdd), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockDirtyBitmapAdd_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockDirtyBitmapAddList(Visitor *m, BlockDirtyBitmapAddList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockDirtyBitmapAddList *native_i = (BlockDirtyBitmapAddList *)i;
        visit_type_BlockDirtyBitmapAdd(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevDiscardOptionsList(Visitor *m, BlockdevDiscardOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevDiscardOptionsList *native_i = (BlockdevDiscardOptionsList *)i;
        visit_type_BlockdevDiscardOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevDiscardOptions(Visitor *m, BlockdevDiscardOptions *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockdevDiscardOptions_lookup, "BlockdevDiscardOptions", name, errp);
}

void visit_type_BlockdevDetectZeroesOptionsList(Visitor *m, BlockdevDetectZeroesOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevDetectZeroesOptionsList *native_i = (BlockdevDetectZeroesOptionsList *)i;
        visit_type_BlockdevDetectZeroesOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevDetectZeroesOptions(Visitor *m, BlockdevDetectZeroesOptions *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockdevDetectZeroesOptions_lookup, "BlockdevDetectZeroesOptions", name, errp);
}

void visit_type_BlockdevAioOptionsList(Visitor *m, BlockdevAioOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevAioOptionsList *native_i = (BlockdevAioOptionsList *)i;
        visit_type_BlockdevAioOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevAioOptions(Visitor *m, BlockdevAioOptions *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockdevAioOptions_lookup, "BlockdevAioOptions", name, errp);
}

static void visit_type_BlockdevCacheOptions_fields(Visitor *m, BlockdevCacheOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_writeback, "writeback", &err);
    if (!err && (*obj)->has_writeback) {
        visit_type_bool(m, &(*obj)->writeback, "writeback", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_direct, "direct", &err);
    if (!err && (*obj)->has_direct) {
        visit_type_bool(m, &(*obj)->direct, "direct", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_no_flush, "no-flush", &err);
    if (!err && (*obj)->has_no_flush) {
        visit_type_bool(m, &(*obj)->no_flush, "no-flush", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevCacheOptions(Visitor *m, BlockdevCacheOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevCacheOptions", name, sizeof(BlockdevCacheOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevCacheOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevCacheOptionsList(Visitor *m, BlockdevCacheOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevCacheOptionsList *native_i = (BlockdevCacheOptionsList *)i;
        visit_type_BlockdevCacheOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevDriverList(Visitor *m, BlockdevDriverList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevDriverList *native_i = (BlockdevDriverList *)i;
        visit_type_BlockdevDriver(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevDriver(Visitor *m, BlockdevDriver *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockdevDriver_lookup, "BlockdevDriver", name, errp);
}

static void visit_type_BlockdevOptionsBase_fields(Visitor *m, BlockdevOptionsBase **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_BlockdevDriver(m, &(*obj)->driver, "driver", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_id, "id", &err);
    if (!err && (*obj)->has_id) {
        visit_type_str(m, &(*obj)->id, "id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_node_name, "node-name", &err);
    if (!err && (*obj)->has_node_name) {
        visit_type_str(m, &(*obj)->node_name, "node-name", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_discard, "discard", &err);
    if (!err && (*obj)->has_discard) {
        visit_type_BlockdevDiscardOptions(m, &(*obj)->discard, "discard", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cache, "cache", &err);
    if (!err && (*obj)->has_cache) {
        visit_type_BlockdevCacheOptions(m, &(*obj)->cache, "cache", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_aio, "aio", &err);
    if (!err && (*obj)->has_aio) {
        visit_type_BlockdevAioOptions(m, &(*obj)->aio, "aio", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rerror, "rerror", &err);
    if (!err && (*obj)->has_rerror) {
        visit_type_BlockdevOnError(m, &(*obj)->rerror, "rerror", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_werror, "werror", &err);
    if (!err && (*obj)->has_werror) {
        visit_type_BlockdevOnError(m, &(*obj)->werror, "werror", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_read_only, "read-only", &err);
    if (!err && (*obj)->has_read_only) {
        visit_type_bool(m, &(*obj)->read_only, "read-only", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_detect_zeroes, "detect-zeroes", &err);
    if (!err && (*obj)->has_detect_zeroes) {
        visit_type_BlockdevDetectZeroesOptions(m, &(*obj)->detect_zeroes, "detect-zeroes", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsBase(Visitor *m, BlockdevOptionsBase **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsBase", name, sizeof(BlockdevOptionsBase), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsBase_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsBaseList(Visitor *m, BlockdevOptionsBaseList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsBaseList *native_i = (BlockdevOptionsBaseList *)i;
        visit_type_BlockdevOptionsBase(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsFile_fields(Visitor *m, BlockdevOptionsFile **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->filename, "filename", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsFile(Visitor *m, BlockdevOptionsFile **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsFile", name, sizeof(BlockdevOptionsFile), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsFile_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsFileList(Visitor *m, BlockdevOptionsFileList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsFileList *native_i = (BlockdevOptionsFileList *)i;
        visit_type_BlockdevOptionsFile(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsNull_fields(Visitor *m, BlockdevOptionsNull **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_size, "size", &err);
    if (!err && (*obj)->has_size) {
        visit_type_int(m, &(*obj)->size, "size", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_latency_ns, "latency-ns", &err);
    if (!err && (*obj)->has_latency_ns) {
        visit_type_uint64(m, &(*obj)->latency_ns, "latency-ns", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsNull(Visitor *m, BlockdevOptionsNull **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsNull", name, sizeof(BlockdevOptionsNull), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsNull_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsNullList(Visitor *m, BlockdevOptionsNullList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsNullList *native_i = (BlockdevOptionsNullList *)i;
        visit_type_BlockdevOptionsNull(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsVVFAT_fields(Visitor *m, BlockdevOptionsVVFAT **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->dir, "dir", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_fat_type, "fat-type", &err);
    if (!err && (*obj)->has_fat_type) {
        visit_type_int(m, &(*obj)->fat_type, "fat-type", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_floppy, "floppy", &err);
    if (!err && (*obj)->has_floppy) {
        visit_type_bool(m, &(*obj)->floppy, "floppy", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_label, "label", &err);
    if (!err && (*obj)->has_label) {
        visit_type_str(m, &(*obj)->label, "label", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rw, "rw", &err);
    if (!err && (*obj)->has_rw) {
        visit_type_bool(m, &(*obj)->rw, "rw", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsVVFAT(Visitor *m, BlockdevOptionsVVFAT **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsVVFAT", name, sizeof(BlockdevOptionsVVFAT), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsVVFAT_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsVVFATList(Visitor *m, BlockdevOptionsVVFATList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsVVFATList *native_i = (BlockdevOptionsVVFATList *)i;
        visit_type_BlockdevOptionsVVFAT(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsGenericFormat_fields(Visitor *m, BlockdevOptionsGenericFormat **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_BlockdevRef(m, &(*obj)->file, "file", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsGenericFormat(Visitor *m, BlockdevOptionsGenericFormat **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsGenericFormat", name, sizeof(BlockdevOptionsGenericFormat), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsGenericFormat_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsGenericFormatList(Visitor *m, BlockdevOptionsGenericFormatList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsGenericFormatList *native_i = (BlockdevOptionsGenericFormatList *)i;
        visit_type_BlockdevOptionsGenericFormat(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsGenericFormat(Visitor *m, BlockdevOptionsGenericFormat **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsGenericFormat), &err);
    if (!err) {
        visit_type_BlockdevOptionsGenericFormat_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsGenericCOWFormat_fields(Visitor *m, BlockdevOptionsGenericCOWFormat **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->base, &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_backing, "backing", &err);
    if (!err && (*obj)->has_backing) {
        visit_type_BlockdevRef(m, &(*obj)->backing, "backing", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsGenericCOWFormat(Visitor *m, BlockdevOptionsGenericCOWFormat **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsGenericCOWFormat", name, sizeof(BlockdevOptionsGenericCOWFormat), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsGenericCOWFormat_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsGenericCOWFormatList(Visitor *m, BlockdevOptionsGenericCOWFormatList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsGenericCOWFormatList *native_i = (BlockdevOptionsGenericCOWFormatList *)i;
        visit_type_BlockdevOptionsGenericCOWFormat(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_Qcow2OverlapCheckModeList(Visitor *m, Qcow2OverlapCheckModeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        Qcow2OverlapCheckModeList *native_i = (Qcow2OverlapCheckModeList *)i;
        visit_type_Qcow2OverlapCheckMode(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_Qcow2OverlapCheckMode(Visitor *m, Qcow2OverlapCheckMode *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, Qcow2OverlapCheckMode_lookup, "Qcow2OverlapCheckMode", name, errp);
}

static void visit_type_Qcow2OverlapCheckFlags_fields(Visitor *m, Qcow2OverlapCheckFlags **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_q_template, "template", &err);
    if (!err && (*obj)->has_q_template) {
        visit_type_Qcow2OverlapCheckMode(m, &(*obj)->q_template, "template", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_main_header, "main-header", &err);
    if (!err && (*obj)->has_main_header) {
        visit_type_bool(m, &(*obj)->main_header, "main-header", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_active_l1, "active-l1", &err);
    if (!err && (*obj)->has_active_l1) {
        visit_type_bool(m, &(*obj)->active_l1, "active-l1", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_active_l2, "active-l2", &err);
    if (!err && (*obj)->has_active_l2) {
        visit_type_bool(m, &(*obj)->active_l2, "active-l2", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_refcount_table, "refcount-table", &err);
    if (!err && (*obj)->has_refcount_table) {
        visit_type_bool(m, &(*obj)->refcount_table, "refcount-table", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_refcount_block, "refcount-block", &err);
    if (!err && (*obj)->has_refcount_block) {
        visit_type_bool(m, &(*obj)->refcount_block, "refcount-block", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_snapshot_table, "snapshot-table", &err);
    if (!err && (*obj)->has_snapshot_table) {
        visit_type_bool(m, &(*obj)->snapshot_table, "snapshot-table", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_inactive_l1, "inactive-l1", &err);
    if (!err && (*obj)->has_inactive_l1) {
        visit_type_bool(m, &(*obj)->inactive_l1, "inactive-l1", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_inactive_l2, "inactive-l2", &err);
    if (!err && (*obj)->has_inactive_l2) {
        visit_type_bool(m, &(*obj)->inactive_l2, "inactive-l2", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_Qcow2OverlapCheckFlags(Visitor *m, Qcow2OverlapCheckFlags **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "Qcow2OverlapCheckFlags", name, sizeof(Qcow2OverlapCheckFlags), &err);
    if (!err) {
        if (*obj) {
            visit_type_Qcow2OverlapCheckFlags_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_Qcow2OverlapCheckFlagsList(Visitor *m, Qcow2OverlapCheckFlagsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        Qcow2OverlapCheckFlagsList *native_i = (Qcow2OverlapCheckFlagsList *)i;
        visit_type_Qcow2OverlapCheckFlags(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_Qcow2OverlapChecks(Visitor *m, Qcow2OverlapChecks **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void**) obj, sizeof(Qcow2OverlapChecks), &err);
    if (err) {
        goto out;
    }
    visit_get_next_type(m, (int*) &(*obj)->kind, Qcow2OverlapChecks_qtypes, name, &err);
    if (err) {
        goto out_end;
    }
    switch ((*obj)->kind) {
    case QCOW2_OVERLAP_CHECKS_KIND_FLAGS:
        visit_type_Qcow2OverlapCheckFlags(m, &(*obj)->flags, name, &err);
        break;
    case QCOW2_OVERLAP_CHECKS_KIND_MODE:
        visit_type_Qcow2OverlapCheckMode(m, &(*obj)->mode, name, &err);
        break;
    default:
        abort();
    }
out_end:
    error_propagate(errp, err);
    err = NULL;
    visit_end_implicit_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_Qcow2OverlapChecksList(Visitor *m, Qcow2OverlapChecksList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        Qcow2OverlapChecksList *native_i = (Qcow2OverlapChecksList *)i;
        visit_type_Qcow2OverlapChecks(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsGenericCOWFormat(Visitor *m, BlockdevOptionsGenericCOWFormat **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsGenericCOWFormat), &err);
    if (!err) {
        visit_type_BlockdevOptionsGenericCOWFormat_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsQcow2_fields(Visitor *m, BlockdevOptionsQcow2 **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_implicit_BlockdevOptionsGenericCOWFormat(m, &(*obj)->base, &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_lazy_refcounts, "lazy-refcounts", &err);
    if (!err && (*obj)->has_lazy_refcounts) {
        visit_type_bool(m, &(*obj)->lazy_refcounts, "lazy-refcounts", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pass_discard_request, "pass-discard-request", &err);
    if (!err && (*obj)->has_pass_discard_request) {
        visit_type_bool(m, &(*obj)->pass_discard_request, "pass-discard-request", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pass_discard_snapshot, "pass-discard-snapshot", &err);
    if (!err && (*obj)->has_pass_discard_snapshot) {
        visit_type_bool(m, &(*obj)->pass_discard_snapshot, "pass-discard-snapshot", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pass_discard_other, "pass-discard-other", &err);
    if (!err && (*obj)->has_pass_discard_other) {
        visit_type_bool(m, &(*obj)->pass_discard_other, "pass-discard-other", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_overlap_check, "overlap-check", &err);
    if (!err && (*obj)->has_overlap_check) {
        visit_type_Qcow2OverlapChecks(m, &(*obj)->overlap_check, "overlap-check", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cache_size, "cache-size", &err);
    if (!err && (*obj)->has_cache_size) {
        visit_type_int(m, &(*obj)->cache_size, "cache-size", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_l2_cache_size, "l2-cache-size", &err);
    if (!err && (*obj)->has_l2_cache_size) {
        visit_type_int(m, &(*obj)->l2_cache_size, "l2-cache-size", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_refcount_cache_size, "refcount-cache-size", &err);
    if (!err && (*obj)->has_refcount_cache_size) {
        visit_type_int(m, &(*obj)->refcount_cache_size, "refcount-cache-size", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsQcow2(Visitor *m, BlockdevOptionsQcow2 **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsQcow2", name, sizeof(BlockdevOptionsQcow2), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsQcow2_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsQcow2List(Visitor *m, BlockdevOptionsQcow2List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsQcow2List *native_i = (BlockdevOptionsQcow2List *)i;
        visit_type_BlockdevOptionsQcow2(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsArchipelago_fields(Visitor *m, BlockdevOptionsArchipelago **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->volume, "volume", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_mport, "mport", &err);
    if (!err && (*obj)->has_mport) {
        visit_type_int(m, &(*obj)->mport, "mport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vport, "vport", &err);
    if (!err && (*obj)->has_vport) {
        visit_type_int(m, &(*obj)->vport, "vport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_segment, "segment", &err);
    if (!err && (*obj)->has_segment) {
        visit_type_str(m, &(*obj)->segment, "segment", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsArchipelago(Visitor *m, BlockdevOptionsArchipelago **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsArchipelago", name, sizeof(BlockdevOptionsArchipelago), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsArchipelago_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsArchipelagoList(Visitor *m, BlockdevOptionsArchipelagoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsArchipelagoList *native_i = (BlockdevOptionsArchipelagoList *)i;
        visit_type_BlockdevOptionsArchipelago(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlkdebugEventList(Visitor *m, BlkdebugEventList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlkdebugEventList *native_i = (BlkdebugEventList *)i;
        visit_type_BlkdebugEvent(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlkdebugEvent(Visitor *m, BlkdebugEvent *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlkdebugEvent_lookup, "BlkdebugEvent", name, errp);
}

static void visit_type_BlkdebugInjectErrorOptions_fields(Visitor *m, BlkdebugInjectErrorOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_BlkdebugEvent(m, &(*obj)->event, "event", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_state, "state", &err);
    if (!err && (*obj)->has_state) {
        visit_type_int(m, &(*obj)->state, "state", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_q_errno, "errno", &err);
    if (!err && (*obj)->has_q_errno) {
        visit_type_int(m, &(*obj)->q_errno, "errno", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_sector, "sector", &err);
    if (!err && (*obj)->has_sector) {
        visit_type_int(m, &(*obj)->sector, "sector", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_once, "once", &err);
    if (!err && (*obj)->has_once) {
        visit_type_bool(m, &(*obj)->once, "once", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_immediately, "immediately", &err);
    if (!err && (*obj)->has_immediately) {
        visit_type_bool(m, &(*obj)->immediately, "immediately", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlkdebugInjectErrorOptions(Visitor *m, BlkdebugInjectErrorOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlkdebugInjectErrorOptions", name, sizeof(BlkdebugInjectErrorOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlkdebugInjectErrorOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlkdebugInjectErrorOptionsList(Visitor *m, BlkdebugInjectErrorOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlkdebugInjectErrorOptionsList *native_i = (BlkdebugInjectErrorOptionsList *)i;
        visit_type_BlkdebugInjectErrorOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlkdebugSetStateOptions_fields(Visitor *m, BlkdebugSetStateOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_BlkdebugEvent(m, &(*obj)->event, "event", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_state, "state", &err);
    if (!err && (*obj)->has_state) {
        visit_type_int(m, &(*obj)->state, "state", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->new_state, "new_state", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlkdebugSetStateOptions(Visitor *m, BlkdebugSetStateOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlkdebugSetStateOptions", name, sizeof(BlkdebugSetStateOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlkdebugSetStateOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlkdebugSetStateOptionsList(Visitor *m, BlkdebugSetStateOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlkdebugSetStateOptionsList *native_i = (BlkdebugSetStateOptionsList *)i;
        visit_type_BlkdebugSetStateOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsBlkdebug_fields(Visitor *m, BlockdevOptionsBlkdebug **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_BlockdevRef(m, &(*obj)->image, "image", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_config, "config", &err);
    if (!err && (*obj)->has_config) {
        visit_type_str(m, &(*obj)->config, "config", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_align, "align", &err);
    if (!err && (*obj)->has_align) {
        visit_type_int(m, &(*obj)->align, "align", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_inject_error, "inject-error", &err);
    if (!err && (*obj)->has_inject_error) {
        visit_type_BlkdebugInjectErrorOptionsList(m, &(*obj)->inject_error, "inject-error", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_set_state, "set-state", &err);
    if (!err && (*obj)->has_set_state) {
        visit_type_BlkdebugSetStateOptionsList(m, &(*obj)->set_state, "set-state", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsBlkdebug(Visitor *m, BlockdevOptionsBlkdebug **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsBlkdebug", name, sizeof(BlockdevOptionsBlkdebug), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsBlkdebug_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsBlkdebugList(Visitor *m, BlockdevOptionsBlkdebugList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsBlkdebugList *native_i = (BlockdevOptionsBlkdebugList *)i;
        visit_type_BlockdevOptionsBlkdebug(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptionsBlkverify_fields(Visitor *m, BlockdevOptionsBlkverify **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_BlockdevRef(m, &(*obj)->test, "test", &err);
    if (err) {
        goto out;
    }
    visit_type_BlockdevRef(m, &(*obj)->raw, "raw", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsBlkverify(Visitor *m, BlockdevOptionsBlkverify **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsBlkverify", name, sizeof(BlockdevOptionsBlkverify), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsBlkverify_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsBlkverifyList(Visitor *m, BlockdevOptionsBlkverifyList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsBlkverifyList *native_i = (BlockdevOptionsBlkverifyList *)i;
        visit_type_BlockdevOptionsBlkverify(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_QuorumReadPatternList(Visitor *m, QuorumReadPatternList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        QuorumReadPatternList *native_i = (QuorumReadPatternList *)i;
        visit_type_QuorumReadPattern(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_QuorumReadPattern(Visitor *m, QuorumReadPattern *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, QuorumReadPattern_lookup, "QuorumReadPattern", name, errp);
}

static void visit_type_BlockdevOptionsQuorum_fields(Visitor *m, BlockdevOptionsQuorum **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_blkverify, "blkverify", &err);
    if (!err && (*obj)->has_blkverify) {
        visit_type_bool(m, &(*obj)->blkverify, "blkverify", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_BlockdevRefList(m, &(*obj)->children, "children", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->vote_threshold, "vote-threshold", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rewrite_corrupted, "rewrite-corrupted", &err);
    if (!err && (*obj)->has_rewrite_corrupted) {
        visit_type_bool(m, &(*obj)->rewrite_corrupted, "rewrite-corrupted", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_read_pattern, "read-pattern", &err);
    if (!err && (*obj)->has_read_pattern) {
        visit_type_QuorumReadPattern(m, &(*obj)->read_pattern, "read-pattern", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsQuorum(Visitor *m, BlockdevOptionsQuorum **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptionsQuorum", name, sizeof(BlockdevOptionsQuorum), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevOptionsQuorum_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsQuorumList(Visitor *m, BlockdevOptionsQuorumList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsQuorumList *native_i = (BlockdevOptionsQuorumList *)i;
        visit_type_BlockdevOptionsQuorum(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BlockdevOptions_fields(Visitor *m, BlockdevOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_id, "id", &err);
    if (!err && (*obj)->has_id) {
        visit_type_str(m, &(*obj)->id, "id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_node_name, "node-name", &err);
    if (!err && (*obj)->has_node_name) {
        visit_type_str(m, &(*obj)->node_name, "node-name", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_discard, "discard", &err);
    if (!err && (*obj)->has_discard) {
        visit_type_BlockdevDiscardOptions(m, &(*obj)->discard, "discard", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cache, "cache", &err);
    if (!err && (*obj)->has_cache) {
        visit_type_BlockdevCacheOptions(m, &(*obj)->cache, "cache", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_aio, "aio", &err);
    if (!err && (*obj)->has_aio) {
        visit_type_BlockdevAioOptions(m, &(*obj)->aio, "aio", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rerror, "rerror", &err);
    if (!err && (*obj)->has_rerror) {
        visit_type_BlockdevOnError(m, &(*obj)->rerror, "rerror", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_werror, "werror", &err);
    if (!err && (*obj)->has_werror) {
        visit_type_BlockdevOnError(m, &(*obj)->werror, "werror", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_read_only, "read-only", &err);
    if (!err && (*obj)->has_read_only) {
        visit_type_bool(m, &(*obj)->read_only, "read-only", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_detect_zeroes, "detect-zeroes", &err);
    if (!err && (*obj)->has_detect_zeroes) {
        visit_type_BlockdevDetectZeroesOptions(m, &(*obj)->detect_zeroes, "detect-zeroes", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsArchipelago(Visitor *m, BlockdevOptionsArchipelago **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsArchipelago), &err);
    if (!err) {
        visit_type_BlockdevOptionsArchipelago_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsBlkdebug(Visitor *m, BlockdevOptionsBlkdebug **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsBlkdebug), &err);
    if (!err) {
        visit_type_BlockdevOptionsBlkdebug_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsBlkverify(Visitor *m, BlockdevOptionsBlkverify **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsBlkverify), &err);
    if (!err) {
        visit_type_BlockdevOptionsBlkverify_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsFile(Visitor *m, BlockdevOptionsFile **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsFile), &err);
    if (!err) {
        visit_type_BlockdevOptionsFile_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsNull(Visitor *m, BlockdevOptionsNull **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsNull), &err);
    if (!err) {
        visit_type_BlockdevOptionsNull_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsQcow2(Visitor *m, BlockdevOptionsQcow2 **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsQcow2), &err);
    if (!err) {
        visit_type_BlockdevOptionsQcow2_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsQuorum(Visitor *m, BlockdevOptionsQuorum **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsQuorum), &err);
    if (!err) {
        visit_type_BlockdevOptionsQuorum_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_implicit_BlockdevOptionsVVFAT(Visitor *m, BlockdevOptionsVVFAT **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(BlockdevOptionsVVFAT), &err);
    if (!err) {
        visit_type_BlockdevOptionsVVFAT_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevOptions(Visitor *m, BlockdevOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevOptions", name, sizeof(BlockdevOptions), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_BlockdevOptions_fields(m, obj, &err);
        if (err) {
            goto out_obj;
        }
        visit_type_BlockdevDriver(m, &(*obj)->kind, "driver", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case BLOCKDEV_DRIVER_ARCHIPELAGO:
            visit_type_implicit_BlockdevOptionsArchipelago(m, &(*obj)->archipelago, &err);
            break;
        case BLOCKDEV_DRIVER_BLKDEBUG:
            visit_type_implicit_BlockdevOptionsBlkdebug(m, &(*obj)->blkdebug, &err);
            break;
        case BLOCKDEV_DRIVER_BLKVERIFY:
            visit_type_implicit_BlockdevOptionsBlkverify(m, &(*obj)->blkverify, &err);
            break;
        case BLOCKDEV_DRIVER_BOCHS:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->bochs, &err);
            break;
        case BLOCKDEV_DRIVER_CLOOP:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->cloop, &err);
            break;
        case BLOCKDEV_DRIVER_DMG:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->dmg, &err);
            break;
        case BLOCKDEV_DRIVER_FILE:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->file, &err);
            break;
        case BLOCKDEV_DRIVER_FTP:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->ftp, &err);
            break;
        case BLOCKDEV_DRIVER_FTPS:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->ftps, &err);
            break;
        case BLOCKDEV_DRIVER_HOST_CDROM:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->host_cdrom, &err);
            break;
        case BLOCKDEV_DRIVER_HOST_DEVICE:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->host_device, &err);
            break;
        case BLOCKDEV_DRIVER_HOST_FLOPPY:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->host_floppy, &err);
            break;
        case BLOCKDEV_DRIVER_HTTP:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->http, &err);
            break;
        case BLOCKDEV_DRIVER_HTTPS:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->https, &err);
            break;
        case BLOCKDEV_DRIVER_NULL_AIO:
            visit_type_implicit_BlockdevOptionsNull(m, &(*obj)->null_aio, &err);
            break;
        case BLOCKDEV_DRIVER_NULL_CO:
            visit_type_implicit_BlockdevOptionsNull(m, &(*obj)->null_co, &err);
            break;
        case BLOCKDEV_DRIVER_PARALLELS:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->parallels, &err);
            break;
        case BLOCKDEV_DRIVER_QCOW2:
            visit_type_implicit_BlockdevOptionsQcow2(m, &(*obj)->qcow2, &err);
            break;
        case BLOCKDEV_DRIVER_QCOW:
            visit_type_implicit_BlockdevOptionsGenericCOWFormat(m, &(*obj)->qcow, &err);
            break;
        case BLOCKDEV_DRIVER_QED:
            visit_type_implicit_BlockdevOptionsGenericCOWFormat(m, &(*obj)->qed, &err);
            break;
        case BLOCKDEV_DRIVER_QUORUM:
            visit_type_implicit_BlockdevOptionsQuorum(m, &(*obj)->quorum, &err);
            break;
        case BLOCKDEV_DRIVER_RAW:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->raw, &err);
            break;
        case BLOCKDEV_DRIVER_TFTP:
            visit_type_implicit_BlockdevOptionsFile(m, &(*obj)->tftp, &err);
            break;
        case BLOCKDEV_DRIVER_VDI:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->vdi, &err);
            break;
        case BLOCKDEV_DRIVER_VHDX:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->vhdx, &err);
            break;
        case BLOCKDEV_DRIVER_VMDK:
            visit_type_implicit_BlockdevOptionsGenericCOWFormat(m, &(*obj)->vmdk, &err);
            break;
        case BLOCKDEV_DRIVER_VPC:
            visit_type_implicit_BlockdevOptionsGenericFormat(m, &(*obj)->vpc, &err);
            break;
        case BLOCKDEV_DRIVER_VVFAT:
            visit_type_implicit_BlockdevOptionsVVFAT(m, &(*obj)->vvfat, &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevOptionsList(Visitor *m, BlockdevOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevOptionsList *native_i = (BlockdevOptionsList *)i;
        visit_type_BlockdevOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevRef(Visitor *m, BlockdevRef **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void**) obj, sizeof(BlockdevRef), &err);
    if (err) {
        goto out;
    }
    visit_get_next_type(m, (int*) &(*obj)->kind, BlockdevRef_qtypes, name, &err);
    if (err) {
        goto out_end;
    }
    switch ((*obj)->kind) {
    case BLOCKDEV_REF_KIND_DEFINITION:
        visit_type_BlockdevOptions(m, &(*obj)->definition, name, &err);
        break;
    case BLOCKDEV_REF_KIND_REFERENCE:
        visit_type_str(m, &(*obj)->reference, name, &err);
        break;
    default:
        abort();
    }
out_end:
    error_propagate(errp, err);
    err = NULL;
    visit_end_implicit_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockdevRefList(Visitor *m, BlockdevRefList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevRefList *native_i = (BlockdevRefList *)i;
        visit_type_BlockdevRef(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockErrorActionList(Visitor *m, BlockErrorActionList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockErrorActionList *native_i = (BlockErrorActionList *)i;
        visit_type_BlockErrorAction(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BlockErrorAction(Visitor *m, BlockErrorAction *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BlockErrorAction_lookup, "BlockErrorAction", name, errp);
}

void visit_type_PreallocModeList(Visitor *m, PreallocModeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PreallocModeList *native_i = (PreallocModeList *)i;
        visit_type_PreallocMode(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_PreallocMode(Visitor *m, PreallocMode *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, PreallocMode_lookup, "PreallocMode", name, errp);
}

void visit_type_BiosAtaTranslationList(Visitor *m, BiosAtaTranslationList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BiosAtaTranslationList *native_i = (BiosAtaTranslationList *)i;
        visit_type_BiosAtaTranslation(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_BiosAtaTranslation(Visitor *m, BiosAtaTranslation *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, BiosAtaTranslation_lookup, "BiosAtaTranslation", name, errp);
}

static void visit_type_BlockdevSnapshotInternal_fields(Visitor *m, BlockdevSnapshotInternal **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->device, "device", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BlockdevSnapshotInternal(Visitor *m, BlockdevSnapshotInternal **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BlockdevSnapshotInternal", name, sizeof(BlockdevSnapshotInternal), &err);
    if (!err) {
        if (*obj) {
            visit_type_BlockdevSnapshotInternal_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BlockdevSnapshotInternalList(Visitor *m, BlockdevSnapshotInternalList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BlockdevSnapshotInternalList *native_i = (BlockdevSnapshotInternalList *)i;
        visit_type_BlockdevSnapshotInternal(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TraceEventStateList(Visitor *m, TraceEventStateList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TraceEventStateList *native_i = (TraceEventStateList *)i;
        visit_type_TraceEventState(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TraceEventState(Visitor *m, TraceEventState *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, TraceEventState_lookup, "TraceEventState", name, errp);
}

static void visit_type_TraceEventInfo_fields(Visitor *m, TraceEventInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_TraceEventState(m, &(*obj)->state, "state", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_TraceEventInfo(Visitor *m, TraceEventInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "TraceEventInfo", name, sizeof(TraceEventInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_TraceEventInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_TraceEventInfoList(Visitor *m, TraceEventInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TraceEventInfoList *native_i = (TraceEventInfoList *)i;
        visit_type_TraceEventInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_LostTickPolicyList(Visitor *m, LostTickPolicyList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        LostTickPolicyList *native_i = (LostTickPolicyList *)i;
        visit_type_LostTickPolicy(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_LostTickPolicy(Visitor *m, LostTickPolicy *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, LostTickPolicy_lookup, "LostTickPolicy", name, errp);
}

static void visit_type_NameInfo_fields(Visitor *m, NameInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_name, "name", &err);
    if (!err && (*obj)->has_name) {
        visit_type_str(m, &(*obj)->name, "name", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NameInfo(Visitor *m, NameInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NameInfo", name, sizeof(NameInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_NameInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NameInfoList(Visitor *m, NameInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NameInfoList *native_i = (NameInfoList *)i;
        visit_type_NameInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_KvmInfo_fields(Visitor *m, KvmInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_bool(m, &(*obj)->enabled, "enabled", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->present, "present", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_KvmInfo(Visitor *m, KvmInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "KvmInfo", name, sizeof(KvmInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_KvmInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_KvmInfoList(Visitor *m, KvmInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        KvmInfoList *native_i = (KvmInfoList *)i;
        visit_type_KvmInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_RunStateList(Visitor *m, RunStateList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RunStateList *native_i = (RunStateList *)i;
        visit_type_RunState(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_RunState(Visitor *m, RunState *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, RunState_lookup, "RunState", name, errp);
}

static void visit_type_StatusInfo_fields(Visitor *m, StatusInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_bool(m, &(*obj)->running, "running", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->singlestep, "singlestep", &err);
    if (err) {
        goto out;
    }
    visit_type_RunState(m, &(*obj)->status, "status", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_StatusInfo(Visitor *m, StatusInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "StatusInfo", name, sizeof(StatusInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_StatusInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_StatusInfoList(Visitor *m, StatusInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        StatusInfoList *native_i = (StatusInfoList *)i;
        visit_type_StatusInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_UuidInfo_fields(Visitor *m, UuidInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->UUID, "UUID", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_UuidInfo(Visitor *m, UuidInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "UuidInfo", name, sizeof(UuidInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_UuidInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_UuidInfoList(Visitor *m, UuidInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        UuidInfoList *native_i = (UuidInfoList *)i;
        visit_type_UuidInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevInfo_fields(Visitor *m, ChardevInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->label, "label", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->filename, "filename", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->frontend_open, "frontend-open", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevInfo(Visitor *m, ChardevInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevInfo", name, sizeof(ChardevInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevInfoList(Visitor *m, ChardevInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevInfoList *native_i = (ChardevInfoList *)i;
        visit_type_ChardevInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevBackendInfo_fields(Visitor *m, ChardevBackendInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevBackendInfo(Visitor *m, ChardevBackendInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevBackendInfo", name, sizeof(ChardevBackendInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevBackendInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevBackendInfoList(Visitor *m, ChardevBackendInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevBackendInfoList *native_i = (ChardevBackendInfoList *)i;
        visit_type_ChardevBackendInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_DataFormatList(Visitor *m, DataFormatList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        DataFormatList *native_i = (DataFormatList *)i;
        visit_type_DataFormat(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_DataFormat(Visitor *m, DataFormat *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, DataFormat_lookup, "DataFormat", name, errp);
}

static void visit_type_EventInfo_fields(Visitor *m, EventInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_EventInfo(Visitor *m, EventInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "EventInfo", name, sizeof(EventInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_EventInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_EventInfoList(Visitor *m, EventInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        EventInfoList *native_i = (EventInfoList *)i;
        visit_type_EventInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_MigrationStats_fields(Visitor *m, MigrationStats **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->transferred, "transferred", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->remaining, "remaining", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->total, "total", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->duplicate, "duplicate", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->skipped, "skipped", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->normal, "normal", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->normal_bytes, "normal-bytes", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->dirty_pages_rate, "dirty-pages-rate", &err);
    if (err) {
        goto out;
    }
    visit_type_number(m, &(*obj)->mbps, "mbps", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->dirty_sync_count, "dirty-sync-count", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationStats(Visitor *m, MigrationStats **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "MigrationStats", name, sizeof(MigrationStats), &err);
    if (!err) {
        if (*obj) {
            visit_type_MigrationStats_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_MigrationStatsList(Visitor *m, MigrationStatsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MigrationStatsList *native_i = (MigrationStatsList *)i;
        visit_type_MigrationStats(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_XBZRLECacheStats_fields(Visitor *m, XBZRLECacheStats **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->cache_size, "cache-size", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->bytes, "bytes", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->pages, "pages", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->cache_miss, "cache-miss", &err);
    if (err) {
        goto out;
    }
    visit_type_number(m, &(*obj)->cache_miss_rate, "cache-miss-rate", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->overflow, "overflow", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_XBZRLECacheStats(Visitor *m, XBZRLECacheStats **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "XBZRLECacheStats", name, sizeof(XBZRLECacheStats), &err);
    if (!err) {
        if (*obj) {
            visit_type_XBZRLECacheStats_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_XBZRLECacheStatsList(Visitor *m, XBZRLECacheStatsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        XBZRLECacheStatsList *native_i = (XBZRLECacheStatsList *)i;
        visit_type_XBZRLECacheStats(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MigrationStatusList(Visitor *m, MigrationStatusList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MigrationStatusList *native_i = (MigrationStatusList *)i;
        visit_type_MigrationStatus(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MigrationStatus(Visitor *m, MigrationStatus *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, MigrationStatus_lookup, "MigrationStatus", name, errp);
}

static void visit_type_MigrationInfo_fields(Visitor *m, MigrationInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_status, "status", &err);
    if (!err && (*obj)->has_status) {
        visit_type_MigrationStatus(m, &(*obj)->status, "status", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ram, "ram", &err);
    if (!err && (*obj)->has_ram) {
        visit_type_MigrationStats(m, &(*obj)->ram, "ram", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_disk, "disk", &err);
    if (!err && (*obj)->has_disk) {
        visit_type_MigrationStats(m, &(*obj)->disk, "disk", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_xbzrle_cache, "xbzrle-cache", &err);
    if (!err && (*obj)->has_xbzrle_cache) {
        visit_type_XBZRLECacheStats(m, &(*obj)->xbzrle_cache, "xbzrle-cache", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_total_time, "total-time", &err);
    if (!err && (*obj)->has_total_time) {
        visit_type_int(m, &(*obj)->total_time, "total-time", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_expected_downtime, "expected-downtime", &err);
    if (!err && (*obj)->has_expected_downtime) {
        visit_type_int(m, &(*obj)->expected_downtime, "expected-downtime", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_downtime, "downtime", &err);
    if (!err && (*obj)->has_downtime) {
        visit_type_int(m, &(*obj)->downtime, "downtime", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_setup_time, "setup-time", &err);
    if (!err && (*obj)->has_setup_time) {
        visit_type_int(m, &(*obj)->setup_time, "setup-time", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationInfo(Visitor *m, MigrationInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "MigrationInfo", name, sizeof(MigrationInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_MigrationInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_MigrationInfoList(Visitor *m, MigrationInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MigrationInfoList *native_i = (MigrationInfoList *)i;
        visit_type_MigrationInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MigrationCapabilityList(Visitor *m, MigrationCapabilityList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MigrationCapabilityList *native_i = (MigrationCapabilityList *)i;
        visit_type_MigrationCapability(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MigrationCapability(Visitor *m, MigrationCapability *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, MigrationCapability_lookup, "MigrationCapability", name, errp);
}

static void visit_type_MigrationCapabilityStatus_fields(Visitor *m, MigrationCapabilityStatus **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_MigrationCapability(m, &(*obj)->capability, "capability", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->state, "state", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationCapabilityStatus(Visitor *m, MigrationCapabilityStatus **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "MigrationCapabilityStatus", name, sizeof(MigrationCapabilityStatus), &err);
    if (!err) {
        if (*obj) {
            visit_type_MigrationCapabilityStatus_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_MigrationCapabilityStatusList(Visitor *m, MigrationCapabilityStatusList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MigrationCapabilityStatusList *native_i = (MigrationCapabilityStatusList *)i;
        visit_type_MigrationCapabilityStatus(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MigrationParameterList(Visitor *m, MigrationParameterList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MigrationParameterList *native_i = (MigrationParameterList *)i;
        visit_type_MigrationParameter(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MigrationParameter(Visitor *m, MigrationParameter *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, MigrationParameter_lookup, "MigrationParameter", name, errp);
}

static void visit_type_MigrationParameters_fields(Visitor *m, MigrationParameters **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->compress_level, "compress-level", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->compress_threads, "compress-threads", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->decompress_threads, "decompress-threads", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MigrationParameters(Visitor *m, MigrationParameters **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "MigrationParameters", name, sizeof(MigrationParameters), &err);
    if (!err) {
        if (*obj) {
            visit_type_MigrationParameters_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_MigrationParametersList(Visitor *m, MigrationParametersList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MigrationParametersList *native_i = (MigrationParametersList *)i;
        visit_type_MigrationParameters(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_MouseInfo_fields(Visitor *m, MouseInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->index, "index", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->current, "current", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->absolute, "absolute", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MouseInfo(Visitor *m, MouseInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "MouseInfo", name, sizeof(MouseInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_MouseInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_MouseInfoList(Visitor *m, MouseInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MouseInfoList *native_i = (MouseInfoList *)i;
        visit_type_MouseInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_CpuInfo_fields(Visitor *m, CpuInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->CPU, "CPU", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->current, "current", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->halted, "halted", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->qom_path, "qom_path", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pc, "pc", &err);
    if (!err && (*obj)->has_pc) {
        visit_type_int(m, &(*obj)->pc, "pc", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_nip, "nip", &err);
    if (!err && (*obj)->has_nip) {
        visit_type_int(m, &(*obj)->nip, "nip", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_npc, "npc", &err);
    if (!err && (*obj)->has_npc) {
        visit_type_int(m, &(*obj)->npc, "npc", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_PC, "PC", &err);
    if (!err && (*obj)->has_PC) {
        visit_type_int(m, &(*obj)->PC, "PC", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->thread_id, "thread_id", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_CpuInfo(Visitor *m, CpuInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "CpuInfo", name, sizeof(CpuInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_CpuInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_CpuInfoList(Visitor *m, CpuInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        CpuInfoList *native_i = (CpuInfoList *)i;
        visit_type_CpuInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_IOThreadInfo_fields(Visitor *m, IOThreadInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->thread_id, "thread-id", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_IOThreadInfo(Visitor *m, IOThreadInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "IOThreadInfo", name, sizeof(IOThreadInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_IOThreadInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_IOThreadInfoList(Visitor *m, IOThreadInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        IOThreadInfoList *native_i = (IOThreadInfoList *)i;
        visit_type_IOThreadInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NetworkAddressFamilyList(Visitor *m, NetworkAddressFamilyList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetworkAddressFamilyList *native_i = (NetworkAddressFamilyList *)i;
        visit_type_NetworkAddressFamily(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NetworkAddressFamily(Visitor *m, NetworkAddressFamily *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, NetworkAddressFamily_lookup, "NetworkAddressFamily", name, errp);
}

static void visit_type_VncBasicInfo_fields(Visitor *m, VncBasicInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->host, "host", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->service, "service", &err);
    if (err) {
        goto out;
    }
    visit_type_NetworkAddressFamily(m, &(*obj)->family, "family", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->websocket, "websocket", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_VncBasicInfo(Visitor *m, VncBasicInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "VncBasicInfo", name, sizeof(VncBasicInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_VncBasicInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_VncBasicInfoList(Visitor *m, VncBasicInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VncBasicInfoList *native_i = (VncBasicInfoList *)i;
        visit_type_VncBasicInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_implicit_VncBasicInfo(Visitor *m, VncBasicInfo **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(VncBasicInfo), &err);
    if (!err) {
        visit_type_VncBasicInfo_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_VncServerInfo_fields(Visitor *m, VncServerInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_implicit_VncBasicInfo(m, &(*obj)->base, &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_auth, "auth", &err);
    if (!err && (*obj)->has_auth) {
        visit_type_str(m, &(*obj)->auth, "auth", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_VncServerInfo(Visitor *m, VncServerInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "VncServerInfo", name, sizeof(VncServerInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_VncServerInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_VncServerInfoList(Visitor *m, VncServerInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VncServerInfoList *native_i = (VncServerInfoList *)i;
        visit_type_VncServerInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_VncClientInfo_fields(Visitor *m, VncClientInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_implicit_VncBasicInfo(m, &(*obj)->base, &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_x509_dname, "x509_dname", &err);
    if (!err && (*obj)->has_x509_dname) {
        visit_type_str(m, &(*obj)->x509_dname, "x509_dname", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_sasl_username, "sasl_username", &err);
    if (!err && (*obj)->has_sasl_username) {
        visit_type_str(m, &(*obj)->sasl_username, "sasl_username", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_VncClientInfo(Visitor *m, VncClientInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "VncClientInfo", name, sizeof(VncClientInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_VncClientInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_VncClientInfoList(Visitor *m, VncClientInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VncClientInfoList *native_i = (VncClientInfoList *)i;
        visit_type_VncClientInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_VncInfo_fields(Visitor *m, VncInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_bool(m, &(*obj)->enabled, "enabled", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_host, "host", &err);
    if (!err && (*obj)->has_host) {
        visit_type_str(m, &(*obj)->host, "host", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_family, "family", &err);
    if (!err && (*obj)->has_family) {
        visit_type_NetworkAddressFamily(m, &(*obj)->family, "family", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_service, "service", &err);
    if (!err && (*obj)->has_service) {
        visit_type_str(m, &(*obj)->service, "service", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_auth, "auth", &err);
    if (!err && (*obj)->has_auth) {
        visit_type_str(m, &(*obj)->auth, "auth", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_clients, "clients", &err);
    if (!err && (*obj)->has_clients) {
        visit_type_VncClientInfoList(m, &(*obj)->clients, "clients", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_VncInfo(Visitor *m, VncInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "VncInfo", name, sizeof(VncInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_VncInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_VncInfoList(Visitor *m, VncInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VncInfoList *native_i = (VncInfoList *)i;
        visit_type_VncInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_VncPrimaryAuthList(Visitor *m, VncPrimaryAuthList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VncPrimaryAuthList *native_i = (VncPrimaryAuthList *)i;
        visit_type_VncPrimaryAuth(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_VncPrimaryAuth(Visitor *m, VncPrimaryAuth *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, VncPrimaryAuth_lookup, "VncPrimaryAuth", name, errp);
}

void visit_type_VncVencryptSubAuthList(Visitor *m, VncVencryptSubAuthList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VncVencryptSubAuthList *native_i = (VncVencryptSubAuthList *)i;
        visit_type_VncVencryptSubAuth(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_VncVencryptSubAuth(Visitor *m, VncVencryptSubAuth *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, VncVencryptSubAuth_lookup, "VncVencryptSubAuth", name, errp);
}

static void visit_type_VncInfo2_fields(Visitor *m, VncInfo2 **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_type_VncBasicInfoList(m, &(*obj)->server, "server", &err);
    if (err) {
        goto out;
    }
    visit_type_VncClientInfoList(m, &(*obj)->clients, "clients", &err);
    if (err) {
        goto out;
    }
    visit_type_VncPrimaryAuth(m, &(*obj)->auth, "auth", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vencrypt, "vencrypt", &err);
    if (!err && (*obj)->has_vencrypt) {
        visit_type_VncVencryptSubAuth(m, &(*obj)->vencrypt, "vencrypt", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_display, "display", &err);
    if (!err && (*obj)->has_display) {
        visit_type_str(m, &(*obj)->display, "display", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_VncInfo2(Visitor *m, VncInfo2 **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "VncInfo2", name, sizeof(VncInfo2), &err);
    if (!err) {
        if (*obj) {
            visit_type_VncInfo2_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_VncInfo2List(Visitor *m, VncInfo2List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        VncInfo2List *native_i = (VncInfo2List *)i;
        visit_type_VncInfo2(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_SpiceBasicInfo_fields(Visitor *m, SpiceBasicInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->host, "host", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->port, "port", &err);
    if (err) {
        goto out;
    }
    visit_type_NetworkAddressFamily(m, &(*obj)->family, "family", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_SpiceBasicInfo(Visitor *m, SpiceBasicInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "SpiceBasicInfo", name, sizeof(SpiceBasicInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_SpiceBasicInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_SpiceBasicInfoList(Visitor *m, SpiceBasicInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        SpiceBasicInfoList *native_i = (SpiceBasicInfoList *)i;
        visit_type_SpiceBasicInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_implicit_SpiceBasicInfo(Visitor *m, SpiceBasicInfo **obj, Error **errp)
{
    Error *err = NULL;

    visit_start_implicit_struct(m, (void **)obj, sizeof(SpiceBasicInfo), &err);
    if (!err) {
        visit_type_SpiceBasicInfo_fields(m, obj, errp);
        visit_end_implicit_struct(m, &err);
    }
    error_propagate(errp, err);
}

static void visit_type_SpiceServerInfo_fields(Visitor *m, SpiceServerInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_implicit_SpiceBasicInfo(m, &(*obj)->base, &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_auth, "auth", &err);
    if (!err && (*obj)->has_auth) {
        visit_type_str(m, &(*obj)->auth, "auth", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_SpiceServerInfo(Visitor *m, SpiceServerInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "SpiceServerInfo", name, sizeof(SpiceServerInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_SpiceServerInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_SpiceServerInfoList(Visitor *m, SpiceServerInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        SpiceServerInfoList *native_i = (SpiceServerInfoList *)i;
        visit_type_SpiceServerInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_SpiceChannel_fields(Visitor *m, SpiceChannel **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_implicit_SpiceBasicInfo(m, &(*obj)->base, &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->connection_id, "connection-id", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->channel_type, "channel-type", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->channel_id, "channel-id", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->tls, "tls", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_SpiceChannel(Visitor *m, SpiceChannel **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "SpiceChannel", name, sizeof(SpiceChannel), &err);
    if (!err) {
        if (*obj) {
            visit_type_SpiceChannel_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_SpiceChannelList(Visitor *m, SpiceChannelList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        SpiceChannelList *native_i = (SpiceChannelList *)i;
        visit_type_SpiceChannel(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_SpiceQueryMouseModeList(Visitor *m, SpiceQueryMouseModeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        SpiceQueryMouseModeList *native_i = (SpiceQueryMouseModeList *)i;
        visit_type_SpiceQueryMouseMode(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_SpiceQueryMouseMode(Visitor *m, SpiceQueryMouseMode *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, SpiceQueryMouseMode_lookup, "SpiceQueryMouseMode", name, errp);
}

static void visit_type_SpiceInfo_fields(Visitor *m, SpiceInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_bool(m, &(*obj)->enabled, "enabled", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->migrated, "migrated", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_host, "host", &err);
    if (!err && (*obj)->has_host) {
        visit_type_str(m, &(*obj)->host, "host", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_port, "port", &err);
    if (!err && (*obj)->has_port) {
        visit_type_int(m, &(*obj)->port, "port", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_tls_port, "tls-port", &err);
    if (!err && (*obj)->has_tls_port) {
        visit_type_int(m, &(*obj)->tls_port, "tls-port", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_auth, "auth", &err);
    if (!err && (*obj)->has_auth) {
        visit_type_str(m, &(*obj)->auth, "auth", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_compiled_version, "compiled-version", &err);
    if (!err && (*obj)->has_compiled_version) {
        visit_type_str(m, &(*obj)->compiled_version, "compiled-version", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_SpiceQueryMouseMode(m, &(*obj)->mouse_mode, "mouse-mode", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_channels, "channels", &err);
    if (!err && (*obj)->has_channels) {
        visit_type_SpiceChannelList(m, &(*obj)->channels, "channels", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_SpiceInfo(Visitor *m, SpiceInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "SpiceInfo", name, sizeof(SpiceInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_SpiceInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_SpiceInfoList(Visitor *m, SpiceInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        SpiceInfoList *native_i = (SpiceInfoList *)i;
        visit_type_SpiceInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_BalloonInfo_fields(Visitor *m, BalloonInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->actual, "actual", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_BalloonInfo(Visitor *m, BalloonInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "BalloonInfo", name, sizeof(BalloonInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_BalloonInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_BalloonInfoList(Visitor *m, BalloonInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        BalloonInfoList *native_i = (BalloonInfoList *)i;
        visit_type_BalloonInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciMemoryRange_fields(Visitor *m, PciMemoryRange **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->base, "base", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->limit, "limit", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciMemoryRange(Visitor *m, PciMemoryRange **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciMemoryRange", name, sizeof(PciMemoryRange), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciMemoryRange_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciMemoryRangeList(Visitor *m, PciMemoryRangeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciMemoryRangeList *native_i = (PciMemoryRangeList *)i;
        visit_type_PciMemoryRange(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciMemoryRegion_fields(Visitor *m, PciMemoryRegion **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->bar, "bar", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->address, "address", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->size, "size", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_prefetch, "prefetch", &err);
    if (!err && (*obj)->has_prefetch) {
        visit_type_bool(m, &(*obj)->prefetch, "prefetch", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_mem_type_64, "mem_type_64", &err);
    if (!err && (*obj)->has_mem_type_64) {
        visit_type_bool(m, &(*obj)->mem_type_64, "mem_type_64", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciMemoryRegion(Visitor *m, PciMemoryRegion **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciMemoryRegion", name, sizeof(PciMemoryRegion), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciMemoryRegion_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciMemoryRegionList(Visitor *m, PciMemoryRegionList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciMemoryRegionList *native_i = (PciMemoryRegionList *)i;
        visit_type_PciMemoryRegion(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciBusInfo_fields(Visitor *m, PciBusInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->number, "number", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->secondary, "secondary", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->subordinate, "subordinate", &err);
    if (err) {
        goto out;
    }
    visit_type_PciMemoryRange(m, &(*obj)->io_range, "io_range", &err);
    if (err) {
        goto out;
    }
    visit_type_PciMemoryRange(m, &(*obj)->memory_range, "memory_range", &err);
    if (err) {
        goto out;
    }
    visit_type_PciMemoryRange(m, &(*obj)->prefetchable_range, "prefetchable_range", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciBusInfo(Visitor *m, PciBusInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciBusInfo", name, sizeof(PciBusInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciBusInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciBusInfoList(Visitor *m, PciBusInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciBusInfoList *native_i = (PciBusInfoList *)i;
        visit_type_PciBusInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciBridgeInfo_fields(Visitor *m, PciBridgeInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_PciBusInfo(m, &(*obj)->bus, "bus", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_devices, "devices", &err);
    if (!err && (*obj)->has_devices) {
        visit_type_PciDeviceInfoList(m, &(*obj)->devices, "devices", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciBridgeInfo(Visitor *m, PciBridgeInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciBridgeInfo", name, sizeof(PciBridgeInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciBridgeInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciBridgeInfoList(Visitor *m, PciBridgeInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciBridgeInfoList *native_i = (PciBridgeInfoList *)i;
        visit_type_PciBridgeInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciDeviceClass_fields(Visitor *m, PciDeviceClass **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_desc, "desc", &err);
    if (!err && (*obj)->has_desc) {
        visit_type_str(m, &(*obj)->desc, "desc", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->q_class, "class", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciDeviceClass(Visitor *m, PciDeviceClass **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciDeviceClass", name, sizeof(PciDeviceClass), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciDeviceClass_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciDeviceClassList(Visitor *m, PciDeviceClassList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciDeviceClassList *native_i = (PciDeviceClassList *)i;
        visit_type_PciDeviceClass(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciDeviceId_fields(Visitor *m, PciDeviceId **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->device, "device", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->vendor, "vendor", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciDeviceId(Visitor *m, PciDeviceId **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciDeviceId", name, sizeof(PciDeviceId), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciDeviceId_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciDeviceIdList(Visitor *m, PciDeviceIdList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciDeviceIdList *native_i = (PciDeviceIdList *)i;
        visit_type_PciDeviceId(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciDeviceInfo_fields(Visitor *m, PciDeviceInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->bus, "bus", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->slot, "slot", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->function, "function", &err);
    if (err) {
        goto out;
    }
    visit_type_PciDeviceClass(m, &(*obj)->class_info, "class_info", &err);
    if (err) {
        goto out;
    }
    visit_type_PciDeviceId(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_irq, "irq", &err);
    if (!err && (*obj)->has_irq) {
        visit_type_int(m, &(*obj)->irq, "irq", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->qdev_id, "qdev_id", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pci_bridge, "pci_bridge", &err);
    if (!err && (*obj)->has_pci_bridge) {
        visit_type_PciBridgeInfo(m, &(*obj)->pci_bridge, "pci_bridge", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_PciMemoryRegionList(m, &(*obj)->regions, "regions", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciDeviceInfo(Visitor *m, PciDeviceInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciDeviceInfo", name, sizeof(PciDeviceInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciDeviceInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciDeviceInfoList(Visitor *m, PciDeviceInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciDeviceInfoList *native_i = (PciDeviceInfoList *)i;
        visit_type_PciDeviceInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PciInfo_fields(Visitor *m, PciInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->bus, "bus", &err);
    if (err) {
        goto out;
    }
    visit_type_PciDeviceInfoList(m, &(*obj)->devices, "devices", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PciInfo(Visitor *m, PciInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PciInfo", name, sizeof(PciInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_PciInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PciInfoList(Visitor *m, PciInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PciInfoList *native_i = (PciInfoList *)i;
        visit_type_PciInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_Abort_fields(Visitor *m, Abort **obj, Error **errp)
{
    Error *err = NULL;
    error_propagate(errp, err);
}

void visit_type_Abort(Visitor *m, Abort **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "Abort", name, sizeof(Abort), &err);
    if (!err) {
        if (*obj) {
            visit_type_Abort_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_AbortList(Visitor *m, AbortList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        AbortList *native_i = (AbortList *)i;
        visit_type_Abort(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TransactionActionKind(Visitor *m, TransactionActionKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, TransactionActionKind_lookup, "TransactionActionKind", name, errp);
}

void visit_type_TransactionAction(Visitor *m, TransactionAction **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "TransactionAction", name, sizeof(TransactionAction), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_TransactionActionKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_SYNC:
            visit_type_BlockdevSnapshot(m, &(*obj)->blockdev_snapshot_sync, "data", &err);
            break;
        case TRANSACTION_ACTION_KIND_DRIVE_BACKUP:
            visit_type_DriveBackup(m, &(*obj)->drive_backup, "data", &err);
            break;
        case TRANSACTION_ACTION_KIND_BLOCKDEV_BACKUP:
            visit_type_BlockdevBackup(m, &(*obj)->blockdev_backup, "data", &err);
            break;
        case TRANSACTION_ACTION_KIND_ABORT:
            visit_type_Abort(m, &(*obj)->abort, "data", &err);
            break;
        case TRANSACTION_ACTION_KIND_BLOCKDEV_SNAPSHOT_INTERNAL_SYNC:
            visit_type_BlockdevSnapshotInternal(m, &(*obj)->blockdev_snapshot_internal_sync, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TransactionActionList(Visitor *m, TransactionActionList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TransactionActionList *native_i = (TransactionActionList *)i;
        visit_type_TransactionAction(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ObjectPropertyInfo_fields(Visitor *m, ObjectPropertyInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ObjectPropertyInfo(Visitor *m, ObjectPropertyInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ObjectPropertyInfo", name, sizeof(ObjectPropertyInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_ObjectPropertyInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ObjectPropertyInfoList(Visitor *m, ObjectPropertyInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ObjectPropertyInfoList *native_i = (ObjectPropertyInfoList *)i;
        visit_type_ObjectPropertyInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ObjectTypeInfo_fields(Visitor *m, ObjectTypeInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ObjectTypeInfo(Visitor *m, ObjectTypeInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ObjectTypeInfo", name, sizeof(ObjectTypeInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_ObjectTypeInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ObjectTypeInfoList(Visitor *m, ObjectTypeInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ObjectTypeInfoList *native_i = (ObjectTypeInfoList *)i;
        visit_type_ObjectTypeInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_DevicePropertyInfo_fields(Visitor *m, DevicePropertyInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_description, "description", &err);
    if (!err && (*obj)->has_description) {
        visit_type_str(m, &(*obj)->description, "description", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_DevicePropertyInfo(Visitor *m, DevicePropertyInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "DevicePropertyInfo", name, sizeof(DevicePropertyInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_DevicePropertyInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_DevicePropertyInfoList(Visitor *m, DevicePropertyInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        DevicePropertyInfoList *native_i = (DevicePropertyInfoList *)i;
        visit_type_DevicePropertyInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_DumpGuestMemoryFormatList(Visitor *m, DumpGuestMemoryFormatList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        DumpGuestMemoryFormatList *native_i = (DumpGuestMemoryFormatList *)i;
        visit_type_DumpGuestMemoryFormat(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_DumpGuestMemoryFormat(Visitor *m, DumpGuestMemoryFormat *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, DumpGuestMemoryFormat_lookup, "DumpGuestMemoryFormat", name, errp);
}

static void visit_type_DumpGuestMemoryCapability_fields(Visitor *m, DumpGuestMemoryCapability **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_DumpGuestMemoryFormatList(m, &(*obj)->formats, "formats", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_DumpGuestMemoryCapability(Visitor *m, DumpGuestMemoryCapability **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "DumpGuestMemoryCapability", name, sizeof(DumpGuestMemoryCapability), &err);
    if (!err) {
        if (*obj) {
            visit_type_DumpGuestMemoryCapability_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_DumpGuestMemoryCapabilityList(Visitor *m, DumpGuestMemoryCapabilityList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        DumpGuestMemoryCapabilityList *native_i = (DumpGuestMemoryCapabilityList *)i;
        visit_type_DumpGuestMemoryCapability(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevNoneOptions_fields(Visitor *m, NetdevNoneOptions **obj, Error **errp)
{
    Error *err = NULL;
    error_propagate(errp, err);
}

void visit_type_NetdevNoneOptions(Visitor *m, NetdevNoneOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevNoneOptions", name, sizeof(NetdevNoneOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevNoneOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevNoneOptionsList(Visitor *m, NetdevNoneOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevNoneOptionsList *native_i = (NetdevNoneOptionsList *)i;
        visit_type_NetdevNoneOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetLegacyNicOptions_fields(Visitor *m, NetLegacyNicOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_netdev, "netdev", &err);
    if (!err && (*obj)->has_netdev) {
        visit_type_str(m, &(*obj)->netdev, "netdev", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_macaddr, "macaddr", &err);
    if (!err && (*obj)->has_macaddr) {
        visit_type_str(m, &(*obj)->macaddr, "macaddr", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_model, "model", &err);
    if (!err && (*obj)->has_model) {
        visit_type_str(m, &(*obj)->model, "model", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_addr, "addr", &err);
    if (!err && (*obj)->has_addr) {
        visit_type_str(m, &(*obj)->addr, "addr", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vectors, "vectors", &err);
    if (!err && (*obj)->has_vectors) {
        visit_type_uint32(m, &(*obj)->vectors, "vectors", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetLegacyNicOptions(Visitor *m, NetLegacyNicOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetLegacyNicOptions", name, sizeof(NetLegacyNicOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetLegacyNicOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetLegacyNicOptionsList(Visitor *m, NetLegacyNicOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetLegacyNicOptionsList *native_i = (NetLegacyNicOptionsList *)i;
        visit_type_NetLegacyNicOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_String_fields(Visitor *m, String **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->str, "str", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_String(Visitor *m, String **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "String", name, sizeof(String), &err);
    if (!err) {
        if (*obj) {
            visit_type_String_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_StringList(Visitor *m, StringList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        StringList *native_i = (StringList *)i;
        visit_type_String(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevUserOptions_fields(Visitor *m, NetdevUserOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_hostname, "hostname", &err);
    if (!err && (*obj)->has_hostname) {
        visit_type_str(m, &(*obj)->hostname, "hostname", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_q_restrict, "restrict", &err);
    if (!err && (*obj)->has_q_restrict) {
        visit_type_bool(m, &(*obj)->q_restrict, "restrict", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ip, "ip", &err);
    if (!err && (*obj)->has_ip) {
        visit_type_str(m, &(*obj)->ip, "ip", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_net, "net", &err);
    if (!err && (*obj)->has_net) {
        visit_type_str(m, &(*obj)->net, "net", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_host, "host", &err);
    if (!err && (*obj)->has_host) {
        visit_type_str(m, &(*obj)->host, "host", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_tftp, "tftp", &err);
    if (!err && (*obj)->has_tftp) {
        visit_type_str(m, &(*obj)->tftp, "tftp", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_bootfile, "bootfile", &err);
    if (!err && (*obj)->has_bootfile) {
        visit_type_str(m, &(*obj)->bootfile, "bootfile", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_dhcpstart, "dhcpstart", &err);
    if (!err && (*obj)->has_dhcpstart) {
        visit_type_str(m, &(*obj)->dhcpstart, "dhcpstart", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_dns, "dns", &err);
    if (!err && (*obj)->has_dns) {
        visit_type_str(m, &(*obj)->dns, "dns", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_dnssearch, "dnssearch", &err);
    if (!err && (*obj)->has_dnssearch) {
        visit_type_StringList(m, &(*obj)->dnssearch, "dnssearch", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_smb, "smb", &err);
    if (!err && (*obj)->has_smb) {
        visit_type_str(m, &(*obj)->smb, "smb", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_smbserver, "smbserver", &err);
    if (!err && (*obj)->has_smbserver) {
        visit_type_str(m, &(*obj)->smbserver, "smbserver", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_hostfwd, "hostfwd", &err);
    if (!err && (*obj)->has_hostfwd) {
        visit_type_StringList(m, &(*obj)->hostfwd, "hostfwd", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_guestfwd, "guestfwd", &err);
    if (!err && (*obj)->has_guestfwd) {
        visit_type_StringList(m, &(*obj)->guestfwd, "guestfwd", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevUserOptions(Visitor *m, NetdevUserOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevUserOptions", name, sizeof(NetdevUserOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevUserOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevUserOptionsList(Visitor *m, NetdevUserOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevUserOptionsList *native_i = (NetdevUserOptionsList *)i;
        visit_type_NetdevUserOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevTapOptions_fields(Visitor *m, NetdevTapOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_ifname, "ifname", &err);
    if (!err && (*obj)->has_ifname) {
        visit_type_str(m, &(*obj)->ifname, "ifname", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_fd, "fd", &err);
    if (!err && (*obj)->has_fd) {
        visit_type_str(m, &(*obj)->fd, "fd", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_fds, "fds", &err);
    if (!err && (*obj)->has_fds) {
        visit_type_str(m, &(*obj)->fds, "fds", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_script, "script", &err);
    if (!err && (*obj)->has_script) {
        visit_type_str(m, &(*obj)->script, "script", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_downscript, "downscript", &err);
    if (!err && (*obj)->has_downscript) {
        visit_type_str(m, &(*obj)->downscript, "downscript", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_helper, "helper", &err);
    if (!err && (*obj)->has_helper) {
        visit_type_str(m, &(*obj)->helper, "helper", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_sndbuf, "sndbuf", &err);
    if (!err && (*obj)->has_sndbuf) {
        visit_type_size(m, &(*obj)->sndbuf, "sndbuf", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vnet_hdr, "vnet_hdr", &err);
    if (!err && (*obj)->has_vnet_hdr) {
        visit_type_bool(m, &(*obj)->vnet_hdr, "vnet_hdr", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vhost, "vhost", &err);
    if (!err && (*obj)->has_vhost) {
        visit_type_bool(m, &(*obj)->vhost, "vhost", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vhostfd, "vhostfd", &err);
    if (!err && (*obj)->has_vhostfd) {
        visit_type_str(m, &(*obj)->vhostfd, "vhostfd", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vhostfds, "vhostfds", &err);
    if (!err && (*obj)->has_vhostfds) {
        visit_type_str(m, &(*obj)->vhostfds, "vhostfds", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vhostforce, "vhostforce", &err);
    if (!err && (*obj)->has_vhostforce) {
        visit_type_bool(m, &(*obj)->vhostforce, "vhostforce", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_queues, "queues", &err);
    if (!err && (*obj)->has_queues) {
        visit_type_uint32(m, &(*obj)->queues, "queues", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevTapOptions(Visitor *m, NetdevTapOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevTapOptions", name, sizeof(NetdevTapOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevTapOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevTapOptionsList(Visitor *m, NetdevTapOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevTapOptionsList *native_i = (NetdevTapOptionsList *)i;
        visit_type_NetdevTapOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevSocketOptions_fields(Visitor *m, NetdevSocketOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_fd, "fd", &err);
    if (!err && (*obj)->has_fd) {
        visit_type_str(m, &(*obj)->fd, "fd", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_listen, "listen", &err);
    if (!err && (*obj)->has_listen) {
        visit_type_str(m, &(*obj)->listen, "listen", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_connect, "connect", &err);
    if (!err && (*obj)->has_connect) {
        visit_type_str(m, &(*obj)->connect, "connect", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_mcast, "mcast", &err);
    if (!err && (*obj)->has_mcast) {
        visit_type_str(m, &(*obj)->mcast, "mcast", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_localaddr, "localaddr", &err);
    if (!err && (*obj)->has_localaddr) {
        visit_type_str(m, &(*obj)->localaddr, "localaddr", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_udp, "udp", &err);
    if (!err && (*obj)->has_udp) {
        visit_type_str(m, &(*obj)->udp, "udp", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevSocketOptions(Visitor *m, NetdevSocketOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevSocketOptions", name, sizeof(NetdevSocketOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevSocketOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevSocketOptionsList(Visitor *m, NetdevSocketOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevSocketOptionsList *native_i = (NetdevSocketOptionsList *)i;
        visit_type_NetdevSocketOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevL2TPv3Options_fields(Visitor *m, NetdevL2TPv3Options **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->src, "src", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->dst, "dst", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_srcport, "srcport", &err);
    if (!err && (*obj)->has_srcport) {
        visit_type_str(m, &(*obj)->srcport, "srcport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_dstport, "dstport", &err);
    if (!err && (*obj)->has_dstport) {
        visit_type_str(m, &(*obj)->dstport, "dstport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ipv6, "ipv6", &err);
    if (!err && (*obj)->has_ipv6) {
        visit_type_bool(m, &(*obj)->ipv6, "ipv6", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_udp, "udp", &err);
    if (!err && (*obj)->has_udp) {
        visit_type_bool(m, &(*obj)->udp, "udp", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cookie64, "cookie64", &err);
    if (!err && (*obj)->has_cookie64) {
        visit_type_bool(m, &(*obj)->cookie64, "cookie64", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_counter, "counter", &err);
    if (!err && (*obj)->has_counter) {
        visit_type_bool(m, &(*obj)->counter, "counter", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pincounter, "pincounter", &err);
    if (!err && (*obj)->has_pincounter) {
        visit_type_bool(m, &(*obj)->pincounter, "pincounter", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_txcookie, "txcookie", &err);
    if (!err && (*obj)->has_txcookie) {
        visit_type_uint64(m, &(*obj)->txcookie, "txcookie", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rxcookie, "rxcookie", &err);
    if (!err && (*obj)->has_rxcookie) {
        visit_type_uint64(m, &(*obj)->rxcookie, "rxcookie", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_uint32(m, &(*obj)->txsession, "txsession", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rxsession, "rxsession", &err);
    if (!err && (*obj)->has_rxsession) {
        visit_type_uint32(m, &(*obj)->rxsession, "rxsession", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_offset, "offset", &err);
    if (!err && (*obj)->has_offset) {
        visit_type_uint32(m, &(*obj)->offset, "offset", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevL2TPv3Options(Visitor *m, NetdevL2TPv3Options **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevL2TPv3Options", name, sizeof(NetdevL2TPv3Options), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevL2TPv3Options_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevL2TPv3OptionsList(Visitor *m, NetdevL2TPv3OptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevL2TPv3OptionsList *native_i = (NetdevL2TPv3OptionsList *)i;
        visit_type_NetdevL2TPv3Options(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevVdeOptions_fields(Visitor *m, NetdevVdeOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_sock, "sock", &err);
    if (!err && (*obj)->has_sock) {
        visit_type_str(m, &(*obj)->sock, "sock", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_port, "port", &err);
    if (!err && (*obj)->has_port) {
        visit_type_uint16(m, &(*obj)->port, "port", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_group, "group", &err);
    if (!err && (*obj)->has_group) {
        visit_type_str(m, &(*obj)->group, "group", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_mode, "mode", &err);
    if (!err && (*obj)->has_mode) {
        visit_type_uint16(m, &(*obj)->mode, "mode", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevVdeOptions(Visitor *m, NetdevVdeOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevVdeOptions", name, sizeof(NetdevVdeOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevVdeOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevVdeOptionsList(Visitor *m, NetdevVdeOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevVdeOptionsList *native_i = (NetdevVdeOptionsList *)i;
        visit_type_NetdevVdeOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevDumpOptions_fields(Visitor *m, NetdevDumpOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_len, "len", &err);
    if (!err && (*obj)->has_len) {
        visit_type_size(m, &(*obj)->len, "len", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_file, "file", &err);
    if (!err && (*obj)->has_file) {
        visit_type_str(m, &(*obj)->file, "file", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevDumpOptions(Visitor *m, NetdevDumpOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevDumpOptions", name, sizeof(NetdevDumpOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevDumpOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevDumpOptionsList(Visitor *m, NetdevDumpOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevDumpOptionsList *native_i = (NetdevDumpOptionsList *)i;
        visit_type_NetdevDumpOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevBridgeOptions_fields(Visitor *m, NetdevBridgeOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_br, "br", &err);
    if (!err && (*obj)->has_br) {
        visit_type_str(m, &(*obj)->br, "br", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_helper, "helper", &err);
    if (!err && (*obj)->has_helper) {
        visit_type_str(m, &(*obj)->helper, "helper", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevBridgeOptions(Visitor *m, NetdevBridgeOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevBridgeOptions", name, sizeof(NetdevBridgeOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevBridgeOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevBridgeOptionsList(Visitor *m, NetdevBridgeOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevBridgeOptionsList *native_i = (NetdevBridgeOptionsList *)i;
        visit_type_NetdevBridgeOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevHubPortOptions_fields(Visitor *m, NetdevHubPortOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int32(m, &(*obj)->hubid, "hubid", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevHubPortOptions(Visitor *m, NetdevHubPortOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevHubPortOptions", name, sizeof(NetdevHubPortOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevHubPortOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevHubPortOptionsList(Visitor *m, NetdevHubPortOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevHubPortOptionsList *native_i = (NetdevHubPortOptionsList *)i;
        visit_type_NetdevHubPortOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevNetmapOptions_fields(Visitor *m, NetdevNetmapOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->ifname, "ifname", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_devname, "devname", &err);
    if (!err && (*obj)->has_devname) {
        visit_type_str(m, &(*obj)->devname, "devname", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevNetmapOptions(Visitor *m, NetdevNetmapOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevNetmapOptions", name, sizeof(NetdevNetmapOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevNetmapOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevNetmapOptionsList(Visitor *m, NetdevNetmapOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevNetmapOptionsList *native_i = (NetdevNetmapOptionsList *)i;
        visit_type_NetdevNetmapOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetdevVhostUserOptions_fields(Visitor *m, NetdevVhostUserOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->chardev, "chardev", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vhostforce, "vhostforce", &err);
    if (!err && (*obj)->has_vhostforce) {
        visit_type_bool(m, &(*obj)->vhostforce, "vhostforce", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetdevVhostUserOptions(Visitor *m, NetdevVhostUserOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetdevVhostUserOptions", name, sizeof(NetdevVhostUserOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetdevVhostUserOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevVhostUserOptionsList(Visitor *m, NetdevVhostUserOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevVhostUserOptionsList *native_i = (NetdevVhostUserOptionsList *)i;
        visit_type_NetdevVhostUserOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NetClientOptionsKind(Visitor *m, NetClientOptionsKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, NetClientOptionsKind_lookup, "NetClientOptionsKind", name, errp);
}

void visit_type_NetClientOptions(Visitor *m, NetClientOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetClientOptions", name, sizeof(NetClientOptions), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_NetClientOptionsKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case NET_CLIENT_OPTIONS_KIND_NONE:
            visit_type_NetdevNoneOptions(m, &(*obj)->none, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_NIC:
            visit_type_NetLegacyNicOptions(m, &(*obj)->nic, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_USER:
            visit_type_NetdevUserOptions(m, &(*obj)->user, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_TAP:
            visit_type_NetdevTapOptions(m, &(*obj)->tap, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_L2TPV3:
            visit_type_NetdevL2TPv3Options(m, &(*obj)->l2tpv3, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_SOCKET:
            visit_type_NetdevSocketOptions(m, &(*obj)->socket, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_VDE:
            visit_type_NetdevVdeOptions(m, &(*obj)->vde, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_DUMP:
            visit_type_NetdevDumpOptions(m, &(*obj)->dump, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_BRIDGE:
            visit_type_NetdevBridgeOptions(m, &(*obj)->bridge, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_HUBPORT:
            visit_type_NetdevHubPortOptions(m, &(*obj)->hubport, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_NETMAP:
            visit_type_NetdevNetmapOptions(m, &(*obj)->netmap, "data", &err);
            break;
        case NET_CLIENT_OPTIONS_KIND_VHOST_USER:
            visit_type_NetdevVhostUserOptions(m, &(*obj)->vhost_user, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NetClientOptionsList(Visitor *m, NetClientOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetClientOptionsList *native_i = (NetClientOptionsList *)i;
        visit_type_NetClientOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NetLegacy_fields(Visitor *m, NetLegacy **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_vlan, "vlan", &err);
    if (!err && (*obj)->has_vlan) {
        visit_type_int32(m, &(*obj)->vlan, "vlan", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_id, "id", &err);
    if (!err && (*obj)->has_id) {
        visit_type_str(m, &(*obj)->id, "id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_name, "name", &err);
    if (!err && (*obj)->has_name) {
        visit_type_str(m, &(*obj)->name, "name", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_NetClientOptions(m, &(*obj)->opts, "opts", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NetLegacy(Visitor *m, NetLegacy **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NetLegacy", name, sizeof(NetLegacy), &err);
    if (!err) {
        if (*obj) {
            visit_type_NetLegacy_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetLegacyList(Visitor *m, NetLegacyList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetLegacyList *native_i = (NetLegacyList *)i;
        visit_type_NetLegacy(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_Netdev_fields(Visitor *m, Netdev **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_type_NetClientOptions(m, &(*obj)->opts, "opts", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_Netdev(Visitor *m, Netdev **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "Netdev", name, sizeof(Netdev), &err);
    if (!err) {
        if (*obj) {
            visit_type_Netdev_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NetdevList(Visitor *m, NetdevList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NetdevList *native_i = (NetdevList *)i;
        visit_type_Netdev(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_InetSocketAddress_fields(Visitor *m, InetSocketAddress **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->host, "host", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->port, "port", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_to, "to", &err);
    if (!err && (*obj)->has_to) {
        visit_type_uint16(m, &(*obj)->to, "to", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ipv4, "ipv4", &err);
    if (!err && (*obj)->has_ipv4) {
        visit_type_bool(m, &(*obj)->ipv4, "ipv4", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ipv6, "ipv6", &err);
    if (!err && (*obj)->has_ipv6) {
        visit_type_bool(m, &(*obj)->ipv6, "ipv6", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_InetSocketAddress(Visitor *m, InetSocketAddress **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "InetSocketAddress", name, sizeof(InetSocketAddress), &err);
    if (!err) {
        if (*obj) {
            visit_type_InetSocketAddress_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_InetSocketAddressList(Visitor *m, InetSocketAddressList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        InetSocketAddressList *native_i = (InetSocketAddressList *)i;
        visit_type_InetSocketAddress(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_UnixSocketAddress_fields(Visitor *m, UnixSocketAddress **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->path, "path", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_UnixSocketAddress(Visitor *m, UnixSocketAddress **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "UnixSocketAddress", name, sizeof(UnixSocketAddress), &err);
    if (!err) {
        if (*obj) {
            visit_type_UnixSocketAddress_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_UnixSocketAddressList(Visitor *m, UnixSocketAddressList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        UnixSocketAddressList *native_i = (UnixSocketAddressList *)i;
        visit_type_UnixSocketAddress(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_SocketAddressKind(Visitor *m, SocketAddressKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, SocketAddressKind_lookup, "SocketAddressKind", name, errp);
}

void visit_type_SocketAddress(Visitor *m, SocketAddress **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "SocketAddress", name, sizeof(SocketAddress), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_SocketAddressKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case SOCKET_ADDRESS_KIND_INET:
            visit_type_InetSocketAddress(m, &(*obj)->inet, "data", &err);
            break;
        case SOCKET_ADDRESS_KIND_UNIX:
            visit_type_UnixSocketAddress(m, &(*obj)->q_unix, "data", &err);
            break;
        case SOCKET_ADDRESS_KIND_FD:
            visit_type_String(m, &(*obj)->fd, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_SocketAddressList(Visitor *m, SocketAddressList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        SocketAddressList *native_i = (SocketAddressList *)i;
        visit_type_SocketAddress(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_MachineInfo_fields(Visitor *m, MachineInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_alias, "alias", &err);
    if (!err && (*obj)->has_alias) {
        visit_type_str(m, &(*obj)->alias, "alias", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_is_default, "is-default", &err);
    if (!err && (*obj)->has_is_default) {
        visit_type_bool(m, &(*obj)->is_default, "is-default", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->cpu_max, "cpu-max", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_MachineInfo(Visitor *m, MachineInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "MachineInfo", name, sizeof(MachineInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_MachineInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_MachineInfoList(Visitor *m, MachineInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MachineInfoList *native_i = (MachineInfoList *)i;
        visit_type_MachineInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_CpuDefinitionInfo_fields(Visitor *m, CpuDefinitionInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_CpuDefinitionInfo(Visitor *m, CpuDefinitionInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "CpuDefinitionInfo", name, sizeof(CpuDefinitionInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_CpuDefinitionInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_CpuDefinitionInfoList(Visitor *m, CpuDefinitionInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        CpuDefinitionInfoList *native_i = (CpuDefinitionInfoList *)i;
        visit_type_CpuDefinitionInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_AddfdInfo_fields(Visitor *m, AddfdInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->fdset_id, "fdset-id", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->fd, "fd", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_AddfdInfo(Visitor *m, AddfdInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "AddfdInfo", name, sizeof(AddfdInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_AddfdInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_AddfdInfoList(Visitor *m, AddfdInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        AddfdInfoList *native_i = (AddfdInfoList *)i;
        visit_type_AddfdInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_FdsetFdInfo_fields(Visitor *m, FdsetFdInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->fd, "fd", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_opaque, "opaque", &err);
    if (!err && (*obj)->has_opaque) {
        visit_type_str(m, &(*obj)->opaque, "opaque", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_FdsetFdInfo(Visitor *m, FdsetFdInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "FdsetFdInfo", name, sizeof(FdsetFdInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_FdsetFdInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_FdsetFdInfoList(Visitor *m, FdsetFdInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        FdsetFdInfoList *native_i = (FdsetFdInfoList *)i;
        visit_type_FdsetFdInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_FdsetInfo_fields(Visitor *m, FdsetInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->fdset_id, "fdset-id", &err);
    if (err) {
        goto out;
    }
    visit_type_FdsetFdInfoList(m, &(*obj)->fds, "fds", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_FdsetInfo(Visitor *m, FdsetInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "FdsetInfo", name, sizeof(FdsetInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_FdsetInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_FdsetInfoList(Visitor *m, FdsetInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        FdsetInfoList *native_i = (FdsetInfoList *)i;
        visit_type_FdsetInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_TargetInfo_fields(Visitor *m, TargetInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->arch, "arch", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_TargetInfo(Visitor *m, TargetInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "TargetInfo", name, sizeof(TargetInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_TargetInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_TargetInfoList(Visitor *m, TargetInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TargetInfoList *native_i = (TargetInfoList *)i;
        visit_type_TargetInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_QKeyCodeList(Visitor *m, QKeyCodeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        QKeyCodeList *native_i = (QKeyCodeList *)i;
        visit_type_QKeyCode(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_QKeyCode(Visitor *m, QKeyCode *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, QKeyCode_lookup, "QKeyCode", name, errp);
}

void visit_type_KeyValueKind(Visitor *m, KeyValueKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, KeyValueKind_lookup, "KeyValueKind", name, errp);
}

void visit_type_KeyValue(Visitor *m, KeyValue **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "KeyValue", name, sizeof(KeyValue), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_KeyValueKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case KEY_VALUE_KIND_NUMBER:
            visit_type_int(m, &(*obj)->number, "data", &err);
            break;
        case KEY_VALUE_KIND_QCODE:
            visit_type_QKeyCode(m, &(*obj)->qcode, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_KeyValueList(Visitor *m, KeyValueList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        KeyValueList *native_i = (KeyValueList *)i;
        visit_type_KeyValue(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevFile_fields(Visitor *m, ChardevFile **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_in, "in", &err);
    if (!err && (*obj)->has_in) {
        visit_type_str(m, &(*obj)->in, "in", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->out, "out", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevFile(Visitor *m, ChardevFile **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevFile", name, sizeof(ChardevFile), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevFile_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevFileList(Visitor *m, ChardevFileList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevFileList *native_i = (ChardevFileList *)i;
        visit_type_ChardevFile(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevHostdev_fields(Visitor *m, ChardevHostdev **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->device, "device", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevHostdev(Visitor *m, ChardevHostdev **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevHostdev", name, sizeof(ChardevHostdev), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevHostdev_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevHostdevList(Visitor *m, ChardevHostdevList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevHostdevList *native_i = (ChardevHostdevList *)i;
        visit_type_ChardevHostdev(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevSocket_fields(Visitor *m, ChardevSocket **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_SocketAddress(m, &(*obj)->addr, "addr", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_server, "server", &err);
    if (!err && (*obj)->has_server) {
        visit_type_bool(m, &(*obj)->server, "server", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_wait, "wait", &err);
    if (!err && (*obj)->has_wait) {
        visit_type_bool(m, &(*obj)->wait, "wait", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_nodelay, "nodelay", &err);
    if (!err && (*obj)->has_nodelay) {
        visit_type_bool(m, &(*obj)->nodelay, "nodelay", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_telnet, "telnet", &err);
    if (!err && (*obj)->has_telnet) {
        visit_type_bool(m, &(*obj)->telnet, "telnet", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_reconnect, "reconnect", &err);
    if (!err && (*obj)->has_reconnect) {
        visit_type_int(m, &(*obj)->reconnect, "reconnect", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevSocket(Visitor *m, ChardevSocket **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevSocket", name, sizeof(ChardevSocket), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevSocket_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevSocketList(Visitor *m, ChardevSocketList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevSocketList *native_i = (ChardevSocketList *)i;
        visit_type_ChardevSocket(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevUdp_fields(Visitor *m, ChardevUdp **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_SocketAddress(m, &(*obj)->remote, "remote", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_local, "local", &err);
    if (!err && (*obj)->has_local) {
        visit_type_SocketAddress(m, &(*obj)->local, "local", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevUdp(Visitor *m, ChardevUdp **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevUdp", name, sizeof(ChardevUdp), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevUdp_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevUdpList(Visitor *m, ChardevUdpList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevUdpList *native_i = (ChardevUdpList *)i;
        visit_type_ChardevUdp(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevMux_fields(Visitor *m, ChardevMux **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->chardev, "chardev", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevMux(Visitor *m, ChardevMux **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevMux", name, sizeof(ChardevMux), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevMux_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevMuxList(Visitor *m, ChardevMuxList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevMuxList *native_i = (ChardevMuxList *)i;
        visit_type_ChardevMux(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevStdio_fields(Visitor *m, ChardevStdio **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_signal, "signal", &err);
    if (!err && (*obj)->has_signal) {
        visit_type_bool(m, &(*obj)->signal, "signal", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevStdio(Visitor *m, ChardevStdio **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevStdio", name, sizeof(ChardevStdio), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevStdio_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevStdioList(Visitor *m, ChardevStdioList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevStdioList *native_i = (ChardevStdioList *)i;
        visit_type_ChardevStdio(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevSpiceChannel_fields(Visitor *m, ChardevSpiceChannel **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevSpiceChannel(Visitor *m, ChardevSpiceChannel **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevSpiceChannel", name, sizeof(ChardevSpiceChannel), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevSpiceChannel_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevSpiceChannelList(Visitor *m, ChardevSpiceChannelList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevSpiceChannelList *native_i = (ChardevSpiceChannelList *)i;
        visit_type_ChardevSpiceChannel(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevSpicePort_fields(Visitor *m, ChardevSpicePort **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->fqdn, "fqdn", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevSpicePort(Visitor *m, ChardevSpicePort **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevSpicePort", name, sizeof(ChardevSpicePort), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevSpicePort_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevSpicePortList(Visitor *m, ChardevSpicePortList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevSpicePortList *native_i = (ChardevSpicePortList *)i;
        visit_type_ChardevSpicePort(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevVC_fields(Visitor *m, ChardevVC **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_width, "width", &err);
    if (!err && (*obj)->has_width) {
        visit_type_int(m, &(*obj)->width, "width", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_height, "height", &err);
    if (!err && (*obj)->has_height) {
        visit_type_int(m, &(*obj)->height, "height", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cols, "cols", &err);
    if (!err && (*obj)->has_cols) {
        visit_type_int(m, &(*obj)->cols, "cols", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rows, "rows", &err);
    if (!err && (*obj)->has_rows) {
        visit_type_int(m, &(*obj)->rows, "rows", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevVC(Visitor *m, ChardevVC **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevVC", name, sizeof(ChardevVC), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevVC_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevVCList(Visitor *m, ChardevVCList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevVCList *native_i = (ChardevVCList *)i;
        visit_type_ChardevVC(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevRingbuf_fields(Visitor *m, ChardevRingbuf **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_size, "size", &err);
    if (!err && (*obj)->has_size) {
        visit_type_int(m, &(*obj)->size, "size", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevRingbuf(Visitor *m, ChardevRingbuf **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevRingbuf", name, sizeof(ChardevRingbuf), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevRingbuf_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevRingbufList(Visitor *m, ChardevRingbufList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevRingbufList *native_i = (ChardevRingbufList *)i;
        visit_type_ChardevRingbuf(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevDummy_fields(Visitor *m, ChardevDummy **obj, Error **errp)
{
    Error *err = NULL;
    error_propagate(errp, err);
}

void visit_type_ChardevDummy(Visitor *m, ChardevDummy **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevDummy", name, sizeof(ChardevDummy), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevDummy_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevDummyList(Visitor *m, ChardevDummyList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevDummyList *native_i = (ChardevDummyList *)i;
        visit_type_ChardevDummy(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ChardevBackendKind(Visitor *m, ChardevBackendKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, ChardevBackendKind_lookup, "ChardevBackendKind", name, errp);
}

void visit_type_ChardevBackend(Visitor *m, ChardevBackend **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevBackend", name, sizeof(ChardevBackend), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_ChardevBackendKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case CHARDEV_BACKEND_KIND_FILE:
            visit_type_ChardevFile(m, &(*obj)->file, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_SERIAL:
            visit_type_ChardevHostdev(m, &(*obj)->serial, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_PARALLEL:
            visit_type_ChardevHostdev(m, &(*obj)->parallel, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_PIPE:
            visit_type_ChardevHostdev(m, &(*obj)->pipe, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_SOCKET:
            visit_type_ChardevSocket(m, &(*obj)->socket, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_UDP:
            visit_type_ChardevUdp(m, &(*obj)->udp, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_PTY:
            visit_type_ChardevDummy(m, &(*obj)->pty, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_NULL:
            visit_type_ChardevDummy(m, &(*obj)->null, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_MUX:
            visit_type_ChardevMux(m, &(*obj)->mux, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_MSMOUSE:
            visit_type_ChardevDummy(m, &(*obj)->msmouse, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_BRAILLE:
            visit_type_ChardevDummy(m, &(*obj)->braille, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_TESTDEV:
            visit_type_ChardevDummy(m, &(*obj)->testdev, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_STDIO:
            visit_type_ChardevStdio(m, &(*obj)->stdio, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_CONSOLE:
            visit_type_ChardevDummy(m, &(*obj)->console, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_SPICEVMC:
            visit_type_ChardevSpiceChannel(m, &(*obj)->spicevmc, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_SPICEPORT:
            visit_type_ChardevSpicePort(m, &(*obj)->spiceport, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_VC:
            visit_type_ChardevVC(m, &(*obj)->vc, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_RINGBUF:
            visit_type_ChardevRingbuf(m, &(*obj)->ringbuf, "data", &err);
            break;
        case CHARDEV_BACKEND_KIND_MEMORY:
            visit_type_ChardevRingbuf(m, &(*obj)->memory, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ChardevBackendList(Visitor *m, ChardevBackendList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevBackendList *native_i = (ChardevBackendList *)i;
        visit_type_ChardevBackend(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_ChardevReturn_fields(Visitor *m, ChardevReturn **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_pty, "pty", &err);
    if (!err && (*obj)->has_pty) {
        visit_type_str(m, &(*obj)->pty, "pty", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ChardevReturn(Visitor *m, ChardevReturn **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ChardevReturn", name, sizeof(ChardevReturn), &err);
    if (!err) {
        if (*obj) {
            visit_type_ChardevReturn_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ChardevReturnList(Visitor *m, ChardevReturnList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ChardevReturnList *native_i = (ChardevReturnList *)i;
        visit_type_ChardevReturn(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TpmModelList(Visitor *m, TpmModelList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TpmModelList *native_i = (TpmModelList *)i;
        visit_type_TpmModel(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TpmModel(Visitor *m, TpmModel *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, TpmModel_lookup, "TpmModel", name, errp);
}

void visit_type_TpmTypeList(Visitor *m, TpmTypeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TpmTypeList *native_i = (TpmTypeList *)i;
        visit_type_TpmType(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TpmType(Visitor *m, TpmType *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, TpmType_lookup, "TpmType", name, errp);
}

static void visit_type_TPMPassthroughOptions_fields(Visitor *m, TPMPassthroughOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_path, "path", &err);
    if (!err && (*obj)->has_path) {
        visit_type_str(m, &(*obj)->path, "path", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cancel_path, "cancel-path", &err);
    if (!err && (*obj)->has_cancel_path) {
        visit_type_str(m, &(*obj)->cancel_path, "cancel-path", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_TPMPassthroughOptions(Visitor *m, TPMPassthroughOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "TPMPassthroughOptions", name, sizeof(TPMPassthroughOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_TPMPassthroughOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_TPMPassthroughOptionsList(Visitor *m, TPMPassthroughOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TPMPassthroughOptionsList *native_i = (TPMPassthroughOptionsList *)i;
        visit_type_TPMPassthroughOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TpmTypeOptionsKind(Visitor *m, TpmTypeOptionsKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, TpmTypeOptionsKind_lookup, "TpmTypeOptionsKind", name, errp);
}

void visit_type_TpmTypeOptions(Visitor *m, TpmTypeOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "TpmTypeOptions", name, sizeof(TpmTypeOptions), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_TpmTypeOptionsKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case TPM_TYPE_OPTIONS_KIND_PASSTHROUGH:
            visit_type_TPMPassthroughOptions(m, &(*obj)->passthrough, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_TpmTypeOptionsList(Visitor *m, TpmTypeOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TpmTypeOptionsList *native_i = (TpmTypeOptionsList *)i;
        visit_type_TpmTypeOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_TPMInfo_fields(Visitor *m, TPMInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_type_TpmModel(m, &(*obj)->model, "model", &err);
    if (err) {
        goto out;
    }
    visit_type_TpmTypeOptions(m, &(*obj)->options, "options", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_TPMInfo(Visitor *m, TPMInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "TPMInfo", name, sizeof(TPMInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_TPMInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_TPMInfoList(Visitor *m, TPMInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        TPMInfoList *native_i = (TPMInfoList *)i;
        visit_type_TPMInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_AcpiTableOptions_fields(Visitor *m, AcpiTableOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_sig, "sig", &err);
    if (!err && (*obj)->has_sig) {
        visit_type_str(m, &(*obj)->sig, "sig", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_rev, "rev", &err);
    if (!err && (*obj)->has_rev) {
        visit_type_uint8(m, &(*obj)->rev, "rev", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_oem_id, "oem_id", &err);
    if (!err && (*obj)->has_oem_id) {
        visit_type_str(m, &(*obj)->oem_id, "oem_id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_oem_table_id, "oem_table_id", &err);
    if (!err && (*obj)->has_oem_table_id) {
        visit_type_str(m, &(*obj)->oem_table_id, "oem_table_id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_oem_rev, "oem_rev", &err);
    if (!err && (*obj)->has_oem_rev) {
        visit_type_uint32(m, &(*obj)->oem_rev, "oem_rev", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_asl_compiler_id, "asl_compiler_id", &err);
    if (!err && (*obj)->has_asl_compiler_id) {
        visit_type_str(m, &(*obj)->asl_compiler_id, "asl_compiler_id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_asl_compiler_rev, "asl_compiler_rev", &err);
    if (!err && (*obj)->has_asl_compiler_rev) {
        visit_type_uint32(m, &(*obj)->asl_compiler_rev, "asl_compiler_rev", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_file, "file", &err);
    if (!err && (*obj)->has_file) {
        visit_type_str(m, &(*obj)->file, "file", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_data, "data", &err);
    if (!err && (*obj)->has_data) {
        visit_type_str(m, &(*obj)->data, "data", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_AcpiTableOptions(Visitor *m, AcpiTableOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "AcpiTableOptions", name, sizeof(AcpiTableOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_AcpiTableOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_AcpiTableOptionsList(Visitor *m, AcpiTableOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        AcpiTableOptionsList *native_i = (AcpiTableOptionsList *)i;
        visit_type_AcpiTableOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_CommandLineParameterTypeList(Visitor *m, CommandLineParameterTypeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        CommandLineParameterTypeList *native_i = (CommandLineParameterTypeList *)i;
        visit_type_CommandLineParameterType(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_CommandLineParameterType(Visitor *m, CommandLineParameterType *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, CommandLineParameterType_lookup, "CommandLineParameterType", name, errp);
}

static void visit_type_CommandLineParameterInfo_fields(Visitor *m, CommandLineParameterInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_CommandLineParameterType(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_help, "help", &err);
    if (!err && (*obj)->has_help) {
        visit_type_str(m, &(*obj)->help, "help", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_q_default, "default", &err);
    if (!err && (*obj)->has_q_default) {
        visit_type_str(m, &(*obj)->q_default, "default", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_CommandLineParameterInfo(Visitor *m, CommandLineParameterInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "CommandLineParameterInfo", name, sizeof(CommandLineParameterInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_CommandLineParameterInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_CommandLineParameterInfoList(Visitor *m, CommandLineParameterInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        CommandLineParameterInfoList *native_i = (CommandLineParameterInfoList *)i;
        visit_type_CommandLineParameterInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_CommandLineOptionInfo_fields(Visitor *m, CommandLineOptionInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->option, "option", &err);
    if (err) {
        goto out;
    }
    visit_type_CommandLineParameterInfoList(m, &(*obj)->parameters, "parameters", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_CommandLineOptionInfo(Visitor *m, CommandLineOptionInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "CommandLineOptionInfo", name, sizeof(CommandLineOptionInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_CommandLineOptionInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_CommandLineOptionInfoList(Visitor *m, CommandLineOptionInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        CommandLineOptionInfoList *native_i = (CommandLineOptionInfoList *)i;
        visit_type_CommandLineOptionInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_X86CPURegister32List(Visitor *m, X86CPURegister32List **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        X86CPURegister32List *native_i = (X86CPURegister32List *)i;
        visit_type_X86CPURegister32(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_X86CPURegister32(Visitor *m, X86CPURegister32 *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, X86CPURegister32_lookup, "X86CPURegister32", name, errp);
}

static void visit_type_X86CPUFeatureWordInfo_fields(Visitor *m, X86CPUFeatureWordInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_int(m, &(*obj)->cpuid_input_eax, "cpuid-input-eax", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cpuid_input_ecx, "cpuid-input-ecx", &err);
    if (!err && (*obj)->has_cpuid_input_ecx) {
        visit_type_int(m, &(*obj)->cpuid_input_ecx, "cpuid-input-ecx", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_X86CPURegister32(m, &(*obj)->cpuid_register, "cpuid-register", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->features, "features", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_X86CPUFeatureWordInfo(Visitor *m, X86CPUFeatureWordInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "X86CPUFeatureWordInfo", name, sizeof(X86CPUFeatureWordInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_X86CPUFeatureWordInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_X86CPUFeatureWordInfoList(Visitor *m, X86CPUFeatureWordInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        X86CPUFeatureWordInfoList *native_i = (X86CPUFeatureWordInfoList *)i;
        visit_type_X86CPUFeatureWordInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_RxStateList(Visitor *m, RxStateList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RxStateList *native_i = (RxStateList *)i;
        visit_type_RxState(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_RxState(Visitor *m, RxState *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, RxState_lookup, "RxState", name, errp);
}

static void visit_type_RxFilterInfo_fields(Visitor *m, RxFilterInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->promiscuous, "promiscuous", &err);
    if (err) {
        goto out;
    }
    visit_type_RxState(m, &(*obj)->multicast, "multicast", &err);
    if (err) {
        goto out;
    }
    visit_type_RxState(m, &(*obj)->unicast, "unicast", &err);
    if (err) {
        goto out;
    }
    visit_type_RxState(m, &(*obj)->vlan, "vlan", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->broadcast_allowed, "broadcast-allowed", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->multicast_overflow, "multicast-overflow", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->unicast_overflow, "unicast-overflow", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->main_mac, "main-mac", &err);
    if (err) {
        goto out;
    }
    visit_type_intList(m, &(*obj)->vlan_table, "vlan-table", &err);
    if (err) {
        goto out;
    }
    visit_type_strList(m, &(*obj)->unicast_table, "unicast-table", &err);
    if (err) {
        goto out;
    }
    visit_type_strList(m, &(*obj)->multicast_table, "multicast-table", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RxFilterInfo(Visitor *m, RxFilterInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RxFilterInfo", name, sizeof(RxFilterInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_RxFilterInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RxFilterInfoList(Visitor *m, RxFilterInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RxFilterInfoList *native_i = (RxFilterInfoList *)i;
        visit_type_RxFilterInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_InputButtonList(Visitor *m, InputButtonList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        InputButtonList *native_i = (InputButtonList *)i;
        visit_type_InputButton(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_InputButton(Visitor *m, InputButton *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, InputButton_lookup, "InputButton", name, errp);
}

void visit_type_InputAxisList(Visitor *m, InputAxisList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        InputAxisList *native_i = (InputAxisList *)i;
        visit_type_InputAxis(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_InputAxis(Visitor *m, InputAxis *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, InputAxis_lookup, "InputAxis", name, errp);
}

static void visit_type_InputKeyEvent_fields(Visitor *m, InputKeyEvent **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_KeyValue(m, &(*obj)->key, "key", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->down, "down", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_InputKeyEvent(Visitor *m, InputKeyEvent **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "InputKeyEvent", name, sizeof(InputKeyEvent), &err);
    if (!err) {
        if (*obj) {
            visit_type_InputKeyEvent_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_InputKeyEventList(Visitor *m, InputKeyEventList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        InputKeyEventList *native_i = (InputKeyEventList *)i;
        visit_type_InputKeyEvent(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_InputBtnEvent_fields(Visitor *m, InputBtnEvent **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_InputButton(m, &(*obj)->button, "button", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->down, "down", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_InputBtnEvent(Visitor *m, InputBtnEvent **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "InputBtnEvent", name, sizeof(InputBtnEvent), &err);
    if (!err) {
        if (*obj) {
            visit_type_InputBtnEvent_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_InputBtnEventList(Visitor *m, InputBtnEventList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        InputBtnEventList *native_i = (InputBtnEventList *)i;
        visit_type_InputBtnEvent(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_InputMoveEvent_fields(Visitor *m, InputMoveEvent **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_InputAxis(m, &(*obj)->axis, "axis", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->value, "value", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_InputMoveEvent(Visitor *m, InputMoveEvent **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "InputMoveEvent", name, sizeof(InputMoveEvent), &err);
    if (!err) {
        if (*obj) {
            visit_type_InputMoveEvent_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_InputMoveEventList(Visitor *m, InputMoveEventList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        InputMoveEventList *native_i = (InputMoveEventList *)i;
        visit_type_InputMoveEvent(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_InputEventKind(Visitor *m, InputEventKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, InputEventKind_lookup, "InputEventKind", name, errp);
}

void visit_type_InputEvent(Visitor *m, InputEvent **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "InputEvent", name, sizeof(InputEvent), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_InputEventKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case INPUT_EVENT_KIND_KEY:
            visit_type_InputKeyEvent(m, &(*obj)->key, "data", &err);
            break;
        case INPUT_EVENT_KIND_BTN:
            visit_type_InputBtnEvent(m, &(*obj)->btn, "data", &err);
            break;
        case INPUT_EVENT_KIND_REL:
            visit_type_InputMoveEvent(m, &(*obj)->rel, "data", &err);
            break;
        case INPUT_EVENT_KIND_ABS:
            visit_type_InputMoveEvent(m, &(*obj)->abs, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_InputEventList(Visitor *m, InputEventList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        InputEventList *native_i = (InputEventList *)i;
        visit_type_InputEvent(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NumaOptionsKind(Visitor *m, NumaOptionsKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, NumaOptionsKind_lookup, "NumaOptionsKind", name, errp);
}

void visit_type_NumaOptions(Visitor *m, NumaOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NumaOptions", name, sizeof(NumaOptions), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_NumaOptionsKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case NUMA_OPTIONS_KIND_NODE:
            visit_type_NumaNodeOptions(m, &(*obj)->node, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_NumaOptionsList(Visitor *m, NumaOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NumaOptionsList *native_i = (NumaOptionsList *)i;
        visit_type_NumaOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_NumaNodeOptions_fields(Visitor *m, NumaNodeOptions **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_nodeid, "nodeid", &err);
    if (!err && (*obj)->has_nodeid) {
        visit_type_uint16(m, &(*obj)->nodeid, "nodeid", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_cpus, "cpus", &err);
    if (!err && (*obj)->has_cpus) {
        visit_type_uint16List(m, &(*obj)->cpus, "cpus", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_mem, "mem", &err);
    if (!err && (*obj)->has_mem) {
        visit_type_size(m, &(*obj)->mem, "mem", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_memdev, "memdev", &err);
    if (!err && (*obj)->has_memdev) {
        visit_type_str(m, &(*obj)->memdev, "memdev", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_NumaNodeOptions(Visitor *m, NumaNodeOptions **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "NumaNodeOptions", name, sizeof(NumaNodeOptions), &err);
    if (!err) {
        if (*obj) {
            visit_type_NumaNodeOptions_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_NumaNodeOptionsList(Visitor *m, NumaNodeOptionsList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        NumaNodeOptionsList *native_i = (NumaNodeOptionsList *)i;
        visit_type_NumaNodeOptions(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_HostMemPolicyList(Visitor *m, HostMemPolicyList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        HostMemPolicyList *native_i = (HostMemPolicyList *)i;
        visit_type_HostMemPolicy(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_HostMemPolicy(Visitor *m, HostMemPolicy *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, HostMemPolicy_lookup, "HostMemPolicy", name, errp);
}

static void visit_type_Memdev_fields(Visitor *m, Memdev **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_size(m, &(*obj)->size, "size", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->merge, "merge", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->dump, "dump", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->prealloc, "prealloc", &err);
    if (err) {
        goto out;
    }
    visit_type_uint16List(m, &(*obj)->host_nodes, "host-nodes", &err);
    if (err) {
        goto out;
    }
    visit_type_HostMemPolicy(m, &(*obj)->policy, "policy", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_Memdev(Visitor *m, Memdev **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "Memdev", name, sizeof(Memdev), &err);
    if (!err) {
        if (*obj) {
            visit_type_Memdev_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_MemdevList(Visitor *m, MemdevList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MemdevList *native_i = (MemdevList *)i;
        visit_type_Memdev(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_PCDIMMDeviceInfo_fields(Visitor *m, PCDIMMDeviceInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_id, "id", &err);
    if (!err && (*obj)->has_id) {
        visit_type_str(m, &(*obj)->id, "id", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->addr, "addr", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->size, "size", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->slot, "slot", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->node, "node", &err);
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->memdev, "memdev", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->hotplugged, "hotplugged", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->hotpluggable, "hotpluggable", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_PCDIMMDeviceInfo(Visitor *m, PCDIMMDeviceInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "PCDIMMDeviceInfo", name, sizeof(PCDIMMDeviceInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_PCDIMMDeviceInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_PCDIMMDeviceInfoList(Visitor *m, PCDIMMDeviceInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        PCDIMMDeviceInfoList *native_i = (PCDIMMDeviceInfoList *)i;
        visit_type_PCDIMMDeviceInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MemoryDeviceInfoKind(Visitor *m, MemoryDeviceInfoKind *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, MemoryDeviceInfoKind_lookup, "MemoryDeviceInfoKind", name, errp);
}

void visit_type_MemoryDeviceInfo(Visitor *m, MemoryDeviceInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "MemoryDeviceInfo", name, sizeof(MemoryDeviceInfo), &err);
    if (err) {
        goto out;
    }
    if (*obj) {
        visit_type_MemoryDeviceInfoKind(m, &(*obj)->kind, "type", &err);
        if (err) {
            goto out_obj;
        }
        if (!visit_start_union(m, !!(*obj)->data, &err) || err) {
            goto out_obj;
        }
        switch ((*obj)->kind) {
        case MEMORY_DEVICE_INFO_KIND_DIMM:
            visit_type_PCDIMMDeviceInfo(m, &(*obj)->dimm, "data", &err);
            break;
        default:
            abort();
        }
out_obj:
        error_propagate(errp, err);
        err = NULL;
        visit_end_union(m, !!(*obj)->data, &err);
        error_propagate(errp, err);
        err = NULL;
    }
    visit_end_struct(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_MemoryDeviceInfoList(Visitor *m, MemoryDeviceInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        MemoryDeviceInfoList *native_i = (MemoryDeviceInfoList *)i;
        visit_type_MemoryDeviceInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ACPISlotTypeList(Visitor *m, ACPISlotTypeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ACPISlotTypeList *native_i = (ACPISlotTypeList *)i;
        visit_type_ACPISlotType(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_ACPISlotType(Visitor *m, ACPISlotType *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, ACPISlotType_lookup, "ACPISlotType", name, errp);
}

static void visit_type_ACPIOSTInfo_fields(Visitor *m, ACPIOSTInfo **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_device, "device", &err);
    if (!err && (*obj)->has_device) {
        visit_type_str(m, &(*obj)->device, "device", &err);
    }
    if (err) {
        goto out;
    }
    visit_type_str(m, &(*obj)->slot, "slot", &err);
    if (err) {
        goto out;
    }
    visit_type_ACPISlotType(m, &(*obj)->slot_type, "slot-type", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->source, "source", &err);
    if (err) {
        goto out;
    }
    visit_type_int(m, &(*obj)->status, "status", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_ACPIOSTInfo(Visitor *m, ACPIOSTInfo **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "ACPIOSTInfo", name, sizeof(ACPIOSTInfo), &err);
    if (!err) {
        if (*obj) {
            visit_type_ACPIOSTInfo_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_ACPIOSTInfoList(Visitor *m, ACPIOSTInfoList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        ACPIOSTInfoList *native_i = (ACPIOSTInfoList *)i;
        visit_type_ACPIOSTInfo(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_WatchdogExpirationActionList(Visitor *m, WatchdogExpirationActionList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        WatchdogExpirationActionList *native_i = (WatchdogExpirationActionList *)i;
        visit_type_WatchdogExpirationAction(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_WatchdogExpirationAction(Visitor *m, WatchdogExpirationAction *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, WatchdogExpirationAction_lookup, "WatchdogExpirationAction", name, errp);
}

void visit_type_IoOperationTypeList(Visitor *m, IoOperationTypeList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        IoOperationTypeList *native_i = (IoOperationTypeList *)i;
        visit_type_IoOperationType(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_IoOperationType(Visitor *m, IoOperationType *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, IoOperationType_lookup, "IoOperationType", name, errp);
}

void visit_type_GuestPanicActionList(Visitor *m, GuestPanicActionList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        GuestPanicActionList *native_i = (GuestPanicActionList *)i;
        visit_type_GuestPanicAction(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_GuestPanicAction(Visitor *m, GuestPanicAction *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, GuestPanicAction_lookup, "GuestPanicAction", name, errp);
}

static void visit_type_RockerSwitch_fields(Visitor *m, RockerSwitch **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_uint64(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_type_uint32(m, &(*obj)->ports, "ports", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RockerSwitch(Visitor *m, RockerSwitch **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RockerSwitch", name, sizeof(RockerSwitch), &err);
    if (!err) {
        if (*obj) {
            visit_type_RockerSwitch_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RockerSwitchList(Visitor *m, RockerSwitchList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerSwitchList *native_i = (RockerSwitchList *)i;
        visit_type_RockerSwitch(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_RockerPortDuplexList(Visitor *m, RockerPortDuplexList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerPortDuplexList *native_i = (RockerPortDuplexList *)i;
        visit_type_RockerPortDuplex(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_RockerPortDuplex(Visitor *m, RockerPortDuplex *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, RockerPortDuplex_lookup, "RockerPortDuplex", name, errp);
}

void visit_type_RockerPortAutonegList(Visitor *m, RockerPortAutonegList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerPortAutonegList *native_i = (RockerPortAutonegList *)i;
        visit_type_RockerPortAutoneg(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

void visit_type_RockerPortAutoneg(Visitor *m, RockerPortAutoneg *obj, const char *name, Error **errp)
{
    visit_type_enum(m, (int *)obj, RockerPortAutoneg_lookup, "RockerPortAutoneg", name, errp);
}

static void visit_type_RockerPort_fields(Visitor *m, RockerPort **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_str(m, &(*obj)->name, "name", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->enabled, "enabled", &err);
    if (err) {
        goto out;
    }
    visit_type_bool(m, &(*obj)->link_up, "link-up", &err);
    if (err) {
        goto out;
    }
    visit_type_uint32(m, &(*obj)->speed, "speed", &err);
    if (err) {
        goto out;
    }
    visit_type_RockerPortDuplex(m, &(*obj)->duplex, "duplex", &err);
    if (err) {
        goto out;
    }
    visit_type_RockerPortAutoneg(m, &(*obj)->autoneg, "autoneg", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RockerPort(Visitor *m, RockerPort **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RockerPort", name, sizeof(RockerPort), &err);
    if (!err) {
        if (*obj) {
            visit_type_RockerPort_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RockerPortList(Visitor *m, RockerPortList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerPortList *native_i = (RockerPortList *)i;
        visit_type_RockerPort(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_RockerOfDpaFlowKey_fields(Visitor *m, RockerOfDpaFlowKey **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_uint32(m, &(*obj)->priority, "priority", &err);
    if (err) {
        goto out;
    }
    visit_type_uint32(m, &(*obj)->tbl_id, "tbl-id", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_in_pport, "in-pport", &err);
    if (!err && (*obj)->has_in_pport) {
        visit_type_uint32(m, &(*obj)->in_pport, "in-pport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_tunnel_id, "tunnel-id", &err);
    if (!err && (*obj)->has_tunnel_id) {
        visit_type_uint32(m, &(*obj)->tunnel_id, "tunnel-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vlan_id, "vlan-id", &err);
    if (!err && (*obj)->has_vlan_id) {
        visit_type_uint16(m, &(*obj)->vlan_id, "vlan-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_eth_type, "eth-type", &err);
    if (!err && (*obj)->has_eth_type) {
        visit_type_uint16(m, &(*obj)->eth_type, "eth-type", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_eth_src, "eth-src", &err);
    if (!err && (*obj)->has_eth_src) {
        visit_type_str(m, &(*obj)->eth_src, "eth-src", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_eth_dst, "eth-dst", &err);
    if (!err && (*obj)->has_eth_dst) {
        visit_type_str(m, &(*obj)->eth_dst, "eth-dst", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ip_proto, "ip-proto", &err);
    if (!err && (*obj)->has_ip_proto) {
        visit_type_uint8(m, &(*obj)->ip_proto, "ip-proto", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ip_tos, "ip-tos", &err);
    if (!err && (*obj)->has_ip_tos) {
        visit_type_uint8(m, &(*obj)->ip_tos, "ip-tos", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ip_dst, "ip-dst", &err);
    if (!err && (*obj)->has_ip_dst) {
        visit_type_str(m, &(*obj)->ip_dst, "ip-dst", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlowKey(Visitor *m, RockerOfDpaFlowKey **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RockerOfDpaFlowKey", name, sizeof(RockerOfDpaFlowKey), &err);
    if (!err) {
        if (*obj) {
            visit_type_RockerOfDpaFlowKey_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlowKeyList(Visitor *m, RockerOfDpaFlowKeyList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerOfDpaFlowKeyList *native_i = (RockerOfDpaFlowKeyList *)i;
        visit_type_RockerOfDpaFlowKey(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_RockerOfDpaFlowMask_fields(Visitor *m, RockerOfDpaFlowMask **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_in_pport, "in-pport", &err);
    if (!err && (*obj)->has_in_pport) {
        visit_type_uint32(m, &(*obj)->in_pport, "in-pport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_tunnel_id, "tunnel-id", &err);
    if (!err && (*obj)->has_tunnel_id) {
        visit_type_uint32(m, &(*obj)->tunnel_id, "tunnel-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vlan_id, "vlan-id", &err);
    if (!err && (*obj)->has_vlan_id) {
        visit_type_uint16(m, &(*obj)->vlan_id, "vlan-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_eth_src, "eth-src", &err);
    if (!err && (*obj)->has_eth_src) {
        visit_type_str(m, &(*obj)->eth_src, "eth-src", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_eth_dst, "eth-dst", &err);
    if (!err && (*obj)->has_eth_dst) {
        visit_type_str(m, &(*obj)->eth_dst, "eth-dst", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ip_proto, "ip-proto", &err);
    if (!err && (*obj)->has_ip_proto) {
        visit_type_uint8(m, &(*obj)->ip_proto, "ip-proto", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ip_tos, "ip-tos", &err);
    if (!err && (*obj)->has_ip_tos) {
        visit_type_uint8(m, &(*obj)->ip_tos, "ip-tos", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlowMask(Visitor *m, RockerOfDpaFlowMask **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RockerOfDpaFlowMask", name, sizeof(RockerOfDpaFlowMask), &err);
    if (!err) {
        if (*obj) {
            visit_type_RockerOfDpaFlowMask_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlowMaskList(Visitor *m, RockerOfDpaFlowMaskList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerOfDpaFlowMaskList *native_i = (RockerOfDpaFlowMaskList *)i;
        visit_type_RockerOfDpaFlowMask(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_RockerOfDpaFlowAction_fields(Visitor *m, RockerOfDpaFlowAction **obj, Error **errp)
{
    Error *err = NULL;
    visit_optional(m, &(*obj)->has_goto_tbl, "goto-tbl", &err);
    if (!err && (*obj)->has_goto_tbl) {
        visit_type_uint32(m, &(*obj)->goto_tbl, "goto-tbl", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_group_id, "group-id", &err);
    if (!err && (*obj)->has_group_id) {
        visit_type_uint32(m, &(*obj)->group_id, "group-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_tunnel_lport, "tunnel-lport", &err);
    if (!err && (*obj)->has_tunnel_lport) {
        visit_type_uint32(m, &(*obj)->tunnel_lport, "tunnel-lport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vlan_id, "vlan-id", &err);
    if (!err && (*obj)->has_vlan_id) {
        visit_type_uint16(m, &(*obj)->vlan_id, "vlan-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_new_vlan_id, "new-vlan-id", &err);
    if (!err && (*obj)->has_new_vlan_id) {
        visit_type_uint16(m, &(*obj)->new_vlan_id, "new-vlan-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_out_pport, "out-pport", &err);
    if (!err && (*obj)->has_out_pport) {
        visit_type_uint32(m, &(*obj)->out_pport, "out-pport", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlowAction(Visitor *m, RockerOfDpaFlowAction **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RockerOfDpaFlowAction", name, sizeof(RockerOfDpaFlowAction), &err);
    if (!err) {
        if (*obj) {
            visit_type_RockerOfDpaFlowAction_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlowActionList(Visitor *m, RockerOfDpaFlowActionList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerOfDpaFlowActionList *native_i = (RockerOfDpaFlowActionList *)i;
        visit_type_RockerOfDpaFlowAction(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_RockerOfDpaFlow_fields(Visitor *m, RockerOfDpaFlow **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_uint64(m, &(*obj)->cookie, "cookie", &err);
    if (err) {
        goto out;
    }
    visit_type_uint64(m, &(*obj)->hits, "hits", &err);
    if (err) {
        goto out;
    }
    visit_type_RockerOfDpaFlowKey(m, &(*obj)->key, "key", &err);
    if (err) {
        goto out;
    }
    visit_type_RockerOfDpaFlowMask(m, &(*obj)->mask, "mask", &err);
    if (err) {
        goto out;
    }
    visit_type_RockerOfDpaFlowAction(m, &(*obj)->action, "action", &err);
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlow(Visitor *m, RockerOfDpaFlow **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RockerOfDpaFlow", name, sizeof(RockerOfDpaFlow), &err);
    if (!err) {
        if (*obj) {
            visit_type_RockerOfDpaFlow_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaFlowList(Visitor *m, RockerOfDpaFlowList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerOfDpaFlowList *native_i = (RockerOfDpaFlowList *)i;
        visit_type_RockerOfDpaFlow(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}

static void visit_type_RockerOfDpaGroup_fields(Visitor *m, RockerOfDpaGroup **obj, Error **errp)
{
    Error *err = NULL;
    visit_type_uint32(m, &(*obj)->id, "id", &err);
    if (err) {
        goto out;
    }
    visit_type_uint8(m, &(*obj)->type, "type", &err);
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_vlan_id, "vlan-id", &err);
    if (!err && (*obj)->has_vlan_id) {
        visit_type_uint16(m, &(*obj)->vlan_id, "vlan-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pport, "pport", &err);
    if (!err && (*obj)->has_pport) {
        visit_type_uint32(m, &(*obj)->pport, "pport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_index, "index", &err);
    if (!err && (*obj)->has_index) {
        visit_type_uint32(m, &(*obj)->index, "index", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_out_pport, "out-pport", &err);
    if (!err && (*obj)->has_out_pport) {
        visit_type_uint32(m, &(*obj)->out_pport, "out-pport", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_group_id, "group-id", &err);
    if (!err && (*obj)->has_group_id) {
        visit_type_uint32(m, &(*obj)->group_id, "group-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_set_vlan_id, "set-vlan-id", &err);
    if (!err && (*obj)->has_set_vlan_id) {
        visit_type_uint16(m, &(*obj)->set_vlan_id, "set-vlan-id", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_pop_vlan, "pop-vlan", &err);
    if (!err && (*obj)->has_pop_vlan) {
        visit_type_uint8(m, &(*obj)->pop_vlan, "pop-vlan", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_group_ids, "group-ids", &err);
    if (!err && (*obj)->has_group_ids) {
        visit_type_uint32List(m, &(*obj)->group_ids, "group-ids", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_set_eth_src, "set-eth-src", &err);
    if (!err && (*obj)->has_set_eth_src) {
        visit_type_str(m, &(*obj)->set_eth_src, "set-eth-src", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_set_eth_dst, "set-eth-dst", &err);
    if (!err && (*obj)->has_set_eth_dst) {
        visit_type_str(m, &(*obj)->set_eth_dst, "set-eth-dst", &err);
    }
    if (err) {
        goto out;
    }
    visit_optional(m, &(*obj)->has_ttl_check, "ttl-check", &err);
    if (!err && (*obj)->has_ttl_check) {
        visit_type_uint8(m, &(*obj)->ttl_check, "ttl-check", &err);
    }
    if (err) {
        goto out;
    }

out:
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaGroup(Visitor *m, RockerOfDpaGroup **obj, const char *name, Error **errp)
{
    Error *err = NULL;

    visit_start_struct(m, (void **)obj, "RockerOfDpaGroup", name, sizeof(RockerOfDpaGroup), &err);
    if (!err) {
        if (*obj) {
            visit_type_RockerOfDpaGroup_fields(m, obj, errp);
        }
        visit_end_struct(m, &err);
    }
    error_propagate(errp, err);
}

void visit_type_RockerOfDpaGroupList(Visitor *m, RockerOfDpaGroupList **obj, const char *name, Error **errp)
{
    Error *err = NULL;
    GenericList *i, **prev;

    visit_start_list(m, name, &err);
    if (err) {
        goto out;
    }

    for (prev = (GenericList **)obj;
         !err && (i = visit_next_list(m, prev, &err)) != NULL;
         prev = &i) {
        RockerOfDpaGroupList *native_i = (RockerOfDpaGroupList *)i;
        visit_type_RockerOfDpaGroup(m, &native_i->value, NULL, &err);
    }

    error_propagate(errp, err);
    err = NULL;
    visit_end_list(m, &err);
out:
    error_propagate(errp, err);
}