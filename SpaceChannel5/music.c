#include "main.h"
#include "music.h"

FMOD_SYSTEM* gSystem;
FMOD_SOUND* sound[10];
FMOD_RESULT result;
FMOD_CHANNEL* channelMusic;
FMOD_CHANNEL* channelEffect;

char _path[255];
char _pathWithMusic[255];

void getPATH()
{
	GetCurrentDirectoryA(255, _path);
}

char* GetRelativePath(const char* _filepath)
{
	getPATH();
	_pathWithMusic[0] = '\0';

	strcat_s(_pathWithMusic, sizeof(_pathWithMusic), _path);

	strcat_s(_pathWithMusic, sizeof(_pathWithMusic), _filepath);

	return _pathWithMusic;
}


void Music_Init()
{
	// FMOD 시스템 객체 초기화
	result = FMOD_System_Create(&gSystem, FMOD_VERSION);
	
	result = FMOD_System_Init(gSystem, 3, FMOD_INIT_NORMAL, NULL);
	

	//사운드 넣기
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\main.mp3"), FMOD_DEFAULT, 0, &sound[0]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\dance.mp3"), FMOD_DEFAULT, 0, &sound[1]);

	//효과음 넣기
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\pipp.wav"), FMOD_DEFAULT, 0, &sound[2]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\woo.wav"), FMOD_DEFAULT, 0, &sound[3]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\count.wav"), FMOD_DEFAULT, 0, &sound[4]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\o.wav"), FMOD_DEFAULT, 0, &sound[5]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\x.wav"), FMOD_DEFAULT, 0, &sound[6]);
	
}

void PlayMusicSound(int sound_number)
{
	// 사운드 파일 로드 및 재생
	FMOD_System_PlaySound(gSystem, sound[sound_number], NULL, 0, &channelMusic);
}

void PlayEffectSound(int sound_number)
{
	// 사운드 파일 로드 및 재생
	FMOD_System_PlaySound(gSystem, sound[sound_number], NULL, 0, &channelEffect);
}

void StopSound()
{
	// 재생 중인 사운드 멈추기
	FMOD_Channel_Stop(channelMusic);
}


void AdjustVolume(float volume)
{
	// 채널의 볼륨 조절
	FMOD_Channel_SetVolume(channelMusic, volume);
}




