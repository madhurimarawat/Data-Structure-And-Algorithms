// Finding Unique Element in a user input vector using list
// We are using list to store Unique numbers in a vector
// We need to create a function that returns the unique element in vector and then optimize the results

// Including Header Files
#include<iostream>
#include<vector>
using namespace std;

// Initializing variable
int i,n,ele;

// Making Function for Printing Vector
int print_Vector(vector<int> vec){

    // Printing Vector
    // We cannot print Vector Directly we need to have a loop and iterate over all elements of vector
    // Size function is used to get size of vector
    for(i = 0; i< vec.size(); i++){

        cout<<"Element "<<i+1<<" is: "<<vec[i]<<endl;

    }
}

// For finding element in vector
int find_element(vector<int> vec , int k){

    for(i = 0; i < vec.size(); i++){

        if(vec[i] == k){
            return 1;
        }
       
    }

    return 0;
}

// Function for Finding Unique elements in vector
int unique_Vector(vector<int> vec){

    // Vectpr to store unique elements from vector
    vector<int> unique_vec; 

    // We need to declare i as local variable here else it will modify the global i leading to an infinite loop
    for(int i = 0; i < vec.size(); i++){

        // First we will check if the element exists in vector or not
        // If it dosen't exist that means it is unique and we will add it else we will not do anything
        if(find_element(unique_vec, vec[i]) == 0){

            unique_vec.push_back(vec[i]);

        }

    }

    cout<<"\nUnique Elements in Vector are:"<<endl;
    print_Vector(unique_vec);

}


int main(){

    // Declaring Vector
    vector<int> vec;

    // Taking User Input
    cout<<"Enter Number of Elements: ";
    cin>>n;

    for(i = 0; i < n; i++){

        cout<<"Enter Element "<<i+1<<" is: ";
        cin>>ele;
        vec.push_back(ele);
    
    }

    unique_Vector(vec);

    return 0;
}