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
		printf("\nEx 9 - ");
		printf("\nEx 10 - Fazer um algoritmo que copie os valores do vetor 1 no vetor 2");
		printf("\nEx 11 - Fazer um algoritmo que copie os elementos invertidos do vetor v1 em v2");
		printf("\nEx 12 -");
		printf("\nEx 13 -");
		printf("\nEx 14 -");
		printf("\nEx 15 -");
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
				break;
				
			case 13:
				break;
				
			case 14:
				break;
				
			case 15:
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
