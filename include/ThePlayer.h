#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

class Track
{
private:
	std::string nameOfSong;
	std::string nameOfBand;
	std::string dateOfCreation;
	int duration;
public:
	std::string getNameOfSong();
	std::string getNameOfBand();
	std::string getDateOfCreation();
	int getduration();

	void setNameOfSong(const std::string& nameOfSong);
	void setNameOfBand(const std::string& nameOfBand);
	void setDateOfCreation(const std::string& dateOfCreation);
	void setduration(const int& duration);
};



class ThePlayer
{
private:
	std::vector<Track> musicList;
public:
	void setMusicList();
	void print_music_list();
	std::string play(const std::string& nameOfSong);
	std::string pause(const std::string& nameOfTheSong);
	std::string next();
	std::string stop();
};