#pragma once

#ifdef DEBUG_MODE
#define ASSERT(condition, message)                                          \
    if (!(condition))                                                        \
    {                                                                        \
        QFATAL("Assertion failed: {} \nFile: {} \nLine: {} \nMessage: {}",   \
               #condition, __FILE__, __LINE__, message);                     \
        __debugbreak();                                                      \
    }
#else
#define ASSERT(condition, message) ((void)0)
#endif