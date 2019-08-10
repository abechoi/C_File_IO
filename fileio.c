/*
	FILE IO:
	1. fopen, fprintf, fscanf, fgetc, fputc
	2. fopen modes:
		r - open for reading
		w - open for writing
		a - open for appending
		r+ - open for reading and writing, start at beginning
		w+ - open for reading and writing (overwrite file)
		a+ - open for reading and writing (append if file exists)
*/

#include <stdio.h>

void strip_newline(char *str, int size){
	for( int i = 0; i < size; ++i ){
		if( str[i] == '\n') // \n = newline
			str[i] = '\0';  // \0 = null terminator
	}
}

int main(){

	FILE *fp;
	char c;

	// WRITE TO TEST.TXT
	fp = fopen("/Users/abe/Programming/c/file_io/test.txt", "rw+" );
	fprintf( fp, "Testing...\n" );

	// READ FROM TEST.TXT
	// Print by character until fgetc points to EOF
	while( (c = fgetc(fp)) != EOF ){
		printf("%c", c);
	}

	printf("EOF = %d\n", EOF); // EOF = -1

	fclose(fp);
	return 0;
}// END MAIN