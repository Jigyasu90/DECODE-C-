#include<iostream>
using namespace std;

//Q4 WAP for finding the volume of the cylinder by taking radius and height as input.
int main(){
    float radius,height,pi=3.1415;
    cout<<"Enter the Radius and height of the cylinder : ";
    cin>>radius>>height;

    float volume = pi*radius*radius*height;

    cout<<"Volume of the cylinder : "<<volume;


}

//Q5 WAP to find the difference between ASCII of two characters ,take them as input .
int main(){
    char ch1,ch2;
    cout<<"Enter Your First character : ";
    cin>>ch1;
    cout<<"Enter Your Second character : ";
    cin>>ch2;

    int diff = (int)ch2-(int)ch1;

    cout<<diff;
    
}