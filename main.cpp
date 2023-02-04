#include <iostream>
using namespace std;

int main()
{
	Double score{};
    cout<<"Type between 0 & 100"<<endl;
    cin>>score;
    if (score>=0 && score<=100)
    {
     cout<<"XXX"<<endl;   
    }
    else 
    {cout<<"Sorry out of range"<<endl;}

	return 0;
}
