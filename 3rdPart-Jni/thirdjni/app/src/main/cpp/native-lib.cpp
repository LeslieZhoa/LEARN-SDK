#include <jni.h>
#include <string>
#include "add_num.h"
extern "C" JNIEXPORT jint JNICALL
Java_com_example_thirdjni_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject,
        jint a,
        jint b/* this */) {
    std::string hello = "Hello from C++";
    return add(a,b);
}