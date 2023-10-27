#include <stdio.h>
//02220224019 ELÝF AKYOL
//BASAMAK DEÐERÝ BULMA

   int main() {
   
  	
	int sayi,x,y,z;
	
	printf("UC BASAMAKLI BIR SAYI GIRINIZ:");//Sayý giriþi
		scanf("%d",&sayi);
	
	sayi%10==x;//birler basamaðý
    ((sayi-x)%100)/10==y; //onlar basamaðý
	((sayi-x)-(10*y))/100==z;//yüzler basamaðý
	
	printf("birler basamagi: %d \n", sayi%10);
		printf("onlar basamagi: %d \n", ((sayi-x)%100)/10);
			printf("yuzler basamagi: %d \n",((sayi-x)-(10*y))/100);
	
	
	
	return 0;

      }

