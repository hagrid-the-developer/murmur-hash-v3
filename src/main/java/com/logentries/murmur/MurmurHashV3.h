/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_logentries_murmur_MurmurHashV3 */

#ifndef _Included_com_logentries_murmur_MurmurHashV3
#define _Included_com_logentries_murmur_MurmurHashV3
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_logentries_murmur_MurmurHashV3
 * Method:    fastHash128
 * Signature: ([J[BIIJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_logentries_murmur_MurmurHashV3_fastHash128
  (JNIEnv *, jclass, jlongArray, jbyteArray, jint, jint, jlong);

/*
 * Class:     com_logentries_murmur_MurmurHashV3
 * Method:    hash128_64
 * Signature: (Ljava/lang/String;IIJ)J
 */
JNIEXPORT jlong JNICALL Java_com_logentries_murmur_MurmurHashV3_hash128_164__Ljava_lang_String_2IIJ
  (JNIEnv *, jclass, jstring, jint, jint, jlong);

/*
 * Class:     com_logentries_murmur_MurmurHashV3
 * Method:    hash128_64
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_logentries_murmur_MurmurHashV3_hash128_164__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_logentries_murmur_MurmurHashV3
 * Method:    hash128_64
 * Signature: (Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_com_logentries_murmur_MurmurHashV3_hash128_164__Ljava_lang_String_2J
  (JNIEnv *, jclass, jstring, jlong);

#ifdef __cplusplus
}
#endif
#endif
