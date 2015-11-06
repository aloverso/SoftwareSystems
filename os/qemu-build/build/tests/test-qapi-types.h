/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI types
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

#ifndef TEST_QAPI_TYPES_H
#define TEST_QAPI_TYPES_H

#include <stdbool.h>
#include <stdint.h>


#ifndef QAPI_TYPES_BUILTIN_STRUCT_DECL_H
#define QAPI_TYPES_BUILTIN_STRUCT_DECL_H


typedef struct int32List
{
    union {
        int32_t value;
        uint64_t padding;
    };
    struct int32List *next;
} int32List;

typedef struct int16List
{
    union {
        int16_t value;
        uint64_t padding;
    };
    struct int16List *next;
} int16List;

typedef struct intList
{
    union {
        int64_t value;
        uint64_t padding;
    };
    struct intList *next;
} intList;

typedef struct uint8List
{
    union {
        uint8_t value;
        uint64_t padding;
    };
    struct uint8List *next;
} uint8List;

typedef struct numberList
{
    union {
        double value;
        uint64_t padding;
    };
    struct numberList *next;
} numberList;

typedef struct int8List
{
    union {
        int8_t value;
        uint64_t padding;
    };
    struct int8List *next;
} int8List;

typedef struct sizeList
{
    union {
        uint64_t value;
        uint64_t padding;
    };
    struct sizeList *next;
} sizeList;

typedef struct uint64List
{
    union {
        uint64_t value;
        uint64_t padding;
    };
    struct uint64List *next;
} uint64List;

typedef struct uint16List
{
    union {
        uint16_t value;
        uint64_t padding;
    };
    struct uint16List *next;
} uint16List;

typedef struct boolList
{
    union {
        bool value;
        uint64_t padding;
    };
    struct boolList *next;
} boolList;

typedef struct strList
{
    union {
        char *value;
        uint64_t padding;
    };
    struct strList *next;
} strList;

typedef struct int64List
{
    union {
        int64_t value;
        uint64_t padding;
    };
    struct int64List *next;
} int64List;

typedef struct uint32List
{
    union {
        uint32_t value;
        uint64_t padding;
    };
    struct uint32List *next;
} uint32List;

#endif /* QAPI_TYPES_BUILTIN_STRUCT_DECL_H */


extern const char * const EnumOne_lookup[];
typedef enum EnumOne
{
    ENUM_ONE_VALUE1 = 0,
    ENUM_ONE_VALUE2 = 1,
    ENUM_ONE_VALUE3 = 2,
    ENUM_ONE_MAX = 3,
} EnumOne;

typedef struct EnumOneList
{
    union {
        EnumOne value;
        uint64_t padding;
    };
    struct EnumOneList *next;
} EnumOneList;


typedef struct NestedEnumsOne NestedEnumsOne;

typedef struct NestedEnumsOneList
{
    union {
        NestedEnumsOne *value;
        uint64_t padding;
    };
    struct NestedEnumsOneList *next;
} NestedEnumsOneList;


typedef struct UserDefZero UserDefZero;

typedef struct UserDefZeroList
{
    union {
        UserDefZero *value;
        uint64_t padding;
    };
    struct UserDefZeroList *next;
} UserDefZeroList;


typedef struct UserDefOne UserDefOne;

typedef struct UserDefOneList
{
    union {
        UserDefOne *value;
        uint64_t padding;
    };
    struct UserDefOneList *next;
} UserDefOneList;


typedef struct UserDefTwoDictDict UserDefTwoDictDict;

typedef struct UserDefTwoDictDictList
{
    union {
        UserDefTwoDictDict *value;
        uint64_t padding;
    };
    struct UserDefTwoDictDictList *next;
} UserDefTwoDictDictList;


typedef struct UserDefTwoDict UserDefTwoDict;

typedef struct UserDefTwoDictList
{
    union {
        UserDefTwoDict *value;
        uint64_t padding;
    };
    struct UserDefTwoDictList *next;
} UserDefTwoDictList;


