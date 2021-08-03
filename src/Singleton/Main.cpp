#include <thread>

#include "Singleton.hpp"

void ThreadFoo();
void ThreadBar();

int main()
{
    Singleton* singleton = Singleton::getInstance();
    std::thread t1(ThreadFoo);
    std::thread t2(ThreadBar);
    t1.join();
    t2.join();
}

void ThreadFoo()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::getInstance();
}

void ThreadBar()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton* singleton = Singleton::getInstance();
}