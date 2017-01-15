/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class qdbm_Curia */

#ifndef _Included_qdbm_Curia
#define _Included_qdbm_Curia
#ifdef __cplusplus
extern "C" {
#endif
#undef qdbm_Curia_ENOERR
#define qdbm_Curia_ENOERR 0L
#undef qdbm_Curia_EFATAL
#define qdbm_Curia_EFATAL 1L
#undef qdbm_Curia_EMODE
#define qdbm_Curia_EMODE 2L
#undef qdbm_Curia_EBROKEN
#define qdbm_Curia_EBROKEN 3L
#undef qdbm_Curia_EKEEP
#define qdbm_Curia_EKEEP 4L
#undef qdbm_Curia_ENOITEM
#define qdbm_Curia_ENOITEM 5L
#undef qdbm_Curia_EALLOC
#define qdbm_Curia_EALLOC 6L
#undef qdbm_Curia_EMAP
#define qdbm_Curia_EMAP 7L
#undef qdbm_Curia_EOPEN
#define qdbm_Curia_EOPEN 8L
#undef qdbm_Curia_ECLOSE
#define qdbm_Curia_ECLOSE 9L
#undef qdbm_Curia_ETRUNC
#define qdbm_Curia_ETRUNC 10L
#undef qdbm_Curia_ESYNC
#define qdbm_Curia_ESYNC 11L
#undef qdbm_Curia_ESTAT
#define qdbm_Curia_ESTAT 12L
#undef qdbm_Curia_ESEEK
#define qdbm_Curia_ESEEK 13L
#undef qdbm_Curia_EREAD
#define qdbm_Curia_EREAD 14L
#undef qdbm_Curia_EWRITE
#define qdbm_Curia_EWRITE 15L
#undef qdbm_Curia_ELOCK
#define qdbm_Curia_ELOCK 16L
#undef qdbm_Curia_EUNLINK
#define qdbm_Curia_EUNLINK 17L
#undef qdbm_Curia_EMKDIR
#define qdbm_Curia_EMKDIR 18L
#undef qdbm_Curia_ERMDIR
#define qdbm_Curia_ERMDIR 19L
#undef qdbm_Curia_EMISC
#define qdbm_Curia_EMISC 20L
#undef qdbm_Curia_OREADER
#define qdbm_Curia_OREADER 1L
#undef qdbm_Curia_OWRITER
#define qdbm_Curia_OWRITER 2L
#undef qdbm_Curia_OCREAT
#define qdbm_Curia_OCREAT 4L
#undef qdbm_Curia_OTRUNC
#define qdbm_Curia_OTRUNC 8L
#undef qdbm_Curia_ONOLCK
#define qdbm_Curia_ONOLCK 16L
#undef qdbm_Curia_OLCKNB
#define qdbm_Curia_OLCKNB 32L
#undef qdbm_Curia_OSPARSE
#define qdbm_Curia_OSPARSE 64L
#undef qdbm_Curia_DOVER
#define qdbm_Curia_DOVER 0L
#undef qdbm_Curia_DKEEP
#define qdbm_Curia_DKEEP 1L
#undef qdbm_Curia_DCAT
#define qdbm_Curia_DCAT 2L
/* Inaccessible static: class_00024qdbm_00024ADBM */
/*
 * Class:     qdbm_Curia
 * Method:    crinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_qdbm_Curia_crinit
  (JNIEnv *, jclass);

/*
 * Class:     qdbm_Curia
 * Method:    crversion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_qdbm_Curia_crversion
  (JNIEnv *, jclass);

/*
 * Class:     qdbm_Curia
 * Method:    crecode
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crecode
  (JNIEnv *, jclass);

/*
 * Class:     qdbm_Curia
 * Method:    crerrmsg
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_qdbm_Curia_crerrmsg
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    cropen
 * Signature: (Ljava/lang/String;III)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_cropen
  (JNIEnv *, jclass, jstring, jint, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crclose
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crclose
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crput
 * Signature: (I[BI[BII)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crput
  (JNIEnv *, jclass, jint, jbyteArray, jint, jbyteArray, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crout
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crout
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crget
 * Signature: (I[BIII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_qdbm_Curia_crget
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crvsiz
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crvsiz
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     qdbm_Curia
 * Method:    criterinit
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_criterinit
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    criternext
 * Signature: (I)[B
 */
JNIEXPORT jbyteArray JNICALL Java_qdbm_Curia_criternext
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crsetalign
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crsetalign
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crsetfbpsiz
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crsetfbpsiz
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crsync
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crsync
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    croptimize
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_croptimize
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crname
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_qdbm_Curia_crname
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crfsizd
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_qdbm_Curia_crfsizd
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crbnum
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crbnum
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crbusenum
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crbusenum
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crrnum
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crrnum
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crwritable
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crwritable
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crfatalerror
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crfatalerror
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crinode
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crinode
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crmtime
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_qdbm_Curia_crmtime
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crputlob
 * Signature: (I[BI[BII)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crputlob
  (JNIEnv *, jclass, jint, jbyteArray, jint, jbyteArray, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    croutlob
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_croutlob
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crgetlob
 * Signature: (I[BIII)[B
 */
JNIEXPORT jbyteArray JNICALL Java_qdbm_Curia_crgetlob
  (JNIEnv *, jclass, jint, jbyteArray, jint, jint, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crvsizlob
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crvsizlob
  (JNIEnv *, jclass, jint, jbyteArray, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crrnumlob
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crrnumlob
  (JNIEnv *, jclass, jint);

/*
 * Class:     qdbm_Curia
 * Method:    crremove
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Curia_crremove
  (JNIEnv *, jclass, jstring);

/*
 * Class:     qdbm_Curia
 * Method:    crsnaffle
 * Signature: (Ljava/lang/String;[BI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_qdbm_Curia_crsnaffle
  (JNIEnv *, jclass, jstring, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
