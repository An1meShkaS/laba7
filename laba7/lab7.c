#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
int zadanie1(){

	char c;
	printf("Введите символы 'a' or 'b': ");
	scanf("%c", &c);
	switch (c)
	{
	case 'a':
		printf("Введено 'a'.\n");
		break;
	case 'b':
		printf("Введено 'b'.\n");
		break;
	default:
		printf("Неизвестный символ\n");
	}
	return 0;
}
int zadanie12(){
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);
    switch (c)
    {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        printf("Это цифра\n");
        break; 
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
    case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
    case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u':
    case 'v': case 'w': case 'x': case 'y': case 'z':
    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G':
    case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N':
    case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U':
    case 'V': case 'W': case 'X': case 'Y': case 'Z':
        printf("Это буква\n");
        break;
    default:
        printf("Это другой символ\n");
        break;
    }
    return 0;
}
int zadanie2(){
    float x, y;
    char c;
    printf("Введите выражение : ");
    scanf("%f%c%f", &x, &c, &y);
    switch (c)
    {
    case '+':
        printf("Результат: =%f\n", x + y);
        break;

    case '-':
        printf("результат: =%f\n", x - y);
        break;

    case '*':
        printf("Результат: =%f\n", x * y);
        break;

    case '/':
        if (y != 0) {
            printf("Результа: =%f\n", x / y);
        }
        else {
            printf("на ноль нельзя делить\n");
        }
        break;
    case '^':
        printf("Результат: =%f\n", pow(x, y));
        break;
    default:
        printf("неизвестная операция '%c'\n", c);
        break;
    }
    return 0;
}
int zadanie3() {
    char c;
    printf("Нажмите любую цифровую клавишу (0-9): ");
    c = getch();
    printf("\n");
    switch (c)
    {
    case '0': printf("Нажата цифра 0\n"); break;
    case '1': printf("Нажата цифра 1\n"); break;
    case '2': printf("Нажата цифра 2\n"); break;
    case '3': printf("Нажата цифра 3\n"); break;
    case '4': printf("Нажата цифра 4\n"); break;
    case '5': printf("Нажата цифра 5\n"); break;
    case '6': printf("Нажата цифра 6\n"); break;
    case '7': printf("Нажата цифра 7\n"); break;
    case '8': printf("Нажата цифра 8\n"); break;
    case '9': printf("Нажата цифра 9\n"); break;
    default:
        printf("Ошибка: нажатая клавиша '%c' не является цифровой!\n", c);
        break;
    }
    return 0;
}
int main() {
    setlocale(LC_ALL, ".UTF8");
    //zadanie1();
    //zadanie12();
    //zadanie2();
    zadanie3();
}