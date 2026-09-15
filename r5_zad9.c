#include <stdio.h>


void temperatura(double x);

int main(void)

{
	printf("Program ma za zadanie przeliczyć wartość temperatury w Farenheitach podaną przez użytkownika na stopnie w:\n- Celcjuszach\n- Kelwinach\nWpisz temperature jaka chcesz zamienić:\n");
	double F; // wartosc wejsciowa - farenheit
	while(scanf(" %lf", &F)==1 && F != 0)
	{
		temperatura(F);
	}
	
	char bufor_litrera; 
	// jesli warunek z while nie został spełniony
	// tworze char'a i potem wczytuje go w scanf
	if(scanf(" %c", &bufor_litrera)==1 && F != 0) // jesli scanf to znakiem nie-biały (w tym przypadku litera bo poza whilem) i jesli scanf NIE jest 0 (bo tez while nie spelnia F=0) to jest komunikat o literze
	{
		printf("Nie mozesz wpisac litery\n");
	}
	// jesli różne od 0 i nie jest litera nie jest prawdą (czyli F to 0) to wykonuje else
	else 
	{
		printf("Koniec programu");
	}	
}

void temperatura(double x)
{
	const double stala_c = 5.0/9.0;
	const double stala_k = 273.16;
	// stałe
	
	
	double c = stala_c * (x-32.0);
	double k = c + stala_k;
	printf("Temperatura w Farenheitach - %.2lf\nTemperatura w Celcjuszach - %0.2lf\nTemperatura w Kelwinach - %.2lf\n", x, c, k);
}

// SPACJA PRZED WCZYTYWANIEM ZNAKO W PRINTF
// POZWALA NA UNIKNIECIE WCZYTANIA ZNAKU BIALEGO Z BUFORA 
// a to a+0 (czyli dwa znaki) i w pamieci zostaje pierwszy i jako pierwszy  bedzie wczytywany z bufora
// czyli znak bialy \n

// dla float i double (zmienno przecinkowe)
// należy dodawać (jesli wartość nie ma nawet nic po przecinku) .0 
// np. wpisanie 5 należy wpisac jako double liczba 5.0;