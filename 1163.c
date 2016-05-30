#include <stdio.h>
#include <stdlib.h>
#define gravidade 9.80665
#define pi 3.14159

/*  Launch Projectiles
 *
 *	@author Pedro Paulo Skakum
 *	@email pedroskakum@gmail.com
 * 	@date 2016-05-30
 */

int main()
{
	//definindo o ponteiro v
    float *v;
    int i, j, num_componentes;

    printf("Informe o numero de componentes do vetor\n");
    scanf("%d", &num_componentes);

    v = (float *) malloc(num_componentes * sizeof(float));

    //Armazenando os dados em um vetor
    for (i = 0; i < num_componentes; i++)
    {
		printf("\nDigite o valor para a posicao %d %d do vetor: ", i+1, j+1);
		scanf("%f",&v[j][i]);
    }   
    
	for (i = 0;i < num_componentes; i++)
	{
		printf("%.2f\n",v[i]);
	}       

	printf("\n");
	return 0;
}
