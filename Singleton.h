#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

/// @brief 懒汉式单例 在 C++11 中，静态局部变量是线程安全的
class Singleton
{
public:
    /// @brief 获取单实例对象
    /// @return 单实例对象
    static Singleton &instance();

    // 打印实例地址
    void Print();

    // 打印实例地址
    void Start();

    /// @brief 禁止外部拷贝构造和赋值操作
    Singleton(const Singleton &) = delete;
    Singleton & operator = (const Singleton &) = delete;

private:
    /// @brief 禁止外部构造和析构
#if 0
    Singleton() = default;
    ~Singleton() = default;
#endif
    Singleton();
    ~Singleton();
};

#endif // SINGLETON_H
