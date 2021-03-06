/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ispeech_speex_SpeexEncoder */

#ifndef _Included_org_ispeech_speex_SpeexEncoder
#define _Included_org_ispeech_speex_SpeexEncoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ispeech_speex_SpeexEncoder
 * Method:    encode
 * Signature: (I[S)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_ispeech_speex_SpeexEncoder_encode
  (JNIEnv *, jclass, jint, jshortArray);

/*
 * Class:     org_ispeech_speex_SpeexEncoder
 * Method:    getFrameSize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_ispeech_speex_SpeexEncoder_getFrameSize
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_ispeech_speex_SpeexEncoder
 * Method:    allocate
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_ispeech_speex_SpeexEncoder_allocate
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_ispeech_speex_SpeexEncoder
 * Method:    deallocate
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_ispeech_speex_SpeexEncoder_deallocate
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
