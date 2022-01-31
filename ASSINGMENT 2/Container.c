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
int main()
{

    int i, result;
    printf("Enter the capacity of array\n");
    scanf("%d", &i);
    result = creatArray(i);

    return 0;
}