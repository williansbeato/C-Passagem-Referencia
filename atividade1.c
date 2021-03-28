#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double baskhara(double a, double b, double c, double *x1, double *x2);

int main(){
    double a, b, c, x1, x2;

    printf("\nDigite os coeficientes (a), (b) e (c): ");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);

    baskhara(a, b, c, &x1, &x2);

	printf(" - Raizes: %.1lf %.1lf\n", x2, x1);
	
	return 0;
}

double baskhara(double a, double b, double c, double *x1, double *x2){
	*x1 = (-b)-((sqrt(pow(b,2)-(4*a*c))));
	*x1 = *x1 / (2 * (a));

	*x2 = (-b)+((sqrt(pow(b,2)-(4*a*c))));
	*x2 = *x2 / (2 * (a));
}