// Program for finding union of vectors without sorted order
// Presense of Duplicates

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

int swap_ele(int &a , int &b){
     int temp = a;
     a = b;
     b = temp;
}

// Functions for Sorting
vector <int> bubble_Sort(vector<int> vec){

    // Variable for checking if vector is sorted
    int is_Sorted = 1;

    for(int i = 0; i < vec.size(); i++){

        // To Only run Inner Loop j Only  if Vector is Unsorted
        if(is_Sorted != 0){
            is_Sorted = 0;

            /*
            The condition in the j loop is j < vec.size()-i-1. Here’s what it means:

            vec.size()-i-1: This expression determines the last unsorted element in the vector. 
            With each iteration of the i loop (outer loop), the largest element gets bubbled up 
            to its correct position at the end of the vector. So, with each iteration of the i loop,
             we can reduce the size of the unsorted portion of the vector by 1, hence the -i.

            j < vec.size()-i-1: This condition ensures that the j loop iterates over the unsorted portion
             of the vector. It stops before the sorted portion begins.
            */
            
            for(int j = 0; j < vec.size()-i-1; j++){
                if (vec[j] > vec[j+1]){
                    swap_ele(vec[j],vec[j+1]);
                    is_Sorted++;
                }
            }
        }
        
        // To Terminate Outer Loop i Once Vector is Sorted
        else{
            break;
        }
    }
    return vec;
}


int main(){
    
    // Initializing Two Vectors
    vector<int> v1 = {1,3,5,2,6,5,7};
    
    cout<<"\nVector after Sorting is:\n"<<endl;
    v1 = bubble_Sort(v1);
    print_Vector(v1);

}   