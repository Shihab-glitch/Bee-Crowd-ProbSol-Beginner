#include <stdio.h>
int main()
{
	int N, Hun, Fif, Twen, Ten, Fiv, Two, One;
	scanf("%d", &N);
	printf("%d\n", N);
	Hun = N/100;
	printf("%d nota(s) de R$ 100,00\n", Hun);
	Fif = (N%100)/50;
	printf("%d nota(s) de R$ 50,00\n", Fif);
	Twen = (((N%100)%50)/20);
	printf("%d nota(s) de R$ 20,00\n", Twen);
	Ten = ((((N%100)%50)%20)/10);
	printf("%d nota(s) de R$ 10,00\n", Ten);
	Fiv = (((((N%100)%50)%20)%10)/5);
	printf("%d nota(s) de R$ 5,00\n", Fiv);
	Two = ((((((N%100)%50)%20)%10)%5)/2);
	printf("%d nota(s) de R$ 2,00\n", Two);
	One = (((((((N%100)%50)%20)%10)%5)%2));
	printf("%d nota(s) de R$ 1,00\n", One);
	return 0;
}

