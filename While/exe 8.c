#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int i, soma;
	
	i = 1;
	soma = 0;
	
	while(i <= 4){
		
		soma += i;
		printf("%d \n",soma);
		i++;
	}
	}
