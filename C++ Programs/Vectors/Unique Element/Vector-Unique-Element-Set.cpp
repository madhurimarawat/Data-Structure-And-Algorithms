// Finding Unique Element in a user input vector
// Using Pre-defined function

#include<iostream>
#include<vector>
// Function to import set
// Set dosen't contains duplicate element so we will convert vector to set and then print it
#include<set>
using namespace std;

int main(){
    // Declaring Vector
    vector<int> vec;
    // Taking User Input
    int n, ele;
    cout<<"Enter Number of Elements: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Enter Element "<<i+1<<" is: ";
        cin>>ele;
        vec.push_back(ele);
    }

    // Creating a set from the vector
    set<int> s(vec.begin(), vec.end());

    // Printing the unique elements
    cout<<"\nUnique Elements in Vector are:\n";

    for(i = 0; i< set.size(); i++){

        cout<<"Element "<<i+1<<" is: "<<set[i]<<endl;

    }

    return 0;
}
