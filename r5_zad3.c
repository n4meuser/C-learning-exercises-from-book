#include <stdio.h>
#include <inttypes.h>

const int tydzien = 7;
const float Cal_1 = 2.54;

void opcja1(void);
void opcja2(void);

int main(void)
{
	printf("0. WYJSCIE\n1. dni w tygodnie i dni\n2. wzrost\n");
	uint8_t wybor; 
	scanf("%hhu", &wybor);
	if(wybor==0)
	{
		printf("WYJSCIE");
	}
	
	if(wybor>0 && wybor<=2)
	{
		switch(wybor)
		{
			case 1:
			{
				opcja1();
				break;
			}
			
			case 2: 
			{
				opcja2();
				break;
			}
			
			default:
			{
				printf("Nieprawidlowa opcja");
				break;
			}
		}
	}
	
	printf("KONIEC");
}

void opcja1(void)
{
	printf("Wpisz liczbe dni\nZostana one zamienione na tygodni i dni");
	int wartosc=1;
	
	while(wartosc!=0 && wartosc!=-20)
	{
		scanf("%d", &wartosc);
		
		int tyg = wartosc/tydzien;
		int dni = wartosc%tydzien;
		
		printf("%d dni to %d tygodni i %d dni\n", wartosc, tyg, dni);
	}
}

void opcja2(void)
{
	printf("Wpisz swoj wzrost w cm\nZostanie podany w calach i stopach\n");
	float wzrost=1;
	
	while(wzrost>0)
	{
		scanf("%f", &wzrost);
		int stopy = wzrost / (12*Cal_1);
		float cale = wzrost * Cal_1;
		
		printf("Twoj wzrost to %d stóp i %.2f cali", stopy, cale);
	}
	
	printf("koniec");
}
