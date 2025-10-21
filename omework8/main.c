#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	task3();
}
int task3()
{
	int N;
	double sum = 0.0;
	double cursin = 0.0;

	printf("Введите знаяение N: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		cursin += sin(i);
		sum += 1.0 / cursin;
	}
	printf("Результат: %lf\n", sum);
	getchar();
	getchar();
}