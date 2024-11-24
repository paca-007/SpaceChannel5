#include "main.h"

#define KEY_CODE
//Ű���� �Է°� ����
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32


//�Լ�����
bool isRight(const int);
char getKeyEvent();
void createComputerValue(const int);
int keyCheck(char);
int levelCheck(const int);
void playerReset();
void computerReset();
void createPlayerValue(const int);
int keyProcess(char);

//���� ���� �Լ�
void levelInit();
void levelQuestion();
void levelInput(char);
void levelRight();
void levelUp();
void restartGame();

//�׸��� �Լ�
void drawComputer();
void updateComputer(int);
void drawPlayer();
void updatePlayer(int);
void drawHeart();
void updateHeart(int);
void drawCorrect();
void updateCorrect(int);
void drawGameOver();
void drawClear();
//void updateGameOver(int);


//���α׷� �Լ� ����

int menuDraw();
void infoDraw();
void drawMap();
void gLoop();

//ȭ����� ����
void ScreenInit();
void ScreenFlipping();
void ScreenClear();
void ScreenRelease();
int update();
void render();