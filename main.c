#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a;

	printf("input an alphabet :");
	scanf("%c", &a);
	
	
	printf("input an alphabet is %c (%d), and the next on is %c (%d)\n", a, a, a+1, a+1);
	
	return 0;
}
