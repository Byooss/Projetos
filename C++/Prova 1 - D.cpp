#include <iostream>
using namespace std;

int main()
{
int limit,press,max;
  cin>>limit;
  max=0;
  press=1;
  while(press!=0)
    {
  cin>>press;
  if (press>max)
  max = press;
    }
  if (max>limit)
    cout<<"ALARME"<<endl;
  else
    cout<<"O Havai pode dormir tranquilo"<<endl;
}
