/*
	BINARY IO:
	1. Use fopen mode: b for binary
	2. fwrite function writes string into bin file
	3. fread function reads string from bin file

*/

#include <stdio.h>

void strip_newline(char *str, int size){
	
	for( int i = 0; i < size; ++i ){
		if( str[i] == '\n'){
			str[i] = '\0';
			return;
		}
	}
}

int main(){

	FILE *fp;
	char str;
	float fl;

	fp = fopen("/Users/abe/Programming/c/file_io/test.bin", "wb");
	char x[10] = "ABCDEFGHIJ";

	/* WRITE TO TEST.BIN */
	fwrite( x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), fp);

	/* READ FROM TEST.BIN */
	fread( &x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), fp);

	/* STRIP NEWLINE */
	strip_newline( x, sizeof(x[0]));

	/* PRINT RESULTS */
	fl = sizeof(x)/sizeof(x[0]);
	printf("sizeof(x) = %lu\n", sizeof(x));
	printf("sizeof(x[0]) = %lu\n", sizeof(x[0]));
	printf("sizeof(x)/sizeof(x[0]) = %f\n", fl);
	printf("x = %s\n", x);

	fclose(fp);
}