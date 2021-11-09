#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 50

void en_de_crypt_text(int,char*);


int main() {
	
	char text1[50]="ENCRYPTION";
	char text2[50]="RASTAMAN";
	int P = 11, Q = 13;
	
	printf("ENCRYPTION & DECRYPTION:1\n\n");
	en_de_crypt_text(P*Q,text1);
	
	
	printf("\n\nENCRYPTION & DECRYPTION:2\n");
	en_de_crypt_text(P*Q,text2);
	
}
	

void en_de_crypt_text(int N,char text[]){
	
	double temp,temp2,res;
	int trav,trav2,size_enc=0,size_dec=0;
	int E = 7, D = 223;
	int result_enc[MAX];
	int result_dec[MAX];

    //ENCRYPTION OF TEXT
    printf("Encryption: ");
	for(trav = 0; trav<strlen(text); trav++){
		temp = pow(text[trav], E);
		temp = fmod(temp, N);
		result_enc[size_enc] = temp;
		++size_enc;
		printf("%c", result_enc[trav]);
	}

	//DECRYPTION OF TEXT
	printf("\nDecryption: ");
	for(trav2 = 0; trav2<size_enc; trav2++){
		temp2 = pow(result_enc[trav2],D);
		temp2 = fmod(temp2, N);
		result_dec[size_dec] = temp;
		++size_dec;
		printf("%c", result_dec[trav2]);
	}
	
}

