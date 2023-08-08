#include<stdio.h>
int main()
     {
         int n,i;
         float avg=0,sum=0;
         printf("Enter the number of terms: ");
         scanf("%d",&n);
         int a[n];
         for(i=1;i<=n;i++)
         {
             printf("\nEnter the number: ");
             scanf("%d",&a[i]);
         }
         for(i=1;i<=n;i++)
         {
             sum=sum+a[i];
         }
         avg=sum/n;
         printf("\nAverage of entered numbers is: %f",avg);
         return 0;
     }
