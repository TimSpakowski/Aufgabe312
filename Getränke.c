#include <stdio.h>

int main(){
	
	//Getränke-Automat Version 0.2
	
	int  auswahl = 0;
	float einwurf = 0;
	printf("\n Getränke Automat v0.2\n");
	printf("\n Wählen Sie ihr Getränk aus:\n 1) Wasser (0,50 Euro)\n 2) Limonade (1,00 Euro)\n 3) Bier (2,00)\n");
	printf("\n Geben Sie 1, 2 oder 3 ein: ");

	scanf("%d", &auswahl);

	int Menge = 0;
	
	printf("\n Geben sie die gewünschte Menge ein: ");
	scanf("%d", &Menge);
	
	float Preis = 0.0;
	
	//überprüfe Auswahl
 
	switch(auswahl){  
		case 1: Preis = 0.5 * Menge;
			printf("\n Bitte werfen Sie %d Euro ein: ", &Preis);
			scanf("%f",&einwurf);
			if(einwurf == Preis){
				printf("\n Vielen Dank, bitte entnehmen Sie ihr Getränk.\n\n");
			}
			else{
				printf("\n False!\n\n");
			}
		break;
		case 2: Preis = 1 * Menge;
			printf("\n Bitte werfen Sie %d Euro ein: ", &Preis);
			scanf("%f",&einwurf);
			if(einwurf == Preis){
				printf("\n Vielen Dank, bitte entnehmen Sie ihr Getränk.\n\n");
			}
				printf("\n False!\n\n");
		break;
		case 3: Preis = 2 * Menge;
			printf("\n Bitte werfen Sie %d Euro ein: ", &Preis);
			

			scanf("%f",&einwurf);

			if(einwurf == Preis){
				printf("\n Vielen Dank, bitte entnehmen Sie ihr Getränk.\n\n");
			}else{
				printf("\n False!\n\n");
			}
		break;
		}
	

}
