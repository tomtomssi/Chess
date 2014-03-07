#include "stdio.h"
#include "defs.h"

int main(){

	int index = 0;
	U64 playBitBoard = 0ULL;

	AllInit();

	printf("Begin heatings\n\n");
	PrintBitBoard(playBitBoard);
	
	playBitBoard |= (1ULL << SQ64(D2));
	printf("D2:ssa nappula:\n\n");
	PrintBitBoard(playBitBoard);
	
	playBitBoard |= (1ULL << SQ64(G2));
	printf("G2:ssa nappula:\n\n");
	PrintBitBoard(playBitBoard);
		
	return 0;
}