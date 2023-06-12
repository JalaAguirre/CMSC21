//Jala B. Aguirre
//CMSC 21 Lec
//2022-14003

#include <stdio.h>
#include <math.h> //sqrt(), pow()

struct line {
    struct point {
        float x;
        float y;
    } point1, point2;
    float *midpoint;
    float slope;
    float distance;
};

//Function for the calculation of slope
float solveSlope(struct line line1);
//Function for the calculation of midpoint
float* solveMidpoint(struct line line1);
//Funtion for the calculation of distance
float solveDistance(struct line line1);
//Function to formulate the intercept form
void getSlopeInterceptForm(struct line line1);

int main() {
    struct line points;

    //The coordinates for the first point
    printf("Enter x and y for point1: ");
    scanf("%f %f", &points.point1.x, &points.point1.y);

    //The coordinates for the second point
    printf("Enter x and y for point2: ");
    scanf("%f %f", &points.point2.x, &points.point2.y);

    points.slope = solveSlope(points);
    points.midpoint = solveMidpoint(points);
    points.distance = solveDistance(points);
    printf("\nMidpoint: (%f, %f)", points.midpoint[0], points.midpoint[1]);
    printf("\nDistance between 2 points: %f", points.distance);
    getSlopeInterceptForm(points);

    return 0;

}

float solveSlope(struct line line1) {
    static float slope;
    // slope = (y2-y1)/(x2-x1)
    slope = (line1.point2.y - line1.point1.y) / (line1.point2.x - line1.point1.x);
    printf("\nSlope: %f", slope);
    return slope;
}

float* solveMidpoint(struct line line1) {
    static float midpoint[2];

    //For the x coordinate
    midpoint[0] = (line1.point1.x + line1.point2.x) / 2.0;
    //For the y coordinate
    midpoint[1] = (line1.point1.y + line1.point2.y) / 2.0;
    return midpoint;
}

float solveDistance(struct line line1) {
    float distance;
    distance = sqrt(pow(line1.point2.x - line1.point1.x, 2) + pow(line1.point2.y - line1.point1.y, 2));
    return distance;
}

void getSlopeInterceptForm(struct line line1) {
    float yintercept;

    // y = m(x)+b
    // -b = m(x)-y
    // b = -m(x)+y
    yintercept = -(line1.slope * (line1.point1.x)) + line1.point1.y;

    printf("\ny = %fx + (%f)", line1.slope, yintercept);
}
