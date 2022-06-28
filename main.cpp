#include <iostream>

using namespace std;


class A{
private:
static int x;

public:
void add(){
  x++;
}
int print(){
  return x;
}

};

int A::x=0;

int main(){
A a;
cout<<"X     = "<<a.print()<<endl;
  a.add();
cout<<"X + 1 = "<<a.print()<<endl;
  a.add();
cout<<"X + 2 = "<<a.print()<<endl;
}