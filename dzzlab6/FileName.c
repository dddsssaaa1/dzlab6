#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, ".UTF8");
	float x, y;
	printf("Введите x,y:\n");
	scanf("%f", &x);
	scanf("%f", &y);

	if ((x >= 0 && y >= 0 && ((x * x) / 16.0 + (y * y) / 9.0 <= 1.0)) ||
		(x >= 0 && y < 0 && (x * x + y * y <= 16.0))) {
		printf("Точка (%.2f, %.2f) лежит в заданой области", x, y);
	}
	else {
		printf("Точка  (%.2f, %.2f) не лежит в заданой области", x, y);
	}
}
