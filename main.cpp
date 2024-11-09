#include <iostream>
#include "Singleton.h"

int main()
{
    Singleton::instance().Print();
    Singleton::instance().Start();

    return 0;
}
