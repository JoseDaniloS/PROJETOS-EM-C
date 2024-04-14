#include <stdio.h>
#include <locale.h>

//DEFINIÇÃO DE PROTÓTIPO DE FUNÇÕES
int conversorB(char CHdecimal);
void qBinario(int Hdecimal);

//FUNÇÃO PRINCIPAL
int main(){
	
	//DEFINIÇÃO DE VARIAVEIS E VETORES
	int Hdecimal[16], i = 0, j;
	char CHdecimal[16];
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//SOLICITANDO O VALOR EM HEXADECIMAL AO USUARIO
	printf("CONVERSOR DE HEXADECIMAL PARA BINARIO\n\n");
	printf("DIGITE UM VALOR HEXADECIMAL: ");
	gets(CHdecimal);
	
	while(CHdecimal[i] != '\0'){
		
		Hdecimal[i] = conversorB(CHdecimal[i]);
		i++;
	}
	
	//LOOPING PARA CONVERTER CADA VALOR DECIMAL PARA BINARIO
	for(j = 0; j < i; j++){
		
		qBinario(Hdecimal[j]);
		printf(" ");
		
	}
	
	return(0);	
}

//FUNÇÃO QUE VERIFICA O DEVIDO VALOR DE CADA CARACTERE
int conversorB(char CHdecimal){
	int Hdecimal;
	
	if(CHdecimal == '0'){
		Hdecimal = 0;
	}
	else if(CHdecimal == '1'){
		Hdecimal = 1;
	}
	else if(CHdecimal == '2'){
		Hdecimal = 2;
	}
	else if(CHdecimal == '3'){
		Hdecimal = 3;
	}
	else if(CHdecimal == '4'){
		Hdecimal = 4;
	}
	else if(CHdecimal == '5'){
		Hdecimal = 5;
	}
	else if(CHdecimal == '6'){
		Hdecimal = 6;
	}
	else if(CHdecimal == '7'){
		Hdecimal = 7;
	}
	else if(CHdecimal == '8'){
		Hdecimal = 8;
	}
	else if(CHdecimal == '9'){
		Hdecimal = 9;
	}	
	else if((CHdecimal == 'A')||(CHdecimal == 'a')){
		Hdecimal = 10;
	}
	else if((CHdecimal == 'B')||(CHdecimal == 'b')){
		Hdecimal = 11;
	}
	else if((CHdecimal == 'C')||(CHdecimal == 'c')){
		Hdecimal = 12;
	}
	else if((CHdecimal == 'D')||(CHdecimal == 'd')){
		Hdecimal = 13;
	}
	else if((CHdecimal == 'E')||(CHdecimal == 'e')){
		Hdecimal = 14;
	}
	else if((CHdecimal == 'F')||(CHdecimal == 'f')){
		Hdecimal = 15;
	}
	else{
		printf("Numero Hexadecimal invalido!");
		return(0);
	}
	return(Hdecimal);
	
	
}

//FUNÇÃO QUE CONVERTE CADA VALOR DECIMAL PARA BINARIO
void qBinario(Hdecimal){
		
	//DEFINIÇÃO DE VARIAVEIS E VETOR
	int binario[4];
	int i = 0;
	int j;
	
	//LOOPING VERIFICAR SE O A DIVISAO DO NUMERO RESTA 0 OU 1 E ARMAZENA EM UM VETOR
	while(Hdecimal > 0){
		binario[i] = Hdecimal % 2;
		Hdecimal = Hdecimal / 2;
		i++;
	}
	
	
	//LOOPING QUE INVERTE O VALOR DOS VETORES
	if(i < 4){
		printf("0");
	}
	if(i < 3){
		printf("0");
	}
	if(i < 2){
		printf("0");
	}
	if(i < 1){
		printf("0");
	}
    for(j = i - 1; j >= 0; j--){
        printf("%d", binario[j]);
    }	
}