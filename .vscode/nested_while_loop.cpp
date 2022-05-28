#include<iostream>
int main()
{
    int i=1,j=5;
    while (i<=5)
    {
        while(j>=i);
        {
            std::cout<<j<<" ";
            --j;
        }
        ++i;
        std::cout<<"\n";
    }
        
        return 0;

}