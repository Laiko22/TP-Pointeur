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

	printf("\n\nPour quitter, appuyez sur 0.\n");
	scanf_s("%d", &k);
	if (k == 0)
		printf("Fermeture de l'application");
}

void displayMenu(const Application *app) {

	printf("--%s--\n",app->nom);

	for (int i = 0; i < app->nb_menus; i++) {

		printf("%d.%s\n",i+1,app->menus[i].option);

	}

	runApplication(app);
}

int main()
{
	Menu photoMenus[] = {"Regarder une photo","Modifier une photo" };

	Application Photo;
	Photo.nom = "Photo";
	Photo.nb_menus = 2;
	Photo.menus = photoMenus;


	displayMenu(&Photo);


	Application Youtube;

	Youtube.nom = "Youtube";
	Youtube.nb_menus = 1;

	


	return 0;
}