// This Program will calculate celsius to faranheit
#include <iostream>
#include <iomanip>
using namespace std;
double getFahrenheit (int);
double getCelsius (int);
static int minTemp = 0;
static int maxTemp = 20;

int main()
{
 int temp = 0;
double celsius = 0;
char choice;
cout<< "Woudl you like to calculate a temp (Y/N)"<< endl;
cin>> choice;
while (choice == 'Y' || choice == 'y')
  {
getFahrenheit(temp);
getCelsius (celsius);
  }

cout<< "\t \t"<< "Farhenheit | Celsius"<< endl;
  cout<< "\t \t"<< "--------------------"<< endl;
  cout<< "\t \t"<< "\t"<< minTemp<<" |"<< "\t"<< celsius<< endl;
  cout<< "\t \t"<< "\t"<< temp<<" |"<< "\t"<< celsius<< endl;
  cout<< "\t \t"<< "\t"<< maxTemp<<" |"<< "\t"<< celsius<< endl;

  return 0;
}

double getFahrenheit (int &temp)
{
  cout<< "What is the temp in fahrenheit : "<< endl;
  cin>> temp;
  while (temp <0 || temp > 20)
    {
      cout<< "Invalid entry. Please enter a temp between 0  and 20 : "<< endl;
      cin>> temp;
    }
  return temp;
}

double getCelsius ( int &temp, int &celsius)
{
  celsius = 5/9 * (temp - 32);
  return celsius;
}