#include<iostream>
#include<string>

using namespace std;
void print(){
char ch;
std:cout<<"type char \n";
std::cin>>ch;
std::cout<<"ASCII number of "<<ch<<"is "<<static_cast<int>(ch);

}


int main(){

    std::string str="rupesh\n";


std::cout<<str;
    print ();

    return 0;
}