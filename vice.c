#include "stdio.h"
#include "defs.h"

int main(){

	U64 playBitBoard = 0ULL;
	int count;

	AllInit();
	
	playBitBoard |= (1ULL << SQ64(D2));
	playBitBoard |= (1ULL << SQ64(D3));
	playBitBoard |= (1ULL << SQ64(D4));

	printf("\n");
	PrintBitBoard(playBitBoard);
	
	count = CNT(playBitBoard);
	
	printf("Count:%d", count);
		
	return 0;
}