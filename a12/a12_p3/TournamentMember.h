#include <string>
using namespace std;
class TournamentMember
{
    private:
        const char *firstname;
        const char *lastname;
        const char *dob;//date of birth
        static string location;
        string role;
        double height;
    public:
        TournamentMember();
        TournamentMember(const char* nfn, const char* nln, const char* ndob, 
                string nloc, string nrole, double nheight);
        TournamentMember(const TournamentMember& tm);
//the usual 3 constructors
        ~TournamentMember();
//the destructor
        inline void setFirstName(char* newfn);
        inline void setLastName(char* newln);
        inline void setDateOfBirth(char* newdob);
        inline void setLocation(string newloc);
        inline void setRole(string newrole);
        inline void setHeight(double newheight);
//setters for the data memebers
        inline const char* getFirstName() const;
        inline const char* getLastName() const;
        inline const char* getDateOfBirth() const;
        inline string getLocation() const;
        inline string getRole() const;
        inline double getHeight() const;
//getters for the data members
        void printInformation();
        static void changeLocation(string newloc);
};

class Player:public TournamentMember
{
    private:
        int number;
        int nogs;//number of goals scoared
        string position;
        string foot;
    public:
        //usual three constructors
        Player();
        Player(const char* nfn, const char* nln, const char* ndob, string nloc,
            string nrole, double nheight, int nnr, string npos, 
            int nnogs, string nfoot);
        Player(const Player& p);
        //destructor
        ~Player();
        //setters for the data members
        inline void setNumber(int newnumber) {number=newnumber;};
        inline void setPosition(string newposition) {position=newposition;};
        inline void setFoot(string newfoot) {foot=newfoot;};
        //getters for data members
        inline int getNumber() const;
        inline int getNumberOfGoals() const;
        inline string getPosition() const;
        inline string getFoot() const;
        //methods
        void printPlayerinfo();
        void increaseGoals();
};