#ifndef CARS_H_INCLUDED
#define CARS_H_INCLUDED
#include <iostream>
#include <iomanip>
using namespace std;

template<typename T> void tablePrint(T t)
{
    cout << left << setw(18) << setfill(' ') << t;
}

class Car{
public:
    Car(string n);
    void CountPct();
    void Goal();
    void Shot();
    void Demo();
    void Assist();
    void Save();
    void EpSave();
    void MissedSave();
    void OwnGoal();
    void Block();
    void CountPM();
    void Show();
private:
    string name;
    int goals, shots, demos, assists, saves, epSaves, ownGoals, misSaves, blks;
    double sPct, prf, pointsAgainst, plusMinu;
};
Car::Car(string n)
{
    name=n;
    goals=0;
    shots=0;
    demos=0;
    assists=0;
    saves=0;
    epSaves=0;
    sPct=0.000;
    prf=0.00;
    pointsAgainst=0.00;
    misSaves=0;
    ownGoals=0;
    blks=0;
}
void Car::CountPct()
{
    if(shots==0)
    {
        sPct=0.000;
        return;
    }

    sPct=goals/shots;
}
void Car::Goal()
{
    goals++;
    shots++;
    prf++;
}
void Car::Shot()
{
    shots++;
}
void Car::Demo()
{
    demos++;
}
void Car::Assist()
{
    assists++;
    prf+=.33;
}
void Car::Save()
{
    saves++;
    prf+=.25;
}
void Car::EpSave()
{
    epSaves++;
    prf+=.45;
}
void Car::MissedSave()
{
    misSaves++;
    pointsAgainst++;
}
void Car::OwnGoal()
{
    ownGoals++;
    pointsAgainst+=1.25;
}
void Car::CountPM()
{
    plusMinu=prf-pointsAgainst;
}
void Car::Block()
{
    blks++;
    prf+=.65;
}
void Car::Show()
{
    cout<<endl;
    cout<<name<<"'s stats:"<<endl<<endl;
    tablePrint("Shots");
    tablePrint("Goals");
    tablePrint("S%");
    tablePrint("Demos");
    tablePrint("Assists");
    tablePrint("Blocks");
    tablePrint("Saves");
    tablePrint("Epic Saves");
    tablePrint("PRF");
    tablePrint("Missed Saves");
    tablePrint("Own Goals");
    tablePrint("Points Against");
    tablePrint("+/-");
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    tablePrint(shots);
    tablePrint(goals);
    CountPct();
    tablePrint(sPct);
    tablePrint(demos);
    tablePrint(assists);
    tablePrint(blks);
    tablePrint(saves);
    tablePrint(epSaves);
    tablePrint(prf);
    tablePrint(misSaves);
    tablePrint(ownGoals);
    tablePrint(pointsAgainst);
    CountPM();
    tablePrint(plusMinu);
    cout<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl<<flush;
}
#endif // CARS_H_INCLUDED
