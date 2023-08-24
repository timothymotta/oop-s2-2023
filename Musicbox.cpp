// Timothy Motta - a1831126

#include <MusicBox.h>
#include <string.h>

#include <iostream>

MusicBox {
  song = "";
  width = 0;
}

// function to get song name and width
MusicBox(std::string songname, int width) {
  std::cout << "Please enter song name: ";
  std::cin >> songname;

  std::cout << "Please enter the width: ";
  std::cin >> width;

  return songname;
  return width;
}