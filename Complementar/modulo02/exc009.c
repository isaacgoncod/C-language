#include <stdio.h>;
#include <locale.h>;

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Dig�te um n�mero : ");
	fflush(stdin);
	scanf("%d", &n);
	
	printf("An�lisando o n�mero %d, seu antecessor � %d e o � sucessor %d.", n, (n - 1), (n + 1));
}
