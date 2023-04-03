// The program 
#include <iostream>
using namespace std;
class B 
{
protected:
string  x;
public:
B() { 
        x = " is very Easy";
}   void pp()
{
        cout<<x<<endl;
}
 
};
class B1: virtual  public B 
{public:
void pp ()
  {
    cout <<"\n Hello:";
  } 
};
class B2: virtual public B
{public:
 void pp ()
  {
    cout <<"\n Computer College Student\n";
  } 
};


class B3: public  B1 ,  public  B2    
{
    private:
string y;        
public:
B3 ()
  {
    
    y = " The Lab Exam ";
    
}                
  void pp () 
  {// Do not CHANGE Anything in here
          B1::pp();
          B2::pp();
          cout << y << endl;
          B::pp();
    
  }                
  
};
int main () 
{
// Do not CHANGE Anything in the main
B3 b;  // here B3 is the object of derived class
b.pp ();  // a way to access overridden function
  return 0;}

