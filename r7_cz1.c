#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>

void zad1(void);
void zad2(void);
void zad3(void);
void zad4(void);

int main(void)
{
    uint8_t wybor=1;    
    while(wybor !=0)
    {
        printf("Zadania z rozdzialu 7, część 1.\n0. Wyjscie\n1. Zadanie pierwsze\n2. Zadanie 2\n3. Zadanie 3\n4. Zadanie 4\nDo każdego zadania po wybraniu opcji jest opis\n");
        
        scanf(" %hhu", &wybor);
        
        switch (wybor)
        {
            case 0:
            {
                printf("Wyjscie\n");
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
            
            default:
            {
                printf("Blad skladni\n");
                break;
            }
        }
    }
    
    printf("KONIEC\n");
}

void zad1(void)
{
    printf("Program wczytuje ciąg znaków do momentu wpisania # po czym pokazuje liste wpisanych spacji, znakow nowej linii, kropek i przecinków wraz z liczba liter i kodami ASCII w wierszu co 8 litere\n");
    
    uint8_t suma=0;
    uint8_t suma_2=0;
    char slowo;
    getchar(); // czyści bufor
    while((slowo=getchar())!= '#')
    {
        if(slowo == ' ' || slowo==',' || slowo=='.' || slowo == '\n')
        {
            suma++;
        }
        else 
        {
            suma_2++;
            if(suma_2 % 8 == 0)
            {
                printf(" %hhu",slowo);                
                printf("\n");
            }
            else 
            {
                printf(" %hhu",slowo);
                
            }
        }
    }
    
    printf("\nSuma innych znaków wynosi %hhu\nSuma liter %hhu\n", suma, suma_2);
}

void zad2(void)
{
    printf("Program pobiera liczby (calkowite) do momentu wpisania 0 oraz wyswietla srednia liczb parzystych");
    int ilosc_przystych=0;
    int suma_parzystych=0;
    int liczba;
    while(scanf(" %d", &liczba)==1)
    {
        if(liczba ==0)
        {
            printf("Wpisales 0\n");
            break;
        }
        else if(liczba % 2 == 0)
        {
            ilosc_przystych++;
            suma_parzystych+=liczba;
        }
    }
    
        printf("Srednia liczb parzystych %d\n", suma_parzystych / ilosc_przystych);        
}

void zad3(void)
{
    printf("Program wczytuje zdanie do momentu napotkania # i zamienia wykrzyknik dwoma wykrzyknikami a kropke wykrzyknikiem\n1) Przy pomocy if-else\n2) Switchami\n");
    
    char slowo;
    char slowo2;
    printf("Dla else if:\n");
    getchar(); // czysci bufor
    while((slowo=getchar()) != '#')
    {
        if(slowo== '!')
        {
            printf("!!");
        }
        else if(slowo== '.')
        {
            printf("!");
        }
        else 
        {
            printf("%c", slowo);
        }
    }
    
    printf("\nDla switch\n");
    while((slowo2=getchar())!= '#')
    {
        switch (slowo2)
        {
            case '.': 
            {
                printf("!");
                break;
            }
            case '!': 
            {
                printf("!!");
                break;
            }
            default: 
            {
                printf("%c", slowo2);
                break;
            }
        }
    }
}

void zad4(void)
{
    printf("Program wczytuje zdanie do momentu pojawinia się #\nNastępnie zlicza wszystkie wyrażenia \"ot\"\n");
    char slowo;
    char slowo_przed;
    int suma=0;
    
    while((slowo=getchar()) != '#')
    {
            if(slowo_przed=='o' && slowo=='t')
            {
                suma++;
            }
            slowo_przed=slowo;
    }
    
    printf("Liczba powtorzen slowa \"ot\" wynosi %d\n", suma);
}