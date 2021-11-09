#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 50

void encrypt_text(int,char*);
void decrypt_text(int,char*);

int main() {
	
	char text1[50]="ENCRYPTION";
	char text2[50]="RASTAMAN";
	int P = 11, Q = 13;

	printf("ENCRYPTION:1\n");
	encrypt_text(P*Q,text1);
	printf("\n\nENCRYPTION:2\n");
	encrypt_text(P*Q,text2);
	
	return 0;
}

void encrypt_text(int N,char text[]){
	
	double temp;
	int trav,size=0;
	long int E = 7, D = 223;
	char result_enc[MAX];
	
	for(trav = 0; trav<strlen(text); trav++){
		temp = pow(text[trav], E);
		temp = fmod(temp, N);
		result_enc[size] = temp;
		++size;
		printf("%c", result_enc[trav]);
	}
}
