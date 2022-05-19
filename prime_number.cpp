#include<iostream>
bool isPrime(int x)
{
bool flag=false;
for (int i=2;i<=x/2;i++)
{
    if (x%i==0)
    {
        return false;
    }
    else
    return true;
}

return true;

}


int main()
{
if(isPrime(3))
{
    std::cout<<"this is prime number";
}
else
{
    std::cout<<"this is not prime number";
}
    return 0;
}
