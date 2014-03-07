#include "stdio.h"
#include "defs.h"

int main(){

	U64 playBitBoard = 0ULL;
	int index = 0;
	
	AllInit();
		
	for( index = 0; index < 64; ++index){
		printf("Index:%d\n", index);
		PrintBitBoard(SetMask[index]);
		printf("\n");
		
	}
	
	return 0;
}