// Copyright 2019-2019 The jdh99 Authors. All rights reserved.
// Clock moudule
// Authors: jdh99 <jdh821@163.com>

#include "tztime.h"

static TZTimeGetFunc gGetTimeFunc = NULL;

// TZTimeLoad load module
void TZTimeLoad(TZTimeGetFunc getTimeFunc) {
    gGetTimeFunc = getTimeFunc;
}

// TZTimeGet get time.accuracy:microsecond
uint64_t TZTimeGet(void) {
    if (gGetTimeFunc == NULL) {
        return 0;
    }
    return gGetTimeFunc();
}
