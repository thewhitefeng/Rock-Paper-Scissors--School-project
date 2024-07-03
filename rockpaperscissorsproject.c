#include <stdio.h>
#include <stdlib.h>
int main(){
int i,k;
int m,choice; //m= GIA TO MENU (1,2)
do{																		// h do gia thn epilogi na ksanapaikseis 

printf("***********--------WELCOME TO ROCK PAPER SCISSOR--------***********");	
sleep(2);
printf("\n\t\t\t- SELECT OPTION - ");											// arxiko menu
sleep(1);	

do{																		//do gia validation check

printf("\n\t\t1.PLAY WITH A FRIEND\n\t\t2.PLAY WITH THE COMPUTER");     // epilogh mocde

scanf("%d",&m);  
}while(m<1 || m>2);

	if(m==1){                //PAIZEIS ME ALLON PPAIXTI
	
 	system("cls");
 	printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********");
 	char p1[15],p2[15];         //P1=1oS PAIXTIS,P2=2oS PAIXTIS,
 	int p1score=0,p2score=0;			// score tou paixth 1kai2
 	int x1,x2;							//X1=epilogi tou 1ou paixth,X2= h epilogi tou 2ou paixth
 	printf("\n PLAYER 1 INSERT YOUR USERNAME  : ");                   // username xristi 1 kai 2
 	scanf("%s",&p1);
 	sleep(1);
 	printf("\n PLAYER 2 INSERT YOUR USERNAME  : ");
	scanf("%s",&p2);

do{																					//do gia validation check

	printf("PLEASE SELECT THE AMMOUNT OF ROUNDS YOU WANT TO PLAY FROM 1 TO 10 :");                       //k=rounds
	scanf("%d",&k);
}while(k<1 || k>10);
	
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********");
		for (i=0; i<k; i++){        //h for einai gia tous girouos pou tha kratisi to game
		
		do{
		
		printf("\n Hello %s \nPress 1 for Rock \nPress 2 for Paper \nPress 3 for Scissors",p1);  //............. dialegi o 1os pextis an tha peksi petra,psalidi h xarti
		scanf(" %d",&x1);                                                                                          
		}while(x1<1 || x1>3);
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********");              
		sleep(1);
	
		do{
		
		printf("\n Hello %s \nPress 1 for Rock \nPress 2 for Paper \nPress 3 for Scissors",p2);//............. dialegi o 2os pextis an tha peksi petra,psalidi h xarti
		scanf(" %d",&x2);
		}while(x2<1 || x2>3);
		sleep(1);
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********");
		
		printf("\n\n\n");
		if(x1==1)
		printf("\n\t\t\t\t\t%s chose Rock",p1);                         	 //if gia na deixnei ti epelkse o kathes pextis sto telos tou girou
		else if(x1==2)
		printf("\n\t\t\t\t\t%s chose Paper",p1);
		else if(x1==3)
		printf("\n\t\t\t\t\t%s chose Scissor",p1);
		
			if(x2==1)
		printf("\n\t\t\t\t\t%s chose Rock",p2);
		else if(x2==2)
		printf("\n\t\t\t\t\t%s chose Paper",p2);
		else if(x2==3)
		printf("\n\t\t\t\t\t%s chose Scissor",p2);
				
		if (x1==1 && x2==3 || x1==2 && x2==1 || x1==3 && x2==2){         			//
		
			printf(" \n\n\n\t\t\t\t\t%s Wins this Round!!",p1);
			p1score+=1;                                                                        		 //metrame to score tou  1ou pexti
		}
		else if (x2==1 && x1==3 || x2==2 && x1==1 || x2==3 && x1==2){
		
		printf(" \n\n\n\t\t\t\t\t%s Wins this Round!!",p2);
		p2score+=1;
		}
		else if(x1==1 && x2==1 || x1==2 && x2==2 || x1==3 && x2==3){				//isopalia 
			printf("\n\n\n\t\t\t\t\tIt's a draw!!");
			p1score+=1;
			p2score+=1;
		}
		
		sleep(3);
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********");
		
		}
		printf( "\n\n\t\t\t\t\t  %s  %d --- %d  %s",p1,p1score,p2score,p2);															//if gia na vgei o nikitis metrontas to score (p1,p2)						
		if(p1score>p2score)
		printf("\n\n\t\t\t\t!!!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!!!\n\t\t\t\t\t%s HAS WON THE GAME",p1);
		else if(p1score<p2score)
		printf("\n\n\t\t\t\t!!!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!!!\n\t\t\t\t\t%s HAS WON THE GAME",p2);
		else if(p1score=p2score)
		printf("\n\n\t\t\t\t\t!!!!!!!!!!DRAW!!!!!!!!!!!");
		
	}
	 
else if(m==2)	{
	system("cls");
 	printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********");
 	
 	
 	 
 	 
 	
 	
 	char p1[15],p2[15];         
 	int p1score=0,p2score=0,random;     //random= o random arithmos
	int x1;
	printf("\n PLAYER 1 INSERT YOUR USERNAME  : ");        //username tou pexti (p1)
 	scanf("%s",&p1);
 	
 	do{
	printf("PLEASE SELECT THE AMMOUNT OF ROUNDS YOU WANT TO PLAY FROM 1 TO 10 :");                       //k=rounds
	scanf("%d",&k);																						

	}while(k<1 || k>10);										//dialegeis posa rounds thes apo to 1 mexri t
	
	 
	
 	for (i=0; i<k; i++){
 	do{
	 
 printf("\n Hello %s \nPress 1 for Rock \nPress 2 for Paper \nPress 3 for Scissors",p1);  //............. dialegi o 1os pextis an tha peksi petra,psalidi h xarti
		scanf(" %d",&x1);
	}while(x1<1 || x1>3);
	sleep(1);
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********\n\n");				//me thn if mas deixnei ti exei epileksi o pextis
		if(x1==1)
		printf("\n\t\t\t\t\tYou chose Rock");
		else if(x1==2)
		printf("\n\t\t\t\t\tYou chose Paper");
		else if(x1==3)
		printf("\n\t\t\t\t\tYou chose Scissors");
		sleep(1);
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********\n\n");
	printf("\n\t\t\t\t\tNow its the Computers turn");
	 	sleep(1);
		
		  time_t t;																//rand gia na vgainei tixea h epilogh tou computer
		  srand((unsigned) time(&t));
		random=rand() % 3;
		
			if(random==0)
		printf("\n\t\t\t\t\tThe Computer chose Rock");											//if gia na mas deixnei ti epelkse top copmuter
		else if(random==1)
		printf("\n\t\t\t\t\tThe Computer chose Paper");
		else if(random==2)
		printf("\n\t\t\t\t\tThe Computer chose Scissors");
		sleep(1);
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********\n\n");
		if (x1==1 && random==2 || x1==2 && random==0 || x1==3 && random==1){         			//
			printf("\t\t\t---------------------------------------------");
			printf("\n\t\t\t\t\%s Wins this Round!!",p1);
			printf("\n\t\t\t   ---------------------------------------");
			p1score+=1;                                                                  		 //metrame to score tou   pexti
		}
		else if (random==0 && x1==3 || random==1 && x1==1 || random==2 && x1==2){
		printf("\t\t\t---------------------------------------------");
		printf(" \n\t\t\t\tThe Computer Wins this Round!!");
		printf("\n\t\t\t   ---------------------------------------");						//score tou computer
		p2score+=1;            
		}
		else if(x1==1 && random==0 || x1==2 && random==1 || x1==3 && random==2){
			printf("\t\t\t---------------------------------------------");
			printf("\n\t\t\t\t\tIt's a draw!!");
			printf("\n\t\t\t   ---------------------------------------");
			p1score+=1;
			p2score+=1;
		}
		sleep(2);
		system("cls");
		printf("\t\t***********-------- ROCK PAPER SCISSOR --------***********");
			}
		printf( "\n\n\t\t\t\t\t  %s  %d --- %d  Computer",p1,p1score,p2score);															//if gia na vgei o nikitis metrontas to score (p1,p2)						
		if(p1score>p2score)
		printf("\n\n\t\t\t\t!!!!!!!!!!!!CONGRATULATIONS!!!!!!!!!!!!\n\t\t\t\t\t%s HAS WON THE GAME",p1);
		else if(p1score<p2score)
		printf("\n\n\t\t\t\t!!!!!!!!!!!!YOU LOST !!!!!!!!!!!!\n\t\t\t\t\t\tComputer HAS WON THE GAME");
		else if(p1score=p2score)
		printf("\n\n\t\t\t\t\t!!!!!!!!!!DRAW!!!!!!!!!!!");
 	
	}
	sleep(1);
	printf("\n\n\n\n\n\n\n\n\tIf you want to play again type 1 or else type any other button to exit the game ");			//	gia thn epilogi na ksanapeksis
	scanf("%d",&choice);																									//
	system("cls");	
}while(choice==1);																											//do while gia thn epilogi na ksanapeksis
	
	
} 
	 
	 
	 
	 
	 
	 
