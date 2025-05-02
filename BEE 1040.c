#include <stdio.h>
int main()
{
	float a, b, c, d, l, m;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	l = ((a*2+b*3+c*4+d*1)/10);
	printf("Media: %.1f\n", l);
	if (l>=7.0)
	{printf("Aluno aprovado.\n");}
	else if (l>=5.0 && l<=6.9)
	{
		printf("Aluno em exame.\n");
		scanf("%f", &m);
		printf("Nota do exame: %.1f\n", m);
		if (((l+m)/2)>=5.0)
		{printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", ((l+m)/2));}
		else {printf("Aluno reprovado.\n");}
	}
	else if (5.0>l)
	{printf("Aluno reprovado.\n");}
	return 0;
}
