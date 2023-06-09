#include<iostream>
using namespace std;

int main(){
    int marks[100];
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    //input 
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }

    //output
    for(int i=0; i<100; i++){
        cout<<marks[i]<<", ";
    }
    cout<<endl;
    return 0;
}
