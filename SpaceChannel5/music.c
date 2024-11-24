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
	// FMOD �ý��� ��ü �ʱ�ȭ
	result = FMOD_System_Create(&gSystem, FMOD_VERSION);
	
	result = FMOD_System_Init(gSystem, 3, FMOD_INIT_NORMAL, NULL);
	

	//���� �ֱ�
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\main.mp3"), FMOD_DEFAULT, 0, &sound[0]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\dance.mp3"), FMOD_DEFAULT, 0, &sound[1]);

	//ȿ���� �ֱ�
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\pipp.wav"), FMOD_DEFAULT, 0, &sound[2]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\woo.wav"), FMOD_DEFAULT, 0, &sound[3]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\count.wav"), FMOD_DEFAULT, 0, &sound[4]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\o.wav"), FMOD_DEFAULT, 0, &sound[5]);
	result = FMOD_System_CreateSound(gSystem, GetRelativePath("\\music\\x.wav"), FMOD_DEFAULT, 0, &sound[6]);
	
}

void PlayMusicSound(int sound_number)
{
	// ���� ���� �ε� �� ���
	FMOD_System_PlaySound(gSystem, sound[sound_number], NULL, 0, &channelMusic);
}

void PlayEffectSound(int sound_number)
{
	// ���� ���� �ε� �� ���
	FMOD_System_PlaySound(gSystem, sound[sound_number], NULL, 0, &channelEffect);
}

void StopSound()
{
	// ��� ���� ���� ���߱�
	FMOD_Channel_Stop(channelMusic);
}


void AdjustVolume(float volume)
{
	// ä���� ���� ����
	FMOD_Channel_SetVolume(channelMusic, volume);
}




