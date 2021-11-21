#include <iostream>
#include "classes.h"
#include <iomanip>

void display_scoreboard();

int main() 
{

display_scoreboard();




return 0;
} 












void display_scoreboard()
{
scoreboard s;
char input;

do
{

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
  << "\t"
  << s.t1_get_score() 
  << "\t\t\t\t\t\t" 
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
  << "\t"
  << s.t1_get_coach_name() 
  << "\t\t\t\t\t\t" 
  << s.t2_get_coach_name()
  << endl;
  ///////////////////////////////////////
  //displays the quarter
  cout 
  << "\t\t\t\t\t\t" 
  << s.get_quarter()
  << endl;
}
while(input != 'x' && input != 'X' );// <--demorgans law



}