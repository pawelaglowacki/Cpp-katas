#include <iostream>
// my own list implementation

class List
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
 List(){}

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

/*int main()
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
}*/
