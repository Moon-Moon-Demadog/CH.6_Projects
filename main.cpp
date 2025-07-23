// This Program will calculate safest driving area in a major city.
#include <iostream>
#include <iomanip>
using namespace std;

int getRegInfo (int, int, int, int, int);
bool isLower ();
void showLowest ();

int main ()
{
  int north, south, central, east, west = 0;
  int lowest = 0;

  cout<< "We're going to find the safest driving area in a given city" << endl;

  int getRegInfo (int, int, int, int, int);

  cout<< "Now I'll calculate the data for you"<< endl;

  bool isLower (bool);

  cout<< "Finally!" << endl;

  void showLowest ();

  cout<< "End program"<< endl;
}

int getRegInfo ( int north, int south, int central, int east, int west)
{
  cout<< "\n";
  cout<< "I'll need data from the 5 regions of the city"<< endl;
  cout<< " Enter the accidents for the whole year for the NORTH region : "<< endl;
  cin>> north;
  cout<< "Now, yearly accidents for the SOUTH region  : "<< endl;
  cin>> south;
  cout<< " Now, yearly accidents for the CENTRAL region  : "<< endl;
  cin>> central;
  cout<< "Now, yearly accidents for the EAST region  : "<< endl;
  cin>> east;
  cout<< " And finally, yearly accidents for the WEST region  : "<< endl;
  cin>> west;
    while ( north < 0 || south < 0 || central < 0 || east < 0|| west <0){
      cout<< " Retry. Accidents must be a positive number"<< endl;
      cout<< "\n";
      cout<< " accidents for NORTH  : "<< endl;
      cin>> north;
      cout<< "accidents for SOUTH  : "<< endl;
      cin>> south;
      cout<< " accidents for CENTRAL  : "<< endl;
      cin>> central;
      cout<< "accidents for EAST  : "<< endl;
      cin>> east;
      cout<< " accidents for WEST  : "<< endl;
      cin>> west;
    }
  cout<< " Thanks for the data!"<< endl;
      return  north;
      return south;
      return central;
      return east;
      return west;
      }
      bool isLower (int lowest){
      int accidents = 900;
      return lowest <= accidents;
      }
void showLowest () {
        if (north != lowest){
      north = accidents;
      cout<< " North is the region with the lowest accidents"<< endl;
        }
      if (south != lowest)
      {
        south = accidents;
        cout<< "South is the region with the lowest accidents"<< endl;
        }
      if (central != lowest)
      {
        central = accidents;
        cout<< "Cenral is the region with the lowest accidents"<< endl;
      }
    if ( east != lowest)
    {
      east = accidents;
      cout<< "East is the region with the lowest accidents"<< endl;
    }
    if (west != lowest)
    {
      west = accidents;
      cout<< "West is the region with the lowest accidents"<< endl;
    }
  cout<< " with"<< lowest<<" accidents per year."<< endl;
  return 0;
}