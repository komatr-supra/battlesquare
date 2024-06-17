#pragma once
#include "raylib.h"

class AudioManager
{
public:
	AudioManager() {};
	static void SetMusicVolume(float volume);
	static void SetSfxVolume(float volume);

	static float GetMusicVolume();
	static float GetSfxVolume();

	static void PlayMusic(Sound sound);
private:
	static Sound currentMusic;
	static float musicVolume;
	static float sfxVolume;

	static AudioManager& GetInstance() {
		static AudioManager instance;
		return instance;
	}

	AudioManager(const AudioManager&) = delete;
	AudioManager operator=(const AudioManager&) = delete;
};

