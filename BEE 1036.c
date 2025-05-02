#include <stdio.h>
#include <math.h>
int main()
{
	double A, B, C;
	scanf("%lf %lf %lf", &A, &B, &C);
	if ((B*B - 4*A*C)>0 && A>0 && C>0)
	{printf("R1 = %.5lf\nR2 = %.5lf\n", ((-B+sqrt(B*B - 4*A*C))/(2*A)), ((-B-sqrt(B*B - 4*A*C))/(2*A)));}
	else {printf("Impossivel calcular\n");}
	return 0;
}
