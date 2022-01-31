#include <stdio.h>
#include <stdlib.h>
int address(int* a1,int* a2,int size)
{
	int *ptr;
	ptr = (int *)malloc(size * sizeof(int));
	*ptr= *a1+*a2;
	return &(*ptr);
}
int main()
{
	int arr1[3]={1,2,3},*a1;
	int arr2[3]={4,5,6},*a2, result;
	a1= arr1;
	a2= arr2;

	result = address(a1,a2,6);
	printf("%d", result);
	return 0;
}

// #include <stdio.h>
// #define Double(x) x+x
// int main()
// {
// 	int l1 = 10, l2 = 5, area;
// 	area = Double(l1)*Double(l2);
// printf("Area = %d", area);
// 	return 0;
// }
