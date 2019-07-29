#include <stdio.h>

int main()
{
  
  int a[20],i,j,n,temp;
 
  printf("Enter the total number \n");
  
  scanf("%d",&n);
   
  printf("Enter the array element \n");
 
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<n;i++){
 
       for(j=i;j>0;j--){
     
         if(a[j-1]>a[j]){
       
           temp=a[j];
           
           a[j]=a[j-1];
          
           a[j-1]=temp;
            
          }
       
       }
   
     }
   
 for(j=0;j<n;j++)
   
 {
        printf("%d ",a[j]);
  
  }

    
return 0;

}

