#include <stdio.h>
int main() {
	int n, repetir, i2;
	do {
	printf("Bienvenido a las tablas de multiplicar\n");
	printf("que tabla quieres conocer:");
	scanf("%d", &n);
	printf("cuantas tablas quieres conocer:");
	scanf("%d", &i2);
	for(int i=1; i <= i2; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	} printf("quieres volver a usar el programa? (1 para si y 0 para no) ");
	scanf("%d", &repetir);
	} while (repetir == 1);
	return 0;
}