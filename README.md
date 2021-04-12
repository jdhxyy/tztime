# tztime

## 介绍
tztime是时钟管理模块，载入时传入回调函数读取时间，tztime通过回调函数读取当前时间，精度:us。

tztime可以作为其他模块的依赖包，通过标准接口TZTimeGet为其他模块提供时钟。

## API
```c
// TZLogGetTimeFunc get time function type
typedef uint64_t (*TZTimeGetFunc)(void);

// TZTimeLoad load module
void TZTimeLoad(TZTimeGetFunc getTimeFunc);

// TZTimeGet get time.accuracy:microsecond
uint64_t TZTimeGet(void);
```