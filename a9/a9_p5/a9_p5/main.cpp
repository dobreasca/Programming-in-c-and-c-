/*
  CH-230-A
  a9_p5.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */
#include <iostream>
using namespace std;

int main()
{
    int number, playerguess, number_of_tries=0;
    char name[81];
    srand(static_cast<unsigned int>(time(0)));
    number=(rand()%100)+1;
//we picked a random number using the rand() function
    cout<<"Insert your name:"<<'\n';
    cin.get(name, 81);
//we use cin.get so that the player will be able to
//insert both their first and last names
    cout<<"Let's play a game!"<<'\n';
    cout<<"Pick a number between 1 and 100"<<'\n';
    cin>>playerguess;
//the player inserts their guess
    while(1)
    {
        if(playerguess==number)
        {
//if the guess matches the picked number
//we congratulate the player and exit the loop
            cout<<"Congrats! You guessed the number in ";
            if(number_of_tries==0)
                cout<<"one try :)"<<'\n';
            else
                cout<<number_of_tries+1<<" tries :)"<<'\n';
            exit(1);
        }
        else
//otherwise we increase the number of tries
//and ask the player to take a new guess
        {
            number_of_tries++;
            if(playerguess>number)
                cout<<"Your number is too high! Pick a new number."<<'\n';
            else
                cout<<"Your number is too low! Pick a new number."<<'\n';
            cout<<"new number:"<<'\n';
            cin>>playerguess;
        }
    }
    return 0;
}
