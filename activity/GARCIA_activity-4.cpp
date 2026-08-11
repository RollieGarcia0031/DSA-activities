#include <iostream>

using namespace std;

double sqrt(double number) {
    if (number < 0) {
        return -1.0; // Return error code for negative numbers
    }
    
    if (number == 0 || number == 1) {
        return number;
    }

    double guess = number;
    
    double tolerance = 0.0000001;
    
    while (true) {
        double nextGuess = 0.5 * (guess + number / guess);
        
        double difference = nextGuess - guess;
        if (difference < 0) {
            difference = -difference;
        }
        
        guess = nextGuess;
        
        if (difference < tolerance) {
            break;
        }
    }

    return guess;
}

double pi(){
    return 3.14;
}

double square(const double value){
    return value * value;
}

double get_circleCircumference(double radius, double pi){
    double circumference = 2 * pi * radius;

    return circumference;
}

double get_circleArea(double radius, double pi){
    double area = pi * square(radius);

    return area;
}

double get_ellipseArea(double radius, const double pi){
    double a = radius;
    double b = 2 * radius;

    double area = pi * a * b;

    return area;
}

double get_ellipseCircumference(double radius, const double pi) {
    const double a = radius;
    const double b = 2.0 * radius;

    double circumference = pi * (
        (3 * (a + b))
        - sqrt((3*a + b) * (a + 3*b))
    );

    return circumference;
}

int main(){

    double radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Circle area: " << get_circleArea(radius, pi()) << endl;
    cout << "Circle circumference: " << get_circleCircumference(radius, pi()) << endl;

    cout << "Ellipse area: " << get_ellipseArea(radius, pi()) << endl;
    cout << "Ellipse circumference: " << get_ellipseCircumference(radius, pi()) << endl;


    return 0;
}
