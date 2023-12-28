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