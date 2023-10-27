#include <stdio.h>
//02220224019 ELÝF AKYOL
//BEÞ SAYININ KÜÇÜÐÜNÜ BULMA

	int main () {
	int x,y,z,k,l;
		printf("BES SAYIYI GIRINIZ:");//beþ sayý giriþi
			scanf("%d",&x);
				scanf("%d",&y);
					scanf("%d",&z);
						scanf("%d",&k);
							scanf("%d",&l);
	
	if(x<y && x<z && x<k && x<l) {//x okunuyor
		printf("en kucuk sayý:%d",x);
	
	}
	
	else
	
	if(y<x && y<z && y<k && y<l) {//y okunuyor
		printf("en kucuk sayý:%d",y);
		
    }
    
    else
    
    if(z<x && z<y && z<k && z<l) {//z okunuyor
    	printf("en kucuk sayý:%d",z);
    	
	}
	
	else
	
	if(k<x && k<y && k<z && k<l) {//k okunuyor
		printf("en kucuk sayý:%d",k);
		
	}
	
	else
	
	if(l<x && l<y && l<z && l<k) {//l okunuyor
		printf("en kucuk sayý:%d",l);
		
	}
	
	return 0;
	
	
    }
