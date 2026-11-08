#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

void zad1(void);
void zad2(void);
void zad3(void);
void zad4(void);
void zad5(void);
void zad6(void);
void zad7(void);
void zad8(void);


int main(void)

{
	uint8_t opcja;
	do
	{
		printf("\nWybierze opcje\n0. wyjscie\n1. Wpisz 8 liczb po czym zostana one wyswietlone w wpisanej kolejnosci i wspak\n2. Program liczy dwa podane szeregi\n3. Liczenie poteg od 2^0...2^8\n4. Wpisz 8 liczb i po prawej stronie zostanie wyswietlona suma wszystkich poprzednich wpisanych liczb\n5. Pobierz slowo i wyswietl je wspak (do 255)\n6. Program porównuje procent prosty i składany \n7. Osoba ulokowala 1 mln na koncie 8%% i co roku wyplaca 100 tys. po jakim czasie bedzie miec 0 na koncie\n8. Obliczenie liczby Dunbara dla kogoś kto zaczynał z 5 znajomych, tracił co n-ty tydzień n osób i zyskiwał dwukrotność\n");
		scanf("%hhd", &opcja);
		switch (opcja) 
		{
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
				zad5();
				break;
			}
			
			case 6: 
			{
				zad6();
				break;
			}
			
			case 7: 
			{
				zad7();
				break;
			}
			
			case 8: 
			{
				zad8();
				break;
			}
			case 0: 
			{
				printf("Program zakończył działanie\n");
				break;
			}
			default: 
			{
				printf("Bład składni");
				break;
			}
		}
	}while(opcja);
}

void zad1(void)
{
	printf("Możesz wpisać osiem liczb\n");
	int8_t tab[8];
	int wpisane;
	for(int8_t i=0;i<8;i++)
	{
		printf("wpisz liczbe [%hhd]\n", i+1);
		scanf(" %d", &wpisane);
		tab[i]=wpisane;
	}
	
	// wpisuje liczby z klawiatury do tablicy
	
	printf("Po wpisaniu (wspak) wyglada tak:\n");	
	for(int8_t i=7;i>=0;i--)
	{
		printf("%d", tab[i]);
	}
	
	printf("\nPrzed wpisaniem\n:");
	for(uint8_t i=0;i<8;i++)
	{
		printf("%d", tab[i]);
	}
}

void zad2(void)
{
	printf("Program liczy wartości następujących szeregów\n+ 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...\n- 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...\n4. Wpisanie do jednej tablicy 8 cyfr a druga tablica pokazuje sume wyrazow poprzednich\nZeby wyjsc wpisz -1\n");
	int wybor=0;
	double suma1=0, suma2=0;
	
	while(wybor!=-1)
	{
		scanf(" %d", &wybor);
		
		if(wybor==-1)
		{
			printf("Wyjscie\n");
		}
		
		else 
		{
			
		for(int i=1; i<=wybor;i++)
		{
			suma1+= 1.0/i;
		}
		
			printf("Suma pierwszego ciagu wynosi %f\n", suma1);
			suma1=0; // zerowanie po tym jak wyswietli wynik
		
			for(int i=1;i<=wybor;i++)
			{
				if(i%2==0)
				{
					suma2-=1.0/i;
				}
				
				else 
				{
					suma2+=1.0/i;
				}
			}
	
			printf("Suma drugiego ciagu wynosi %f\n", suma2);
			suma2=0;
		}
	}
	
}

void zad3(void)
{
	int tab[9];
	int s=1;
	uint8_t check=0;
	for(int8_t i=1;i<9;i++)
	{
		printf("2^%hhd",i);
		do 
		{
			s = s*2;
			printf(" %d\n", tab[i]=s);
			check++; // check sie zwieksza bo petla sie skocnzy, kiedy check bedzie rowny 9
		}while(check<i);
	}
}

void zad4(void)
{
	double tab[8];
	double tab2[8];
	double w;
	double sum=0;
	for(uint8_t i=0;i<8;i++)
	{
		scanf("%lf", &w);
		tab[i]=w;
	}
	
	for(uint8_t i=0;i<8;i++)
	{
		sum+=tab[i];
		tab2[i]=sum;
		printf("%g a sum to %g\n", tab[i], tab2[i]); // wg tresci zadania musza byc dwie tablice
		
	}
	}
	
	void zad5(void)
	{
		char tab1[256]; // max 255 znakow czyli 255+\0 to 256
		char tab2[256];
		printf("Wpisz slowo, max 255 znakow!\n");
		scanf(" %255s", tab1); // wpisanie max 255 slow ograniczone
		printf("slowo %s\n", tab1);
		int index=strlen(tab1)-1;
		// strlen zwraca liczbe liter w slowie np.
		// kot
		// tablica to 0...2 
		// 0 - k, 1 - o, 2 - t
		// jako strlen 
		// wyliczy liczbe liter w slowie kot: 3 litery
		// wiec index=strlen(tab1) to index=3
		// dla slowa kot NIE MA indeksu 3
		for(unsigned int i=0;i<strlen(tab1);i++)
		{
			if(tab1[i]!='\0')
			{
				tab2[index]=tab1[i];
				index--;
			}
			else 
			{
				break;
			}
		}
		
		printf("wspak: %s\n", tab2);
	}
	
	void zad6(void)
	{
		printf("Po ilu latach osoba inwestujaca procent skladany ma wiecej niz ta inwestujaca procent prosty");
		unsigned int kwota;
		scanf(" %u", &kwota);
		double sum1=kwota, sum2=kwota; // sum1 Ewa, sum2 Kasia
		int rok=0;
		
		do 
		{
			sum1+=kwota*(10.0/100);
			sum2*=1.05;
			rok++;
		}while(sum1>sum2);
		printf("Po %d latach Kasia ma wiecej pieniedzy niz Ewa\n", rok);
	}
	
	void zad7(void)
	{
		float start=1000000;
		int rok=0;
		do 
		{
			float sum=0;			
			sum+=start*(8.0/100);
			start+=sum;
			start-=100000;
			rok++;
		}while(start>0);//!!!!
		printf("Po %d latach ma 0\n", rok);
	}
	
	void zad8(void)
	{
		int znajomi=5, tydzien=0;
		
		while (znajomi<150)
		{
			tydzien++;
			znajomi-=tydzien;
			znajomi*=2;
		}
		// tydzien w petli przyjmuje 1 
		// wykonuje kod dla 1 powtorzenia
		// potem 2
		// wykonuje kod
		// ...
		// do momentu warunku
		printf("W %d tygodniu przekroczono liczbę Dunbara.\n", tydzien);
		
	}
