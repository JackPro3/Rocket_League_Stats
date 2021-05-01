#include <iostream>
#include <stdlib.h>
#include "Cars.h"
using namespace std;
void menu()
{
    cout<<"1. Hollywood Goal"<<endl;
    cout<<"2. Hollywood Shot"<<endl;
    cout<<"3. Hollywood Demo"<<endl;
    cout<<"4. Hollywood Assist"<<endl;
    cout<<"5. Hollywood Save"<<endl;
    cout<<"6. Hollywood Epic"<<endl;
    cout<<"7. Hollywood Missed Save"<<endl;
    cout<<"8. Hollywood Own Goal"<<endl;
    cout<<"9. Hollywood Block"<<endl;
    cout<<"a. Wolfman Goal"<<endl;
    cout<<"b. Wolfman Shot"<<endl;
    cout<<"c. Wolfman Demo"<<endl;
    cout<<"d. Wolfman Assist"<<endl;
    cout<<"e. Wolfman Save"<<endl;
    cout<<"f. Wolfman Epic"<<endl;
    cout<<"g. Wolfman Missed Save"<<endl;
    cout<<"h. Wolfman Own Goal"<<endl;
    cout<<"i. Wolfman Block"<<endl;
    cout<<"j. Stinger Goal"<<endl;
    cout<<"k. Stinger Shot"<<endl;
    cout<<"l. Stinger Demo"<<endl;
    cout<<"m. Stinger Assist"<<endl;
    cout<<"n. Stinger Save"<<endl;
    cout<<"o. Stinger Epic"<<endl;
    cout<<"p. Stinger Missed Save"<<endl;
    cout<<"q. Stinger Own Goal"<<endl;
    cout<<"r. Stinger Block"<<endl;
    cout<<"s. Display Team Stats"<<endl;
    cout<<"x. End Program"<<endl;
}

int main()
{
    Car Hollywood("Hollywood");
    Car Wolfman("Wolfman");
    Car Stinger("Stinger");
    char opt='-';
    while(opt!='x')
    {
        menu();
        cin>>opt;
        switch(opt)
        {
        case '1':
            Hollywood.Goal();
            break;
        case '2':
            Hollywood.Shot();
            break;
        case '3':
            Hollywood.Demo();
            break;
        case '4':
            Hollywood.Assist();
            break;
        case '5':
            Hollywood.Save();
            break;
        case '6':
            Hollywood.EpSave();
            break;
        case '7':
            Hollywood.MissedSave();
            break;
        case '8':
            Hollywood.OwnGoal();
            break;
        case '9':
            Hollywood.Block();
            break;
        case 'a':
            Wolfman.Goal();
            break;
        case 'b':
            Wolfman.Shot();
            break;
        case 'c':
            Wolfman.Demo();
            break;
        case 'd':
            Wolfman.Assist();
            break;
        case 'e':
            Wolfman.Save();
            break;
        case 'f':
            Wolfman.EpSave();
            break;
        case 'g':
            Wolfman.MissedSave();
            break;
        case 'h':
            Wolfman.OwnGoal();
            break;
        case 'i':
            Wolfman.Block();
            break;
        case 'j':
            Stinger.Goal();
            break;
        case 'k':
            Stinger.Shot();
            break;
        case 'l':
            Stinger.Demo();
            break;
        case 'm':
            Stinger.Assist();
            break;
        case 'n':
            Stinger.Save();
            break;
        case 'o':
            Stinger.EpSave();
            break;
        case 'p':
            Stinger.MissedSave();
            break;
        case 'q':
            Stinger.OwnGoal();
            break;
        case 'r':
            Stinger.Block();
            break;
        case 's':
            Hollywood.Show();
            Wolfman.Show();
            Stinger.Show();
            system("PAUSE");
            break;
        }
        system("CLS");
    }
}
