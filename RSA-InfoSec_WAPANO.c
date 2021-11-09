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
	
	printf("\n\n\nDECRYPTION:1\n");
	decrypt_text(P*Q,text1);
	printf("\n\nDECRYPTION:2\n");
	decrypt_text(P*Q,text2);
}

void encrypt_text(int N,char text[]){
	
	double temp;
	int trav,size=0;
	long int E = 7, D = 223;
	int result_enc[MAX];
	

	for(trav = 0; trav<strlen(text); trav++){
		temp = pow(text[trav], E);
		temp = fmod(temp, N);
		result_enc[size] = temp;
		++size;
		printf("%c", result_enc[trav]);
	}
	
}

void decrypt_text(int N,char text[]){
	
	long int temp;
	int trav,size=0;
	long int E = 7, D = 223;
	int result_dec[MAX];
	

	for(trav = 0; trav<strlen(text); trav++){
		temp = pow(text[trav], D);
		temp = fmod(temp, N);
		result_dec[size] = temp;
		++size;
		printf("%c", result_dec[trav]);
	}
	
}
