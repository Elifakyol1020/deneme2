#include <stdio.h>
    //02220224019 ELÝF AKYOL
    //Bir dikdörtgenin alan ve çevresini bulma
      int main (){

	int uzunkenar,kisakenar,alan,cevre,z;
		printf("UZUNKENAR VE KISA KENARI GIRINIZ:");//kýsakenar ve uzunkenar giriþi
			scanf("%d",&uzunkenar);
				scanf("%d",&kisakenar);
				
			printf("CEVRE ICIN 1 ALAN ÝCÝN 2 SAYISINI GIRINIZ");//z giriþi
				scanf("%d",&z);
		
	alan=uzunkenar*kisakenar;
	cevre=uzunkenar*2+kisakenar*2;
	
		if(z==1) { 
			printf("CEVRE:%d",cevre);
 }
	
	
	else 
	
		if(z==2) {
		
	
	 		printf("ALAN:%d",alan);}
 
	 

	return 0;
	
	
 }
