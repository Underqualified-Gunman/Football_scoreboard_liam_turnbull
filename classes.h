#include <string>
class team
{
  private:
  class team()
  {
  bool home_status; // true = home false = visitor
  int score = 0;
  int timeouts = 4;
  string team_name = "team_name";
  string coach_name = "coach_name";
  string hometown = "hometown_name";
  }
  public:

  
  void set_home_status(bool b){home_status = b}
  void set_score(int i){score = i}
  void set_timeouts(int i){timeouts = i}
  void set_team_name(string s){team_name = s}
  void set_coach_name(string s){coach_name = s}
  void set_hometown(string s){hometown = s}

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
  class scoreboard()
  {
  int quarter = 0;
  team team_1;
  team team_2;
  team_1.set_team_name(team_1);
  team_2.set_team_name(team_2);
  }
  public:






};