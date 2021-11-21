#include <string>


using namespace std;


class team
{
  protected:
  
  bool home_status;
  int score;
  int timeouts;
  string team_name;
  string coach_name;
  string hometown;
  public:
  team()// default constructor note to self remember that def cons are just the class name after public
  {
    bool home_status = true; // true = home false = visitor
    int score = 0;
    int timeouts = 4;
    string team_name = "team_name";
    string coach_name = "coach_name";
    string hometown = "hometown_name";
  }
  void set_home_status(bool b){home_status = b;}
  void set_score(int i){score = i;}
  void set_timeouts(int i){timeouts = i;}
  void set_team_name(string s){team_name = s;}
  void set_coach_name(string s){coach_name = s;}
  void set_hometown(string s){hometown = s;}

  bool get_home_status()const {return home_status;}
  int get_score()const {return score;}
  int get_timeouts()const {return timeouts;}
  string get_team_name()const {return team_name;}
  string get_coach_name()const {return coach_name;}
  string get_hometown()const {return hometown;}
};





class scoreboard
{
  protected:
  team team_1;
  team team_2;
  int quarter;

  public:
  scoreboard()// default constructor
  {
  int quarter = 0;
  // sets up the unique defaults for team 1 or 2 which are a part of the scoreboard
  team_1.set_score(0);
  team_2.set_score(0);
  // investigate why t2 score is set as a semi random int
  team_1.set_timeouts(4);
  team_2.set_timeouts(4);// investigate the same
  team_1.set_home_status(true);
  team_2.set_home_status(false);
  team_1.set_team_name("team_1");
  team_2.set_team_name("team_2");
  team_1.set_coach_name("coach_1");
  team_2.set_coach_name("coach_2");
  team_1.set_hometown("hometown_1");
  team_2.set_hometown("hometown_2");
  }
  //internally uses team_#. externall should use t#. instead 
 
  //setters
  
  //bools
  void t1_set_home_status(bool b){ team_1.set_home_status(b);}
  void t2_set_home_status(bool b){ team_2.set_home_status(b);}

  //ints
  void t1_set_score   (int i){team_1.set_score(i);}
  void t2_set_score   (int i){team_2.set_score(i);}
  void t1_set_timeouts(int i){team_1.set_timeouts(i);}
  void t2_set_timeouts(int i){team_2.set_timeouts(i);}

  void set_quarter(int i){quarter=i;}

  //strings
  void t1_set_team_name   (string s){team_1.set_team_name(s);}
  void t2_set_team_name   (string s){team_2.set_team_name(s);}
  void t1_set_coach_name  (string s){team_1.set_coach_name(s);}
  void t2_set_coach_name  (string s){team_2.set_coach_name(s);}
  void t1_set_hometown    (string s){team_1.set_hometown(s);}
  void t2_set_hometown    (string s){team_2.set_hometown(s);}
  
// getters
  bool    t1_get_home_status()const {return team_1.get_home_status();}
  bool    t2_get_home_status()const {return team_2.get_home_status();}
  int     get_quarter       ()const {return quarter;}
  int     t1_get_score      ()const {return team_1.get_score();}
  int     t2_get_score      ()const {return team_2.get_score();}
  int     t1_get_timeouts   ()const {return team_1.get_timeouts();}
  int     t2_get_timeouts   ()const {return team_2.get_timeouts();}
  string  t1_get_team_name  ()const {return team_1.get_team_name();}
  string  t2_get_team_name  ()const {return team_2.get_team_name();}
  string  t1_get_coach_name ()const {return team_1.get_coach_name();}
  string  t2_get_coach_name ()const {return team_2.get_coach_name();}
  string  t1_get_hometown   ()const {return team_1.get_hometown();}
  string  t2_get_hometown   ()const {return team_2.get_hometown();}

};