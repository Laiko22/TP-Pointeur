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

void displayMenu(const Application *app) {

	printf("--%s--\n",app->nom);

	for (int i = 0; i < app->nb_menus; i++) {

		printf("%d.%s\n",i+1,app->menus[i].option);

	}
	
	printf("\nChoisissez une option (0 pour quitter) :\n");
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