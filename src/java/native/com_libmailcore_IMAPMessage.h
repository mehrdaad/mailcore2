/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_libmailcore_IMAPMessage */

#ifndef _Included_com_libmailcore_IMAPMessage
#define _Included_com_libmailcore_IMAPMessage
#ifdef __cplusplus
extern "C" {
#endif
#undef com_libmailcore_IMAPMessage_serialVersionUID
#define com_libmailcore_IMAPMessage_serialVersionUID 1LL
#undef com_libmailcore_IMAPMessage_serialVersionUID
#define com_libmailcore_IMAPMessage_serialVersionUID 1LL
/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    sequenceNumber
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_IMAPMessage_sequenceNumber
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setSequenceNumber
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setSequenceNumber
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    uid
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_IMAPMessage_uid
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setUid
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setUid
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    size
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_IMAPMessage_size
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setSize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setFlags
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setFlags
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    flags
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_IMAPMessage_flags
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setOriginalFlags
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setOriginalFlags
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    originalFlags
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_libmailcore_IMAPMessage_originalFlags
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setCustomFlags
 * Signature: (Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setCustomFlags
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    customFlags
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPMessage_customFlags
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    modSeqValue
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_IMAPMessage_modSeqValue
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setModSeqValue
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setModSeqValue
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setMainPart
 * Signature: (Lcom/libmailcore/AbstractPart;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setMainPart
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    mainPart
 * Signature: ()Lcom/libmailcore/AbstractPart;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPMessage_mainPart
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setGmailLabels
 * Signature: (Ljava/util/List;)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setGmailLabels
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    gmailLabels
 * Signature: ()Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPMessage_gmailLabels
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setGmailMessageID
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setGmailMessageID
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    gmailMessageID
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_IMAPMessage_gmailMessageID
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    setGmailThreadID
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_libmailcore_IMAPMessage_setGmailThreadID
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    gmailThreadID
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_libmailcore_IMAPMessage_gmailThreadID
  (JNIEnv *, jobject);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    partForPartID
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/AbstractPart;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPMessage_partForPartID
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    partForContentID
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/AbstractPart;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPMessage_partForContentID
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    partForUniqueID
 * Signature: (Ljava/lang/String;)Lcom/libmailcore/AbstractPart;
 */
JNIEXPORT jobject JNICALL Java_com_libmailcore_IMAPMessage_partForUniqueID
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_libmailcore_IMAPMessage
 * Method:    htmlRendering
 * Signature: (Ljava/lang/String;Lcom/libmailcore/HTMLRendererIMAPCallback;Lcom/libmailcore/HTMLRendererTemplateCallback;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_libmailcore_IMAPMessage_htmlRendering
  (JNIEnv *, jobject, jstring, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
