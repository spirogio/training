#include "byte_representation.h"

void inplace_swap(int *x, int *y){
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
	int first,last;
	for(first=0, last=cnt-1; first < last; first++, last--)
		inplace_swap(&a[first], &a[last]);
}

void print_elements(int arr[], int cnt){
	int i;
	for(i=0 ; i < cnt; i++)
		printf("%d ",arr[i]);
	printf("\n");
}


int main(int argc, char *argv[]){
	int array[4] = {1,2,3,4};
	printf("Array: ");
	print_elements(array, 4);
	reverse_array(array, 4);
	printf("Reverse array: ");
	print_elements(array, 4);
	int array2[5] = {1,2,3,4,5};
	printf("Array: ");
	print_elements(array2, 5);
	reverse_array(array2, 5);
	printf("Reverse array: ");
	print_elements(array2, 5);
}
	 
