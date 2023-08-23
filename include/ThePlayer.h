#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <vector>

class ThePlayer
{
private:
	class Track
	{
	public:
		std::string nameOfSong;
		std::string nameOfBand;
		std::string dateOfCreation;
		int duration;
	};

	std::vector<Track> musicList = { { "Warrior", "Disturbed", "August 2010 year", 204 },
									{ "Shaman", "Skolot", "July 2019 year", 367 },
									{ "Forester", "King and the clown", "August 1996 year", 191 },
									{ "Alan", "Woodscream", "September 2014 year", 179 },
									{ "Whirlwind", "Woodscream", "April 2020 year", 235 },
									{ "Valhalla", "Miracle of sound ft. Peyton parrish", "November 2020 year", 240 },
									{ "Reflection", "King and the clown", "June 2006 year", 332 },
									{ "Heathens", "Manntra", "June 2016 year", 223 },
									{ "Ori Ori", "Manntra", "December 2020 year", 192 },
									{ "Calm", "Aria", "February 2002 year", 335 } };
public:
	
	void print_music_list();
	std::string play(const std::string& nameOfSong);
	std::string pause(const std::string& nameOfTheSong);
	std::string next();
	std::string stop();
};