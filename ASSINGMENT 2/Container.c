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
        printf("overflow\n");
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
void insert(struct ArrayADT *arr, int data, int position)
{

    for (int i = arr->capacity; i > position; i--)
    {
        arr->ptr[i] = arr->ptr[i - 1];
    }
    arr->ptr[position - 1] = data;
    printf("%d\n", arr->ptr[2]);
}
// Delet value at given posotion
void delet(struct ArrayADT *arr, int position)
{
    if (position > arr->capacity)
    {
        printf("Deletion not possible\n");
    }
    else
        for (int i = position - 1; i < arr->capacity; i++)
        {
            arr->ptr[i] = arr->ptr[i + 1];
        }
    printf("%d\n", arr->ptr[2]);
} // count function
int count(struct ArrayADT *arr)
{
    return sizeof(arr->ptr) / sizeof(arr->ptr[0]);
}
int main()
{
    struct ArrayADT *arr;
    arr = creatArray(4);

    append(arr, 20);
    insert(arr, 5, 3);

    delet(arr, 3);
    printf("%d\n", count(arr));
    return 0;
}