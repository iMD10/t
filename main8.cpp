#include <iostream>  
#include <cstring>  
#include <conio.h>  
#define max 100  
using namespace std; 
// Class Customer  
class Customer  
{  
public:  
    char name[100];  
    char address[100];  
    char phone[12];  
    char from_date[20];  
    char to_date[20];  
    float payment_advance;  
    long int booking_id;  
};  
class Room  
{  
public:  
    char type;  
    char stype;  
    char ac;  
    int roomNumber;  
    float rent;  
    int status;  
  
     Customer cust;  
     Room addRoom(int);  
    void searchRoom(int);  
    void deleteRoom(int);  
    void displayRoom(Room);  
};  
  
// Global Declarations  
 Room rooms[max]; // Array of rooms 
int count = 0;    // It is incremented by 1 after adding room and decremented by 1 after deleting room
Room Room::addRoom(int rno)  
{  
     /*  // --> Compelete your Code here 
    Type of Room: 
    B=Bedroom or SU=Suite or S=Studio:  
     Type of Comfort:
    S=Stylish Comforter or B=Breathable Comforter or L=Luxury Comforter:   
   Bed Type Size:
   K=king or Q=Queen or T=Twin Bed: ";  
    Daily Rent :  
    room.status = 0;   // Check if room is added 
   Room Added Successfully!    */
    Room room;  
    room.roomNumber = rno; 
    cout << "\nType of Room: ";
    cout << "\nB=Bedroom or U=Suite or S=Studio: ";  
    cin >> room.ac;  
    cout << "\nType of Comfort:";
    cout<<"\nS=Stylish Comforter or B=Breathable Comforter or L=Luxury Comforter: ";  
    cin >> room.type; 
    cout << "\nBed Type Size:"<<endl;
    cout<<"K=king or Q=Queen or T=Twin Bed: ";  
    cin >> room.stype;  
    cout << "\nDaily Rent : ";  
    cin >> room.rent;  
    room.status = 0;  
  
    cout << "\n Room Added Successfully!";  
    getch();  
    return room;  
    
   
}  
void Room::searchRoom(int rno)  
{ int i, found = 0;  
    for (i = 0; i < count; i++)  
    {  
        if (rooms[i].roomNumber == rno)  
        {  
            found = 1;  
            break;  
        }  
    }  
    if (found == 1)  
    {  
        cout << "Room Details\n";  
        if (rooms[i].status == 1)  
        {  
            cout << "\nRoom is Reserved";  
        }  
        else  
        {  
            cout << "\nRoom is available";  
        }  
        displayRoom(rooms[i]);  
        getch();  
    }  
    else  
    {  
        cout << "\nRoom not found";  
        getch();  
    }           
}  
  
void Room::displayRoom(Room tempRoom)  
{  
   /*  // --> Compelete your Code here     Room Number: 
    Type of Room: 
    B=Bedroom or SU=Suite S=Studio: 
   Type of Comfort:";
   S=Stylish Comforter or B=Breathable Comforter or L=Luxury Comforter: 
    Bed Type Size:
    K=king or Q=Queen or T=Twin Bed:   
    Daily Rent:     */ 
    cout<<"Room number :"<<tempRoom.roomNumber<<endl;
    cout<<"type of room: \n  B=Bedroom or SU=Suite S=Studio:  "<<tempRoom.ac<<endl;
    cout<<"type of comfort: \n  S=Stylish Comforter or B=Breathable Comforter or L=Luxury Comforter: "<<tempRoom.type<<endl;
    cout<<"bed type size : \n K=king or Q=Queen or T=Twin Bed:  "<<tempRoom.stype<<endl;
    cout<<"daily rent : "<<tempRoom.rent<<endl; 
}  
  
// hotel management class inherits  the public and protected members from Room class
class HotelMgnt   
{  
public:  
    void checkIn();  
    void getAvailRoom();  
    void searchCustomer(char *);  
    void checkOut(int);  
    void guestSummaryReport();  
};  
  
 
  
// hotel management reservation of room  
void HotelMgnt::checkIn()  
{  
   /*  // --> Compelete your Code here prompt a user to enter  roomNumberEnter Room number :        if the room is found then displays 
        Room Details: loop all the avaiable rooms in the room array  
        if room status == 0 then print       Enter booking id:  
      Enter Customer Name (First Name):  
      Enter Address (only city):  
      Enter Phone:  
      Enter From Date (DD/MM/YYYY):  
      Enter to  Date (DD/MM/YYYY):   
      Enter Advance Payment: ";  
       
        Set rooms status = 1;  
  
        Customer Checked-in Successfully...     
  else        if roomsstatus == 1 then print  
              Room is already Booked          */  
              Customer c;
              int x;
              cout<<"enter room number : ";
              cin>>x;
              int check = 0;
              int i = 0 ;
              for(; i < count ; i ++){
                  if(rooms[i].roomNumber == x && rooms[i].status == 0){
              
              cout<<"enter booking id : ";
              cin>>booking_id;
              cout<<"Enter Customer Name (First Name)"<<;
              cin>>c.name;
              cout<<"Enter Address (only city):";
              cin>>address;
              cout<<"Enter Phone:"<<;
              cin>>c.phone;
              cout<<"Enter From Date (DD/MM/YYYY): ";
              cin>>c.from_date;
              cout<<"Enter to  Date (DD/MM/YYYY):";
              cin>>c.to_date;
              cout<<"Enter Advance Payment: ";
              cin>>payment_advance;
                    check = 1;  
                  }
                  
              }
              if(check == 0) cout<<"Room is already Booked "<<endl;
              
              
              
              
         
         
}  
  
