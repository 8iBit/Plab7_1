#include<iostream>
#include<cmath>
using namespace std;

int adiff(int a, int b)
{
  int c;
  int r=360;
  int rca=a/r;
  int at=a-(r*rca);
  int rcb=b/r;
  int bt=b-(r*rcb);
  if(at>bt)
  {
    c=at-bt;
    if(c>180)
    {
      c=360-c;
    }
  }
  else 
  {
    c=bt-at;
    if(c>180)
    {
      c=360-c;
    }
  }
  return c;
}

int main(){
  cout << adiff(180,270) <<"\n";
  cout << adiff(210,45) <<"\n";
  cout << adiff(0,360) <<"\n";
  cout << adiff(10,350) <<"\n";
  cout << adiff(95,260) <<"\n";
  cout << adiff(90,-90) <<"\n";
  cout << adiff(1000,280) <<"\n";
  cout << adiff(60,244);
}
