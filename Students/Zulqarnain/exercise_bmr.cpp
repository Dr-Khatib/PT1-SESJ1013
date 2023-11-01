#include <iostream>
#include <cmath>

int main(){

    using namespace std;

    int A;//declare variables
    double H,W,BMR,a,b,c,d,e,f;
    char g;

    do{//enter age until valid
        cout<<"Enter your age: ";
        cin>>A;
        if (A<=14 || A>=81){
            cout<<"Please provide an age between 15 and 80\n";
        }
    }while (A<=14 || A>=81);

    cout<<"\nWhat's your gender?(M/F): ";
    cin>>g;

    cout<<"\nEnter your height: ";//height
    cin>>H;

    cout<<"\nEnter your weight: ";//weight
    cin>>W;

    g=='M'?BMR=(10*W)+(6.25*H)-(5*A)+5:BMR=(10*W)+(6.25*H)-(5*A)-161;

    cout<<"\n\nRESULT\nBMR = "<<BMR<<" Calories/day";

    a=1.2*BMR;b=1.37*BMR;c=1.46*BMR,d=1.55*BMR;e=1.72*BMR;f=1.9*BMR;

    cout<<"\n\nDaily calorie needs based on activity level   Activity Level Calorie\nSedentary: little or no exercise: "<<a<<" Calories";//tables
    cout<<"\nExercise 1-3 times/week: "<<b<<" Calories";
    cout<<"\nExercise 4-5 times/week: "<<c<<" Calories";
    cout<<"\nDaily exercise or intense exercise 3-4 times/week: "<<d<<" Calories";
    cout<<"\nIntense exercise 6-7 times/week: "<<e<<" Calories";
    cout<<"\nVery intense exercise daily, or physical job: "<<f<<" Calories";
    cout<<"\nExercise: 15-30 minutes of elevated heart rate activity.\nIntense exercise: 45-120 minutes of elevated heart rate activity.\nVery intense exercise: 2+ hours of elevated heart rate activity.";

    return 0;
}