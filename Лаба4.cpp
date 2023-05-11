#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>



void main() {
	setlocale(LC_ALL, "Russian");
	char nom;
	char s1[81], s2[81];
	int n;
	char c;
	do {
		system("cls");
		puts("Введите строку №1");
		gets_s(s1);
		puts("Введите строку №2");
		gets_s(s2);
		puts("___________________________________");
		puts("Выберите номер пункта меню:");
		puts("1 - Длина первой строки");
		puts("2 - Сравнение двух строк");
		puts("3 - Сравнить первые n символов двух строк");
		puts("4 - Копировать строку s2 в s1");
		puts("5 - Копировать n символов строки s2 в s1");
		puts("6 - Cцепить две строки s1 и s2");
		puts("7 - Cцепить две строки s1 и s2, причем из второй строки копировать не более n символов");
		puts("8 - Найти в строке s первое вхождение символа c");
		puts("___________________________________");
		nom = _getche();
		fflush(stdin);
		switch (nom) {
		case '1': printf("\nДлина первой строки = %d", strlen(s1)); break;
		case '2': printf("\nКод сравнения = %d", strcmp(s1, s2)); break;
		case '3': scanf("%d", &n); printf("Сравнение первые %d символов двух строк = %d", n, strncmp(s1, s2, n)); break;
		case '4': puts("\nКопирование строку s2 в s1 = ");puts(strcpy(s2, s1)); break;
		case '5': scanf("%d", &n); printf("Копирование %d символов строки s2 в s1 = ", n); puts(strncpy(s1, s2, n)); break;
		case '6': printf("\nCцепление две строки s1 и s2 = "); puts(strcat(s1, s2)); break;
		case '7': scanf("%d", &n); printf("Cцепktybt две строки s1 и s2, причем из второй строки копировать не более %d символов = ", n); puts(strncat(s1, s2, n)); break;
		case '8': scanf("%c", &c); printf("Копирование %d символов строки s2 в s1 = ", n); puts(strchr(s1, c)); break;
		default: puts("\nНужно ввести номер от 1 до 11");
		}
		if (nom != '11') {
			puts("\nДля продолжения нажмите любую клавишу");
			_getch();
		}
	} while (nom != '3');
	

}