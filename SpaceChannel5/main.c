#include "main.h"
#include "game.h"
#include "util.h"
#include "draw.h"

//메인함수
int main()
{
	init();
	Music_Init();
	title();
	
	while (1)
	{

		system("cls");
		int menuCode = menuDraw();

			if (menuCode == 0)
			{
				StopSound();
				gLoop();
			}
			else if (menuCode == 1)
			{
				//printf("게임 정보");
				infoDraw();
			}
			else if (menuCode == 2)
			{
				return 0;
			}     

		
		system("cls");
	}
	

	return 0;

}
