// Program for finding union of vectors without sorted order
// Absense of Duplicates

#include<iostream>
#include<vector>
using namespace std;
int i = 0;

// Function to Print Vector
void print_Vector(vector <int> v){
    for(int i=0; i< v.size(); i++){
        cout<<"Element "<<i+1<<" : "<<v[i]<<endl;
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
vector<int> unique_Vector(vector<int> vec){

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

    return unique_vec;

}

int main(){
    
    // Initializing Two Vectors
    vector<int> v1 = {5,6,8,9,7,8,3,4,5,6,11};
    vector<int> v2 = {1,2,4,4,4,5,6,1,3};
    
    // Storing Vector 1 directly in result
    vector<int> union_Vectors = v1;
    vector<int> union_Vectors_unique;

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

    cout<<"\nUnion of Vectors Without Sorting and Absense of Duplicates is:\n"<<endl;
    union_Vectors_unique = unique_Vector(union_Vectors);
    print_Vector(union_Vectors_unique);

}   