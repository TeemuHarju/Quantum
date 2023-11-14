#ifndef ENGINE_H
#define ENGINE_H

#ifdef _WIN32
    #ifdef ENGINE_EXPORTS
        #define ENGINE_API __declspec(dllexport)
    #else
        #define ENGINE_API __declspec(dllimport)
    #endif
#else
    #define ENGINE_API
#endif

class ENGINE_API Engine {
public:
    Engine();
    ~Engine();

    void initialize();
    void update();
    void shutdown();
    void test();
};

#endif // ENGINE_H