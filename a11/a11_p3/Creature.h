class Creature {
	public:
    //constrcutor
		Creature();
    //destructor  
        ~Creature();
    //methods
    //setter method
    void setDistance(int newdistance);
    //getter method
    int getDistance() const;
    //service method
    void run() const;
	protected:
		int distance;
};

class Wizard : public Creature {
	public:
    //constructor
		Wizard();
    //destructor
        ~Wizard();
    //methods
    //setter method
        void setFactor(int newfactor);
    //getter method 
        int getFactor() const;
    //service method
        void hover() const;
	private:
		int distFactor;
};

class Ogre: public Creature
{
    public:
    //destructor
        ~Ogre();
    //constructor
        Ogre();
    //methods
    //setter method
        void setStrength(int newstrength);
    //getter method
        int getStrength() const;
    //service methods
        void power() const;
    private:
        int strength;
};

class Fairy: public Creature
{
    public:
    //destructor
        ~Fairy();
    //constructor
        Fairy();
    //method
    //setter method
        void setWeight(int newweight);
        void setFStrength(int newfstrength);
    //getter method
        int getWeight() const;
        int getFStrength() const;
    //service method
        void fairydust() const;
    private:
        int weight;
        int fstrength;
};