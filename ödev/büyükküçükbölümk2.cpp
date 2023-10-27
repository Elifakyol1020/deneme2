#include <stdio.h.>
//02220224019 ELÝF AKYOL
//Büyük sayýnýn küçük sayýya bölümü
int main(void){
		
	   int x,y;
	  	 printf("X VE Y SAYILARINI GIRINIZ");//sayýlarýn giriþi
	   		scanf("%d",&x);
	  			 scanf("%d",&y);
	  
	   if(x>y){
	   	 	if(x%y==0){
	   	    	printf("%d SAYISI %d SAYISINA TAM BOLUNUR", x,y);
			}
			else printf("%d SAYISI %d SAYISINA TAM BOLUNMEZ", x,y);
	    }
	   else
		    if(y%x==0){
		 		printf("%d SAYISI %d SAYISINA TAM BOLUNUR", y,x); 
			 }
		 
         	else printf("%d SAYISI %d SAYISINA TAM BOLUNMEZ", y,x);
	        
	    
	
	return 0;
    }
