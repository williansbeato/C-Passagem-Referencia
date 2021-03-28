#include <stdio.h>
#include <stdlib.h>

void desembaralhar(char *plv, char *emb);

int main(){
    char *palavra=malloc(30*sizeof(char));
    char *embaralhada=malloc(30*sizeof(char));

    printf("Digite uma palavra: ");
	gets(palavra);
	printf("Digite a mesma palavra embaralhada: ");
	gets(embaralhada);	
    
	desembaralhar(palavra, embaralhada);

	printf("- Desembaralhada: %s", embaralhada);

    return 0;
}

void desembaralhar(char *plv, char *emb){
    char aux;
    int a,b,c;

	for(a=0 ; plv[a] != '\0' ; a++){
		for(b= a; emb[b] !='\0'; b++){
		 	if (plv[a] == emb[b]){
				aux = emb[a];
		 		emb[a] = emb[b];
		 		emb[b] = aux;
			}
		}
	}
}