#include <allegro5/allegro5.h>
#include <conio.h>
#include <stdio.h>
#include <string>

std::string OSName(int number);

int main() 
{
	al_init();
	unsigned int allegroVersion = al_get_allegro_version();
	printf("Allegro version = %u\n", allegroVersion);
	printf("Operating System = %s\n", OSName(al_get_system_id()).c_str());
	printf("\nPress any key...\n");
	int key = getchar();
	return 0;
}

std::string OSName(int number)
{
	switch (number)
	{
	case ALLEGRO_SYSTEM_ID_UNKNOWN: return "Unknown"; break;
	case ALLEGRO_SYSTEM_ID_ANDROID: return "Android"; break;
	case ALLEGRO_SYSTEM_ID_IPHONE: return "IPhone"; break;
	case ALLEGRO_SYSTEM_ID_MACOSX: return "MAC OS X"; break;
	case ALLEGRO_SYSTEM_ID_RASPBERRYPI: return "Raspberry PI"; break;
	case ALLEGRO_SYSTEM_ID_WINDOWS: return "Windows"; break;
	default: return "Unsupported"; break;
	}
}