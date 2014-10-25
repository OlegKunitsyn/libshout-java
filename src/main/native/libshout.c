#include <stdlib.h>
#include <jni.h>
#include <shout/shout.h>
#include <stdio.h>
#include "com_gmail_kunicins_olegs_libshout_Libshout.h"

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1init (JNIEnv *env, jclass class) {
	shout_init();
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1shutdown (JNIEnv *env, jclass class) {
	shout_shutdown();
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_version
 * Signature: (III)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1version (JNIEnv *env, jclass class, jint x, jint y, jint z) {
	return (*env)->NewStringUTF(env, shout_version((int *)x, (int *)y, (int *)z));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_new
 * Signature: ()J
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1new (JNIEnv *env, jclass class) {
	return (jint)shout_new();
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_free
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1free (JNIEnv *env, jclass class, jint instance) {
	shout_free((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_error
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1error (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_error((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_errno
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1errno (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_get_errno((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_connected
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1connected (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_get_connected((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_host
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1host (JNIEnv *env, jclass class, jint instance, jstring host) {
	return (jint)shout_set_host((void *)instance, (*env)->GetStringUTFChars(env, host, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_host
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1host (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_host((void *)instance));
}
  
/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_port
 * Signature: (IS)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1port (JNIEnv *env, jclass class, jint instance, jint port) {
	return (jint)shout_set_port((void *)instance, (unsigned int)port);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_port
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1port (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_get_port((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_password
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1password (JNIEnv *env, jclass class, jint instance, jstring password) {
	return (jint)shout_set_password((void *)instance, (*env)->GetStringUTFChars(env, password, 0));
}
  
/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_password
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1password (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_password((void *)instance));
}  

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_mount
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1mount (JNIEnv *env, jclass class, jint instance, jstring mount) {
	return (jint)shout_set_mount((void *)instance, (*env)->GetStringUTFChars(env, mount, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_mount
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1mount (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_mount((void *)instance));
}
  
/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_name
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1name (JNIEnv *env, jclass class, jint instance, jstring name) {
	return (jint)shout_set_name((void *)instance, (*env)->GetStringUTFChars(env, name, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_name
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1name (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_name((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_url
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1url (JNIEnv *env, jclass class, jint instance, jstring url) {
	return (jint)shout_set_url((void *)instance, (*env)->GetStringUTFChars(env, url, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_url
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1url (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_url((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_genre
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1genre (JNIEnv *env, jclass class, jint instance, jstring genre) {
	return (jint)shout_set_genre((void *)instance, (*env)->GetStringUTFChars(env, genre, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_genre
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1genre (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_genre((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_user
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1user (JNIEnv *env, jclass class, jint instance, jstring user) {
	return (jint)shout_set_user((void *)instance, (*env)->GetStringUTFChars(env, user, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_user
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1user (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_user((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_agent
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1agent (JNIEnv *env, jclass class, jint instance, jstring agent) {
	return (jint)shout_set_agent((void *)instance, (*env)->GetStringUTFChars(env, agent, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_agent
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1agent (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_agent((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_description
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1description (JNIEnv *env, jclass class, jint instance, jstring description) {
	return (jint)shout_set_description((void *)instance, (*env)->GetStringUTFChars(env, description, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_description
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1description (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_description((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_dumpfile
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1dumpfile (JNIEnv *env, jclass class, jint instance, jstring dumpfile) {
	return (jint)shout_set_dumpfile((void *)instance, (*env)->GetStringUTFChars(env, dumpfile, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_dumpfile
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1dumpfile (JNIEnv *env, jclass class, jint instance) {
	return (*env)->NewStringUTF(env, shout_get_dumpfile((void *)instance));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_audio_info
 * Signature: (ILjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1audio_1info (JNIEnv *env, jclass class, jint instance, jstring key, jstring value) {
	return (jint)shout_set_audio_info((void *)instance, (*env)->GetStringUTFChars(env, key, 0), (*env)->GetStringUTFChars(env, value, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_audio_info
 * Signature: (ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1audio_1info (JNIEnv *env, jclass class, jint instance, jstring key) {
	return (*env)->NewStringUTF(env, shout_get_audio_info((void *)instance, (*env)->GetStringUTFChars(env, key, 0)));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_public
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1public (JNIEnv *env, jclass class, jint instance, jint public) {
	return (jint)shout_set_public((void *)instance, (int)public);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_public
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1public (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_get_public((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_format
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1format (JNIEnv *env, jclass class, jint instance, jint format) {
	return (jint)shout_set_format((void *)instance, (unsigned int)format);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_format
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1format (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_get_format((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_protocol
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1protocol (JNIEnv *env, jclass class, jint instance, jint protocol) {
	return (jint)shout_set_protocol((void *)instance, (unsigned int)protocol);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_protocol
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1protocol (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_get_protocol((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_nonblocking
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1nonblocking (JNIEnv *env, jclass class, jint instance, jint nonblocking) {
	return (jint)shout_set_nonblocking((void *)instance, (int)nonblocking);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_get_nonblocking
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1get_1nonblocking (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_get_nonblocking((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_open
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1open (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_open((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1close (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_close((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_send
 * Signature: (I[CI)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1send (JNIEnv *env, jclass class, jint instance, jbyteArray array, jint len) {
	jbyte *buffer;
	int ret;
	buffer = (*env)->GetByteArrayElements(env, array, 0);  
	ret = shout_send((void *)instance, (unsigned char*)buffer, (int)len);
	(*env)->ReleaseByteArrayElements(env, array, buffer, 0);
	return (jint)ret;
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_send_raw
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1send_1raw (JNIEnv *env, jclass class, jint instance, jbyteArray array, jint len) {
	jbyte *buffer;
	int ret;
	buffer = (*env)->GetByteArrayElements(env, array, 0);  
	ret = shout_send_raw((void *)instance, (unsigned char*)buffer, (int)len);
	(*env)->ReleaseByteArrayElements(env, array, buffer, 0);
	return (jint)ret;
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_queuelen
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1queuelen (JNIEnv *env, jclass jclass, jint instance) {
	return (jint)shout_queuelen((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_sync
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1sync (JNIEnv *env, jclass class, jint instance) {
	shout_sync((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_delay
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1delay (JNIEnv *env, jclass class, jint instance) {
	return (jint)shout_delay((void *)instance);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_metadata_new
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1metadata_1new (JNIEnv *env, jclass class) {
	return (jint)shout_metadata_new();
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_set_metadata
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1set_1metadata (JNIEnv *env, jclass class, jint instance, jint instanceMeta) {
	return (jint)shout_set_metadata((void *)instance, (void *)instanceMeta);
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_metadata_add
 * Signature: (ILjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1metadata_1add (JNIEnv *env, jclass class, jint instanceMeta, jstring key, jstring value) {
	return (jint)shout_metadata_add((void *)instanceMeta, (*env)->GetStringUTFChars(env, key, 0), (*env)->GetStringUTFChars(env, value, 0));
}

/*
 * Class:     com_gmail_kunicins_olegs_libshout_Libshout
 * Method:    shout_metadata_free
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_gmail_kunicins_olegs_libshout_Libshout_shout_1metadata_1free (JNIEnv *env, jclass class, jint instanceMeta) {
	shout_metadata_free((void *)instanceMeta);
}
