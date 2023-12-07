/* Vectors are dynamic arrays in C++ with the ability to resize. 
   vector header file is imported to use vectors.
   They provide functions like push_back() for adding elements, 
   at() for accessing elements, and size() for getting the vector size. 
   Unlike arrays, vectors handle their own memory management. 
   This makes vectors a safer and more flexible option than arrays. */


/* Vectors also provide iterators with begin() and end() for traversal. 
   They allow insertions and deletions at any position with insert() and erase(). */


/* Vectors support random access with operator[] similar to arrays. 
   They also provide a clear() function to remove all elements and shrink_to_fit() to reduce memory usage. */


/* Default size of vector is 0.
   Working on it dynamically increases its size to n*2 where n is size of element. */


// Including Header Files
#include<iostream>
#include<vector>
using namespace std;

// Initializing variable
int i;

// Making Function for Printing Vector
int prinVector(vector<int> vec){

    // Printing Vector
    // We cannot print Vector Directly we need to have a loop and iterate over all elements of vector
    // Size function is used to get size of vector
    for(i = 0; i< vec.size(); i++){

        cout<<"Element "<<i+1<<" is: "<<vec[i]<<endl;

    }
}

int main(){

    // Initializing Vector
    // vector is keyword and syntax is vector<datatype> variable_name

    // 1. Initializer List- Directly giving elements
    // Since it is a vector we do not need to specify size
    vector<int> vec1 = {1,2,3,4,5,6};

    // 2. Vector of same elements with a given length
    // Make a Vector of 3 elements with each element being 15
    vector<int> vec2(3,15);

    // 3. Declaring Variable first and giving elements later
    vector<int> vec3(5);


    // Since Vectors are stored dynamically we can add any number of elements
    vec3 = {10,12,34,56,78,9,12,90,67,45,12,3,4,5,6,8};

    // Printing Vector
    // We cannot print Vector Directly we need to have a loop and iterate over all elements of vector
    // Size function is used to get size of vector

    cout<<"First Vector using Direct initialization is:\n";
    prinVector(vec1);

    cout<<"\nSecond Vector using vec(3,15) is:\n";
    prinVector(vec2);

    cout<<"\nThird Vector Declaring variable first and initialization later is:\n";
    prinVector(vec3);

    // Vector Functions
    cout<<"\nVector Functions are:"<<endl;

    // 1. push_back()- Adds an element to the end of the vector.
    
    vec1.push_back(12);

    cout<<"\nFunction 1: push_back()"<<endl;

    cout<<"\nAfter Adding 12 to Vector using vec1.push_back(12), Vector is:\n";
    prinVector(vec1);


    // 2. at()- Returns a reference to the element at a specific position in the vector.

    cout<<"\nFunction 2: at()"<<endl;
    cout<<"\nElement at Index 2 in Vector 1 is: "<<vec1.at(2)<<endl;


    // 3. size()- Returns the number of elements in the vector.
    
    cout<<"\nFunction 3: size()"<<endl;
    cout<<"\nNumber of elements in Vector 1 is: "<<vec1.size()<<endl;


    // 4. begin() and end(): Return iterators to the beginning and the end of the vector respectively.
    // Since they are iterators we cannot print them directly, but they can be used in loop
    
    cout<<"\nFunction 4: begin() and end()"<<endl;
    cout<<"\nPrinting Vector using begin() and end()\n"<<endl;

    for(auto it = vec1.begin(); it != vec1.end(); ++it) {
    cout << *it << " ";

    }


    // 5. insert(): Inserts elements at a specific position in the vector.
    
    cout<<"\n\nFunction 5: insert()"<<endl;
    vec1.insert(vec1.begin(), 45);
    cout<<"\nAfter Adding 45 to Vector begining using vec1.insert(vec1.begin(), 45), Vector is:\n";
    prinVector(vec1);


    // 6. pop_back(): Removes elements from last position in the vector.
    
    cout<<"\nFunction 6: pop_back()"<<endl;
    vec1.pop_back();

    cout<<"\nAfter Removing element from Vector begining using pop_back(), Vector is:\n";
    prinVector(vec1);

    // 7. erase(): Removes elements from a specific position or range in the vector.
    
    vec1.erase(vec1.begin());
    cout<<"\nFunction 7: erase()"<<endl;
    cout<<"\nAfter Removing 45 from Vector begining using vec1.erase(vec1.begin()), Vector is:\n";
    prinVector(vec1);


    // 8. capacity(): Gives the capacity of the vector, capacity is twice the number of elements.
    
    cout<<"\nFunction 8: capacity()"<<endl;
    cout<<"\nCapacity of the Vector is: "<<vec1.capacity()<<endl;


    // 9. empty(): Checks if vector is empty or not.
    // 0 for not empty and 1 for empty
    
    cout<<"\nFunction 9: empty()"<<endl;
    cout<<"\nChecking if Vector is empty or not: "<<vec1.empty()<<endl;
   

    // 10. clear(): Removes all elements from the vector.
    
    vec1.clear();
    cout<<"\nFunction 10: clear()"<<endl;
    cout<<"\nAfter using clear function Vector is:\n";
    prinVector(vec1);

    
}