// Q8
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int a=1,b=1,sum=0;
    for(int i=1;i<=num;i++){
        cout<<a<<'\t';
        sum=a+b;
        a=b;
        b=sum;
    }
}
