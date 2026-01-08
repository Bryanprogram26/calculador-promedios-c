#include <stdio.h>

int main () {
	int calificacion1, calificacion2, calificacion3, suma, total;
	printf("bienvenido a la calculadora de promedios \n ingresa tus calificaciones en numeros del 1-100\n");
	printf("ingresa tu primer nota:");
	scanf("%d", &calificacion1);
	if (calificacion1 < 0 || calificacion1 > 100) {
		printf("solo numeros del 0-100\n");
		printf("ingresa ru primer nota:");
		scanf("%d", &calificacion1);
	}
	printf("ingresa tu segunda nota:");
	scanf("%d", &calificacion2);
	if (calificacion2 < 0 || calificacion2 > 100) {
		printf("solo numeros del 0-100\n");
		printf("ingresa tu segunda nota:");
		scanf("%d", &calificacion2);
	}
	printf("ingresa tu tercer nota:");
	scanf("%d", &calificacion3);
	if (calificacion3 < 0 || calificacion3 > 100) {
		printf("solo numeros del 0-100\n");
		printf("ingresa tu tercer nota:");
		scanf("%d", &calificacion3);
	}
	suma = calificacion1 + calificacion2 + calificacion3;
	total = suma / 3;
	printf("tu calificacion es: %d\n", total);
	if (total == 100) {
		printf("increible,calificacion perfecta");
	} else if (total >= 90) {
		printf(" muy bien, casi perfecto");
	} else if (total < 90 && total >= 80) {
		printf("lo hiciste bien, sigue asi");
	} else if (total < 80 && total >= 70) {
		printf("aprobaste pero puede mejorar");
	} else if (total < 70 && total >= 60) {
		printf("aprobaste, pero tienes que mejorar");
	} else {
		printf("reprobaste, tienes que estudiar mas");
	} return 0;

}
