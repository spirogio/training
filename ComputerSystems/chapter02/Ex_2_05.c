#include "byte_representation.h"

int main(int arc, int *argv[]){

	int val = 0x87654321;
	byte_pointer valp = (byte_pointer) &val;
	show_me_bytes(valp, 1);
	show_me_bytes(valp, 2);
	show_me_bytes(valp, 3);
	show_me_bytes(valp, 4);
}
