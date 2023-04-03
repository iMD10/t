#include<iostream>
class Super
{ 
    int x;
    public:
    void fun() 
    { 
        std::cout << "Super function"; 
    }
};

class Sub:public Super
{ 
    int y;
    public:
     void fun() 
    { 
        std::cout << "Sub function"; 
    }
};

int main()
{
    Sub* ptr;    // <--upcasting 
    Super obj;
    ptr = (Sub*) &obj;
    ptr->fun();
  return 0;
    
}
