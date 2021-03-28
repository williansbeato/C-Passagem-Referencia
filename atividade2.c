#include <stdio.h>
#include <stdlib.h>

void ordenar(int *pont);

int main(){
    int *pont = malloc(10*sizeof(int));
	int a,b,aux;

	srand(time(NULL));

    printf("Vetor Aleatorio:");
	for(a=0;a<10;a++){
		pont[a]=10+rand()%90;
		printf(" %i",pont[a]);
	}

    ordenar(pont);

    return 0;
}

void ordenar(int *pont){
    int a,b,aux;
    for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			if(pont[a]<=pont[b]){
				aux=pont[a];
				pont[a]=pont[b];
				pont[b]=aux;
			}
		}
	}
	printf("\n - Vetor Ordenado:");
	for(a=0;a<10;a++){
		printf(" %i",pont[a]);
	}
}



	