typedef struct UserDefTwo UserDefTwo;

typedef struct UserDefTwoList
{
    union {
        UserDefTwo *value;
        uint64_t padding;
    };
    struct UserDefTwoList *next;
} UserDefTwoList;


typedef struct UserDefA UserDefA;

typedef struct UserDefAList
{
    union {
        UserDefA *value;
        uint64_t padding;
    };
    struct UserDefAList *next;
} UserDefAList;


typedef struct UserDefB UserDefB;

typedef struct UserDefBList
{
    union {
        UserDefB *value;
        uint64_t padding;
    };
    struct UserDefBList *next;
} UserDefBList;


typedef struct UserDefC UserDefC;

typedef struct UserDefCList
{
    union {
        UserDefC *value;
        uint64_t padding;
    };
    struct UserDefCList *next;
} UserDefCList;


typedef struct UserDefUnionBase UserDefUnionBase;

typedef struct UserDefUnionBaseList
{
    union {
        UserDefUnionBase *value;
        uint64_t padding;
    };
    struct UserDefUnionBaseList *next;
} UserDefUnionBaseList;


typedef struct UserDefFlatUnion UserDefFlatUnion;

typedef struct UserDefFlatUnionList
{
    union {
        UserDefFlatUnion *value;
        uint64_t padding;
    };
    struct UserDefFlatUnionList *next;
} UserDefFlatUnionList;



typedef struct UserDefFlatUnion2 UserDefFlatUnion2;

typedef struct UserDefFlatUnion2List
{
    union {
        UserDefFlatUnion2 *value;
        uint64_t padding;
    };
    struct UserDefFlatUnion2List *next;
} UserDefFlatUnion2List;



typedef struct UserDefAlternate UserDefAlternate;

typedef struct UserDefAlternateList
{
    union {
        UserDefAlternate *value;
        uint64_t padding;
    };
    struct UserDefAlternateList *next;
} UserDefAlternateList;

extern const char * const UserDefAlternateKind_lookup[];
typedef enum UserDefAlternateKind
{
    USER_DEF_ALTERNATE_KIND_UDA = 0,
    USER_DEF_ALTERNATE_KIND_S = 1,
    USER_DEF_ALTERNATE_KIND_I = 2,
    USER_DEF_ALTERNATE_KIND_MAX = 3,
} UserDefAlternateKind;


typedef struct UserDefNativeListUnion UserDefNativeListUnion;

typedef struct UserDefNativeListUnionList
{
    union {
        UserDefNativeListUnion *value;
        uint64_t padding;
    };
    struct UserDefNativeListUnionList *next;
} UserDefNativeListUnionList;

extern const char * const UserDefNativeListUnionKind_lookup[];
typedef enum UserDefNativeListUnionKind
{
    USER_DEF_NATIVE_LIST_UNION_KIND_INTEGER = 0,
    USER_DEF_NATIVE_LIST_UNION_KIND_S8 = 1,
    USER_DEF_NATIVE_LIST_UNION_KIND_S16 = 2,
    USER_DEF_NATIVE_LIST_UNION_KIND_S32 = 3,
    USER_DEF_NATIVE_LIST_UNION_KIND_S64 = 4,
    USER_DEF_NATIVE_LIST_UNION_KIND_U8 = 5,
    USER_DEF_NATIVE_LIST_UNION_KIND_U16 = 6,
    USER_DEF_NATIVE_LIST_UNION_KIND_U32 = 7,
    USER_DEF_NATIVE_LIST_UNION_KIND_U64 = 8,
    USER_DEF_NATIVE_LIST_UNION_KIND_NUMBER = 9,
    USER_DEF_NATIVE_LIST_UNION_KIND_BOOLEAN = 10,
    USER_DEF_NATIVE_LIST_UNION_KIND_STRING = 11,
    USER_DEF_NATIVE_LIST_UNION_KIND_SIZES = 12,
    USER_DEF_NATIVE_LIST_UNION_KIND_MAX = 13,
} UserDefNativeListUnionKind;


