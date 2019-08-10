/*
	COMMAND LINE ARGUMENTS:
	1. Usage: "$./a.out test.txt" outputs the contents of test.txt
	2. If there are 2 command line args, print error message
	3. argv[0] = commandline_args.c
	4. argv[1] = test.txt
	5. file == 0 if fopen does not find it's file.
*/
#include <stdio.h>


int main( int argc, char *argv[]){

	// Only 1 argument should be used on the command line.
	if( argc != 2 ){

		printf( "usage: %s filename\n", argv[0] );
	}
	else{

		// argv[1] is assumed to be a filename
		FILE *file = fopen( argv[1], "r" );

		// file is 0 if fopen fails
		if( file == 0 ){
			printf("Could not open file\n");
		}
		else{

			int x;

			// WHILELOOP1 - print file by character
			while( (x = fgetc(file)) != EOF ){
				printf("%c", x );
			} // END WHILELOOP
			fclose( file );
		}
	}
} // END MAIN