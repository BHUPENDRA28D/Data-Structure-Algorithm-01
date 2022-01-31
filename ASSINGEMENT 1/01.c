#include<stdio.h>
int maxValue(int A[],int size){
    int max=0;
    for(int i=0;i<5;i++){
     if(max<A[i])
         max=A[i];
     }
     return max;
}

int main(){
    int arr[5],i;
    int max = maxValue(arr,5);
    for(i=0;i<5;i++)
    {
          printf("Enter the element %d ::",i);
        scanf("%d",&arr[i]);
    }
    
    printf("The max value in the array is %d\n",max);
    return 0;
}