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
      cin >> widht;
    }
  return length + width;
}
double CalcPerm (int length, int width)
{
  double perimeter = (length + width) * 2;
  return perimeter;
}
double CalcArea ()