#include <stdio.h>

int page=1;
int fin=0;
char x;

void f1(void){
if (page==1){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=6;}
}
else if (page==3){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=5;}
	if (x==2) {page=12;}
}
else if (page==5){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=10;}
	if (x==2) {page=20;}
}
else if (page==6){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=18;}
	if (x==2) {page=3;}
}
else if (page==7){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=13;}
	if (x==2) {page=15;}
	if (x==3) {page=5;}
}
else if (page==9){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=4;}
	if (x==2) {page=19;}
}
else if (page==12){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=2;}
	if (x==2) {page=7;}
}
else if (page==13){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=11;}
	if (x==2) {page=16;}
}
else if (page==15){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=7;}
	if (x==2) {page=8;}
}
else if (page==17){
	printf("\n\nACTION>");
	scanf("%d",&x);
	if (x==1) {page=9;}
	if (x==2) {page=14;}
}
else if (page==19){page=14;}
else if (page==20){page=17;}
else if (page==18){page=3;}
else if (page==10){page=13;}
else if (page==8){page=13;}
else if (page==4){page=13;}
else if (page==2){page=17;}
}

int main()
{

	printf("L'HISTOIRE DONT VOUS ETES LE HEROS:\nMichel dans le turfu\n\n");
    while (fin==0) {
	
		
		if (page==1){
			printf("Drinnn! Le telephone...\nC'est Michel: <<Viens me delivrer,\n je suis prisonnier dans la maison de Mme. DUTHEL!>>");
			printf("\n\n1-Vite !\n");
			
		}
		else if (page==2){
			printf("Tu veux sortir de la maison le plus vite possible.\nTu passe dans le couloir, tu cherche la sortie...");
			//getchar();
		
		}
		else if (page==3){
			printf("Tu vois une fenetre qui a l'air mal fermee.\nTu la pousses, tu entres, tu arrive dans un bureau.");
			printf("\n\n1-Aller dans le couloir.");
			printf("\n2-Aller dans la cuisine.\n");
			
		}
		else if (page==4){
			printf("L'homme te fait un clin d'oeil, et il te dit: <<Monte l'escalier,\ntu vas avoir une surprise!>>");
			//getchar();
		}
		else if (page==5){
			printf("Tu entends des aboiements dans la piece a coter.");
			printf("\n\n1-Entrer dans la piece.");
			printf("\n2-Se sauver.\n");
			
		}
		else if (page==6){
			printf("En arrivant a la maison de Mme. DUTHEL,\ntu te rends compte que la porte est fermee.\nQue fait-tu?");
			printf("\n\n1-Sonne a la porte.");
			printf("\n2-Passe par derriere.\n");
		}
		else if (page==7){
			printf("Tu veux continuer.\nTu decides de cherher dans toute la maison.");
			printf("\n\n1-Monter l'escalier.");
			printf("\n2-Descendre a la cave.\n");
			printf("3-Passer dans le couloir.\n");
		}
		else if (page==8){
			printf("Tu allume la lumiere, tu cherches partout: rien!\nTu remontes dans la cuisine, tu traverses le couloir, tu montes l'escalier.");
			//getchar();
		}
		else if (page==9){
			printf("L'homme crie: <<Ne te sauve pas, arrete !>>");
			printf("\n\n1-Arreter.");
			printf("\n2-Se sauver le plus vite possible.\n");
			
		}
		else if (page==10){
			printf("Le chien vient cers toi, il te leche, il est tres gentil...\nTu montes l'escalier, il te suit.");
			//getchar();
		}
		else if (page==11){
			getchar();
			printf("Tu entres dans la chambre. Tout est noir.\nTu a l'impression de t'envoler...\nEt puis tu te reveilles chez toi, dans ton lit...\nTu as reve!");
			printf("\n\nFIN.");
			fin=1;
		}
		else if (page==12){
			printf("Tu entends du bruit dans la piece a cote.\nTu a peur.\nPour te defendre tu prends:");
			printf("\n\n1-Prendre un couteau.");
			printf("\n2-Prendre un balai.\n");
		}
		else if (page==13){
			printf("En haut de l'escalier, tu vois deux portes.\nTu hesites...\nLaquelle prends-tu?");
			printf("\n\n1-Celle de gauche.");
			printf("\n2-Celle de droite.\n");
		}
		else if (page==14){
			getchar();
			printf("Quand tu te reveilles, tu te rends compte que tu es attache,\nenferme avec Mme. DUTHEL ...\nEt l'histoire s'arrete la!");
			printf("\n\nFIN.");
			fin=1;
		}
		else if (page==15){
			printf("Dans la cave, il fait tout noir!\nTu es tres inquiet");
			printf("\n\n1-Retourner a la cuisine.");
			printf("\n2-Chercher interrupteur.\n");
		}
		else if (page==16){
			getchar();
			printf("Tu entres dans la chambre.\nSurprise!\nTu vois ta famille et tous tes copains avec un grand panneau:\n<<BON ANNIVERSAIRE!>>\nM. ZUNINO est la avec un verre de Beaujolais.\nEt la fete commence...");
			printf("\n\nFIN.");
			fin=1;
		}
		else if (page==17){
			printf("Tout a coup, un homme tres grand te barre le passage! Tu as tres peur...");
			printf("\n\n1-Se sauver.");
			printf("\n2-S'evanouir.\n");
		}
		else if (page==18){
			printf("Tu sonnes, tu sonnes...\nPersonne ne repond.\nTu es oblige de faire le tour de la maison.");
			//getchar();
		}
		else if (page==19){
			printf("Tu cours a toute vitesse, sans regarder ou tu vas.\nTu te cognes dans le mur, tu es assomme!");
			getchar();
		}
		else if (page==20){
			printf("Tu traverses tout le couloir, le plus vite que tu peux, tu cherche la sortie.");
			//getchar();
		}
		f1();
		printf("\n\n");
	}	
	getchar();
}