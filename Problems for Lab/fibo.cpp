
#include<iostream>
using namespace std;
int nthFibo(int n)
{
    if(n==0)
        return 0;
    if (n==1)
        return 1;
    int nth=nthFibo(n-1)+nthFibo(n-2);
    return nth;


}
int main()
{
    int s=nthFibo(6);
    printf("nTh fibonacci term is :%d",s);
}

