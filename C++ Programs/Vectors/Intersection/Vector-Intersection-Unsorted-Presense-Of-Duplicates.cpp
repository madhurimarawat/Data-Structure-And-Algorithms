// Program for finding intersection of vectors without sorted order
// Presense of Duplicates
// In this approach we will directly find intersection and will not focus on duplicates removal

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

// Function to find intersection
vector <int> intersection(vector<int> v1 , vector<int> v2){

    vector<int> intersect;
    int l;

    // To find the smaller vector size 
    // We are finding the comman elements between vectors so obviously it can be either equal or less than the size of smaller vector
    // To find this we have done this comparison
    if(v1.size() > v2.size()){
        l = v2.size();
    }
    else{
        l = v1.size();
    }

    // Loop to traverse vector elements
    for(int i = 0; i < l ; i++){

        // Finding if element is present in both vector or not
        if (find_element(v1, v1[i]) && find_element(v2, v1[i])){
            intersect.push_back(v1[i]);
        }
    }

    // Returning Vector whch contains intersection
    return intersect;
}

int main(){
    
    // Initializing Two Vectors
    vector<int> v1 = {5,6,8,9,7,8,3,4,5,6,11};
    vector<int> v2 = {1,2,4,4,4,5,6,1,3};
    
    // Vector to Store Result
    vector<int> vec_in;

    // Printing First Vector
    cout<<"First Vector is:\n"<<endl;
    print_Vector(v1);

    // Printing Second Vector
    cout<<"\nSecond Vector is:\n"<<endl;
    print_Vector(v2);

    cout<<"\nUnsorted Intersection of Vector With Presense of Duplicates is:\n"<<endl;
    vec_in = intersection(v1,v2);
    print_Vector(vec_in);

}   