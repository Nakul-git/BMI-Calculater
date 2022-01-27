#include<iostream>

using namespace std;

class BMI{
           public:

             float weight;
             float height;
             float bmi;

             //Function in class
             void cal(){

               //Input of weight from user in Kg
               cout << "Enter weight in Kg : ";
               cin>>weight;

               //Input of height from user in meters
               cout << "Enter height in meters : ";
               cin>>height;

               //Formula for BMI calculation
               bmi=weight/(height*height);

               //Displaying user's BMI from both the inputs
               cout<<"Your BMI is : "<<bmi<<endl;

               //if condition for them whoes BMI is less than 15
               if(bmi<15){
                 cout<<"You are Severely underweight";
               }

               //else if condition for BMI value under 15 to 18.5
               //if first condition is false this will exicute
               else if (bmi<18.5 && bmi>15) {
                 cout<<"You are Underweight";
               }

               //else if condition for BMI value under 18.5 to 24.5
               //if secound condition is false this will exicute
               else if(bmi>18.5 && bmi<24.9){
                 cout<<"Your weight is normal";
               }

               //else if condition for BMI value under 25 to 29.9
               //if third condition is false this will exicute
               else if(bmi>25 && bmi<29.9){
                 cout<<"Pre-obesity";
               }

               //else if condition for BMI value under 30 to 34.9
               //if fourth condition is false this will exicute
               else if(bmi>30 && bmi<34.9){
                 cout<<"You are in obesity class 1";
               }

               //else if condition for BMI value under 35 to 39.9
               //if fifth condition is false this will exicute
               else if(bmi>35 && bmi<39.9){
                 cout<<"You are in obesity class 2";
               }

               //else if condition for BMI value is greater than 40
               //if sixth condition is false this will exicute
               else if(bmi>40){
                 cout<<"You are in obesity class 3";
               }

               //if none of the condition is true this will exicute
               else{
                 cout<<"Invalid weight or height";
               }

             }

           };

           int main() {

             //Object diclaration = final
             BMI final;

             //function diclaration
             final.cal();

             return 0;
}
