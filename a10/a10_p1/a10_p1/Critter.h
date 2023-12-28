#include <string> // defines standard C++ string class
using namespace std;
/* First C++ class */
class Critter
{
private:  // data members are private
    string name;
    int hunger;
    int boredom;
    double height;
    string emotion;
    string favbook;
    
public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setEmotion(string& newemotion);
    void setFavBook(string& newfavbook);
    // getter method
    int getHunger();
    string getEmotion();
    string getFavBook();
    // service method
    void print();
};
