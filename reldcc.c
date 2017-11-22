#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
/*
	Siganos por favor en:
	
	www.facebook.com/reldsec/
	
	Por el momento solo se puede generar una tarjeta a la vez
	con el paso de los días se irán subiendo actualizaciones.
	
	Donativos: paypal.me/reldsec
	
	
*/
int main(){
	
	char bin[20];
	char co = 'x';
	char incong;
	char n_r;
	int c_r,m_r,y_r;
	int j;
	int longitud;
	
	srand(time(NULL));
	printf("=======================================================\n");
    printf("\t\t\tRELDCC\n");
    printf("=======================================================\n");
	printf("\n\n[!] Bin: ");
	gets(bin);;
	
	longitud = strlen(bin);
	
	c_r = 111 + rand() % ((900+1)-1);
	m_r = 1 + rand() % ((12+1)-1);
	y_r = 18 + rand() % ((23+1)-18);
	for(j=0;j<16;j++){
		fflush(stdin);
		n_r = 0 + rand() % ((9+1)-1);
		if(bin[j] == co){
			fflush(stdin);
			incong = bin[j];
			if(incong == co){
				fflush(stdin);
				bin[j] = n_r +'0';
			}
		}
	}	
	
	if((longitud > 15) && (longitud < 17)){
		if(bin[0] == '3'){
			c_r = 1111 + rand() % ((9999+1)-1111);
			printf("\n\n=======================================================================");
			printf("\n[+] Tipo: AMEX  Credit Card: %s   EXP: %i/%i   CCV: %i\n",bin,m_r,y_r,c_r);
			printf("=======================================================================");
			printf("\n\n");
		}
		else if(bin[0] == '4'){
			printf("\n\n================================================================");
			printf("\n[+] Tipo: VISA   Credit Card: %s   EXP: %i/%i   CCV: %i\n",bin,m_r,y_r,c_r);
			printf("================================================================");
			printf("\n\n");
		}
		else if(bin[0] == '5'){
			printf("\n\n================================================================");
			printf("\n[+] Tipo: Masterd Card  Credit Card: %s   EXP: %i/%i   CCV: %i\n",bin,m_r,y_r,c_r);
			printf("================================================================");
			printf("\n\n");
		}
		else if(bin[0] == '6'){
			printf("\n\n================================================================");
			printf("\n[+] Tipo: Discover  Credit Card: %s   EXP: %i/%i   CCV: %i\n",bin,m_r,y_r,c_r);
			printf("================================================================");
			printf("\n\n");
		}
		else{
			printf("[!] BIN Invalido");
		}
	}
	
	else if(longitud < 16){
    	puts("\n[!] Bin Demasiado Corto\n");
    	system("exit");
	}
	
	else if(longitud > 16){
		puts("\n[!] Bin Demasiado Largo");
		system("exit");
	}
	
	return 0;
}
