#include<stdio.h>
#define k 3

int main(){
	
	int pin[k],i=0;
	
	for(i=0;i<k;i++){
		printf("dwse arithmo %d",i);
		scanf("%d",&pin[i]);
		
	}
	
	for(i=0;i<k;i++){
		if(pin[i]>=85){
			printf("\n %d akrivo auto filke",pin[i]);
			
		}	
		else {
			printf("\n %d fthinos",pin[i]);
		}
	}
	
	int mik=0;
	for(i=0;i<k;i++){
		if (pin[i]<=50){
			mik=mik+1;
		}
	}
	printf("oi times kato apo 540 einai %d",mik);
}





