#include<iostream>
#include<bitset>
using namespace std;
unsigned int return_no_of_set_bits(unsigned int x){

    int count=0;
    int total_bits=sizeof(x)*8;
for (int i=0;i<total_bits;i++)
{
    if (x&(1<<i))
    count++;
}

cout<<"bits format of a number   "<<std::bitset<32>{x}<<"\n";
return count;
}
int main(){

    cout<<"Number of set bits in the enterted number"<<return_no_of_set_bits(260);
    return 0;
}

