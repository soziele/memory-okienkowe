#include<SFML/Graphics.hpp>
#include"Rozgrywka.h"

int main()
{
	ROZGRYWKA Gra;
	
	sf::RenderWindow Okno_menu(sf::VideoMode(1000, 600, 32), "MEMORY", sf::Style::Close);
	

	Okno_menu.setVerticalSyncEnabled(true);
	
	
	while (Okno_menu.isOpen())
	{
		Gra.menu(&Okno_menu);
	}

	sf::RenderWindow Okno_gry(sf::VideoMode(1000, 600, 32), "MEMORY", sf::Style::Close);
	Okno_gry.setVerticalSyncEnabled(true);

	while (Okno_gry.isOpen())
	{
		
		Gra.aktualizuj(&Okno_gry);
	}


	return 0;
}
