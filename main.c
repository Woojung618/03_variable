#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input_int; float input_float;
	printf("enter integar : ");
	scanf("%d",&input_int);
	printf("enter float : ");
	scanf("%f",&input_float);
	
	printf("intergar : %d, float : %f",input_int, input_float);
	return 0;
}
