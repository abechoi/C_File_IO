/*
	TYPECAST:
	1. Typecast an int to char to see ASCII code
	2. Typecast an int to float to divide accurately
	3. fputc function implicitly casts i to a char
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int age = 32;
	int visits = 2;
	float ans;

	FILE *fp = malloc(sizeof(fp));
	fp = fopen("/Users/abe/Programming/c/file_io/typecast.txt", "w");

	/* casts 65 as a char. Output = A */
	printf("%c\n", (char)65);

	/* shows ascii chart up to 128 */
	for( int i = 0; i < 128; ++i ){
		printf( "%d = %c\n", i, (char)i );

		fputc( i, fp); // fputc automatically casts i to a char
	}

	/* typecast else integers will be divided to 0 */
	ans = visits / (float)age;
	printf("%f\n", ans);


	return 0;
}