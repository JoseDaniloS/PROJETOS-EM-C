#include <stdio.h>
#include <locale.h>

//PROTOTIPO DA FUN��O
void dBinario(int numero);

//FUN��O PRINCIPAL
int main(){
	
	//DEFINI��O DE VARIAVEIS
	int numero;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//DISPLAY
	printf("=====================================\n");
	printf("==CONVERS�O-DE-DECIMAL-PARA-BINARIO==\n\n");
	
	//SOLICITANDO AO USUARIO O VALOR QUE ELE DESEJA CONVERTER
	printf("INSIRA O VALOR QUE DESEJA CONVERTER: ");
	scanf("%i", &numero);
	
	//CHAMANDO A FUN��O (qBinario)
	dBinario(numero);
	
	
	return 0;
}

//FUN��O QUE CONVERTE O NUMERO DIGITADO PELO USUARIO PARA BINARIO
void dBinario(int numero){
	
	//DEFINI��O DE VARIAVEIS E VETOR
	int binario[32];
	int i = 0;
	int j;
	int n2;
	
	//N2 RECEBE O MESMO VALOR QUE A VARIAVEL numero
	n2 = numero;
	
	//LOOPING VERIFICAR SE O A DIVISAO DO NUMERO RESTA 0 OU 1 E ARMAZENA EM UM VETOR
	while(numero > 0){
		binario[i] = numero % 2;
		numero = numero / 2;
		i++;
	}
	
	//LOOPING QUE INVERTE O VALOR DOS VETORES
	 printf("%i EM BINARIO �: ", n2);
    for(j = i - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }

}