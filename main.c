#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x; short y; char w; double d; float f;
	printf("bytes of int : %d\n",sizeof(x));
	printf("bytes of short : %d\n",sizeof(y));
	printf("bytes of char : %d\n",sizeof(w));
	printf("bytes of double : %d\n",sizeof(d));
	printf("bytes of flaot : %d\n",sizeof(f));
	return 0;
}
