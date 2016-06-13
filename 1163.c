#include <stdio.h>
#include <stdlib.h>
#define gravity 9.80665
#define pi 3.14159

/*  Launch Projectiles
 *
 *	@author Pedro Paulo Skakum
 *	@email pedroskakum@gmail.com
 * 	@date 2016-05-30
 */

int main(){

    float *v;
    int num_componentes;

    printf("Informe o numero de componentes do vetor\n");
    scanf("%d", &num_componentes);

    v = (float *) malloc(num_componentes * sizeof(float) * 2);

    for (int i = 0; i < num_componentes; i++){
	    for (int j = 0; j < num_componentes; j++){
			printf("\nDigite o valor para a posicao %d %d do vetor: ", i+1, j+1);
			scanf("%f",&v[j][i]);
		}
    }
	printf("\n");
	return 0;
}
