#include<bitset>
#include<iostream>
int main()
{
    //test() for test test bit is set as 0 or 1.
    //set() for set bit on
    //reset() for set bit off
    //flip() for flip bit 0 to 1 or 1 to 0.
     std::bitset<8> bits{ 0b0000'0101 }; // we need 8 bits, start with bit pattern 0000 0101
    bits.set(3); // set bit position 3 to 1 (now we have 0000 1101)
    bits.flip(4); // flip bit 4 (now we have 0001 1101)
    bits.reset(4); // set bit 4 back to 0 (now we have 0000 1101)
    bits.flip(4);

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
    std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

    std::bitset<32> x=12;

    std::cout<<std::bitset<32>{x};
    x.set(1);
    x.flip(0);
    x.reset(0);
    
    std::cout<<"\n"<<x;
    return 0;

}