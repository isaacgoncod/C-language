#include <stdio.h>;
#include <locale.h>;

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digíte um número : ");
	fflush(stdin);
	scanf("%d", &n);
	
	printf("Análisando o número %d, seu antecessor é %d e o é sucessor %d.", n, (n - 1), (n + 1));
}
