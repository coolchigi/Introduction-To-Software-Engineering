Name        : Assignment 3
Author      : Chigozirim Eke
Student No	: 101193652
Copyright   : Chigozirim Eke, 2021


About:

A vastly simplied inventory system for a store or warehouse that utilizes the principles of Object Oriented Design(abstraction, inheritance and polymorphism). This program was written in C++

It consists of an entity object, the Location class which serves as a base class in which all the derived classes methods would be inherited from. Three other entity objects, the StoreLocation, WHLocation class and the Product class which serves as an implementation for in-store product locations, warehouse product locations respectively and stores information about the products stored in the warehouse and stores respectively. Two container objects: List and Queue.

The member variables are protected to enable the usage in the sub-classes of location.

List: This stores a collection of products contained in those store and warehouse locations.
Manages the storage space for its elements and provides member functions to access them

Queue: A first-in-first-out (FIFO) data structure for storing WHLocations. The FIFO nature of the data structure
ensures that we use older stock first.

Store: Serves as a control object that allows us to interact with the inventory system.

Control: Controls the interaction between the inventory system (Store) and the user.

View: Collects user input and provides system output.

Source Files: Control.cc List.cc Location.cc main.cc Product.cc Queue.cc
Store.cc StoreLocation.cc View.cc WHLocation.cc View.cc


Header files: Control.h List.h Location.h Product.h Queue.h Store.h StoreLocation.h View.h WHLocation.h

Compile Instructions:
		Download the zip folder
		Extract the contents
    Navigate to assignment3 and type make
    Run the program by typing ./a3 which is the executable name