typedef struct UserDefOptions UserDefOptions;

typedef struct UserDefOptionsList
{
    union {
        UserDefOptions *value;
        uint64_t padding;
    };
    struct UserDefOptionsList *next;
} UserDefOptionsList;


typedef struct EventStructOne EventStructOne;

typedef struct EventStructOneList
{
    union {
        EventStructOne *value;
        uint64_t padding;
    };
    struct EventStructOneList *next;
} EventStructOneList;

extern const char * const __org_qemu_x_Enum_lookup[];
typedef enum __org_qemu_x_Enum
{
    ORG_QEMU_X_ENUM___ORG_QEMU_X_VALUE = 0,
    ORG_QEMU_X_ENUM_MAX = 1,
} __org_qemu_x_Enum;

typedef struct __org_qemu_x_EnumList
{
    union {
        __org_qemu_x_Enum value;
        uint64_t padding;
    };
    struct __org_qemu_x_EnumList *next;
} __org_qemu_x_EnumList;


typedef struct __org_qemu_x_Base __org_qemu_x_Base;

typedef struct __org_qemu_x_BaseList
{
    union {
        __org_qemu_x_Base *value;
        uint64_t padding;
    };
    struct __org_qemu_x_BaseList *next;
} __org_qemu_x_BaseList;


typedef struct __org_qemu_x_Struct __org_qemu_x_Struct;

typedef struct __org_qemu_x_StructList
{
    union {
        __org_qemu_x_Struct *value;
        uint64_t padding;
    };
    struct __org_qemu_x_StructList *next;
} __org_qemu_x_StructList;


typedef struct __org_qemu_x_Union1 __org_qemu_x_Union1;

typedef struct __org_qemu_x_Union1List
{
    union {
        __org_qemu_x_Union1 *value;
        uint64_t padding;
    };
    struct __org_qemu_x_Union1List *next;
} __org_qemu_x_Union1List;

extern const char * const __org_qemu_x_Union1Kind_lookup[];
typedef enum __org_qemu_x_Union1Kind
{
    ORG_QEMU_X_UNION1_KIND___ORG_QEMU_X_BRANCH = 0,
    ORG_QEMU_X_UNION1_KIND_MAX = 1,
} __org_qemu_x_Union1Kind;


typedef struct __org_qemu_x_Struct2 __org_qemu_x_Struct2;

typedef struct __org_qemu_x_Struct2List
{
    union {
        __org_qemu_x_Struct2 *value;
        uint64_t padding;
    };
    struct __org_qemu_x_Struct2List *next;
} __org_qemu_x_Struct2List;


typedef struct __org_qemu_x_Union2 __org_qemu_x_Union2;

typedef struct __org_qemu_x_Union2List
{
    union {
        __org_qemu_x_Union2 *value;
        uint64_t padding;
    };
    struct __org_qemu_x_Union2List *next;
} __org_qemu_x_Union2List;



typedef struct __org_qemu_x_Alt __org_qemu_x_Alt;

typedef struct __org_qemu_x_AltList
{
    union {
        __org_qemu_x_Alt *value;
        uint64_t padding;
    };
    struct __org_qemu_x_AltList *next;
} __org_qemu_x_AltList;

extern const char * const __org_qemu_x_AltKind_lookup[];
typedef enum __org_qemu_x_AltKind
{
    ORG_QEMU_X_ALT_KIND___ORG_QEMU_X_BRANCH = 0,
    ORG_QEMU_X_ALT_KIND_B = 1,
    ORG_QEMU_X_ALT_KIND_MAX = 2,
} __org_qemu_x_AltKind;

#ifndef QAPI_TYPES_BUILTIN_CLEANUP_DECL_H
#define QAPI_TYPES_BUILTIN_CLEANUP_DECL_H

