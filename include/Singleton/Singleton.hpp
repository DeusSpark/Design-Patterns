#pragma once

#include <mutex>

class Singleton
{
public:
    // No copy
    Singleton(Singleton& other) = delete;
    // No assignable
    void operator=(const Singleton&) = delete;

    static Singleton* getInstance();

protected:
    Singleton();
    ~Singleton();

private:
    static Singleton* m_isntance;
    static std::mutex m_mutex;
};
