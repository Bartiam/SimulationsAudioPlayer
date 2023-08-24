#include "ThePlayer.h"

std::string Track::getNameOfSong() { return nameOfSong; }

std::string Track::getNameOfBand() { return nameOfBand; }

std::string Track::getDateOfCreation() { return dateOfCreation; }

int Track::getduration() { return duration; }

void Track::setNameOfSong(const std::string& nameOfSong) { this->nameOfSong = nameOfSong; }

void Track::setNameOfBand(const std::string& nameOfBand) { this->nameOfBand = nameOfBand; }

void Track::setDateOfCreation(const std::string& dateOfCreation) { this->dateOfCreation = dateOfCreation; }

void Track::setduration(const int& duration) { this->duration = duration; }

void ThePlayer::setMusicList()
{
	Track track;
	track.setNameOfSong("Warrior");
	track.setNameOfBand("Disturbed");
	track.setDateOfCreation("August 2010 year");
	track.setduration(204);
	musicList.push_back(track);

	track.setNameOfSong("Shaman");
	track.setNameOfBand("Skolot");
	track.setDateOfCreation("July 2019 year");
	track.setduration(367);
	musicList.push_back(track);

	track.setNameOfSong("Forester");
	track.setNameOfBand("King and the clown");
	track.setDateOfCreation("August 1996 year");
	track.setduration(191);
	musicList.push_back(track);

	track.setNameOfSong("Alan");
	track.setNameOfBand("Woodscream");
	track.setDateOfCreation("September 2014 year");
	track.setduration(179);
	musicList.push_back(track);

	track.setNameOfSong("Whirlwind");
	track.setNameOfBand("Woodscream");
	track.setDateOfCreation("April 2020 year");
	track.setduration(235);
	musicList.push_back(track);

	track.setNameOfSong("Valhalla");
	track.setNameOfBand("Miracle of sound ft. Peyton parrish");
	track.setDateOfCreation("November 2020 year");
	track.setduration(240);
	musicList.push_back(track);

	track.setNameOfSong("Reflection");
	track.setNameOfBand("King and the clown");
	track.setDateOfCreation("June 2006 year");
	track.setduration(332);
	musicList.push_back(track);

	track.setNameOfSong("Heathens");
	track.setNameOfBand("Manntra");
	track.setDateOfCreation("June 2016 year");
	track.setduration(223);
	musicList.push_back(track);

	track.setNameOfSong("Ori Ori");
	track.setNameOfBand("Manntra");
	track.setDateOfCreation("December 2020 year");
	track.setduration(192);
	musicList.push_back(track);

	track.setNameOfSong("Calm");
	track.setNameOfBand("Aria");
	track.setDateOfCreation("February 2002 year");
	track.setduration(335);
	musicList.push_back(track);
}

void ThePlayer::print_music_list()
{
	std::cout << "List of available songs." << std::endl;
	for (int i = 0; i < musicList.size(); ++i)
	{
		std::cout << "Song title: " << musicList[i].getNameOfSong() << std::endl;
	}
}

std::string ThePlayer::play(const std::string& nameOfSong)
{
	system("cls");
	for (int i = 0; i < musicList.size(); ++i)
	{
		if (nameOfSong == musicList[i].getNameOfSong())
		{
			std::cout << "Name of the song: " << musicList[i].getNameOfSong() <<
				"\nName of the band: " << musicList[i].getNameOfBand() <<
				"\nSong duration: " << musicList[i].getduration() <<
				"\nSong recording date: " << musicList[i].getDateOfCreation() << std::endl;
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
	play(musicList[itSong].getNameOfSong());
	return musicList[itSong].getNameOfSong();
}

std::string ThePlayer::stop()
{
	std::cout << "The current song has been stopped. " << std::endl;
	return "stop";
}