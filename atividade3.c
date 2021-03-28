#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void referencia(char *nome);

int main(){
    char *nome1 = malloc(80*sizeof(char));

    printf("Digite um nome: ");
	gets(nome1);
	
    referencia(nome1);

    return 0;
}

void referencia(char *nome){
    int a, quant, cont;
	cont = strlen(nome);
	
    for(a = cont; nome[a] != ' '; a--){
		nome[a] = nome[a];
	}
    printf(" - Referencia: ");
	for(a = a+1, quant = 0;nome[a] != '\0'; a++, quant++){
		
		if(nome[a]>=97){
	 		nome[a]-=32;
	 	}
		
		printf("%c", nome[a]);
		if(nome[a+1] == '\0'){
		
			printf(", ");
		}
 	}
	cont = cont - quant;
	for(a = 0, quant = 0; a < cont; a++){
		if(quant == 0){
			printf("%c", nome[a]);
		}
		else {
			if(nome[a] > 90 || nome[a] == ' '){}
 			else {
 				printf("%c.", nome[a]);
				for(a = a; nome[a] != ' '; a++){}
			}
		}
		if(nome[a] == ' '){
			quant++;
		}
	}

}

	