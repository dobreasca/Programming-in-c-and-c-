#include <string>
using namespace std;
class Critter
{
private:  // data members are private
    string name;
    double hunger;
    int boredom;
    double height;
    //conversion methods
    //int to double
    double convert_itd(int hunger);
    //double to int
    int convert_dti();
    
public:
    //constructors
    Critter();
    //in case the height isn't mentioned it will be set to 10
    Critter(string newname, int newhunger, int newboredom,
            double newheight=10.0);
    Critter(string newname);
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    // getter method
    string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    // service method
    void print();
};
