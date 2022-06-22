#include <string>
#include <iostream>

int main()
{
    std::string hello = "Hello World";
    std::cout << hello << "\n";
    std::cout << " size = " << hello.size() << "\n";
    std::cout << " first symbol = " << hello[0] << "\n";
    std::cout << " end symbol = " <<hello [hello.size()-1] << "\n";
    return 0;
}

