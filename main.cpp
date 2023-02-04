#include <iostream>
using namespace std;

int main()
{
	double score{};
    cout<<"Enter Your Exam score (0 - 100): "<<endl;
    cin>>score;
    if (score>=0 && score <=100 )
        {if (score>=90){cout<<"Congrats! You have A"<<endl;}
        else if (score>=80 && score<90){cout<<"Congrats You got an A-"<<endl;}
        else if (score>=70 && score<80){cout<<"Congrats you have got B"<<endl;}
        else if (score>=60 && score<70){cout<<"You have got B-"<<endl;}
        else if (score>=50 && score<60){cout<<"You have got C"<<endl;}
        else if (score>=40 && score<50){cout<<"You have got C-"<<endl;}
        else if (score<40){cout<<"Sorry you have to repeat the course"<<endl;}
        }
    else {cout<<"Sorry Out of Range"<<endl;}
    return 0;

}
   
