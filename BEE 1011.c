#include <stdio.h>
int main()
{
	int r;
	double VOLUME;
	scanf("%d", &r);
	VOLUME = (4/3.0)*(3.14159*r*r*r);
	printf("VOLUME = %.3lf\n", VOLUME);
	return 0;
}
