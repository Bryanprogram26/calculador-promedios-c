#include <stdio.h>

int main () {
	float calificacion1, calificacion2, calificacion3, suma, total;
	printf("bienvenido a la calculadora de promedios \n ingresa tus calificaciones en numeros del 0-10\n");
	printf("ingresa tu primer nota:");
	scanf("%f", &calificacion1);
	while (calificacion1 < 0 || calificacion1 > 10) {
		printf("!Error! la nota debe estar entre 0 y 10.\n");
		printf("intenta nuevamente:");
		scanf("%f", &calificacion1);
	}
	printf("ingresa tu segunda nota:");
	scanf("%d", &calificacion2);
	while (calificacion2 < 0 || calificacion2 > 10) {
		printf("!Error! la nota debe estar entre 0 y 10.\n");
		printf("intenta nuevamente:");
		scanf("%f", &calificacion2);
	}
	printf("ingresa tu tercer nota:");
	scanf("%f", &calificacion3);
	while (calificacion3 < 0 || calificacion3 > 10) {
		printf("!Error! la nota debe estar entre 0 y 10.\n");
		printf("intenta nuevamente:");
		scanf("%f", &calificacion3);
	}
	suma = calificacion1 + calificacion2 + calificacion3;
	total = suma / 3;
	printf("tu calificacion es: %.2f\n", total);
	if (total == 10) {
		printf("increible,calificacion perfecta");
	} else if (total >= 9) {
		printf(" muy bien, casi perfecto");
	} else if (total < 9 && total >= 8) {
		printf("lo hiciste bien, sigue asi");
	} else if (total < 8 && total >= 7) {
		printf("aprobaste pero puede mejorar");
	} else if (total < 7 && total >= 6) {
		printf("aprobaste, pero tienes que mejorar");
	} else {
		printf("reprobaste, tienes que estudiar mas");
	} return 0;
}