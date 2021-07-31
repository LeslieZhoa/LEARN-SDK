//
// Created by Administrator on 2021/6/3.
//

#ifndef JNICALLBACK_JNILOADER_H
#define JNICALLBACK_JNILOADER_H

#include <jni.h>
struct HumanService_field_t {
    jfieldID mNativeHandler;
//    jmethodID addMan;
    jclass clazz;

};

struct ManData_field_t {
    jclass clazz;
    jmethodID constructor;
//    jfieldID name;
    jfieldID age;
};
enum SDKLogLevel
{
    LOG_LEVEL_OFF = -1,
    LOG_LEVEL_ERROR,
    LOG_LEVEL_WARNING,
    LOG_LEVEL_INFO,
    LOG_LEVEL_DEBUG,
};

extern HumanService_field_t gFieldMobileAIService;
extern ManData_field_t gFieldHandData;

#endif //JNICALLBACK_JNILOADER_H
