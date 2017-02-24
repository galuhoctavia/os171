/*
 * Name: Galuh Octavia C.
 * NPM: 1506757844
 * Class: OS-D
 * Comment: kinda fun
 */

#define LOOP 3

#include <stdio.h>

void main() {
	int input = 3;
	int ii,jj;
	int count = 0;

	// TO DO implement me!!
	for(ii = 0 ; ii < input; ii++ ){
		for(jj = 0 ; jj < LOOP; jj++ ){
			count++;
		}
	}
	printf("%d times %d equals %d", input , LOOP, count );
}
