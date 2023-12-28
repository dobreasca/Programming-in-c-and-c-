/*
  CH-230-A
  a11_p2.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
using namespace std;

class Creature {
	public:
		Creature();  
		void run() const;
        ~Creature();
	protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

//destructor for creature
Creature::~Creature()
{
    cout<<"The creature is being destroyed."<<'\n';
}

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
        ~Wizard();
	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{
    cout<<"the default constructor for wizard is called"<<'\n';
}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//destructor for wizard
Wizard::~Wizard()
{
    cout<<"The wizard is being destroyed."<<'\n';
}

class Ogre: public Creature
{
    public:
        ~Ogre();
        Ogre();
        void power() const;
    private:
        int strength;
};

//default constructor for ogre
Ogre::Ogre() : strength(7)
{
    cout<<"the default constrcutor for ogre is called"<<'\n';
}

//destructor for ogre
Ogre::~Ogre()
{
    cout<<"The ogre is being destroyed."<<'\n';
}

//method that prints the strength level of an ogre
void Ogre::power() const
{
    cout<<"The ogre has a "<<strength<<" strength level."<<'\n';
}

class Fairy: public Creature
{
    public:
        ~Fairy();
        Fairy();
        void fairydust() const;
    private:
        int weight;
        int strength;
};

//default constructor for fairy
Fairy::Fairy()
{
    cout<<"the default constructor for fairy is being called"<<'\n';
    weight=100;
    strength=10;
}

//destructor for fairy
Fairy::~Fairy()
{
    cout<<"The fairy is being destroyed"<<'\n';
}

//method that prints how much fairydust can be made
void Fairy::fairydust() const
{
    cout<<"This fairy can produce "<<(weight/strength)<<" grams of fairydust"<<'\n';
}

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout<<"\nCreating an Ogre.\n";
    Ogre o;
    o.run();
    o.power();

    cout<<"\nCreating a fairy\n";
    Fairy f;
    f.run();
    f.fairydust();
    return 0;
} 
