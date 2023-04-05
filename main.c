#include <stdio.h>
#include <math.h>

double calcSum(double num1, double num2);
double calcSub(double num1, double num2);
double calcMulti(double num1, double num2);
double calcDiv(double num1, double num2);
double calcSqrt(double n);
double calcPower(double n);
double areafindercircle(int r);
double perimeterfindercircle(int r);
double areafindersquare(int r);
double perimeterfindersquare(int r);
double areafindersquare(int r){
    double area=r*r;
    return area;
}
double perimeterfindersquare(int r){
    double perimeter = 4*r;
    return perimeter;
}


double perimeterfindercircle(int r){
    double perimeter=2*3.14159*r;
    return perimeter;
}

double areafindercircle(int r){

    double area=3.14159*r*r;
    return area;
}
double calcSum(double num1, double num2){
    return num1+num2;
}

double calcSub(double num1, double num2){
    return num1-num2;
}

double calcMulti(double num1, double num2){
    return num1*num2;
}

double calcDiv(double num1, double num2){
    return num1/num2;
}

double calcSqrt(double n){
    return sqrt(n);
}

double calcPower(double n){
    int m;
    printf("\n");
    printf("Give a number to raise to the square root of: ");
    scanf("%d", &m);
    return pow(n,m);
}

int main() {
    while(1){
        printf("\n");
        printf("What operation do you want to do: \n"
               "1-Sum \n"
               "2-Subtraction \n"
               "3-Multiplication \n"
               "4-Division \n"
               "5-Square Root \n"
               "6-Power\n"
               "7-Circle\n"
               "8-Square\n");
        int choice;
        scanf("%d", &choice);
        printf("\n");
        double num1,num2;


        switch (choice) {
            case 1:
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("\n");
                printf("Sum: %lf", calcSum(num1,num2));
                break;
            case 2:
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("\n");
                printf("Subtraction: %lf", calcSub(num1,num2));
                break;
            case 3:
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("\n");
                printf("Multiplication: %lf", calcMulti(num1,num2));
                break;
            case 4:
                printf("Enter 2 numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("\n");
                printf("Division: %lf", calcDiv(num1,num2));
                break;
            case 5:
                printf("\n");
                int n;
                printf("Give a number: ");
                scanf("%d", &n);
                printf("Square Root: %lf", calcSqrt(n));
                break;
            case 6:
                printf("\n");
                int num;
                printf("Give a number: ");
                scanf("%d", &num);
                printf("\n");
                printf("Power: %lf", calcPower(num));
                break;
            case 7:
                printf("\n");
                int a;
                printf("Give a number: ");
                scanf("%d", &a);
                printf("\n");
                printf("Area of Circle: %lf", areafindercircle(a));
                printf("Perimeter of Circle: %lf", perimeterfindercircle(a));
                break;
            case 8:
                printf("\n");
                int b;
                printf("Give a number: ");
                scanf("%d", &b);
                printf("\n");
                printf("Area of Circle: %lf", areafindersquare(b));
                printf("Perimeter of Circle: %lf", perimeterfindersquare(b));
                break;
        }
        printf("\n");
        printf("Do you want to continue using the calculator?(1-Yes | 0-No): ");
        int continueChoice;
        scanf("%d", &continueChoice);
        if(continueChoice == 0) {
            break;
        }}


}
