#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("Enter the number of x and y you want");
    scanf("%d",&n);
    float x[n],y[n],sumxy=0,sumx=0,sumy=0,sumxx=0,a,b;
    printf("Enter the value of x");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&x[i]);
    };
    printf("Enter the value of y");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&y[i]);
    };
    for(i=1;i<=n;i++)
    {
        sumxy= sumxy + x[i]*y[i];
    };
    for(i=1;i<=n;i++)
    {
        sumxx= sumxx + x[i]*x[i];
    };
    for(i=1;i<=n;i++)
    {
        sumy= sumy + y[i];
    };
    for(i=1;i<=n;i++)
    {
        sumx= sumx + x[i];
    };
    b = (n*sumxy -sumx*sumy)/(n*sumxx-sumx*sumx);
    a= (sumy/n) - (b*sumx/n);
    printf("The required equation is %f + %f x",b,a);
    return 0;
}