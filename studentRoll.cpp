#include <string>
#include "studentRoll.h"
#include "student.h"
#include <sstream>

StudentRoll::StudentRoll() {
  head = tail = NULL;
}

void StudentRoll::insertAtTail(const Student &s){
  if(this->head == NULL){
	  this->head = new Node;
	  this->head->s = new Student(s.getName(), s.getPerm());
	  this->tail = this->head;
	  this->tail->next = NULL;
	  return;
  }
  if(this->head != NULL){
  this->tail->next = new Node;
  this->tail = tail->next;
  this->tail->next = NULL;
  this->tail->s = new Student(s.getName(), s.getPerm());
  }
}

std::string StudentRoll::toString() const {
  std::ostringstream oss;
  Node* n = this->head;
  oss << "[";
  while (n != NULL){
     oss << n->s->toString();
     n = n->next; 
     if (n  == NULL) break;
     oss << ",";
  }
  oss << "]";
  return oss.str();
}

StudentRoll::StudentRoll(const StudentRoll &orig) {
  if (orig.head == NULL) {
	  this->head = NULL;
	  this->tail = NULL;
	  return;
  }
  Node* ori = orig.head;
  this->head = new Node;
  this->tail = this->head;
  Node* n = this->head;
  this->head->s = new Student(ori->s->getName(), ori->s->getPerm());
  ori = ori->next;
  while(ori != NULL){
	  n->next = new Node;
	  n->next->next = NULL;
	  n->s = new Student(ori->s->getName(), ori->s->getPerm());
	  n = n->next;
	  this->tail = this->tail->next;
  }
 return; 
}

StudentRoll::~StudentRoll() {
  if(this->head == NULL) return;
  Node* p = this->head;
  Node* n = this->head;
  while(n != NULL){
          p = p->next;
        //  delete[] n->s;
          delete n;
          n = p;
  }
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





