#include <iostream>
// my own list implementation

class List
{
 class Element
 {
  public:
   int el;
   Element * prev;
 };

 public:
 Element * root;
 Element * top;
 List(){this->root = NULL; this->top = root;}

 void push(int num)
 {
    Element * el = new Element();
    el->el = num;
    top = el;

   if(top == root)
   { 
    el->prev = root;
   }
   else
   {
    el->prev = top;
   }
 } 

};

int main()
{
 List l = List();
 l.push(5);
 l.push(4);
 l.push(6);
 std::cout<<l.top->el;

}
