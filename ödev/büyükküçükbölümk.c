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
	   	    	printf("TAM BOLUNUR");
			}
			else printf("TAM BOLUNMEZ");
	    }
	   else
		    if(y%x==0){
		 		printf("TAM BOLUNUR");}
		 
         	else printf("TAM BOLUNMEZ");
	        
	    
	
	return 0;
    }
