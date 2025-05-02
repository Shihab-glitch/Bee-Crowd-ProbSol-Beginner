#include <stdio.h>
int main()
{
	int D, y, m, d;
	scanf("%d", &D);
	y = D/365;
	printf("%d ano(s)\n", y);
	m = (D%365)/30;
	printf("%d mes(es)\n", m);
	d = ((D%365)%30);
	printf("%d dia(s)\n", d);
	return 0;
}
