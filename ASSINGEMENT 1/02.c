#include<stdio.h>
int A(int a[],int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum=sum+a[i];
    }
    return (sum/size);
}

int main(){
    int arr[5];
    int i,avg;
    for(i=0;i<5;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    avg = A(arr,5);
    printf("The average of the array is %d\n",avg);
    return 0;

}
   
