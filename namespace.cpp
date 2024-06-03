#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}


int main(){

    /*
    
    Namespace = provides a solution for preventing name conflicts on large projects.
                Each entity needs a unique name.
                A namespace allows for identical names entities as long as the namespaces are different.


    using namespace first;             // can use namespace second in the main without the prefix
    using namespace second;            // can use namespace second in the main without the prefix

    using namespace std;               // no need to put std as a prefix in cout command or in declaring a string

    */


    int x = 0;

    std::cout << x << '\n';            // prints out int x = 0
    
    std::cout << first::x << '\n';     // prints out int x = 1 (from namespace first)

    std::cout << second::x << '\n';     // prints out int x = 2 (from namespace second)


    return 0;
}