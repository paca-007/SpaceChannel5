#include "game.h"
#include "util.h"
#include "music.h"

int s_color = 14;
int n_color = 0;
int cha_color = 1;
int num_color = 7;
int press_color = 7;

//화면 출력
void titleDraw(int press_color)
{
	printf("\n\n\n\n");
	SetColor(s_color, 5); printf("         d888888o.  "); SetColor(13, 5); printf("     8 888888888o           .8.              ,o888888o.    8 8888888888  \n");
	SetColor(s_color, 5); printf("       .`8888:' `88."); SetColor(13, 5); printf("     8 8888    `88.        .888.            8888     `88.  8 8888        \n");
	SetColor(s_color, 5); printf("       8.`8888.   Y8"); SetColor(13, 5); printf("     8 8888     `88       :88888.       , 8 8888       `8. 8 8888        \n");
	SetColor(s_color, 5); printf("       `8.`8888.    "); SetColor(13, 5); printf("     8 8888    , 88      . `88888.       88 8888           8 8888        \n");
	SetColor(s_color, 5); printf("        `8.`8888.   "); SetColor(13, 5); printf("     8 8888.   , 88'    .8. `88888.      88 8888           8 888888888888\n");
	SetColor(s_color, 5); printf("         `8.`8888.  "); SetColor(13, 5); printf("     8 888888888P'     .8`8. `88888.     88 8888           8 8888        \n");
	SetColor(s_color, 5); printf("          `8.`8888. "); SetColor(13, 5); printf("     8 8888           .8' `8. `88888.    88 8888           8 8888        \n");
	SetColor(s_color, 5); printf("      8b   `8.`8888."); SetColor(13, 5); printf("     8 8888          .8'   `8. `88888.   `8 8888       .8' 8 8888        \n");
	SetColor(s_color, 5); printf("      `8b.  ;8.`8888"); SetColor(13, 5); printf("     8 8888         .888888888. `88888.     8888    , 88'  8 8888        \n");
	SetColor(s_color, 5); printf("       `Y8888P ,88P'"); SetColor(13, 5); printf("     8 8888        .8'       `8. `88888.     `8888888P'    8 888888888888\n\n");

	SetColor(cha_color, 5); printf("                                      ,o888888o.    8 8888        8          .8.          "); SetColor(n_color, 5); printf("b.             8 b.             8 "); SetColor(2, 5); printf("8 8888888888   8 8888\n");
	SetColor(cha_color, 5); printf("                                     8888     `88.  8 8888        8         .888.         "); SetColor(n_color, 5); printf("888o.          8 888o.          8 "); SetColor(2, 5); printf("8 8888         8 8888\n");
	SetColor(cha_color, 5); printf("                                  ,8 8888       `8. 8 8888        8        :88888.        "); SetColor(n_color, 5); printf("Y88888o.       8 Y88888o.       8 "); SetColor(2, 5); printf("8 8888         8 8888\n");
	SetColor(cha_color, 5); printf("                                  88 8888           8 8888        8       . `88888.       "); SetColor(n_color, 5); printf(".`Y888888o.    8 .`Y888888o.    8 "); SetColor(2, 5); printf("8 8888         8 8888\n");
	SetColor(cha_color, 5); printf("                                  88 8888           8 8888        8      .8. `88888.      "); SetColor(n_color, 5); printf("8o. `Y888888o. 8 8o. `Y888888o. 8 "); SetColor(2, 5); printf("8 888888888888 8 8888\n");
	SetColor(cha_color, 5); printf("                                  88 8888           8 8888        8     .8`8. `88888.     "); SetColor(n_color, 5); printf("8`Y8o. `Y88888o8 8`Y8o. `Y88888o8 "); SetColor(2, 5); printf("8 8888         8 8888\n");
	SetColor(cha_color, 5); printf("                                  88 8888           8 8888888888888    .8' `8. `88888.    "); SetColor(n_color, 5); printf("8   `Y8o. `Y8888 8   `Y8o. `Y8888 "); SetColor(2, 5); printf("8 8888         8 8888\n");
	SetColor(cha_color, 5); printf("                                  `8 8888       .8' 8 8888        8   .8'   `8. `88888.   "); SetColor(n_color, 5); printf("8      `Y8o. `Y8 8      `Y8o. `Y8 "); SetColor(2, 5); printf("8 8888         8 8888 \n");
	SetColor(cha_color, 5); printf("                                     8888     ,88'  8 8888        8  .888888888. `88888.  "); SetColor(n_color, 5); printf("8         `Y8o.` 8         `Y8o.` "); SetColor(2, 5); printf("8 8888         8 8888\n");
	SetColor(cha_color, 5); printf("                                      `8888888P'    8 8888        8 .8'       `8. `88888. "); SetColor(n_color, 5); printf("8            `Yo 8            `Yo "); SetColor(2, 5); printf("8 888888888888 8 888888888888\n\n\n\n");
	

	SetColor(13, 5);
	printf("                                                                             8888888888888\n");
	printf("                                                                             8888     8888\n");
	printf("                                                                             8888     \n");
	printf("                                                                             8888     \n");
	SetColor(13, 5);
	printf("                                                                             8888     \n");
	printf("                                                                             888888888888 \n");
	printf("                                                                                      8888\n");
	printf("                                                                                      8888\n");
	SetColor(13, 5);
	printf("                                                                                      8888\n");
	printf("                                                                                      8888\n");
	printf("                                                                             8888     8888 \n");
	printf("                                                                               88888888   \n");
	

	SetColor(press_color, 5);
	printf("\n\n");
	printf("                              ____  ____  ____  ___  ___    ___  ____    __     ___  ____    ____  _____    ___  ____    __    ____  ____ \n");
	printf("                             (  _ \\(  _ \\( ___)/ __)/ __)  / __)(  _ \\  /__\\   / __)( ___)  (_  _)(  _  )  / __)(_  _)  /__\\  (  _ \\(_  _)\n");
	printf("                              )___/ )   / )__) \\__ \\\\__ \\  \\__ \\ )___/ /(__)\\ ( (__  )__)     )(   )(_)(   \\__ \\  )(   /(__)\\  )   /  )(  \n");
	printf("                             (__)  (_)\\_)(____)(___/(___/  (___/(__)  (__)(__) \\___)(____)   (__) (_____)  (___/ (__) (__)(__)(_)\\_) (__) \n");
	
	
	
}

void title() 
{
	PlayMusicSound(0);
	while (1)
	{


		titleDraw(press_color);
		
		if (press_color == 7)
			press_color = 5;
		else if (press_color == 5)
			press_color = 7;

		

		char nKey = getKeyEvent();
		if (keyCheck(nKey) == SPACE)
			break;

		Sleep(500);
		system("cls");
	}
}

