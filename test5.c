#include <stdio.h>

int main()
{
	// X	y	A	O	X	N
	//=========================
	//1		1	1	1	0	0
	//1		0	0	1	1	0
	//0		0	0	1	1
	//0		1	0	0	1
	int x, y;
	int A, O, X, N;
	printf("X	y	A	O	X	N\n");
	printf("=============================================\n");
	x=1, y =1;
	printf("%d	%d	%d	%d	%d	%d\n", x, y, x&&y, x||y, x^y, !x);
	x=1, y =0;
	printf("%d	%d	%d	%d	%d	%d\n", x, y, x&&y, x||y, x^y, !x);
	x=0, y =0;
	printf("%d	%d	%d	%d	%d	%d\n", x, y, x&&y, x||y, x^y, !x);
	x=0, y =1;
	printf("%d	%d	%d	%d	%d	%d\n", x, y, x&&y, x||y, x^y, !x);
	return 0;
	
}
