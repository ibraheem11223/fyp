#include <iostream>
using namespace std;
int main()
{
 int s;
 int a; // initializations
 char q;
 string name;
 string name2;
 string name3;
 char confirm;
 char C;
 string country1;
 string country2;
 string date;
 // string Jan1;
 // string Jan7;
 // string Jan12;
 char package;
 char E;
 char B;
 bool flag = false;
 string cancel;

 cout << "\n\n\t\tWELCOME TO AIRLINE TICKET RESERVATION SYSTEM !!!        \n\n"
      << endl;
 cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n"
      << endl;
 cout << "\t\tBook your flights at an affordable prices :-                    \n"
      << endl;
 cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n"
      << endl;

 do // loop starts, but since do-while loop it will be executed once and then show the rest
 {
  cout << "\n.Book Flight     (1)" << endl;
  cout << "\n.Cancel Flight   (2)" << endl;
  cout << "\n.Check Ticket    (3)" << endl;
  cout << "\nEnter your choice: ";
  cin >> a;
  cout << "\n\n ---------------------------------------------------------------------------- ";
  system("cls");

  switch (a)
  {
  case 1:
   cout << "\n\t<><><><><><><><><>BOOK YOUR FLIGHT!<><><><><><><><><>" << endl;
   cout << "\n\n";
   cout << "\nEnter your name: ";
   cin.ignore();       // this  clear the buffer
   getline(cin, name); // to ignore spaces between strings
   cout << "Enter city/country where you are: ";
   getline(cin, country1);
   cout << "Enter city/country where you want to go: ";
   getline(cin, country2);
   cout << "\nDates available for Flight to " << country2 << ". Enter Date you want: " << endl;
   cout << "\n  Jan1      Jan7      Jan12 " << endl;
   cout << "  8:00PM   7:00AM    1:30PM \n"
        << endl;
   cin >> date;
   while (true)
   {
    if (date == "jan1" || date == "Jan1" || date == "jan7" || date == "Jan7" || date == "jan12" || date == "Jan12")
    {
     cout << "\n  Choose package (Economy/Business) " << endl;
     cout << " Business: Rs 100,000  Economy: Rs 50.000 " << endl;
     cout << " Press B for Business and E for Economy \n";
     cin >> package;

     if (package == 'e' || package == 'E')
     {
      cout << "\n\n **** FLIGHT CONFIRMATION **** " << endl;
      cout << "\n";
      cout << " Name: " << name << endl;
      cout << " Flight from " << country1 << " to " << country2 << endl;
      cout << " Economy Class Ticket price: 50.000Rs" << endl;
      if (date == "Jan1" || date == "jan1")
      {
       cout << "\n Departure time 8:00PM on Jan 1";
      }
      else if (date == "Jan7" || date == "jan7")
      {
       cout << "\n Departure time 7:00AM on Jan 7";
      }
      else if (date == "Jan12" || date == "jan12")
      {
       cout << "\n Departure time 1:30PM on Jan 12";
      }
      cout << "\n Flight Confirmed (^-^)" << endl;
     }

     else if (package == 'b' || package == 'B')
     {
      cout << "\n\n **** FLIGHT CONFIRMATION **** " << endl;
      cout << "\n";
      cout << " Name: " << name << endl;
      cout << " Flight from " << country1 << " to " << country2 << endl;
      cout << " Business Class Ticket price: Rs 100,000 " << endl;
      if (date == "Jan1" || date == "jan1")
      {
       cout << "\n Departure time 8:00PM on Jan 1";
      }
      else if (date == "Jan7" || date == "jan7")
      {
       cout << "\n Departure time 7:00AM on Jan 7";
      }
      else if (date == "Jan12" || date == "jan12")
      {
       cout << "\n Departure time 1:30PM on Jan 12";
      }
      cout << "\n Flight Confirmed (^-^)" << endl;
     }

     break;
    }
    else
    {
     cout << " Please Valid  Date \n";
     cin >> date;
    }
   }
   break;
}

 }

 while (q != 'x'); // condition for the loop
 return 0;
 system("cls");
}