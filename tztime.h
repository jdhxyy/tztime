// Copyright 2019-2019 The jdh99 Authors. All rights reserved.
// Clock moudule
// Authors: jdh99 <jdh821@163.com>

#ifndef TZTIME_H
#define TZTIME_H

#include <stdint.h>

// 时间单位
// 毫秒
#define TZTIME_MILLISECOND 1000ull
// 秒
#define TZTIME_SECOND 1000000ull
// 分
#define TZTIME_MINUTE 60000000ull
// 小时
#define TZTIME_HOUR 3600000000ull

// TZTimeGetFunc get time function type
typedef uint64_t (*TZTimeGetFunc)(void);

// TZTimeLoad load module
void TZTimeLoad(TZTimeGetFunc getTimeFunc);

// TZTimeGet get time.accuracy:microsecond
uint64_t TZTimeGet(void);

#endif
