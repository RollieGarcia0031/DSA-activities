// declare headers
#include <iostream>

using namespace std;

// declare helper functions
void assignPi(double *pi, const double value);
void evaluate_circle(double radius, double pi, double &circumference, double &area);
void evaluate_ellipse(double radius, double pi, double &circumference, double &area);

int main(){

    // declare the value of PI
    double PI;
    assignPi(&PI, 3.1415);

    // take user input, radius
    double radius;
    
    cout << "----------\nEnter radius: ";
    cin >> radius;

    double circleCircumference, circleArea;
    double ellipseCircumference, ellipseArea;

    // calculate circumference of circle and ellipse
    // pass the address of area and circumference, manipulate, then display the values
    evaluate_circle(radius, PI, circleCircumference, circleArea);
    evaluate_ellipse(radius, PI, ellipseCircumference, ellipseArea);

    cout << "\n\n---------\nCIRCLE\n---------\n";
    cout << "Circumference: " << circleCircumference << endl;
    cout << "Area: " << circleArea << endl;

    cout << "\n\n---------\nEllipse\n---------\n";
    cout << "Circumference: " << ellipseCircumference << endl;
    cout << "Area: " << ellipseArea << endl;

    return 0;
}


// assign the desired value of PI
void assignPi(double *pi, const double value ){
    *pi = value;
}

// calculate the area and circumference of circle
void evaluate_circle(double radius, double pi, double &circumference, double &area){
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
}

// calculate the circumference and area of ellipse
void evaluate_ellipse(double radius, double pi, double &circumference, double &area){
    double A = radius;
    double B = radius * 2;

    area = pi * A * B;

    // use approximation formula
    double eccentricFactor = (A - B) / (A + B);
    circumference = pi * (A + B) * (1 + (eccentricFactor * eccentricFactor) / 4);
}
