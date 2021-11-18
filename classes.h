#include <string>
class team
{
  private:
  class team()// default constructor
  bool home_status;
  int score;
  int timeouts;
  string team_name;
  string coach_name;
  string hometown;
  public:
  {
    bool home_status; // true = home false = visitor
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
  private:

  public:
  class scoreboard()// default constructor
  {
  int quarter = 0;
  // sets up the unique defaults for team 1 or 2 which are a part of the scoreboard
  team t1;
  team t2;
  t1.set_team_name("team_1");
  t2.set_team_name("team_2");
  t1.set_coach_name("coach_1");
  t2.set_coach_name("coach_2");
  t1.set_hometown("hometown_1");
  t2.set_hometown("hometown_2");

  }


};