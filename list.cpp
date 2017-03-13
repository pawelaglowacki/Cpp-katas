#include <iostream>
// my own list implementation

class List
{
 class Element
 {
  public:
   int num;
   Element * prev;
 };

 public:
 Element * root;
 Element * top;
 List(){this->root = NULL; this->top = root;}

 void push(int num)
 {
  Element * newEl = new Element();
  newEl->prev = top;
  newEl->num = num;
  top = newEl;
 } 

void pop()
{
  Element * tmp = top;
  top = top->prev;
  delete tmp;
}

};

int main()
{
 List l = List();
 l.push(1);
 std::cout<<l.top->num;
 l.push(2);
 std::cout<<l.top->num;
 l.push(3);
 std::cout<<l.top->num;
 l.pop();
 std::cout<<l.top->num;
 l.pop();
 std::cout<<l.top->num;
}
