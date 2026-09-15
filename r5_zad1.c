#include <stdio.h>
#include <inttypes.h>
#include <string.h>

const int minuta_stala = 60;

int main(void)

{
	printf("Wpisz liczbe minut\nProgram przeliczy je na godziny+minuty\n");
	int wpisane=1;
	while(wpisane>=0)
	{
		scanf(" %d", &wpisane);
		
		if(wpisane<0)
		{
		printf("Minuty NIE moga byc mniejsze od zera!");
		break;
		}
		
		int minuty = wpisane % minuta_stala;
		int godziy = wpisane / minuta_stala;
		printf("%d minut to:\n%d godzin\n %d minut", wpisane, godziy, minuty);
	}
	
	printf("KONIEC");
	
}
