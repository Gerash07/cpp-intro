#include <iostream>
#include <math.h>
int main()
{
    int n;
    float res;
    std::cin>>n;
    float o = n/6.0;
    float p = M_PI;
    for (int y = -(n-1)/2; y <= (n-1)/2; y++)
    {
        for (int x = -(n-1)/2; x <= (n-1)/2; x++)
        {
            res=1/(2*p*pow(o, 2))*exp(-((pow(x, 2)+pow(y, 2))/2/o/o));
            std::cout<<res<<" ";
        }
        std::cout<<std::endl;
    }
}