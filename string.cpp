#include<iostream>
#include<string>


int main(){

    std::string str;
std::cout<<"enter your full name--\n";
std::getline(std::cin>>std::ws,str);

std::cout<<"your name is "<<str;
    return 0;
}