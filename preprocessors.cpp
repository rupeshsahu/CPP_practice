#include <iostream>
#define VALUE "Rupesh"
#define RUPESH
int main(){
    using namespace std;
    #ifdef VALUE
    cout << "yes VALue is defined" << VALUE;
#ifndef RUPESH
cout << "yes Rupesh is not  defined";
#endif
    #endif

}