
#include <stdio.h>
void mrgs(int *a,int l,int h,int mid){
    int i,j,k,temp[h-l+1];
    k=0;
    j=mid+1;
    for(i=l;i<=mid && j<=h;){
        if(a[i]<a[j]){
            temp[k]=a[i];
            i++;
            k++;
        }
        else{
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=h){
        temp[k]=a[j];
        j++;
        k++;
    }
    
    for(i=l;i<=h;i++){
        a[i]=temp[i-l];
    }
}

void mrg(int *a,int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mrg(a,l,mid);
        mrg(a,mid+1,h);
        mrgs(a,l,h,mid);
    }
}

int main()
{
    int i,n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the value of array element :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mrg(a,0,n-1);
    printf("The sorted elements are :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
