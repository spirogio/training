#include "byte_representation.h"

void inplace_swap(int *x, int *y){
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int main(int argc, char *argv[]){
	
}



/*
 * Step			*x			*y
 * ******************************************
 * Initially	a			b
 * Step1		a			a^b
 * Step2		a^(a^b)=b	a^b
 * Step3		b			b^(a^b)=(b^b)^a=a	
