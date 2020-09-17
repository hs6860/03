#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	
	printf("input a numirator :");
	scanf("%d", &b);
	
	printf("input a denominator :");
	scanf("%d", &a);
	
	
	printf("%d / %d = %f\n", b, a, (float)b/a);
	
	return 0;
}
