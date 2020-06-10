#include <stdio.h>
#include <conio.h>
#include <string.h>

struct medicament {
	char nume[30];
	float pret;
	int cod;
  char github[100]
  int merge;
  int branch;
  float pullrequest;
};

int main() {
	int n;
	int counter = 0;
	char nume_backup[30];
	int cod_cautat;
	char nume_cautat[30];
	struct medicament arr_medicament[100];
	int i;
	int flag=0;
	int flag2=0;
/*
	printf("Dati numarul de medicamente din farmacie: \n");
	scanf("%d", &n);
	printf("Dati informatiile despre fiecare medicament:\n");
	for (i = 0; i < n; i++) {
		printf("Medicamentul %d \n", i);

		printf("Nume medicament: \n");
		scanf("%s", &arr_medicament[i].nume);

		printf("Pret medicament \n");
		scanf("%f", &arr_medicament[i].pret);

		printf("Cod medicament: \n");
		scanf("%d", &arr_medicament[i].cod);

	}
*/
  printf("Numarul de medicamente este:")
  scanf("%d", &n);
  printf("Dati informatiile despre fiecare medicament:\n");
	for (i = 0; i < n; i++) {
		printf("Medicamentul %d \n", i);

		printf("Nume medicament: \n");
		scanf("%s", &arr_medicament[i].nume);

		printf("Pret medicament \n");
		scanf("%f", &arr_medicament[i].pret);

		printf("Cod medicament: \n");
		scanf("%d", &arr_medicament[i].cod);
  }
	printf("introduceti codul: \n");
	scanf("%d", &cod_cautat);
	printf("Medicamentele din farmacie sunt: \n");
	for (i = 0; i < n; i++)
	{
		if (arr_medicament[i].pret > 25)
		{
			counter++;
		}
		if(arr_medicament[i].cod == cod_cautat)
		{
			flag=1;
		}
		printf("Medicamentul %d: %s %f %d \n",i, arr_medicament[i].nume, arr_medicament[i].pret, arr_medicament[i].cod);


	}
	if(flag==1){
		printf("Codul cautat exista!");
	}else
		printf("Codul cautat nu exista!");
	printf("Numarul medicamentelor mai scumpe de 25 de lei este: %d\n", counter);
	printf("Introduceti numele medicamentului dorit\n");
	scanf("%s", &nume_cautat);
	for(i=0;i<n;i++)
	{
		if(strcmp(arr_medicament[i].nume, nume_cautat) == 0)
		{
			flag2=1;
		}

	}
	if(flag2==1){
		printf("Numele cautat exista in baza de date!");
	}else{
		printf("Numele cautat nu exista in baza de date!");
	}

	getch();
	return 0;
}
