#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    float x[n],y[n],z,sum=0,term;
    printf("Enter the value of x\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("Enter the value of y\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    printf("Enter the value of z for which you want y\n");
    scanf("%f",&z);
for(i=0;i<n;i++)
{
    term =1;
    for(j=0;j<n;j++)
    {
if(i!=j){
    term = term  * ((z-x[j])/(x[i]-x[j]));
}
    }
    sum = sum +term * y[i];
}
printf("The required solution is : %f ",sum);
    return 0;
}