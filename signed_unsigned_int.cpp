#include <iostream>

int main()
{
    signed int s { -1 };
     int u { 1 };

    if (s < u) // -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
        std::cout << "-1 is less than 1\n";
    else
        std::cout << "1 is less than -1\n"; // this statement executes


        std::cout<<s;

    return 0;
}