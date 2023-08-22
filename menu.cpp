#include<stdio.h>
int main()
{
	int ex, rep;
	rep=1;
	
	do
	{
		printf("\nEx 1 - Mostrar o 1.o elemento");
		printf("\nEx 2 - Mostrar os numeros negativos");
		printf("\nEx 3 - Somar os elementos do vetor");
		printf("\nEx 4 - Calcular a media dos elementos do vetor");
		printf("\nEx 5 - Mostrar os numeros impares");
		printf("\nEx 6 - Exibir o primeiro e ultimo valor do vetor");
		printf("\nEx 7 - Exibir os valores cujos indices sejam pares");
		printf("\nEx 8 - Fazer um algoritmo que retorne true caso o valor passado pelo parâmetro exista no vetor");
		printf("\nEx 9 - Fazer um procedimento que ordene os elementos do vetor");
		printf("\nEx 10 - Fazer um algoritmo que copie os valores do vetor 1 no vetor 2");
		printf("\nEx 11 - Fazer um algoritmo que copie os elementos invertidos do vetor v1 em v2");
		printf("\nEx 12 - Fazer um algoritmo que ordene de forma crescente os valores do vetor");
		printf("\nEx 13 - Fazer um algoritmo que ordene de forma decrescente os valores do vetor");
		printf("\nEx 14 - Fazer um algoritmo que ordene o vetor de forma crescente ou decrescente de acordo com a escolha do usuario");
		printf("\nEx 15 - Fazer um algoritmo que coloque valores pares na esquerda e impares na direita");
		printf("\nEx 16 - Exibir quantos valores que estejam acima da media");
		printf("\nEx 17 - Fazer um codigo que retorne o maior valor do vetor");
		printf("\n Digite 0 caso queira encerrar o codigo\n ");
		printf("\n\nDigite o numero do exercicio que deseja executar: ");
		scanf("%d", &ex);
		
		switch (ex)
		{
		
			case 0:
				rep=0;
				break;
				
			case 1:
				int v1[5];
				v1[0]=45;
				v1[1]=-89;
				v1[2]=32;
				v1[3]=-12;
				v1[4]=33;
				
				printf("\n%d\n", v1[0]);
				break;
								
			case 2:
				int i2, v2[5];
				v2[0]=45;
				v2[1]=-89;
				v2[2]=32;
				v2[3]=-12;
				v2[4]=33;
	
				for (i2 = 0; i2 < 5; i2++)
				{
					if(v2[i2] < 0)
					printf("%d ",v2[i2]);
				}
				break;
				
			case 3:
				int s3, i3, v3[5];
				v3[0]=45;
				v3[1]=-89;
				v3[2]=32;
				v3[3]=-12;
				v3[4]=33;
				s3 = 0;
				for (i3 = 0; i3 <= 4; i3++)
				{
					s3 += v3[i3];
				}
				printf("Soma = %d ", s3);
				break;
				
			case 4:
				int  i4, v4[5];
				float s4, med4;
				v4[0]=45;
				v4[1]=-89;
				v4[2]=32;
				v4[3]=-12;
				v4[4]=33;
				s4 = 0;
				for (i4 = 0; i4 <= 4; i4++)
				{
					s4 += v4[i4];
				}
				med4 = s4 / 5;
				printf("Media = %.1f ", med4);
				break;
				
			case 5:
				int  i5, v5[5];
				v5[0]=45;
				v5[1]=-89;
				v5[2]=32;
				v5[3]=-12;
				v5[4]=33;

				for (i5 = 0; i5 <= 4; i5++)
				{
					
					if (v5[i5] % 2 != 0)
					printf("%d ", v5[i5]);
				}
				break;
				
			case 6:
				int v6[5];
				v6[0]=45;
				v6[1]=-89;
				v6[2]=32;
				v6[3]=-12;
				v6[4]=33;
				printf("%d",v6[0]);
				printf("\n%d\n", v6[4]);
				break;
				
			case 7:
				int v7[5], i7;
				v7[0]=45;
				v7[1]=-89;
				v7[2]=32;
				v7[3]=-12;
				v7[4]=33;
	
				for(i7=0; i7<5; i7++)
				{			
					if(v7[i7]%2==0)
					{
						printf("\n%d\n", v7[i7]);
					}
				}
				break;
				
			case 8:
				int v8[5], val8, i8, t8;
				v8[0]=45;
				v8[1]=-89;
				v8[2]=32;
				v8[3]=-12;
				v8[4]=33;
				
				printf("Digite o valor para ser comparado: ");
				scanf("%d", &val8);
	
				for(i8=0; i8<5; i8++)
				{
					if(v8[i8]==val8)
					{
						t8=2;
						break;
					}
				}
				if(t8==2)
				{
					printf("\nTrue");
				}
				else
				{
					printf("\nFalse");
				}
				
				break;
				
			case 9:
				int v9[5], i9, j9, temp9;
				v9[0]=45;
				v9[1]=-89;
				v9[2]=32;
				v9[3]=-12;
				v9[4]=33;

    			for (i9 = 0; i9 < 5- 1; i9++) {
        			for (j9 = 0; j9 < 5 - i9 - 1; j9++) {
            			if (v9[j9] > v9[j9 + 1]) {
                			temp9 = v9[j9];
                			v9[j9] = v9[j9 + 1];
                			v9[j9 + 1] = temp9;
            			}
        			}
    			}

    			printf("\nVetor ordenado de forma crescente: \n");
    			for (int i9 = 0; i9 < 5; i9++) {
        			printf("%d \n", v9[i9]);
    			}
    			
				break;
				
			case 10:
				int v110[5],v210[5], i10;
				v110[0]=41;
				v110[1]=72;
				v110[2]=39;
				v110[3]=4;
				v110[4]=35;
	
				for(i10=0; i10<5; i10++)
				{
					v210[i10] = v110[i10];
					printf("v1[%d] = %d\n", i10, v110[i10]);
					printf("v2[%d] = %d\n", i10, v210[i10]);
				}
				break;
				
			case 11:
				int i11, n11, v111[5], v211[5];
				n11=4;
				v111[0]=41;
				v111[1]=72;
				v111[2]=39;
				v111[3]=4;
				v111[4]=35;
				
				for(i11=0; i11<5; i11++)
				{
					v211[n11] = v111[i11];
					printf("v1[%d] = %d\n", i11, v111[i11]);
					n11--;
				}
				for(n11=0; n11<5; n11++)
				{
					printf("n2[%d] = %d\n", n11, v211[n11]);
				}
				
				break;
				
			case 12:			
				int v12[5], i12, j12, temp12;
				v12[0]=41;
				v12[1]=72;
				v12[2]=39;
				v12[3]=4;
				v12[4]=35;

    			for ( i12 = 0; i12 < 5- 1; i12++) {
        			for (j12 = 0; j12 < 5 - i12 - 1; j12++) {
            			if (v12[j12] > v12[j12 + 1]) {
                			temp12 = v12[j12];
                			v12[j12] = v12[j12 + 1];
                			v12[j12 + 1] = temp12;
            			}
        			}
    			}
			
    			printf("\nVetor ordenado de forma crescente: \n");
    			for (int i12 = 0; i12 < 5; i12++) {
        			printf("%d \n", v12[i12]);
    			}
				break;
				
			case 13:
				int v13[5], tamanho, i13, indice_maximo13, j13;
				v13[0]=41;
				v13[1]=72;
				v13[2]=39;
				v13[3]=4;
				v13[4]=35;
    			tamanho = 5;

    			for (i13 = 0; i13 < 5 - 1; i13++) {
        			indice_maximo13 = i13;
        			for (j13 = i13 + 1; j13 < 5; j13++) {
            			if (v13[j13] > v13[indice_maximo13]) {
                			indice_maximo13 = j13;
            			}
        			}
        			if (indice_maximo13 != i13) {
            			int temp13 = v13[i13];
            			v13[i13] = v13[indice_maximo13];
            			v13[indice_maximo13] = temp13;
        			}
    			}
			
    			printf("\nVetor ordenado de forma decrescente: \n");
    			for (int i13 = 0; i13 < 5; i13++) {
        			printf("%d\n ", v13[i13]);
    			}
				break;
							
			case 14:
				int v14[5], i14, aux14,j14;
				v14[0]=41;
				v14[1]=72;
				v14[2]=39;
				v14[3]=4;
				v14[4]=35;
				i14=0;
				char op14;
				
				printf("Em qual ordem voce deseja ver o vetor?[c]crescente e [d] decrescente: ");
					scanf(" %c", &op14);
			
					
				if ( op14 == 'c' ){
				for(i14=0; i14<5; i14++){
					for( j14= i14+1; j14<5; j14++){
						if(v14[i14]>v14[j14]){
					
						aux14 = v14[i14];
						v14[i14] = v14[j14];
						v14[j14] = aux14;	
						
						}
					}
					
		
			}	 
				printf("\nOrdem crescente:\n");	
					for( i14=0; i14<5; i14++){
					printf("%d\n ", v14[i14]);
				}
			}
						
				if ( op14 == 'd' ){
				for(i14=0; i14<5; i14++){
					for(i14=0; i14<5; i14++){
					for( j14= i14+1; j14<5; j14++){
						if(v14[i14]<v14[j14]){
					
						aux14 = v14[i14];
						v14[i14] = v14[j14];
						v14[j14] = aux14;	
						
						}
					}
					
				
			}	 printf("\nA ordem eh:\n ");	
				
				for( i14=0; i14<5; i14++){
					printf("%d \n", v14[i14]);
	 			}
			}
			}
				break;
				
			case 15:
				int v15[5], i15, o15;
				v15[0]=41;
				v15[1]=72;
				v15[2]=39;
				v15[3]=4;
				v15[4]=35;
	
				for (i15=0; i15<5; i15++){
					
					if (v15[i15]%2 == 0){
						printf("%d ", v15[i15]);
					}
				}
				for (o15=0; o15<5; o15++){
				
				if (v15[o15]%2 != 0){
						printf("%d ", v15[o15]);;
			}	
			}
				break;
				
			case 16:
				int  v116[5], n16, i16;
				float media16;
				v116[0]=41;
				v116[1]=72;
				v116[2]=39;
				v116[3]=4;
				v116[4]=35;
				
				n16=0;
				media16=(v116[0]+ v116[1]+ v116[2]+ v116[3]+ v116[4])/5;
				
				for(i16=0; i16<5; i16++)
				{
					if(v116[i16]>media16)
					{
						n16++;
					}
				}
				printf("\nO vetor possui %d valores acima da media\n", n16);
				break;
							
			case 17:
				int  v17[5];
				v17[0]=41;
				v17[1]=72;
				v17[2]=39;
				v17[3]=4;
				v17[4]=35;
	
				if(v17[0]>v17[1] && v17[0]>v17[2] && v17[0]>v17[3] && v17[0]>v17[4])
				{
					printf("\nO maior numero e: %d\n", v17[0]);
				}
				else
				{
					if(v17[1]> v17[2] && v17[1]>v17[3] && v17[1]>v17[4])
					{
					printf("\nO maior numero e: %d\n", v17[1]);
					}
					else
					{
						if(v17[2]>v17[3] && v17[2]>v17[4])
						{
							printf("\nO maior numero e: %d\n", v17[2]);
						}
						else
						{
							if(v17[3]>v17[4])
							{
								printf("\nO maior numero e: %d\n", v17[3]);
							}		
							else
							{
								printf("\nO maior numero e: %d\n", v17[4]);	
							}
						}
					}
				}
				break;
						
			default:
				printf("\nDigite um valor valido\n");
				break;
		}
	}while (rep==1);
}
