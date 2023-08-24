#include "ThePlayer.h"

bool is_correct_name_of_the_song(const std::string& nameOfTheSong)
{
	for (int i = 1; i < nameOfTheSong.size(); ++i)
	{
		if (nameOfTheSong[0] < 'A' || nameOfTheSong[0] > 'Z' || 
			nameOfTheSong[i] < 'a' || nameOfTheSong[i] > 'z') return false;
	}
	return true;
}

bool is_correct_command(const std::string& command)
{
	if (command != "Play" && command != "play" &&
		command != "Pause" && command != "pause" &&
		command != "Next" && command != "next" &&
		command != "Stop" && command != "stop" &&
		command != "Exit" && command != "exit") return false;

	return true;
}

int main()
{
	std::string command;
	std::string is_play = " ";
	std::string nameOfTheSong;
	ThePlayer thePlayer;
	thePlayer.setMusicList();

	while (true)
	{
		std::cout << "Enter the command: ";
		std::cin >> command;

		if (command == "Play" || command == "play" && is_play != "play")
		{
			while (is_play != "play")
			{
				if (is_play != "pause")
				{
					thePlayer.print_music_list();
					std::cout << "Enter the name of the song from the list: ";
					std::cin >> nameOfTheSong;

					if (!is_correct_name_of_the_song(nameOfTheSong))
					{
						std::cout << "Error! Incorrect input data. try again. " << std::endl;
						continue;
					}

					is_play = thePlayer.play(nameOfTheSong);
				}
				else
					is_play = thePlayer.play(nameOfTheSong);
			}
		}
		else if (command == "Pause" || command == "pause" && is_play == "play")
			is_play = thePlayer.pause(is_play);
		else if (command == "Next" || command == "next")
			nameOfTheSong = thePlayer.next();
		else if (command == "Stop " || command == "stop" &&
			is_play == "play" || is_play == "pause")
			is_play = thePlayer.stop();
		else if (command == "Exit" || command == "exit") return 0;
		else if (!is_correct_command(command))
			std::cerr << "Error! You can enter only available commands. " <<
			"\nList of available commands: " <<
			"\nPlay, Pause, Next, Stop, Exit. " << std::endl;
	}
}
