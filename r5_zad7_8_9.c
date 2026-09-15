#include <stdio.h>
#include <inttypes.h>
#include <string.h>

float zad7(float x);
int zad8(void);


int main(void)

{
	uint8_t wybor;
		do
		{
			printf("0. Wyjcie\n1. zad 7 - przekazanie liczby i podniesienie jej do 3 potegi\n2. zad 8 - ustawienie stalej liczby z ktorej bedzie licza reszta (modulo) wpisanej\n3. zad 	9 - temperatura z celsjuszy jest zmienana na farenheity i keliwny\nWybierz opcje\n");
			scanf(" %hhu", &wybor);
			
			switch(wybor)
			{

				default:
				{
					printf("Wyjscie\n");
					break;
				}
				
				case 0: 
				{
					printf("Wyjscie!");
					break;
				}
				
				case 1: 
				{
					printf("Wpisz liczbe jaka ma zostac podniesiona do potegi 3\n");
					float liczba;
					scanf("%f", &liczba);
					zad7(liczba);
					break;
				}
				
				case 2: 
				{
					printf("Liczy reszte z dzielenia liczby przez stala(0 zakonczy program)");
					zad8();
					break;
				}
				
				
			}
		}while(wybor!=0);
	}	

float zad7(float x)
{
	return printf("%f do potegi 3 to - %f\n", x, x*x*x);
}

int zad8(void)
{
	int x, y=1;
	// x - stala 
	// y - zmienna 
	printf("Wpisz STALA\n");
	scanf("%d", &x);	
	while(y>0 && x>0)
	{
		printf("Wpisz zmienna");
		scanf("%d", &y);
		
		printf("%d %% %d to %d\n", y, x, (int) y% (int) x);
	}
	
	return printf("Koniec programu (petli)");
}
