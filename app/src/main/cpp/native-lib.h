#include <jni.h>

#ifndef _Included_com_zzwtec_facedlibopencv_Face
#define _Included_com_zzwtec_facedlibopencv_Face
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    initModel
 * Signature: (Ljava/lang/String;F)F
 */
JNIEXPORT jint JNICALL Java_com_zzwtec_facedlibopencv_Face_initModel
        (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    showBox
 * Signature: (F)F
 */
JNIEXPORT jint JNICALL Java_com_zzwtec_facedlibopencv_Face_showBox
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    showLandMarks
 * Signature: (F)F
 */
JNIEXPORT jint JNICALL Java_com_zzwtec_facedlibopencv_Face_showLandMarks
        (JNIEnv *, jclass, jint);

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    landMarks
 * Signature: (JJJJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zzwtec_facedlibopencv_Face_landMarks
        (JNIEnv *, jclass, jlong, jlong, jlong, jlong, jlong);

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    landMarks
 * Signature: (JFJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zzwtec_facedlibopencv_Face_landMarks1
        (JNIEnv *, jclass, jlong, jint, jlong );

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    landMarks2
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_zzwtec_facedlibopencv_Face_landMarks2
        (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    faceDetector
 * Signature: (JFJ)Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_com_zzwtec_facedlibopencv_Face_faceDetector
        (JNIEnv *, jclass, jlong, jint, jlong );

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    faceDetectorByDNN
 * Signature: (JFJ)Ljava/lang/String;
 */
JNIEXPORT jint JNICALL Java_com_zzwtec_facedlibopencv_Face_faceDetectorByDNN
        (JNIEnv *, jclass, jlong, jint, jlong );

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    faceRecognition
 * Signature: (JFJ)F
 */
JNIEXPORT jint JNICALL Java_com_zzwtec_facedlibopencv_Face_faceRecognition
        (JNIEnv *, jclass, jlong, jint, jlong );

/*
 * Class:     com_zzwtec_facedlibopencv_Face
 * Method:    initFaceDescriptors
 * Signature: (Ljava/lang/String;)F
 */
JNIEXPORT jint JNICALL Java_com_zzwtec_facedlibopencv_Face_initFaceDescriptors
        (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif