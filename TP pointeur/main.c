// Adrien Gillet
#include <stdio.h>

typedef struct Menu {

		const char* option;

	}Menu;

typedef struct Application {

	const char* nom;
	Menu *menus;
	int nb_menus;

	}Application;


void runApplication(const Application* app) {

	int j, k;
	printf("\nVeuillez choisir une option : ");
	scanf_s("%d", &j);

	if (j > 0 && j <= app->nb_menus) {
		printf("\nOption choisie : %s", app->menus[j - 1].option);
	}

	else {
		printf("\nOption invalide !");
	}

	printf("\n\nPour quitter, appuyez sur 0 : ");
	scanf_s("%d", &k);

	if (k == 0)
		printf("\n\n---Fermeture de l'application---\n");
}

void displayMenu(const Application *app) {

	printf("\n--%s--\n",app->nom);

	for (int i = 0; i < app->nb_menus; i++) {

		printf("%d.%s\n",i+1,app->menus[i].option);
	}

	runApplication(app);
}

void runPhone(Application* app1, Application* app2, Application* app3) {


	int l;

	printf("---Applications---");
	printf("\n1. %s", app1->nom);
	printf("\n2. %s", app2->nom);
	printf("\n3. %s", app3->nom);
	printf("\n0. Quittez\n");

	printf("\nVeuillez choisir une application : ");
	scanf_s("%d", &l);

	if (l == 1) {
		displayMenu(app1);
	}
	if (l == 2) {
		displayMenu(app2);
	}
	if (l == 3) {
		displayMenu(app3);
	}
	else
		;
}

int main()
{

	Menu photoMenus[] = {"Regarder une photo","Modifier une photo" };

	Application Photo;
	Photo.nom = "Photo";
	Photo.nb_menus = 2;
	Photo.menus = photoMenus;


	
	Menu messageMenus[] = { "Lire un message","Envoyer un message" };

	Application Message;
	Message.nom = "Message";
	Message.nb_menus = 2;
	Message.menus = messageMenus;



	Menu youtubeMenus[] = { "Lire une video","S'abonner a une chaine" };

	Application Youtube;
	Youtube.nom = "Youtube";
	Youtube.nb_menus = 2;
	Youtube.menus = youtubeMenus;

	


	
	runPhone(&Youtube, &Photo, &Message);
	
	

	return 0;
}