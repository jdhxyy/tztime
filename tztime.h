// Copyright 2019-2019 The jdh99 Authors. All rights reserved.
// Clock moudule
// Authors: jdh99 <jdh821@163.com>

#ifndef TZTIME_H
#define TZTIME_H

#include <stdint.h>

// TZTimeGetFunc get time function type
typedef uint64_t (*TZTimeGetFunc)(void);

// TZTimeLoad load module
void TZTimeLoad(TZTimeGetFunc getTimeFunc);

// TZTimeGet get time.accuracy:microsecond
uint64_t TZTimeGet(void);

#endif
