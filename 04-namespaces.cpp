#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

namespace third{
    int x = 5;
}

int main(){
    // namespace  = provides a solution for preventing name conflicts
    // in large projects. Each entity needs a unique name
    // A namespace allows for identically named entities as long as the namespaces are different

    using namespace third;

    // int x = 0;
    
    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x;

    return 0;
}