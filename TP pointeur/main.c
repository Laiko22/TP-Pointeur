// Adrien Gillet
#include <stdio.h>


int main()
{

	typedef struct Menu {

		const char* option;

	}Menu;

	typedef struct Application {

		const char* nom;
		Menu *menus;
		int nb_menus;

	}Application;

	Application Youtube;

	Youtube.nom = "Youtube";
	Youtube.nb_menus = 1;

	printf("Nombre menu : %d, Nom de l'appli : %s",Youtube.nb_menus,Youtube.nom);


	return 0;
}