#include <stdio.h>
int add(int *x,int *y);
int main()
{
    int a=10,b=20;
    //int res=add(&a,&b);
    add(&a,&b);
    printf("%d %d",a,b);
    
}
int add (int*x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}


