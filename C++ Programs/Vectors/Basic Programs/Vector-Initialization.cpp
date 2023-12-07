// Program to demonstrate the various ways of initializing vector
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

    // 1. Default Initialization
    vector<int> def_Vec;

    // It will not Print anything because we have not specified the size

    cout<<"1. Vector With Default Initialization:\n"<<endl;
    print_Vector(def_Vec);

    // 2. Initialization with a given size
    vector<int> size_Vec(5);

    // It will Print 0 because we have only specified the size and not the elements

    cout<<"\n2. Vector Initialization With a Given Size:\n"<<endl;
    print_Vector(size_Vec);

    // 3. Initialization with a Initializer List
    vector<int> list_Vec = {1,2,3,4};

    // It will Print elements because we have specified the elements

    cout<<"\n3. Vector Initialization With a Given List:\n"<<endl;
    print_Vector(list_Vec);

    // 4. Initialization with Same Elements
    vector<int> same_ele_Vec(10,4);

    // It will Print elements because we have specified the elements

    cout<<"\n4. Vector Initialization With Same Elements:\n"<<endl;
    print_Vector(same_ele_Vec);

    // 5. Copy Initialization with another Vector
    vector<int> copy_Vec = same_ele_Vec;

    // It will Print elements because we have specified the elements

    cout<<"\n5. Vector Copy Initialization With another Vector:\n"<<endl;
    print_Vector(copy_Vec);

    // 6. Range Initialization with another Array
    int a[] = {1,2,3,4,5,6};
    // We can also write it as vector<int> range_Vec= a[a, a + 6]
    vector<int> range_Vec(a, a + 6);

    // It will Print elements because we have specified the elements

    cout<<"\n6. Vector Range Initialization With another Vector:\n"<<endl;
    print_Vector(range_Vec);


}