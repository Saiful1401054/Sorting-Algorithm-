#include <stdio.h>

int main()
{
       int i, j, n, temp, a[25];

   printf("the size of array :\n ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      
   for(i=0;i<n-1;i++){
      for(j=0;j<n-i;j++){
         if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }

   printf("Sorted elements: ");
   for(j=0;j<n;j++)
      printf(" %d",a[j]);

   
}
