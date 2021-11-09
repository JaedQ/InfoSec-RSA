#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void encrypt_text(int,char*);

int main() {
	
	char text1[50]="ENCRYPTION";
	char text2[50]="RASTAMAN";
	int P = 11, Q = 13;
	
	printf("ENCRYPTION:1\n");
	encrypt_text(P*Q,text1);
	printf("\n\nENCRYPTION:2\n");
	encrypt_text(P*Q,text2);
}

void encrypt_text(int N,char text[]){
	
	double temp;
	int trav;
	char result_enc[50];
	long int E = 7, D = 223;
	
	
	for(trav = 0; trav<strlen(text); trav++){
		temp = pow(text[trav], E);
		temp = fmod(temp, N);
		result_enc[trav] = temp;
		printf("%c", result_enc[trav]);
	}
	
}
