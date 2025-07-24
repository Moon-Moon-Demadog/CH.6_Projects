// This Program will calculate area and perimeter of a rectangle.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getLength_Width (int length, int width);
double CalcPerm (int Perimeter);
double CalcArea (int Area);
void displayProperties ();

int main()
{
  char choice;
  int width =0, length = 0, area = 0, perimeter = 0;
  cout<< " Lets calculate the perimeter and area of a rectangle."<< endl;
  cout<< "Would you like to find these properties Y/N :  "<< endl;
  cin>> choice;
  while ((choice == 'Y' || choice == 'y'))
    {
      getLength_Width(length,width);
        cout<< " The length is :"<< length<< " and the width is : "<< width<< endl;

        CalcPerm((perimeter));
          CalcArea((area));
            displayProperties();
      cout<< "Would you like to find properties of anothe rectangle (Y/N) : "<< endl;
      cin>> choice;
    }
  cout<< "Program ended"<< endl;
          return 0;
}

double getLength_Width (int &length, int &width)
{
  cout<< " Enter Length :  "<< endl;
  cin>> length;
  while (length <0)
    {
      cout<< "Invalid entry. Enter a positive number :  "<<endl;
      cin>> length;
    }
  cout<< " Enter Widith :  "<< endl;
  cin>> width;
  while (width<0)
    {
      cout<< "Invalid entry. Enter a positive number :  "<< endl;
      cin >> width;
    }
  return length + width;
}
double CalcPerm (int length, int width)
{
  double perimeter = (length + width) * 2;
  return perimeter;
}
double CalcArea (int area, int width, int length)
{
  area = width * length;
  return area;
}

void displayProperties ( int area, int perimeter)
{
  cout<< "Your area is "<< area << endl;
  cout<< "Your perimeter is "<< perimeter << endl;
}