#include <jni.h>
#include "ubrn-bug-reproducer.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_ubrnbugreproducer_UbrnBugReproducerModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return ubrnbugreproducer::multiply(a, b);
}
