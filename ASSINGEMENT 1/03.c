#include<stdio.h>
int sum(int a[],int size){
    int i,sum=0;
    for(i=0;i<size;i++){
        sum+=a[i];
    }
    return (sum);
}

int main(){
    int arr[5];
    int i,s;
    for(i=0;i<5;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    s= sum(arr,5);
    printf("The sum of element in the array is %d\n",s);
    return 0;

}
   