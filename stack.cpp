#include <iostream>
// my own list implementation

class Stack
{
 class Element
 {
  public:
   Element(){}
   int num;
   std::unique_ptr<Element> prev;
 };

 public:
 std::unique_ptr<Element> top;
 Stack(){}

 void push(int num)
 {
  std::unique_ptr<Element> newEl (new Element());
  newEl->prev = std::move(top);
  newEl->num = num;
  top = std::move(newEl);
 } 

 void pop()
 {
  top = std::move(top->prev); 
 }

int getTopNr() {return top->num;}
};

