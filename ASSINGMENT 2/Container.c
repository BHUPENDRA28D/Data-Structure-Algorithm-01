#include <stdio.h>
#include <stdlib.h>
struct ArrayADT
{
    int capacity;
    int lastIndex;
    int *ptr;
};
struct ArrayADT* creatArray(int cap)
{
    struct ArrayADT *arr = NULL;
    arr = (struct ArrayADT *)malloc(sizeof(struct ArrayADT));
    arr->capacity = cap;
    arr->lastIndex = -1;
    arr->ptr = (int *)malloc(sizeof(int) * cap);
    return arr;
}
void append(struct ArrayADT *arr, int data){
    if(arr->lastIndex+1==arr->capacity){
        printf("overflow\n");
    }
    else{
        (arr->lastIndex+=1);
        arr->ptr[arr->lastIndex]= data;
     }//int i;
    // for(i=0;i<arr->capacity;i++){
    printf("%d\n",arr->ptr[0]);
}
void insert(struct ArrayADT *arr,int data){
    int pos =3;
    
    for(int i=arr->capacity;i>arr->ptr[pos];i--){
            arr->ptr[i]=arr->ptr[i-1];
    }
    arr->ptr[pos-1]=data;
    printf("%d\n",arr->ptr[2]);
}
int main()
{   struct ArrayADT *arr;
    arr = creatArray(4);
    
    append(arr,20);
    insert(arr,5);
    return 0;
}