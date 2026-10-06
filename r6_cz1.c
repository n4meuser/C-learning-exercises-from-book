#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <inttypes.h>

char zad1(void);
void zad2(void);
void zad3(void);
void zad4(void);
void zad5(double x, double y);
void zad6(unsigned int x, unsigned int y);


int main(void)

{
	int8_t wybor;	
	do 
	{
		printf("Zadania z rozdzialu 6\n0. Wyjscie\n1. Tworzenie tablicy 5 elemenotwej i przechowywanie w niej liter\n2. Wzory utworzone przez 2 petle w sobie\n");
		printf("3. Program wyswietla liczbe, jej kwadrat i jej szescian\n");
		scanf("%hhd", &wybor);
		
		switch(wybor)
		{
			case 0: 
			{
				printf("Wyjście z programu - wybor 0\n");
				break;
			}
			
			case 1: 
			{
				zad1();
				break;
			}
			
			case 2: 
			{
				zad2();
				break;
			}
			
			case 3: 
			{
				zad3();
				break;
			}
			
			case 4: 
			{
				zad4();
				break;
			}
			
			case 5: 
			{
				double l1, l2;
				printf("Wpisz dwie liczby (zmiennoprzecinkowe) a program wyswietli ich roznice podzieloną przez iloczny\nWzor: liczba 1 (spacja) liczba 2\nProgram zakończy dzialanie, gfdy podana wartosc NIE bedzie liczba\n");
				zad5(l1, l2);
			break;
			}
			
			case 6: 
			{
				unsigned int l1, l2;				
				printf("Wpisz dwie liczby po spacji pierwsza dla przedzialu gornego a druga dla przedzialu dolnego\nZostanie obliczony kwadrat tych liczb i suma wartosci miedzy nim\n");		
				scanf("%u %u", &l1, &l2);
				while(l2>l1)
				{
					zad6(l1, l2);
					scanf("%u %u", &l1, &l2);
				}
				break;
			}
			
			default: 
			{
				printf("Błąd składni");
				break;
			}
		}
	}while(wybor);
	
	printf("Program konczy dzialanie\n");
}

// ---------------------------------------------
char zad1(void)
{
	char tablica[5];
	for(int8_t i=0; i<5;i++)
	{
		printf("Wpisz litere [%hhd]", i+1);
		scanf(" %c", &tablica[i]);
	}
	
	return printf("%s", tablica);
}

// ---------------------------------------------
void zad2(void)
{
	// WZOR 1

	// ############################################
	for(int8_t i=1; i<=5;i++)
	{
		for(int8_t j=0;j<i;j++)
		{
			printf("$");
		}
		printf("\n");
	}
	// ############################################
	// WZOR 2
	// ############################################
		
	for(int8_t i=1;i<=6;i++)
	{
		for(int8_t j=0;j<i;j++)
		{
			printf("%c", 70-j);
		}
		
		printf("\n");
	}
	
	// ############################################
	// WZOR 3
	// ############################################
	
	int kod=65;
	
	for(int8_t i=1;i<=6;i++)
	{
		for(int8_t j=0;j<i;j++)
		{
			printf("%c",kod);
			kod+=1;
		}
		printf("\n");
	}
}
// ---------------------------------------------

void zad3(void)
{
	int gora, dol;
	printf("Okres glorna granice\n");
	scanf("%d", &gora);
	printf("Okresl dolna granice\n");
	scanf("%d", &dol);
	int l=dol;
	
	for(int i=dol;i<=gora;i++)
	{
		printf("Liczba: %d, kwadrat: %d, Szescian: %d", l, l*l, l*l*l);
		printf("\n");
		l+=1;
	}
}

void zad4(void)
{
	int minus=0;
	printf("Program wyswietla wpisane slowo wspak\nWpisz slowo\nMAX 10 znakow!\n");
	char wpisane[10];
	scanf("%9s", wpisane);
	char po[strlen(wpisane)];	
	
	printf("Twoje slowo to %s\n", wpisane);
	
	for(int8_t i=0;i<strlen(wpisane);i++)
	{
		po[i]=wpisane[strlen(wpisane)-1-minus];
		minus+=1;
	}
	
	printf("PO: Twoje slowo to %s\n", po);
}

void zad5(double x, double y)
{
	while(scanf("%lf %lf", &x, &y)==2)
	{
		printf("Wynik: %lf\n", (x-y)/(x*y));
	}
	printf("KONIEC\n");
}

void zad6(unsigned int x, unsigned int y) // x dol, y gora
{
	int kw;
	int sum=0;
	for(int i=x;i<=y;i++)
	{
		kw=i*i;
		sum+=kw;
	}
	
	printf("suma %u i %u wynosi %d", y, x, sum);
}

