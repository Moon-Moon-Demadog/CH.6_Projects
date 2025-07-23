// This Program will find the average score of a contestant
#include <iostream>
#include <iomanip>
using namespace std;

double getScore (int);
bool isLower ();
bool isHigher ();
double CalcAverage (double, double,double, double);

int main()
{
  double score1 = 0.0, score2 = 0.0, score3 = 0.0, score4 = 0.0,score5 = 0.0;
  double MinScore = score1;
  double MaxScore = score1;
  double average = 0;
  double total = score1 + score2 + score3 + score4 + score5;

  cout<< setprecision (2);
  cout<< " Let's find our star!!"<< endl;

  double getScore (int,int,int,int,int);
  bool isHigh (int);
  bool isLow (int);
  
  if (MinScore > score2)
    {
    MinScore = score2;
    } else if (MinScore > score3)
      {
         MinScore =score3;
      } else if (MinScore > score4)
       {
          MinScore = score4;
       } else if (MinScore > score5)
         {
            MinScore = score5;
         }

  if (MaxScore < score2)
    {
    MaxScore = score2;
    } else if (MaxScore < score3)
      {
         MaxScore =score3;
      } else if (MaxScore< score4)
       {
          MaxScore = score4;
       } else if (MaxScore < score5)
         {
            MaxScore = score5;
         }

  
  cout<< " Our potential star has a total combined score of:" << total << " points."<< endl;

  double CalcAverage (int);

  cout<< " The final average for the contestant is: "<< average << endl;
  return 0;
}

double getScore (double &score1,double &score2, double &score3,double &score4, double &score5)
{
  cout<< setprecision (2);
  cout<< " What is the first judge's score : "<< endl;
  cin>> score1;
  cout<< " The next judges score is :  "<< endl;
  cin>> score2;
  cout<< " The next judges score is :  "<< endl;
  cin>> score3;
  cout<< " The next judges score is :  "<< endl;
  cin>> score4;
  cout<< " The final udges score is :  "<< endl;
  cin>> score5;
  return score1 + score2 + score3 + score4 + score5 ;
}

double CalcAverage (double &total, double Minscore, double MaxScore,double &average)
{
 average = total- Minscore - MaxScore /3;
  return average;
}