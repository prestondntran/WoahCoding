/* This program asks the user for metric height and weight and outputs the BMI with two decimal places. */

#include <iostream>
using namespace std;

int main() {
  float weight, height;
  float BMI;
  
  cout<<"Please enter weight in kilograms: ";
  cin>>weight;
  cout<<"Please enter height in meters: ";
  cin>>height;
  
  BMI = weight / (height * height);
  BMI = int((BMI * 100) + 0.5);
  BMI = (float)BMI / 100;
    
  cout<<"BMI is: "<<BMI;
  
  return 0;
}