void qapi_free_int32List(int32List *obj);
void qapi_free_int16List(int16List *obj);
void qapi_free_intList(intList *obj);
void qapi_free_uint8List(uint8List *obj);
void qapi_free_numberList(numberList *obj);
void qapi_free_int8List(int8List *obj);
void qapi_free_sizeList(sizeList *obj);
void qapi_free_uint64List(uint64List *obj);
void qapi_free_uint16List(uint16List *obj);
void qapi_free_boolList(boolList *obj);
void qapi_free_strList(strList *obj);
void qapi_free_int64List(int64List *obj);
void qapi_free_uint32List(uint32List *obj);

#endif /* QAPI_TYPES_BUILTIN_CLEANUP_DECL_H */


void qapi_free_EnumOneList(EnumOneList *obj);

struct NestedEnumsOne
{
    EnumOne enum1;
    bool has_enum2;
    EnumOne enum2;
    EnumOne enum3;
    bool has_enum4;
    EnumOne enum4;
};

void qapi_free_NestedEnumsOneList(NestedEnumsOneList *obj);
void qapi_free_NestedEnumsOne(NestedEnumsOne *obj);

struct UserDefZero
{
    int64_t integer;
};

void qapi_free_UserDefZeroList(UserDefZeroList *obj);
void qapi_free_UserDefZero(UserDefZero *obj);

struct UserDefOne
{
    UserDefZero *base;
    char *string;
    bool has_enum1;
    EnumOne enum1;
};

void qapi_free_UserDefOneList(UserDefOneList *obj);
void qapi_free_UserDefOne(UserDefOne *obj);

struct UserDefTwoDictDict
{
    UserDefOne *userdef;
    char *string;
};

void qapi_free_UserDefTwoDictDictList(UserDefTwoDictDictList *obj);
void qapi_free_UserDefTwoDictDict(UserDefTwoDictDict *obj);

struct UserDefTwoDict
{
    char *string1;
    UserDefTwoDictDict *dict2;
    bool has_dict3;
    UserDefTwoDictDict *dict3;
};

void qapi_free_UserDefTwoDictList(UserDefTwoDictList *obj);
void qapi_free_UserDefTwoDict(UserDefTwoDict *obj);

struct UserDefTwo
{
    char *string0;
    UserDefTwoDict *dict1;
};

void qapi_free_UserDefTwoList(UserDefTwoList *obj);
void qapi_free_UserDefTwo(UserDefTwo *obj);

struct UserDefA
{
    bool boolean;
};

void qapi_free_UserDefAList(UserDefAList *obj);
void qapi_free_UserDefA(UserDefA *obj);

struct UserDefB
{
    int64_t integer;
};

void qapi_free_UserDefBList(UserDefBList *obj);
void qapi_free_UserDefB(UserDefB *obj);

struct UserDefC
{
    char *string1;
    char *string2;
};

void qapi_free_UserDefCList(UserDefCList *obj);
void qapi_free_UserDefC(UserDefC *obj);

struct UserDefUnionBase
{
    char *string;
    EnumOne enum1;
};

void qapi_free_UserDefUnionBaseList(UserDefUnionBaseList *obj);
void qapi_free_UserDefUnionBase(UserDefUnionBase *obj);

struct UserDefFlatUnion
{
    EnumOne kind;
    union {
        void *data;
        UserDefA *value1;
        UserDefB *value2;
        UserDefB *value3;
    };
    char *string;
};
void qapi_free_UserDefFlatUnionList(UserDefFlatUnionList *obj);
void qapi_free_UserDefFlatUnion(UserDefFlatUnion *obj);

struct UserDefFlatUnion2
{
    EnumOne kind;
    union {
        void *data;
        UserDefC *value1;
        UserDefB *value2;
        UserDefA *value3;
    };
    char *string;
};
void qapi_free_UserDefFlatUnion2List(UserDefFlatUnion2List *obj);
void qapi_free_UserDefFlatUnion2(UserDefFlatUnion2 *obj);

