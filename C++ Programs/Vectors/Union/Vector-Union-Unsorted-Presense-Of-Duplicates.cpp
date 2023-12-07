// Program for finding union of vectors without sorted order
// Presence of Duplicates
#include<iostream>
#include<vector>
using namespace std;

// Function to Print Vector
void print_Vector(vector <int> v){
    for(int i=0; i< v.size(); i++){
        cout<<"Element "<<i+1<<" : "<<v[i]<<endl;
    }
}

int main(){


    // Initializing Vectors
    vector<int> v1 = {5,6,8,9,7,8,3,4,5,6,11};
    vector<int> v2 = {1,2,4,4,4,5,6,1,3};
    
    // Storing Vector 1 directly in result
    vector<int> union_Vectors = v1;

    // Loop to store Vector 2 after Vector 1 in answer
    for(int i = 0; i< v2.size(); i++){
        union_Vectors.push_back(v2[i]);

    }

    // Printing First Vector
    cout<<"First Vector is:\n"<<endl;
    print_Vector(v1);

    // Printing Second Vector
    cout<<"\nSecond Vector is:\n"<<endl;
    print_Vector(v2);

    cout<<"\nUnion of Vectors Without Sorting and Presense of Duplicates is:\n"<<endl;
    print_Vector(union_Vectors);

}   