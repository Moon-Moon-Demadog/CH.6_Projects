// This Program will calculate an estimate for a paint job.
#include <iostream>
#include <iomanip>
using namespace std;

int getRoom (int rooms, int sqft);
double getPaint (int, int paint);
double CalcLabor (double LaborHours, double LaborPay);
void DisplayTotals ();

static double gallonsPerSqft = 1/110;
static double laborPerSqft = 8/110;
static double LaborPerHour = 25.00;

int main ()
{
  
}