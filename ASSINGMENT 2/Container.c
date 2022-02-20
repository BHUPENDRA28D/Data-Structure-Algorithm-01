#include <stdio.h>
#include <stdlib.h>
struct ArrayADT
{
    int capacity;
    int lastIndex;
    int *ptr;
};
// Created a Array here (dynamicaly)
struct ArrayADT *creatArray(int cap)
{
    struct ArrayADT *arr = NULL;
    arr = (struct ArrayADT *)malloc(sizeof(struct ArrayADT));
    arr->capacity = cap;
    arr->lastIndex = -1;
    arr->ptr = (int *)malloc(sizeof(int) * cap);
    return arr;
}
// Append function (Enter value after last index)
void append(struct ArrayADT *arr, int data)
{
    if (arr->lastIndex + 1 == arr->capacity)
    {
        printf("\noverflow\n");
    }
    else
    {
        (arr->lastIndex += 1);
        arr->ptr[arr->lastIndex] = data;
    } // int i;
    // for(i=0;i<arr->capacity;i++){
    printf("%d\n", arr->ptr[0]);
}

// Insert function (insert value at given position)
void insert(struct ArrayADT *arr, int data, int index)
{   int i;
    if(index<0 || index>arr->lastIndex+1){
        printf("\nInsertion Error :: Invalid Index\n");    
    }
    else if(index==arr->capacity-1)
        printf("\nInsertion Error:: Overflow\n");
        else{
            for(i=arr->lastIndex;i>=index;i++)
                arr->ptr[i+1]=arr->ptr[i];

            arr->ptr[i]= data;
        
    arr->lastIndex++;
}}

// Delet value at given posotion
void delet(struct ArrayADT *arr, int index)
{
    if (index<0 || index>arr->lastIndex)
    {
        printf("\nInvalid Index::Deletion not possible\n");
    }
    else
        for (int i = index; i < arr->lastIndex; i++)
        {
            arr->ptr[i] = arr->ptr[i + 1];
        
        arr->lastIndex--;}
    printf("%d\n", arr->ptr[2]);
} 

// count function
int count(struct ArrayADT *arr)
{
    return arr->lastIndex+1;
}
// view the array
void view(struct ArrayADT *arr){
    int i;
    for(i=0;i<=arr->lastIndex;i++)
       printf("%d",arr->ptr[i]);
}
// edit function to edit a number at given index
void edit(struct ArrayADT *arr,int NewData, int index){
    if(index>arr->lastIndex || index<0)
        printf("\nEdition Error:: Invalid Index");

    else
        arr->ptr[index]=NewData;   
}

// getting an item on specific index
void getItem(struct ArrayADT *arr,int index){
    if(index>arr->lastIndex || index<0)
        printf("\nError:: Invalid Index");
    else
        printf("\n%d",arr->ptr[index]);
            }
// search function tells us the data given is on the index or not
int search(struct ArrayADT*arr,int data){
    printf("\n");
    for(int i=0;i<arr->lastIndex;i++){
        if(arr->ptr[i]== data)
           return i;
    }
    return -1;
}

int main()
{
    struct ArrayADT *arr;
    arr = creatArray(4);

    append(arr, 20);
    insert(arr,20, 0);

    delet(arr, 0);

    printf("\n%d\n", count(arr));

    view(arr);
    edit(arr,25,0);
    getItem(arr,0);
    int x =search(arr,25);
    printf("\n Search success :: %d",x);
    return 0;
}