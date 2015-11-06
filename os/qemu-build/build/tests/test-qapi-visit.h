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

#ifndef TEST_QAPI_VISIT_H
#define TEST_QAPI_VISIT_H

#include "qapi/visitor.h"
#include "test-qapi-types.h"


#ifndef QAPI_VISIT_BUILTIN_VISITOR_DECL_H
#define QAPI_VISIT_BUILTIN_VISITOR_DECL_H

void visit_type_int32List(Visitor *m, int32List **obj, const char *name, Error **errp);
void visit_type_int16List(Visitor *m, int16List **obj, const char *name, Error **errp);
void visit_type_intList(Visitor *m, intList **obj, const char *name, Error **errp);
void visit_type_uint8List(Visitor *m, uint8List **obj, const char *name, Error **errp);
void visit_type_numberList(Visitor *m, numberList **obj, const char *name, Error **errp);
void visit_type_int8List(Visitor *m, int8List **obj, const char *name, Error **errp);
void visit_type_sizeList(Visitor *m, sizeList **obj, const char *name, Error **errp);
void visit_type_uint64List(Visitor *m, uint64List **obj, const char *name, Error **errp);
void visit_type_uint16List(Visitor *m, uint16List **obj, const char *name, Error **errp);
void visit_type_boolList(Visitor *m, boolList **obj, const char *name, Error **errp);
void visit_type_strList(Visitor *m, strList **obj, const char *name, Error **errp);
void visit_type_int64List(Visitor *m, int64List **obj, const char *name, Error **errp);
void visit_type_uint32List(Visitor *m, uint32List **obj, const char *name, Error **errp);

#endif /* QAPI_VISIT_BUILTIN_VISITOR_DECL_H */


void visit_type_EnumOne(Visitor *m, EnumOne *obj, const char *name, Error **errp);
void visit_type_EnumOneList(Visitor *m, EnumOneList **obj, const char *name, Error **errp);

void visit_type_NestedEnumsOne(Visitor *m, NestedEnumsOne **obj, const char *name, Error **errp);
void visit_type_NestedEnumsOneList(Visitor *m, NestedEnumsOneList **obj, const char *name, Error **errp);

void visit_type_UserDefZero(Visitor *m, UserDefZero **obj, const char *name, Error **errp);
void visit_type_UserDefZeroList(Visitor *m, UserDefZeroList **obj, const char *name, Error **errp);

void visit_type_UserDefOne(Visitor *m, UserDefOne **obj, const char *name, Error **errp);
void visit_type_UserDefOneList(Visitor *m, UserDefOneList **obj, const char *name, Error **errp);

void visit_type_UserDefTwoDictDict(Visitor *m, UserDefTwoDictDict **obj, const char *name, Error **errp);
void visit_type_UserDefTwoDictDictList(Visitor *m, UserDefTwoDictDictList **obj, const char *name, Error **errp);

void visit_type_UserDefTwoDict(Visitor *m, UserDefTwoDict **obj, const char *name, Error **errp);
void visit_type_UserDefTwoDictList(Visitor *m, UserDefTwoDictList **obj, const char *name, Error **errp);

void visit_type_UserDefTwo(Visitor *m, UserDefTwo **obj, const char *name, Error **errp);
void visit_type_UserDefTwoList(Visitor *m, UserDefTwoList **obj, const char *name, Error **errp);

void visit_type_UserDefA(Visitor *m, UserDefA **obj, const char *name, Error **errp);
void visit_type_UserDefAList(Visitor *m, UserDefAList **obj, const char *name, Error **errp);

void visit_type_UserDefB(Visitor *m, UserDefB **obj, const char *name, Error **errp);
void visit_type_UserDefBList(Visitor *m, UserDefBList **obj, const char *name, Error **errp);

void visit_type_UserDefC(Visitor *m, UserDefC **obj, const char *name, Error **errp);
void visit_type_UserDefCList(Visitor *m, UserDefCList **obj, const char *name, Error **errp);

void visit_type_UserDefUnionBase(Visitor *m, UserDefUnionBase **obj, const char *name, Error **errp);
void visit_type_UserDefUnionBaseList(Visitor *m, UserDefUnionBaseList **obj, const char *name, Error **errp);

void visit_type_UserDefFlatUnion(Visitor *m, UserDefFlatUnion **obj, const char *name, Error **errp);
void visit_type_UserDefFlatUnionList(Visitor *m, UserDefFlatUnionList **obj, const char *name, Error **errp);

void visit_type_UserDefFlatUnion2(Visitor *m, UserDefFlatUnion2 **obj, const char *name, Error **errp);
void visit_type_UserDefFlatUnion2List(Visitor *m, UserDefFlatUnion2List **obj, const char *name, Error **errp);

void visit_type_UserDefAlternateKind(Visitor *m, UserDefAlternateKind *obj, const char *name, Error **errp);

void visit_type_UserDefAlternate(Visitor *m, UserDefAlternate **obj, const char *name, Error **errp);
void visit_type_UserDefAlternateList(Visitor *m, UserDefAlternateList **obj, const char *name, Error **errp);

void visit_type_UserDefNativeListUnionKind(Visitor *m, UserDefNativeListUnionKind *obj, const char *name, Error **errp);

void visit_type_UserDefNativeListUnion(Visitor *m, UserDefNativeListUnion **obj, const char *name, Error **errp);
void visit_type_UserDefNativeListUnionList(Visitor *m, UserDefNativeListUnionList **obj, const char *name, Error **errp);

void visit_type_UserDefOptions(Visitor *m, UserDefOptions **obj, const char *name, Error **errp);
void visit_type_UserDefOptionsList(Visitor *m, UserDefOptionsList **obj, const char *name, Error **errp);

void visit_type_EventStructOne(Visitor *m, EventStructOne **obj, const char *name, Error **errp);
void visit_type_EventStructOneList(Visitor *m, EventStructOneList **obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Enum(Visitor *m, __org_qemu_x_Enum *obj, const char *name, Error **errp);
void visit_type___org_qemu_x_EnumList(Visitor *m, __org_qemu_x_EnumList **obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Base(Visitor *m, __org_qemu_x_Base **obj, const char *name, Error **errp);
void visit_type___org_qemu_x_BaseList(Visitor *m, __org_qemu_x_BaseList **obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Struct(Visitor *m, __org_qemu_x_Struct **obj, const char *name, Error **errp);
void visit_type___org_qemu_x_StructList(Visitor *m, __org_qemu_x_StructList **obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Union1Kind(Visitor *m, __org_qemu_x_Union1Kind *obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Union1(Visitor *m, __org_qemu_x_Union1 **obj, const char *name, Error **errp);
void visit_type___org_qemu_x_Union1List(Visitor *m, __org_qemu_x_Union1List **obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Struct2(Visitor *m, __org_qemu_x_Struct2 **obj, const char *name, Error **errp);
void visit_type___org_qemu_x_Struct2List(Visitor *m, __org_qemu_x_Struct2List **obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Union2(Visitor *m, __org_qemu_x_Union2 **obj, const char *name, Error **errp);
void visit_type___org_qemu_x_Union2List(Visitor *m, __org_qemu_x_Union2List **obj, const char *name, Error **errp);

void visit_type___org_qemu_x_AltKind(Visitor *m, __org_qemu_x_AltKind *obj, const char *name, Error **errp);

void visit_type___org_qemu_x_Alt(Visitor *m, __org_qemu_x_Alt **obj, const char *name, Error **errp);
void visit_type___org_qemu_x_AltList(Visitor *m, __org_qemu_x_AltList **obj, const char *name, Error **errp);

#endif
