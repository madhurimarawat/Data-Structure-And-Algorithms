// Program to demonstrate the Size and Capacity of vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // Initializing Vector
    vector<int> vec = {1,2,3};

    cout<<"Size of Vector is: "<<vec.size()<<endl;
    cout<<"Capacity of Vector is: "<<vec.capacity()<<endl;

}