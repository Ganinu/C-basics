#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, apv, exame, rep;
	float nota1, nota2, media;
	
	do{
		
		printf("Digite sua nota: ");
		scanf("%f", &nota1);
		printf("Digite sua segunda nota: ");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2)/2;
		
		apv = 0;
		exame = 0;
		rep = 0;
		
		if(media >= 5){
			
			apv += 1;
			
		}
		else{
			if(media < 3){
				
				rep += 1;
				
			}
			else{
				
				exame+= 1;
			}
		}
		
			i = i +1;
			
	}while(i <= 3);
	
		printf("\nAlunos aprovados: %f \nalunos reprovados: %f \nexame: %f", apv, rep, exame);
}
