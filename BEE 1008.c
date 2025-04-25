#include <stdio.h>
int main()
{
	int NUMBER, hours;
	float pay;
	scanf("%d %d %f", &NUMBER, &hours, &pay);
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, (hours*pay));
	return 0;
}
	
