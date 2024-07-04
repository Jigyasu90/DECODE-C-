// Q1
#include<iostream>
using namespace std;
int main(){
    int money;
    cout<<"Enter the amount which is a divisible by 10 : ";
    cin>>money;

    int n2000,n500,n200,n100,n50,n10,n5,n2,n1;
    switch(1){
        case 1:
        n2000 = money/2000;
        money -= (2000*n2000);
        case 2:
        n500 = money/500;
        money -= (500*n500);
        case 3:
        n200 = money/200;
        money -= (200*n200);
        case 4:
        n100 = money/100;
        money -= (100*n100);
        case 5:
        n50 = money/50;
        money -= (50*n50);
        case 6:
        n10 = money/10;
        money -= (10*n10);
        case 7:
        n5 = money/5;
        money -= (5*n5);
        case 8:
        n2 = money/2;
        money -= (2*n2);
        case 9:
        n1 = money/1;
        money -= (1*n1);
        break;
                 
    }
    cout<<"Number of 2000 Note : "<<n2000<<endl;
    cout<<"Number of 500 Note : "<<n500<<endl;
    cout<<"Number of 200 Note : "<<n200<<endl;
    cout<<"Number of 100 Note : "<<n100<<endl;
    cout<<"Number of 50 Note : "<<n50<<endl;
    cout<<"Number of 10 Note : "<<n10<<endl;
    cout<<"Number of 5 Note : "<<n5<<endl;
    cout<<"Number of 2 Note : "<<n2<<endl;
    cout<<"Number of 1 Note : "<<n1<<endl;
}