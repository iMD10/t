#include <iostream>
using namespace std;

class Z;
class Y;

class X 
{

private:
int val_1;

public:X () 
  {
    
val_1 = 10;

} 
 friend int abc (X, Y, Z);
};			// end of X class

class Y 
{

private:
int val_2;
public:  Y () 
  {
    
val_2 = 20;
  
} friend int abc (X, Y, Z);	// friend function declaration
};				// end of Y class
class Z

{

private:
int val_3;

public:Z () 
  {
    
val_3 = 30;
  
} friend int abc (X, Y, Z);	// friend function declaration
};				// end of Z class


int abc(X s1, Y s2, Z s3)
// friend function definition as a global function


{
  
return (s1.val_1 + s3.val_3 + s2.val_2);

}


int
main () 
{
  
X a;				// object of class X
  Y b;				// object of class Y
  Z c;				// object of class Z
  cout << " \n sum of these numbers = " << abc (a, b, c) << endl;
  
return 0;

}