// hotel management shows available rooms  
void HotelMgnt::getAvailRoom()  
{    /*  // --> Compelete your Code here      loop all the avaiable rooms in the room array  
        if room status == 0 then  
       display Room   
      Press enter for next room  
            Set found = 1;  
            
    else if  found = 0  
       All rooms are reserved 
    */
    int check = 0 ;
    for( int i = 0 ; i < count ; i++){
        if(rooms[i].status == 0){rooms[i].displayRoom(); check = 1;}
    }
    if(check == 0) cout<<"all room reserved"<<end;
}  
  
// hotel management shows all persons that have booked room  
void HotelMgnt::searchCustomer(char *pname)  
{  
   /*  // --> Compelete your Code here         loop all the avaiable rooms in the room array 
        if (rooms status == 1 and strcmp(rooms[i].cust.name, pname) == 0)  
         
           Customer Name:  
            Room Number:  
            Press enter for next record 
           Set found = 1;  
            
    else then if found = 0  
    
        Person not found 
       */ 
}  
  
// hotel managemt generates the bill of the expenses  
void HotelMgnt::checkOut(int roomNum)  
{  
  /*      // --> Compelete your Code here     loop all the avaiable rooms in the room array
        if (rooms[i].status == 1 and  rooms[i].roomNumber == roomNum)   
            set found = 1;  
            break;  
          
     
    else if found = 1  
    
       Enter Number of Days:  
        calculate billAmount = days * rooms rent         ######## CheckOut Details ########  
         Customer Name :   
        Room Number :  
        Address :  
        Phone : 
        Total Amount Due :   
       Advance Paid: 
         Total Payable:  billAmount - rooms[i].cust.payment_advance   
        Set rooms status = 0;       */ 
     
}  
  
// managing rooms (adding and searching available rooms)  
void manageRooms()  
{      Room room;  
    int opt, rno, i, flag = 0;  
    char ch;  
    do  
    {  
      
        cout << "\n### Manage Rooms ###";  
        cout << "\n1. Add Room";  
        cout << "\n2. Search Room";  
        cout << "\n3. Back to Main Menu";  
        cout << "\n\nEnter Option: ";  
        cin >> opt;  
  
        // switch statement  
        switch (opt)  
        {  
        case 1:  
            cout << "\nEnter Room Number: ";  
            cin >> rno;  
            i = 0;  
            for (i = 0; i < count; i++)  
            {  
                if (rooms[i].roomNumber == rno)  
                {  
                    flag = 1;  
                }  
            }  
            if (flag == 1)  
            {  
                cout << "\nRoom Number is Present.\nPlease enter unique Number";  
                flag = 0;  
                getch();  
            }  
            else  
            {  
                rooms[count] = room.addRoom(rno);  
                count++;  
            }  
            break;  
        case 2:  
            cout << "\nEnter room number: ";  
            cin >> rno;  
            room.searchRoom(rno);  
            break;  
        case 3:  
            // nothing to do  
            break;  
        default:  
            cout << "\nPlease Enter correct option";  
            break;  
        }  
    } while (opt != 3);  
}  
void HotelMgnt::guestSummaryReport()  
{ if (count == 0)  
    {  
        cout << "\n No Guest in Hotel !!";  
    }  
    for (int i = 0; i < count; i++)  
    {  
        if (rooms[i].status == 1)  
        {  
            cout << "\n Customer First Name : " << rooms[i].cust.name;  
            cout << "\n Room Number : " << rooms[i].roomNumber;  
            cout << "\n Address (only city) : " << rooms[i].cust.address;  
            cout << "\n Phone : " << rooms[i].cust.phone;  
            cout << "\n---------------------------------------";  
        }  
    }  
  
    getch();  } 

int main()  
{  
      
     // --> Compelete your Code here ( Create an object)
int opt, rno;    
char pname[100];
  
    do  
    {    
        cout << "######## Hotel Management #########\n";  
        cout << "\n1. Manage Rooms";  
        cout << "\n2. Check-In Room";  
        cout << "\n3. Available Rooms";  
        cout << "\n4. Search Customer";  
        cout << "\n5. Check-Out Room";  
        cout << "\n6. Guest Summary Report"; 
        cout << "\n7. Delete Room"; 
        cout << "\n8. Exit";  
        cout << "\n\nEnter Option: ";  
        cin >> opt;  
        switch (opt)  
        {  
        case 1:  
            manageRooms();  
            break;  
        case 2:  
            if (count == 0)  
            {  
                cout << "\nRooms data is not available.\nPlease add the rooms first.";  
                getch();  
            }  
            else  
                 // --> Compelete your Code here   
            break;  
        case 3:  
            if (count == 0)  
            {  
                cout << "\nRooms data is not available.\nPlease add the rooms first.";  
                getch();  
            }  
            else  
                  // --> Compelete your Code here ;  
            break;  
        case 4:  
            if (count == 0)  
            {  
                cout << "\nRooms are not available.\nPlease add the rooms first.";  
                getch();  
            }  
            else  
            {  
                cout << "Enter Customer Name: ";  
                cin >> pname;  
                  // --> Compelete your Code here  
            }  
            break;  
        case 5:  
            if (count == 0)  
            {  
                cout << "\nRooms are not available.\nPlease add the rooms first.";  
                getch();  
            }  
            else  
            {  
                cout << "Enter Room Number : ";  
                cin >> rno;  
                  // --> Compelete your Code here   
            }  
            break;  
        case 6:  
            hm.guestSummaryReport();  
            break;
        case 7: 
            cout << "Enter Room Number : ";  
            cin >> rno; 
             // --> Compelete your Code here  
            break;
        case 8:  
            cout << "\nTHANK YOU! FOR USING our Hotel Management System";  
            break;  
        default:  
            cout << "\nPlease Enter correct option";  
            break;  
        }  
    } while (opt != 8);  
  
    getch();  
    
    return 0;
} 
