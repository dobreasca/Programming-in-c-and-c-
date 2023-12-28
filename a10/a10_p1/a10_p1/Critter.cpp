#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname)
{
    name=newname;
}

void Critter::setHunger(int newhunger)
{
    hunger=newhunger;
}

//setter for emotion
void Critter::setEmotion(string& newemotion)
{
    emotion=newemotion;
}

//setter for favourite book
void Critter::setFavBook(string& newfavbook)
{
    favbook=newfavbook;
}

void Critter::print()
{
    cout<<"I am "<<name<<". My hunger level is "<<hunger<<"."<< endl;
    cout<<"I am feeling "<<emotion;
    cout<<". My favourite book is "<<favbook<<"."<<'\n';
}

int Critter::getHunger()
{
    return hunger;
}

//getter for emotion
string Critter::getEmotion()
{
    return emotion;
}

//getter for favourite book
string Critter::getFavBook()
{
    return favbook;
}
