// Copyright 2019-2022 The jdh99 Authors. All rights reserved.
// Clock moudule
// Authors: jdh99 <jdh821@163.com>

#include "tztime.h"
#include <string.h>

static TZTimeGetFunc gGetTimeFunc = NULL;

// TZTimeLoad 模块载入
void TZTimeLoad(TZTimeGetFunc getTimeFunc) {
    gGetTimeFunc = getTimeFunc;
}

// TZTimeGet 读取时间.单位:us
uint64_t TZTimeGet(void) {
    if (gGetTimeFunc == NULL) {
        return 0;
    }
    return gGetTimeFunc();
}

// TZTimeGetMillsecond 读取时间.单位:ms
uint64_t TZTimeGetMillsecond(void) {
    return TZTimeGet() / TZTIME_MILLISECOND;
}

// TZTimeGetSecond 读取时间.单位:s
uint32_t TZTimeGetSecond(void) {
    return (uint32_t)(TZTimeGet() / TZTIME_SECOND);
}

// TZTimeGetMinute 读取时间.单位:m
uint32_t TZTimeGetMinute(void) {
    return (uint32_t)(TZTimeGet() / TZTIME_MINUTE);
}

// TZTimeGetHour 读取时间.单位:h
uint32_t TZTimeGetHour(void) {
    return (uint32_t)(TZTimeGet() / TZTIME_HOUR);
}
