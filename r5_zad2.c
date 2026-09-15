#include <stdio.h>
#include <inttypes.h>
#include <string.h>

int main(void)

{
	printf("Wpisz liczbe a zostanie pokazane 5 liczb wiekszych i mniejszych od niej\n");
	int liczba;
	scanf("%d", &liczba);
	
	int dol = liczba-5;
	int gora = liczba+5;
	
	for(int i=dol; i>=dol && i<liczba;i++)
	{
		printf(" %d", i);
	}
	
	printf(" %d ", liczba);
	
	for(int i=liczba+1;i<=gora && i>liczba;i++)
	{
		printf("%d ", i);
	}
	
}
