#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

int main() {
  
  setlocale(LC_ALL, "portuguese");
  
  int i, valores, vetor[5], cont=0;
  srand(time(NULL));
  
  for(i=0; i<5; i++){
  	vetor[i]=rand()%10;
  	}

  printf("\nAdivinhe os valores: "
        "\nSe estiver preparado digite uma tecla:\n ");     
		getch();

	for(i=0; i<5; i++)
  		printf("%d\t", vetor[i]);
        
	Sleep(3000);
	system("cls");

printf("\nDigite os valores: \n");

for(i = 0; i <= 4; i++)
	{
	scanf("%i", &valores);
	fflush(stdin);
	
	if(valores == vetor[i])
		cont++;
		
}

  if(cont > 0)
		printf("Você acertou %i\n\n", cont);
	
  else
  		printf("Você errou\n\n");  	
  

  system("pause");
  return 0;
}
