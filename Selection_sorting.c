
#include <stdio.h>
int main(){
       int i, j, n, temp, a[25];
       
   printf("The size of array :\n ");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);
    return 0;
}
