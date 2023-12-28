/*
  CH-230-A
  a12_p7.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
        +--------------------+
        |        Area        |
        +--------------------+
            /           \
    +----------+        +-------------+
    |  Circle  |        |  Rectangle  |
    +----------+        +-------------+
         |                     |
    +----------+        +----------+
    |   Ring   |        |  Square  |
    +----------+        +----------+
*/

const int num_obj = 25;
int main() {
	Area *list[num_obj];						// (1)
    //creates an array with num_obj area type pointers
	int index = 0;								// (2)
    //initializes the index with 0
	double sum_area = 0.0;						// (3)
    //initializes the sum with 0

    srand(static_cast<unsigned int>(time(0)));
    const char* colours[4]={"RED", "BLACK", "VIOLET", "BLUE"};
    int i;
    for(i=0; i<num_obj; i++)
    {
        int choice=rand()%4;
        int colour=rand()%4;
        //picks a random number for colours and instances
        //rand()%96+5 returns a number between 5 and 100
        if(choice==0)
        {
            int rad=rand()%96+5;
            cout<<rad<<'\n';
            list[i]=new Circle(colours[colour], rad);
        }
        if(choice==1)
        {
            int leng=rand()%96+5;
            int wid=rand()%96+5;
            cout<<leng<<" "<<wid<<'\n';
            list[i]=new Rectangle(colours[colour], leng, wid);
        }
        if(choice==2)
        {
            int innerrad=rand()%96+5;
            int outerrad=rand()%96+5;
            cout<<innerrad<<" "<<outerrad<<'\n';
            list[i]=new Ring(colours[colour], outerrad, innerrad);
        }
        if(choice==3)
        {
            int s=rand()%96+5;
            cout<<s<<" "<<'\n';
            list[i]=new Square(colours[colour], s);
        }
    }
    double sum_perimeter=0.0;
	while (index < num_obj) {					// (7)
    //iterates throught the array
        cout<<"\nObject "<<index+1<<": \n";
		(list[index])->getColor();	
        double perimeter;
        perimeter=list[index]->calcPerimeter();
        cout<<"perimeter: "<<perimeter<<'\n';	
        sum_perimeter+=perimeter;		
		double area = list[index++]->calcArea();// (8)
    //assigns the value of calcArea() method being called on the current instance(list[index]), 
    //then increments the index by 1
        cout<<"area: "<<area<<'\n';
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
    //prints the total sum
    cout<<"The total perimeter is "<<sum_perimeter<<" units"<<'\n';
	return 0;
}
