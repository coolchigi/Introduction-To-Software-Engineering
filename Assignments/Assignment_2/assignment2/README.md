Name        : Assignment 2
Author      : Chigozirim Eke
Student No	: 101193652
Copyright   : Copyright: Chigozirim Eke, 2021



Makefile - compiling object code and source into an executable that can be run by typing "make" into the terminal.

Source Files: Client.cc Episode.cc Network.cc PodArray.cc Podcast.cc Subscriber.cc TestView.cc TestControl.cc

Header Files: Client.h Episode.h Network.h PodArray.h Podcast.h Subscriber.h TestView.h TestControl.h

Entity Objects: Subscriber class, Podcast class, Episode Class
Control Objects: Network Class Client Class TestControl Class
Collection Objects: PodArray class




This program mimics a podcast network.Podcasts have a title and a host and a data structure for storing 0 or more Episodes. Each episode will have some metadata and some content (in our examples the content consists of lorem ipsum gibberish). Episodes may then be “played” (i.e., have their content printed to the console).

INSTRUCTIONS TO COMPILE:
                        Download zip folder
                        Extract the Contents
                        Using cd, navigate to the assignment2 folder and type "make"
                        To compile the executable type ./a2.

PROBLEMS TO BE FIXED:
  -Memory leaks
