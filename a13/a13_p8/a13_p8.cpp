/*
  CH-230-A
  a13_p8.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
 */

#include <iostream>
using namespace std;

class Motor 
{
    private:
        string mes;
    public:
        Motor() 
        {
//throws exception
            mes="This motor has problems";
            cerr << "Error in Motor : This motor has problems"<<mes<<'\n';
            throw mes;
        }
};

class Car 
{
    private:
        Motor *motor;
    public:
        Car() 
        {
//initializes motor
            motor = new Motor();
        }
};

class Garage 
{
    private:
        string message="The car in this garage has problems with the motor";
        Car *car;
    public:
        Garage()
        {
            try 
            {
//initialize car and check for thrown exceptions
                car = new Car();
            }
            catch (std::string Exception) 
            {
//throws the string when catching exception from Motor
                throw message;
            }
        }
};

int main()
{
    try
    {
        Garage g;
    }
    catch(string exception)
    {
        cerr<<"Caught in main: "<<exception<<'\n';
    }
    return 0;
    
}
