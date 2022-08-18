#include <stdio.h>
#include <locale.h>
int main(){
	//Configurações e variáveis
	setlocale(LC_ALL,"");
	int a, b, c, d, e, f, g, h, i, j;
	printf("Digite dez números inteiros separados por espaço:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	scanf("%d", &g);
	scanf("%d", &h);
	scanf("%d", &i);
	scanf("%d", &j);
	
	//Processamento
	if(a > b && a > c && a > d && a > e && a > f && a > g && a > h && a > i && a > j){
		printf("O maior número é %d", a);
	}
	else if(b > a && b > c && b > d && b > e && b > f && b > g && b > h && b > i && b > j){
		printf("O maior número é %d", b);
	}
	else if(c > a && c > b && c > d && c > e && c > f && c > g && c > h && c > i && c > j){
		printf("O maior número é %d", c);
	}
	else if(d > a && d > b && d > c && d > e && d > f && d > g && d > h && d > i && d > j){
		printf("O maior número é %d", d);
	}
	else if(e > a && e > b && e > c && e > d && e > f && e > g && e > h && e > i && e > j){
		printf("O maior número é %d", e);
	}
	else if(f > a && f > b && f > c && f > d && f > e && f > g && f > h && f > i && f > j){
		printf("O maior número é %d", f);
	}
	else if(g > a && g > b && g > c && g > d && g > e && g > f && g > h && g > i && g > j){
		printf("O maior número é %d", g);
	}
	else if(h > a && h > b && h > c && h > d && h > e && h > f && h > g && h > i && h > j){
		printf("O maior número é %d", h);
	}
	else if(i > a && i > b && i > c && i > d && i > e && i > f && i > g && i > h && i > j){
		printf("O maior número é %d", i);
	}
	else{
		printf("O maior número é %d", j);
	}
}
