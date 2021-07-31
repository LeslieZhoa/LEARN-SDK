#include <jni.h>
#include <string>
#include "human.h"
#include "jniloader.h"



extern "C" {
static void setMobileAIServiceObject(JNIEnv *env, jobject obj, Human *hm) {
    env->SetLongField(obj, gFieldMobileAIService.mNativeHandler, (jlong) hm);
}
static Human *getMobileAIServiceObject(JNIEnv *env, jobject obj) {
    return (Human *) env->GetLongField(obj, gFieldMobileAIService.mNativeHandler);
}

JNIEXPORT void JNICALL
Java_com_example_jnicallback_human_add_1man(JNIEnv *env, jobject thiz, jobject m, jint num) {
    Human *hm = getMobileAIServiceObject(env, thiz);
    Man indata;
    indata.name = "zhangsan";
    indata.age = env->GetIntField(m,gFieldHandData.age);
    hm->add_man(indata);
    env->SetIntField(m,gFieldHandData.age,indata.age);

}

JNIEXPORT void JNICALL
Java_com_example_jnicallback_human_nativeCreate(JNIEnv *env, jobject thiz) {
    Human *hm = new Human();
    setMobileAIServiceObject(env, thiz, hm);
}
}