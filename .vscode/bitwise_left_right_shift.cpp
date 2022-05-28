#include<iostream>
#include<bitset>

int main(){


//std::bitset<32> x=12;

unsigned int x=12;
std::cout<<"binary form of "<<x<<"is  "<<std::bitset<32>{x}<<"\n";

x=x<<2;
std::cout<<"shift 2 bits to left "<<x<<"is  "<<std::bitset<32>{x}<<"\n";
x=x>>2;
std::cout<<"shift 2 bits to roght "<<x<<"is  "<<std::bitset<32>{x}<<"\n";
std::cout<<(12^12^13);

    return 0 ;
}