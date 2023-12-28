/*
  CH-230-A
  a12_p6.cpp
  Ana-Maria Dobrescu
  a.dobrescu@jacobs-university.de
*/

#include <iostream>
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

const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
    //creates an array with num_obj area type pointers
	int index = 0;								// (2)
    //initializes the index with 0
	double sum_area = 0.0;						// (3)
    //initializes the sum with 0
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
    //creates an instance with the constructor with all the parameters
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
    Square pink_square("PINK", 9);
	list[0] = &blue_ring;						// (5)
    //assigns the addresses of the instances created before to the 
    //elements of the array
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
    list[6]=&pink_square;
    double sum_perimeter=0.0;
	while (index < num_obj) {					// (7)
    //iterates throught the array
		(list[index])->getColor();	
        double perimeter;
        perimeter=list[index]->calcPerimeter();
        cout<<"perimeter: "<<perimeter<<'\n';	
        sum_perimeter+=perimeter;		
		double area = list[index++]->calcArea();// (8)
    //assigns the value of calcArea() method being called on the current instance(list[index]), 
    //then increments the index by 1
		sum_area += area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)
    //prints the total sum
    cout<<"The total perimeter is "<<sum_perimeter<<" units"<<'\n';
	return 0;
}
