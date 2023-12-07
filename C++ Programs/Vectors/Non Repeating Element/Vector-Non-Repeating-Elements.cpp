// Finding Non-Repeating Element in a user input vector
// We need to create a function that returns the Non-Repeating Element in vector and then optimize the results

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


// Function for Finding Non-Repeating Elements in vector
int non_repeating_Vector(vector<int> vec){ 

    int i,j,count = 1;

    // We need to declare i as local variable here else it will modify the global i leading to an infinite loop
    for(i = 0; i < vec.size(); i++){

        for(j = 0; j < vec.size(); j++){

            if(vec[i] == vec[j] && i != j){
                break;
            }
        }

         if(j == vec.size()){
                cout<<"Non-Repeating Element ["<<count<<"] is: "<<vec[i]<<endl;
                count++;
            }
    }

    if(count == 1){
                cout<<"Vector Contains all repetitive Values.";
            }

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

    non_repeating_Vector(vec);

    return 0;
}