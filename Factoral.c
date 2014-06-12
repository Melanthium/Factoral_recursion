#include <stdio.h>
#include <conio.h>
#include <locale.h>

// Создаем функцию для вычисления факториала
int factoral(int N)
{
	if (N == 0) // Если введенное число равно 0 то функция вернет 1, т.к. факториал 0 равен 1
		return 1;
	else // Иначе данное число умножаем на функцию factoral() которой передаем наше значение уменьшенное на 1, в итоге у нас функция выведит наш факториал
		return N * factoral(N-1);
}

void main()
{
	int N, a, i;

	setlocale(LC_ALL,"Russian");

	printf("Вычисление факториала без рекурсии.\n");
	printf("Введите число: ");
	scanf("%d", &N);

	printf ("%d ", factoral(N)); // выводим значние функции factoral() которой передаем введенное наше число

	_getch();
}
