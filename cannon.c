#import "stdio.h"
#import "math.h"


#define SCALE_FACTOR 0.001
#define AMOUNT_POJNTS 1000
#define AMOUNT_INTERSECTIONS 4



//Describes the fortress

struct Circle{

int x, y, radius;

};


//Describes the cannon
struct LineOfSight{

int x, y;
double angle, spread;

};


//Self-explanatory

struct Point{

doouble x,y;

};



//Stores points in arrays, and their respective sizes

struct PointCollection{

int amount_intersections;
Point intersections[AMOUNT_INTERSECTIONS], points[AMOUNT_POINTS];

};

//Defines a line parametrically
struct Line{

double x,y, i, j;

}'


//*  *//

//Gets the intersection points between the parametric line and the fortress, and stores them
//in the *storage struct.
void get_intersection(PointCollection *storage, Circle *fortress, LineOfSight *cannon){

	//setting up the lines
	Line line1, line2;
	
	line1.x = cannon->x; line1.y = cannon->y; 
	line1.i = cos(cannon->angle + cannon->spread/2); line1.j = sin(cannon->angle + cannon->spread/2);
	
	line2.x = cannon->x; line2. = cannon->y; 
	line2.i = cos(cannon->angle - cannon->spread/2); line2.j = sin(cannon->angle - cannon->spread/2);




}	

//Scans the frontier region to approximate the fortress' circle to a polygon.
//Store these points inside the storage struct.

void get_points(PointCollection *storage, Circle *fortress){



}


void get_area(Circle *fortress, LineOfSight *cannon, PointCollection *storage){





}


//Gets input and filters it according to the text. Returns true if valid data.
//Returns false if shutdown data.

int getInput(Circle *fortress, LineOfSight *cannon) {

scanf("%i%i%i", fortress.x, fortress.y, fortress.radius);
if(fortress.x_0 == 0 && fortress.y_0 == 0 && fortress.radius == 0) { return 0; }

scanf("%i%i%i%i", cannon.x, cannon.y, cannon.angle, cannon.spread);
cannon->angle = canno->angle * 2*M_PI/360;
cannon->spread = cannon->spread * 2*M_PI/360;

return 1;

}



int main(){
	
	Circle fortress;
	LineOfSight cannon;
	PointCollection storage;

	while( getInput(&fortress, &cannon) ){
		
		get_area(&fortress, &cannon, &storage);
	
	}

	return 1;

}



