#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_me_bytes(byte_pointer start, size_t len){
	int i;
	for(i=0 ; i<len; i++){
		printf("%.02x ", start[i]);
	}
	printf("\n");
}

void show_int(int x){
	show_me_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x){
	show_me_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x){
	show_me_bytes((byte_pointer)&x, sizeof(void*)); 
}


int main(int arc, int *argv){
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer)&val;

	show_me_bytes(valp,1); 
	show_me_bytes(valp,2); 
	show_me_bytes(valp,3); 
	show_me_bytes(valp,4); 
}