struct UserDefAlternate
{
    UserDefAlternateKind kind;
    union {
        void *data;
        UserDefA *uda;
        char *s;
        int64_t i;
    };
};
extern const int UserDefAlternate_qtypes[];
void qapi_free_UserDefAlternateList(UserDefAlternateList *obj);
void qapi_free_UserDefAlternate(UserDefAlternate *obj);

struct UserDefNativeListUnion
{
    UserDefNativeListUnionKind kind;
    union {
        void *data;
        intList *integer;
        int8List *s8;
        int16List *s16;
        int32List *s32;
        int64List *s64;
        uint8List *u8;
        uint16List *u16;
        uint32List *u32;
        uint64List *u64;
        numberList *number;
        boolList *boolean;
        strList *string;
        sizeList *sizes;
    };
};
void qapi_free_UserDefNativeListUnionList(UserDefNativeListUnionList *obj);
void qapi_free_UserDefNativeListUnion(UserDefNativeListUnion *obj);

struct UserDefOptions
{
    bool has_i64;
    intList *i64;
    bool has_u64;
    uint64List *u64;
    bool has_u16;
    uint16List *u16;
    bool has_i64x;
    int64_t i64x;
    bool has_u64x;
    uint64_t u64x;
};

void qapi_free_UserDefOptionsList(UserDefOptionsList *obj);
void qapi_free_UserDefOptions(UserDefOptions *obj);

struct EventStructOne
{
    UserDefOne *struct1;
    char *string;
    bool has_enum2;
    EnumOne enum2;
};

void qapi_free_EventStructOneList(EventStructOneList *obj);
void qapi_free_EventStructOne(EventStructOne *obj);

void qapi_free___org_qemu_x_EnumList(__org_qemu_x_EnumList *obj);

struct __org_qemu_x_Base
{
    __org_qemu_x_Enum __org_qemu_x_member1;
};

void qapi_free___org_qemu_x_BaseList(__org_qemu_x_BaseList *obj);
void qapi_free___org_qemu_x_Base(__org_qemu_x_Base *obj);

struct __org_qemu_x_Struct
{
    __org_qemu_x_Base *base;
    char *__org_qemu_x_member2;
};

void qapi_free___org_qemu_x_StructList(__org_qemu_x_StructList *obj);
void qapi_free___org_qemu_x_Struct(__org_qemu_x_Struct *obj);

struct __org_qemu_x_Union1
{
    __org_qemu_x_Union1Kind kind;
    union {
        void *data;
        char *__org_qemu_x_branch;
    };
};
void qapi_free___org_qemu_x_Union1List(__org_qemu_x_Union1List *obj);
void qapi_free___org_qemu_x_Union1(__org_qemu_x_Union1 *obj);

struct __org_qemu_x_Struct2
{
    __org_qemu_x_Union1List *array;
};

void qapi_free___org_qemu_x_Struct2List(__org_qemu_x_Struct2List *obj);
void qapi_free___org_qemu_x_Struct2(__org_qemu_x_Struct2 *obj);

struct __org_qemu_x_Union2
{
    __org_qemu_x_Enum kind;
    union {
        void *data;
        __org_qemu_x_Struct2 *__org_qemu_x_value;
    };
};
void qapi_free___org_qemu_x_Union2List(__org_qemu_x_Union2List *obj);
void qapi_free___org_qemu_x_Union2(__org_qemu_x_Union2 *obj);

struct __org_qemu_x_Alt
{
    __org_qemu_x_AltKind kind;
    union {
        void *data;
        char *__org_qemu_x_branch;
        __org_qemu_x_Base *b;
    };
};
extern const int __org_qemu_x_Alt_qtypes[];
void qapi_free___org_qemu_x_AltList(__org_qemu_x_AltList *obj);
void qapi_free___org_qemu_x_Alt(__org_qemu_x_Alt *obj);

#endif
