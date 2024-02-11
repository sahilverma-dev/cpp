#include <iostream>

namespace sahil
{
    int s = 4;
}

// :: called scope resolution operator
// don't use using namespace std;

int main()
{

    int s = 6;

    std::cout << "Yo what up" << sahil::s;
    return 0;
}
