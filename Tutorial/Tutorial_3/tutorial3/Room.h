#ifndef ROOM_H
#define ROOM_H
#include<string>

using namespace std;

class Room{
private:
  string name;
  int capacity;
  int computers;
  bool whiteBoard;
public:
  Room(string name, int capacity, int computers,bool whiteBoard);
  Room(const Room &room);
  ~Room();
  //setters
  void setName(string fname);
  void setCapacity(int fcapacity);
  void setComputers(int fcomputers);
  void setWhiteBoard(bool fwhiteBoard);

  //getters
  string getName();
  int getCapacity();
  int getComputers();
  bool hasWhiteboard();

  bool meetsCriteria(int capacity, int computers, bool whiteboard);
  bool lessThan(Room& r);
  void print();



};
#endif
