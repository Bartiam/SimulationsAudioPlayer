#include "ThePlayer.h"

void ThePlayer::print_music_list()
{
	std::cout << "List of available songs." << std::endl;
	for (int i = 0; i < musicList.size(); ++i)
	{
		std::cout << "Song title: " << musicList[i].nameOfSong << std::endl;
	}
}

std::string ThePlayer::play(const std::string& nameOfSong)
{
	system("cls");
	for (int i = 0; i < musicList.size(); ++i)
	{
		if (nameOfSong == musicList[i].nameOfSong)
		{
			std::cout << "Name of the song: " << musicList[i].nameOfSong <<
				"\nName of the band: " << musicList[i].nameOfBand <<
				"\nSong duration: " << musicList[i].duration <<
				"\nSong recording date: " << musicList[i].dateOfCreation << std::endl;
			return "play";
		}
	}
	std::cerr << "Error! There is no such entry in the list. Try again. " << std::endl;
	return "error";
}

std::string ThePlayer::pause(const std::string& is_play)
{
	std::cout << "Song playback paused. " << std::endl;
	return "pause";
}

std::string ThePlayer::next()
{
	int itSong = rand() % musicList.size();
	play(musicList[itSong].nameOfSong);
	return musicList[itSong].nameOfSong;
}

std::string ThePlayer::stop()
{
	std::cout << "The current song has been stopped. " << std::endl;
	return "stop";
}