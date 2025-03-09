//C Program to Implement Gauss Jordan Method
#include<stdio.h>

int n;
//Converts the Augmented matrix to Diagonal form
float convertToDiagonal(float a[n][n+1],int n)
{
    int i,j,k;
    float ratio;
    for( i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
      {
         if(j!=i)
         {
             ratio=a[j][i]/a[i][i];
             for(k=1;k<=n+1;k++)
                a[j][k]=a[j][k] -( ratio * a[i][k]);


         }
      }
     }
}


//prints the Value of Unknowns
float printUnknowns(float a[n][n+1],int n)
{
   int i;
   printf("Values of unknowns are:\n");
   for(i=1;i<=n;i++)
      printf("Value of Variable %d=%f\n",i,a[i][n+1]/a[i][i]);

}
int main()
{
    int i,j,k,x,y;
    float ratio;
    printf("Enter no of Unknowns\n");
    scanf("%d",&n);
    float a[n][n+1];
    printf("Enter the Augmented Matrix\n");
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n+1;j++)
        scanf("%f",&a[i][j]);
    }
    convertToDiagonal(a,n);
    printUnknowns(a,n);
    return 0;
}
