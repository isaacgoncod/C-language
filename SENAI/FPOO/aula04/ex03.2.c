#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Selecione em que faixa sal�rial voc� se encaixa,\n para que possa aplicar o desconto do INSS.\n [1 - at� R$ 1212]\n ")
}
