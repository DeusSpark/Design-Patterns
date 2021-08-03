#include <iostream>

#include "Singleton.hpp"

Singleton* Singleton::m_isntance = nullptr;
std::mutex Singleton::m_mutex;

Singleton::Singleton()
{
    std::cout << "Singleton::Singleton()\n";
}

Singleton::~Singleton()
{
    std::cout << "Singleton::~Singleton()\n";
}

Singleton* Singleton::getInstance()
{
    m_mutex.lock();
    if (m_isntance == nullptr)
    {
        m_isntance = new Singleton();
    }
    m_mutex.unlock();

    return m_isntance;
}