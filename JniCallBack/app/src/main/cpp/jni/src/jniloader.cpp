//
// Created by Administrator on 2021/6/3.
//

#include "jniloader.h"
#include <jni.h>

HumanService_field_t gFieldMobileAIService;
ManData_field_t gFieldHandData;
JavaVM* gVM = nullptr;


extern "C" JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
//    LOGI("[MobileAIService] JNI_OnLoad called");
    gVM = vm;

    JNIEnv* env;
    if (vm->GetEnv((void**)&env, JNI_VERSION_1_4) != JNI_OK) {
//    LOGI("Failed to get the environment using GetEnv()");
    return -1;
    }


    // callback offered to bigonn/bvt
    {
    jclass clz                           = env->FindClass("com/example/jnicallback/human");
    gFieldMobileAIService.mNativeHandler = env->GetFieldID(clz, "mNativeHandler", "J");

//    gFieldMobileAIService.addMan =
//    env->GetStaticMethodID(clz, "addMan", "([Ljava/lang/Object)V");
    gFieldMobileAIService.clazz = (jclass)env->NewGlobalRef(clz);
    env->DeleteLocalRef(clz);

    }

{
jclass clz = env->FindClass("com/example/jnicallback/human$Man");
gFieldHandData.
clazz = (jclass) env->NewGlobalRef(clz);
gFieldHandData.
constructor = env->GetMethodID(clz, "<init>", "()V");
//gFieldHandData.
//name = env->GetFieldID(clz, "name", "Ljava/lang/String;");
gFieldHandData.
age = env->GetFieldID(clz, "age", "I");
env->
DeleteLocalRef(clz);
}
    return JNI_VERSION_1_4;
}