#include<stdio.h>
#include<math.h>
float diagonal(int n, float a[n][n+1])
{
    int i,j,k;
    float ratio;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
            if(j!=i)
            {
                ratio = (a[j][i]/a[i][i]); // here j=2 and i=1  for 2nd loop and similarly goes on.....
                for(k=1;k<=n+1;k++)
                {
                 a[j][k] = a[j][k]-ratio*a[i][k];
                }
            }
        }
    }
}
int main()
{
    int i,j,k,n;
    printf("Enter the number of unknown :");
    scanf("%d",&n);
    float ratio ,a[n][n+1] ;
    printf("Enter argumented matrix :");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
        scanf("%f",&a[i][j]);
        }
    }
    printf("The matrix is :");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1;j++)
        {
        printf("%f \t",a[i][j]);
        }
    }
   diagonal(n,a[n][n+1]);
    return 0;
}