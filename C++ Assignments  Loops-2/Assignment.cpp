#include<iostream>
using namespace std;

// Q5
int main(){
    int num,sum=0,rem;
    cout<<"Enter the number : ";
    cin>>num;

    while(num!=0){
        rem=num%10;
        if(rem%2==0){
            sum+=rem;
        }
        num/=10;
    }

    cout<<"Sum of only even digit of number : "<<sum;
}

// // Q6
// int main(){
//     int num,revnum=0,rem,num1;
//     cout<<"Enter the number : ";
//     cin>>num;
//     num1=num;

//     while(num!=0){
//         rem=num%10;
//         revnum=(revnum*10)+rem;
//         num/=10;
//     }
//     cout<<num1+revnum<<" ["<<num1<<"+"<<revnum<<"]";

// }

// // Q7
// int main(){
//     int num,prod=1;
//     cout<<"Enter the number : ";
//     cin>>num;

    
//     for(int i=1;i<=num;i++){
//         prod*=i;
//         cout<<"Fac["<<i<<"] = "<<prod<<endl;
//     }    
// }

// // Q8
// int main(){
//     int num;
//     cout<<"Enter the number : ";
//     cin>>num;

//     int a=1,b=1,sum=0;
//     for(int i=1;i<=num;i++){
//         cout<<a<<'\t';
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
// }

// // Q9
// int main(){
//     for(int i=1;i<=500;i++){
//         int arms=0;
//         int prod=1;
//         int j=i;
//         while(j!=0){
//             int rem=j%10;
//             prod=rem*rem*rem;
//             arms+=prod;
//             j/=10;
//         }
//         if(i==arms){
//             cout<<i<<endl;
//         }

//     }
// }