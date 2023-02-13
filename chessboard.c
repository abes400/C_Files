#include<stdio.h>
#include<ctype.h>
struct chess{
	int row;
	int col;
	char type;
};
int main(){
	FILE *pie, *boa;
	struct chess pos[32];
	int total, bcount, wcount, i, j;
	char board[8][8];
	//Initializing board matrix
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++)
		board[i][j] = ' ';
	}
    pie = fopen("pieces.txt", "r");
    if(pie == NULL){
        puts("ERROR: File not found.");
    return 1;
    }
	//Getting data from pieces.txt file and arranging board matrix
	while(!feof(pie)){
		fscanf(pie, "%d", &total);
		fscanf(pie, "%d", &bcount);
		for(i = 0; i < bcount; i++){
			fscanf(pie, " %c %d %d", &pos[i].type, &pos[i].row, &pos[i].col);
			board[8-pos[i].row][pos[i].col-1] = toupper(pos[i].type);
		}
		fscanf(pie, "%d", &wcount);
		for(i = bcount; i < bcount+wcount; i++){
			fscanf(pie, " %c %d %d", &pos[i].type, &pos[i].row, &pos[i].col);
			board[8-pos[i].row][pos[i].col-1] = tolower(pos[i].type);
		}
	}
	fclose(pie);

	boa = fopen("board.txt", "w");
	//Writing the board matrix to board.txt file
	fputs("Here is the Chess Board:\n", boa);
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			fprintf(boa, "[%c]\t", board[i][j]);
		}
		fputc('\n', boa);
	}
	fclose(boa);
	puts("Board has been arranged successfully.");
	return 0;
}
