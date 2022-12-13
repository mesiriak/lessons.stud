#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct MAU {
private:
  string race_endpoint;
  int race_number;
  string plane_type;

public:
  MAU(string race_endpoint, int race_number, string plane_type) {
    this->race_endpoint = race_endpoint;
    this->race_number = race_number;
    this->plane_type = plane_type;
  }

  vector<string> get_plane_info() {

    vector<string> results{"Race endpoint: ",
                           this->race_endpoint,
                           "\n",
                           "Race number: ",
                           to_string(this->race_number),
                           "\n",
                           "Plane type: ",
                           this->plane_type,
                           "\n"};
    return results;
  }

  string get_race_endpoint() { return this->race_endpoint; }
  int get_race_number() { return this->race_number; }
  string get_plane_type() { return this->plane_type; }

  void set_race_endpoint(string value) { this->race_endpoint = value; }
  void set_race_number(int value) { this->race_number = value; }
  void set_plane_type(string value) { this->plane_type = value; }
};

int main() {
  MAU plane("Berlin", 1, "Boeing");

  cout << plane.get_race_endpoint() << endl;

  plane.set_race_endpoint("Kyiv");

  cout << plane.get_race_endpoint() << endl;

  vector<string> plane_info = plane.get_plane_info();
  for (int i = 0; i < plane_info.size(); i++) {
    cout << plane_info[i];
  }
}