#include "main.h"

#define KEY_CODE
//키보드 입력값 정의
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32


//함수선언
bool isRight(const int);
char getKeyEvent();
void createComputerValue(const int);
int keyCheck(char);
int levelCheck(const int);
void playerReset();
void computerReset();
void createPlayerValue(const int);
int keyProcess(char);

//게임 동작 함수
void levelInit();
void levelQuestion();
void levelInput(char);
void levelRight();
void levelUp();
void restartGame();

//그리는 함수
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


//프로그램 함수 선언

int menuDraw();
void infoDraw();
void drawMap();
void gLoop();

//화면버퍼 생성
void ScreenInit();
void ScreenFlipping();
void ScreenClear();
void ScreenRelease();
int update();
void render();