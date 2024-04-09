#include <stdio.h>
#include <locale.h>

//PROTOTIPO DA FUNÇÃO
void dBinario(int numero);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS
	int numero;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//DISPLAY
	printf("=====================================\n");
	printf("==CONVERSÃO-DE-DECIMAL-PARA-BINARIO==\n\n");
	
	//SOLICITANDO AO USUARIO O VALOR QUE ELE DESEJA CONVERTER
	printf("INSIRA O VALOR QUE DESEJA CONVERTER: ");
	scanf("%i", &numero);
	
	//CHAMANDO A FUNÇÃO (dBinario)
	dBinario(numero);
	
	
	return 0;
}

//FUNÇÃO QUE CONVERTE O NUMERO DIGITADO PELO USUARIO PARA BINARIO
void dBinario(int numero){
	
	//DEFINIÇÃO DE VARIAVEIS E VETOR
	int binario[32], i, j;
	
	//LOOPING VERIFICAR SE O A DIVISAO DO NUMERO RESTA 0 OU 1 E ARMAZENA EM UM VETOR
	while(numero > 0){
		binario[i] = numero % 2;
		numero = numero / 2;
		i++;
	}
	
	//LOOPING QUE INVERTE O VALOR DOS VETORES
	 printf("%i EM BINARIO É: ", n2);
    for(j = i - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }

}