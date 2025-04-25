#include <stdio.h>
int main()
{
	int N, m, h, s;
	scanf("%d", &N);
	h = (N/3600);
	m = ((N%3600)/60);
	s = ((N%3600)%60);
	printf("%d:%d:%d", h, m, s);
	return 0;
}
