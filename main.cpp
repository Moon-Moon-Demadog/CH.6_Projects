// This Program will calculate an estimate for a paint job.
#include <iostream>
#include <iomanip>
using namespace std;

int getRoom (int rooms, int sqft);
double getPaint (int, int paint);
double CalcLabor (double LaborHours, double LaborPay);
void DisplayTotals ();

static double gallonsPerSqft = 1/110;
static double LaborPerSqft = 8/110;
static double LaborPerHour = 25.00;

int main ()
{
  int rooms = 0;
  int sqft = 0;
  int gallons = sqft * gallonsPerSqft;
  double perGallonCost=0.00;
  double GallonsCalc = gallonsPerSqft * sqft;
  double LaborCost = 0.00;
  double PaintCost = perGallonCost * GallonsCalc;

  cout<< " Lets create a jobs estimate" << endl;
  getPaint(double perGallonCost);  
  cout<< " Great we're painting "<< rooms << " room(s) that equal " << sqft << " sqft."<< endl;
  getPaint(int int paint);

cout<< " We're estimating"<< gallons << " gallons, that cost " << paint << " per gallon."<< endl;

CalcLabor(double LaborHours, double LaborPay);

cout<< "Okay, working on the totals.";

  DisplayTotals();

  return 0;
}

int getRoom (int &rooms, int &sqft)
  {
    cout<< "How many rooms to be painted :  "<< endl;
    cin>> rooms;
      while (rooms<1)
      {
        cout<< "Invalid selection. Please enter a minimum of 1 room :  "<< endl;
        cin>> rooms;
      }
    cout<< "Enter total rounded squarfootage of the rooms :  "<< endl;
    cin>> sqft;
    while (sqft <= 0)
      {
        cout<< "Invalid selection. Please enter squarefootage with a positve value and";
        cout<< " greater than zero :  "<< endl;
        cin>> sqft;
      }
    return rooms + sqft;
  }

  double getPaint (double &perGallonCost)
  {
    cout<< " How much does the paint cost per gallon :  "<< endl;
    cin>> perGallonCost;
    while (perGallonCost < 10.00)
      {
        cout<< "Invalid selectin. Please enter a price of $10 or greater :  "<< endl;
        cin>> perGallonCost;
      }
    return perGallonCost;
  }

  double CalcLabor (double &LaborHours, double &LaborPay, int sqft, double &LaborCost)
  {
    LaborHours = LaborPerSqft * sqft;
    LaborCost = LaborHours * LaborPerHour;
    return LaborHours + LaborCost;
  }

  void DisplayTotal()
  {
    cout<< setprecision (2):
  cout<< " Estimate for painting "<<rooms<< " rooms."endl;
    cout<< " Gallons to purchase "<< gallons << endl;
    cout<< " Cost of paint $"<< PaintCost << endl;
    cout<< " Number of hours to paint "<< LaborHours<< endl;
    cout<< " Cost of labor : $"<< LaborCost<< endl;
    cout<< " Project total cost: $"<< Total<< endl;
    
  }