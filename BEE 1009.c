#include <stdio.h>
int main()
{
	char A;
	double B, C, TOTAL;
	scanf("%s %lf %lf", &A, &B, &C);
	TOTAL = (B+C*0.15);
	printf("TOTAL = R$ %.2lf\n", TOTAL);
	return 0;
} 
