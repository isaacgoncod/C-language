#include<stdio.h>
#include<locale.h>
int main(){
	//Configura��es iniciais do programa, caracteres e vari�veis
	setlocale(LC_ALL,"");
	char nome[10];
	int idade;
	
	//Entradas
	printf("Digite o seu nome:");
	scanf("%s",&nome);
	printf("Digite a sua idade:");
	scanf("%d",&idade);
	
	//Processamento
	if(idade < 10){
		printf("Ol� %s voc� � crian�a \n",nome);
	}else if(idade < 19){ 
		printf("Ol� %s voc� � adolescente \n",nome);
	}else if(idade < 24){
		printf("Ol� %s voc� � j�vem \n",nome);
	}else if(idade < 45){
		printf("Ol� %s voc� � adulto \n",nome);
	}else if(idade < 60){
		printf("Ol� %s voc� � de meia idade \n",nome);
	}else{
		printf("Ol� %s voc� � idoso \n",nome);
	}
	printf("Segundo a OMS (Organiza��o Mundial da Sa�de).");
}


