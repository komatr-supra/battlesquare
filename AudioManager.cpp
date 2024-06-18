#include "AudioManager.h"
Sound AudioManager::currentMusic{0};
float AudioManager::musicVolume{0.5f};
float AudioManager::sfxVolume{0.5f};



void AudioManager::SetMusicVolume(float volume)
{
	musicVolume = volume;
	::SetSoundVolume(currentMusic, volume);
}

void AudioManager::SetSfxVolume(float volume)
{
	sfxVolume = volume;
}



float AudioManager::GetMusicVolume()
{
	return musicVolume;
}

float AudioManager::GetSfxVolume() { return sfxVolume; }

void AudioManager::PlayMusic(Sound sound)
{
	::SetSoundVolume(sound, AudioManager::musicVolume);
	PlaySound(sound);
	currentMusic = sound;
}

void AudioManager::PlaySFX(Sound sound)
{
	::SetSoundVolume(sound, AudioManager::sfxVolume);
	PlaySound(sound);
}
