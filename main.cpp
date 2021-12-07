// started november 12th 2021
// created by liam turnbull
// Input_Validation_Extended by drT
// created as a class assignemnt for Tyson mcmillan at tarrant county community college
// this assigment was to create a football scoreboard
// was intended to flesh out our knowledge on implementing and using classes
//
//
#include <iostream>
#include "classes.h"
#include "Input_Validation_Extended.h"
#include <iomanip>
#include <unistd.h>
void display_scoreboard();

int main() 
{
//cout << "hello world";
display_scoreboard();




return 0;
} 












void display_scoreboard()
{
scoreboard s;
int num, num2;
num  += num2;
//s.t2_set_score(0);
do
{
  system("clear");// on the start of a loop clear the screen



  // scoreboard header

  cout
  << "<-> <-> <-> <-> <-> <-> <-> <->" << endl
  << "  Liam's Football Scoreboard" <<endl
  << "<-> <-> <-> <-> <-> <-> <-> <->" << endl;
  // displays the home or visitor flag

  cout <<"\t\t";

  if(s.t1_get_home_status()==true)
  {
    cout << "(H)";
  }
  else if(s.t1_get_home_status()==false)
  {
    cout << "(V)";
  }
  cout << "\t\t\t\t\t\t\t";
  //displays homestatus for team 2
  if(s.t2_get_home_status()==true)
  {
    cout << "(H)";
  }
  else if(s.t2_get_home_status()==false)
  {
    cout << "(V)";
  }
  cout << endl;
  ///////////////////////////////////////
  //displays hometown
  cout 
  << "\t"
  << s.t1_get_hometown() 
  << "\t\t\t\t\t" 
  << s.t2_get_hometown() 
  << endl; 
  ///////////////////////////////////////////
  //displays team names
  cout 
  << "\t"
  << s.t1_get_team_name() 
  << "\t\t\t\t\t\t" 
  << s.t2_get_team_name() 
  << endl; 
  ///////////////////////////////////////
  //displays scores
  cout 
  << "\t\t\t\t"
  << "<< Score >>"
  << "\t\t" <<endl;
  cout 
  << "\t\t\t\t\t"
  << s.t1_get_score() 
  << "\t"
  << s.t2_get_score()
  << endl;
  ///////////////////////////////////////
  //displays coach
  cout 
  << "\t"
  << s.t1_get_coach_name() 
  << "\t\t\t\t\t\t" 
  << s.t2_get_coach_name()
  << endl;
  ///////////////////////////////////////
  //displays timeouts
  cout 
  << "\t\t\t\t"
  << "<< Timeouts >>"
  << "\t\t" <<endl;
  cout 
  << "\t\t\t\t\t"
  << s.t1_get_timeouts() 
  << "\t"
  << s.t2_get_timeouts()
  << endl;
  ///////////////////////////////////////
  //displays the quarter
  cout 
  << "\t\t\t\t"
  << "<< Quarter >>"
  << endl;
  cout 
  << "\t\t\t\t\t  " 
  << s.get_quarter()
  << endl;
  //////////////////////////////
  //displays the options menu
  cout 
  << "<-> <-> <-> <-> <-> <-> <-> <->" << endl
  << "\t\t Options Menu" << endl
  << "<-> <-> <-> <-> <-> <-> <-> <->" << endl
  << "\t\t << General >>"<<endl
  << "A. Modify quarter"<<endl
  << "W. Modify Team 1 Score"<<endl
  << "E. Modify Team 2 Score"<<endl
  << "X. Exit Program" << endl

  << "\t\t << Team 1 >>"<<endl
  << "B. Modify Team Name"<<endl
  << "C. Modify Hometown Name"<<endl
  << "D. Modify Coach Name"<<endl
  << "E. Modify Timeouts"<<endl
  << "F. Modify Visitor Flag"<<endl

  << "\t\t << Team 2 >>"<<endl
  << "G. Modify Team Name"<<endl
  << "H. Modify Hometown Name"<< 
  << "I. Modify Coach Name"<<endl
  << "J. Modify Timeouts"<<endl
  << "K. Modify Visitor Flag"<<endl;




  // end of display


  //start of input managment
  char input;
  validateChar(input);
  int num;
  string name;
  if(input == 'A'|| input =='a')
  {
    system("clear");
    cout << "What New Value Should Quarter Be?" << endl;
    validateInt(num);
    s.set_quarter(num);
  }
  else if(input == 'B' || input == 'b' )
  {
    system("clear");
    cout << "What New Name Should Team 1 Be?" << endl;
    validateString(name);
    s.t1_set_team_name(name);
  }
  else if(input == 'C' || input == 'c' )
  {
    system("clear");
    cout << "Whats Team 1's Hometown?" << endl;
    validateString(name);
    s.t1_set_hometown(name);
  }
  else if(input == 'D' || input == 'd' )
  {
    system("clear");
    cout << "Whats Team 1s coaches name?" << endl;
    validateString(name);
    s.t1_set_coach_name(name);
  }
  else if(input == 'E' || input == 'e' )
  {
    system("clear");
    cout << "How Many Timeouts does Team 1 Now Have?" << endl;
    validateInt(num);
    s.t1_set_timeouts(num);
  }
  else if(input == 'F' || input == 'f' )
  {
    system("clear");
    bool loop = true;
    do
    {
      int numb;
      
      cout
      << "Enter 1 for Home or 2 for Visitor" << endl;
      validateInt(numb);
      if(numb == 1)
      {
      s.t1_set_home_status(true);
      loop =false;
      }
      else if(numb == 2)
      {
      s.t1_set_home_status(false);
      loop =false;
      }
      else
      {
        
      }
    }while(loop == true);
  }
  else if(input == 'G' || input == 'g' )
  {
    system("clear");
    cout << "What New Name Should Team 2 Be?" << endl;
    validateString(name);
    s.t2_set_team_name(name);
  }
  else if(input == 'H' || input == 'h' )
  {
    system("clear");
    cout << "Whats Team 2's Hometown?" << endl;
    validateString(name);
    s.t2_set_hometown(name);
  }
  else if(input == 'I' || input == 'i' )
  {
    system("clear");
    cout << "Whats Team 2s coaches name?" << endl;
    validateString(name);
    s.t2_set_coach_name(name);
  }
  else if(input == 'J' || input == 'j' )
  {
    system("clear");
    cout << "How Many Timeouts does Team 2 Now Have?" << endl;
    validateInt(num);
    s.t2_set_timeouts(num);
  }
  else if(input == 'K' || input == 'k' )
  {
    system("clear");
    bool loop = true;
    do
    {
      int numb;
      
      cout
      << "Enter 1 for Home or 2 for Visitor" << endl;
      validateInt(numb);
      if(numb == 1)
      {
      s.t2_set_home_status(true);
      loop =false;
      }
      else if(numb == 2)
      {
      s.t2_set_home_status(false);
      loop =false;
      }
      else
      {
        cout << "invalid input!" << endl;
      }
    }while(loop == true);
  }
  else if(input == 'X' || input == 'x' )
  {
    system("clear");
    cout << "Goodbye" << endl;
    break;
  }
  else if(input == 'w' || input == 'W' )
  {
    system("clear");
    cout << "Whats Team 1's New Score?" << endl;
    validateInt(num);
    s.t1_set_score(num);
  }
  else if(input == 'q' || input == 'Q' )
  {
    system("clear");
    cout << "Whats Team 2's New Score?" << endl;
    validateInt(num);
    s.t2_set_score(num);
  }
}
while(true);
}






  