#include <string>
#include "studentRoll.h"
#include "student.h"
#include <sstream>

StudentRoll::StudentRoll() {
  head = tail = NULL;
}

void StudentRoll::insertAtTail(const Student &s) {
  this->tail->next = new Node;
  this->tail = tail->next;
  this->tail->next = NULL;
}

std::string StudentRoll::toString() const {
	/*
    std::ostringstream oss;
  oss << "["
      << this->getName() << ","
      << this->getPerm() << "]";
  return oss.str(); */
	return "stub";
}

StudentRoll::StudentRoll(const StudentRoll &orig) {
  if (orig.head == NULL) {
	  this->head = NULL;
	  this->tail = NULL;
	  return;
  }
 return; 
}

StudentRoll::~StudentRoll() {
  // STUB
}

StudentRoll & StudentRoll::operator =(const StudentRoll &right ) {
  // The next two lines are standard, and you should keep them.
  // They avoid problems with self-assignment where you might free up 
  // memory before you copy from it.  (e.g. x = x)

  if (&right == this) 
    return (*this);

  // TODO... Here is where there is code missing that you need to 
  // fill in...


  // KEEP THE CODE BELOW THIS LINE
  // Overloaded = should end with this line, despite what the textbook says.
  return (*this); 
  
}





