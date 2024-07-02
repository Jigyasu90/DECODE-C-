#include<iostream>
using namespace std;

//Q1
int main(){

    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;

    if(a>b) {
        cout<<a<<" is Greater.";}
    else {
        cout<<b<<" is Greater.";}

}

//Q2
int main(){
    float radius,circum,area;
    cout<<"Enter the radius of circle :";
    cin>>radius;

    circum = 2*3.1415*radius;
    area = 3.1415*radius*radius;

    if(circum>area){
        cout<<"Circumference is greater then area .";
    }
    else if(circum==area){
        cout<<"Circumference and area is same.";
    }
    else{
        cout<<"Area is greater then circumference .";
    }
}

//Q3

int main(){
    int year;
    cout<<"Enter the year ";
    cin>>year;
    if((year%4==0 && year%100!=0) || year%400==0){
        cout<<"Entered year is leap year";
    }
    else{
        cout<<"Entered year is not leap year";
    }
}

//Q4
int main(){
    float l,b,peri,area;
    cout<<"Enter the perimeter and area :";
    cin>>l>>b;

    peri = 2*(l+b);
    area = l*b;

    if(peri>area){
        cout<<"Perimeter is greater then area .";
    }
    else if(peri==area){
        cout<<"perimeter and area is same.";
    }
    else{
        cout<<"Area is greater then Perimeter  .";
    }
}

// Q5
int main(){
    int side1,side2,side3;
    cout<<"Enter The three sides of triangle : ";
    cin>>side1>>side2>>side3;

    if(side1==side2 && side2==side3 && side1==side3){
        cout<<"The triangle is an equitorial triangle";
    }
    else if (side1==side2 || side2==side3 || side1==side3){
        cout<<"The given triangle is isoceles ";
    }
    else{
        cout<<"The given triangle is scalene ";
    }
}

// Q6
int main(){
    int a,b,c;
    cout<<"Enter three marks : ";
    cin>>a>>b>>c;

    if(a<b && a<c){
        cout<<a<<" is the lowest marks";
    }
    else{
        if(b<c){
            cout<<b<<" is the lowest marks";
        }
        else{
            cout<<c<<" is the lowest marks";
        }
    }
}

// Q7
int main(){
    int x,y;
    cout<<"Enter the X-Y coordinate : ";
    cin>>x>>y;

    if (x==0 && y==0){
        cout<<"Point lie on origin";
    }
    else if (x!=0 && y==0){
        cout<<"point lie on the X- axis";
    }
    else if(x==0 && y!=0){
        cout<<"Point lie on the Y-axis";
    }
    else{
        cout<<"Point lie on the plane ";
    }
}

// Q8
int main(){
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter 1 coordinate : ";
    cin>>x1>>y1;
    cout<<"Enter 2 coordinate : ";
    cin>>x2>>y2;
    cout<<"Enter 3 coordinate : ";
    cin>>x3>>y3;
    
    float slope1,slope2;
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);

    if (slope1==slope2){
        cout<<"All three points lie on the same line ";
    }
    else{
        cout<<"Point does not lie on the same line";
    }
}

// Q9
int main(){
    char ch;
    cout<<"Enter any character to be checked : ";
    cin>>ch;

    if(((int)ch>=65 && (int)ch<=90) || ((int)ch>=97 && (int)ch<=122)){
        cout<<"Entered character is a alphabet .";
    }
    else if((int)ch>=48 && (int)ch<=57){
        cout<<"Entered character is a digit";
    }
    else{
        cout<<"Entered charater is special character";
    }
}

