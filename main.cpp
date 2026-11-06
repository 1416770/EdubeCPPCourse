#include <iostream>

// using namespace std; (You can have two of these at once I think.)
// You can also use "using namespace" within other scopes like inside functions.
// Namespaces are like named containers for entities.
// :: is the "scope resolution operator".

namespace hogwarts
{
    int troll = 1;
}

namespace hogwarts // Extends the hogwarts namespace (adds more to it).
{
    int wizards = 4;
}

namespace mordor
{
    int troll = 2;
}

namespace // Anonymous namespace. Contents are accessible everywhere automatically.
{
    int frogs = 3;
}

// namespace mordor = wowww; You should be able to add an alias to namespaces like this but it's not working for some reason.

int main(void)
{
    std::cout << "aaaaaaaa" << std::endl; // Uses the std namespace.
    std::cout << mordor::troll << std::endl; // Uses the mordor namespace.
    std::cout << hogwarts::troll << std::endl; // Uses the hogwarts namespace.
    std::cout << frogs << std::endl;
    
    return 0;
}