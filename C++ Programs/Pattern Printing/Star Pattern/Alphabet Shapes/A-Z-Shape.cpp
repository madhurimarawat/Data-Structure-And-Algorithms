#include<iostream>
using namespace std;

// Making i and j global variables
int i = 0;
int j = 0;
int k = 0;

// Defining Functions

// For One Star
void oneStar(){
    cout<<"*";
}

// For desired number of space
void spaceNum(int s){
    for(int i =0 ; i <s; i++){
        cout<<" ";
    }
}

// For Two star
// For printing Two star and Space between this two stars
void twoStarSpace(int r){

    // For Printing one Star we will call function
    oneStar();

    // We will print space according to even and odd rows
    // For this we will define the value of r which will change value according to even and odd

    if ( r % 2 == 0){
        r++;
    }

    // Now one loop for printing space till r
    for(int s = 0; s < r ; s++){
        cout<<" ";
    }

    // For Printing one Star we will call function
    oneStar();
}

// For Line of Stars in Half for middle line
void lineStarHalf(int r){
    for(int i = 0; i < r/2 + 2 ; i++){
        cout<<"* ";
    }
}

// For Line of Stars in Half for middle line
void lineStarHalfMiddle(int r){

    for(int i = 0; i < r/4 + 2 ; i++){
        cout<<"* ";
    }
}

// For Line of Stars in Full for middle line
void lineStarFull(int r){
    for(int i = 0; i <= r ; i++){
        cout<<"* ";
    }
}

// For Line of Stars in Partition of first line
void linePartitionStar(int r){
    for(int i = 0; i <= (r /2) ; i++){

        // For Space
        cout<<" ";

    }
    // For one Star
    oneStar();
}

// For front space
void starfrontSpace( int r){

    oneStar();

    for( i = 0 ; i < r ; i++){
        spaceNum(r - i);
        
    }

    oneStar();
}

int main(){

    int r;

    cout<<"Enter Number of Rows: ";
    cin>>r;

    cout<<"\nA Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing A Pattern
    for( i = 0; i< r; i++){
        
        // For Middle Row and First Row
        if (i == r/2 || i == 0){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

    }

    cout<<"\nB Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing B Pattern
    for( i = 0; i< r; i++){
        
        // For Middle Row and First Row and Last Row
        if (i == r/2 || i == 0 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

    }

    cout<<"\nC Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing C Pattern
    for( i = 0; i< r; i++){
        
        // First Row and Last Row
        if (i == 0 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            oneStar();
            cout<<endl;

        }

    }

    cout<<"\nD Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing D Pattern
    for( i = 0; i< r; i++){
        
        // First Row and Last Row
        if (i == 0 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

    }

    cout<<"\nE Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing E Pattern
    for( i = 0; i< r; i++){
        
        // First Row and Last Row and Middle row
        if (i == 0 || i == r/2 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            oneStar();
            cout<<endl;

        }

    }

    cout<<"\nF Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing F Pattern
    for( i = 0; i< r; i++){
        
        // First Row and Middle row
        if (i == 0 ||  i == r/2){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            oneStar();
            cout<<endl;

        }

    }

    cout<<"\nG Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing G Pattern
    for( i = 0; i< r; i++){
        
        // First Row and Last row
        if (i == 0 ||  i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }

        else if (i == r/2){

            // For First Star
            oneStar();
            // For Half Space
            if( r/2 % 2 == 0){
                spaceNum(r/2 - 1);
            }
            else{
                spaceNum(r/2); 
            }
            // For filling rest of the space with star
            lineStarHalfMiddle(r);
            cout<<endl;
        }

        else if( i >r/2 and i < r-1){
            twoStarSpace(r);
            cout<<endl;
        }
        else {
            // For all other rows
            oneStar();
            cout<<endl;

        }

    }

    cout<<"\nH Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing H Pattern
    for( i = 0; i< r; i++){
        
        // For Middle Row
        if (i == r/2){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

    }

    cout<<"\nI Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing I Pattern
    for( i = 0; i< r; i++){
        
        // For First and Last Row
        if (i == 0 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            linePartitionStar(r);
            cout<<endl;

        }

    }

    cout<<"\nJ Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing J Pattern
    for( i = 0; i< r; i++){
        
        // For First
        if (i == 0){
            lineStarHalf(r);
            cout<<endl;
        }
        // For rows after middle row
        else if( i > r /2 && i < r-1){
            oneStar();
            linePartitionStar(r-3);
            cout<<endl;
        }
        // For Last row
        else if ( i == r - 1 ){

            if (r/2 % 2 == 0){
                lineStarHalf(r/2 -1);
            }
            else{
                lineStarHalf(r/2);
            }
            cout<<endl;
        }

        else {

            // For all other rows
            linePartitionStar(r);
            cout<<endl;

        }

    }

    cout<<"\nK Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing K Pattern
    for( i = 0; i< r; i++){
        
        // For Upper Shape
        if ( i <= r/2){
            oneStar();
            spaceNum( r/2 - i);
            oneStar();
            cout<<endl;
        }

        // For Lower Shape
        else{
            oneStar();
            spaceNum(i - r/2);
            oneStar();
            cout<<endl;
        }

    }

    cout<<"\nL Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing L Pattern
    for( i = 0; i< r; i++){
        
        // For Last Row
        if (i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            oneStar();
            cout<<endl;

        }

    }

    cout<<"\nN Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing N Pattern
    for( i = 0; i< r-1; i++){
        
        // For First, Middle and Last Row
        if (i==0 || i == r-2){
            oneStar();
            spaceNum(r/2 + 3);
            oneStar();
            cout<<endl;
        }

        // For Lower Shape
        else{
            oneStar();
            spaceNum(i);
            oneStar(); 
            spaceNum(r/2 - i +2 );
            if(i != r-2){
                oneStar(); }
            cout<<endl;
        }

    }

    cout<<"\nO Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing O Pattern
    for( i = 0; i< r; i++){
        
        // For Middle Row
        if (i == 0 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

    }

    cout<<"\nP Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing P Pattern
    for( i = 0; i< r; i++){
        
        // For First and Middle Row
        if (i == 0 || i == r/2){
            lineStarHalf(r);
            cout<<endl;
        }
        else  if (i < r/2){

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

        else{
            oneStar();
            cout<<endl;
        }

    }

    cout<<"\nR Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing R Pattern
    for( i = 0; i< r; i++){
        
        // For First and Middle Row
        if (i == 0 || i == r/2){
            lineStarHalf(r);
            cout<<endl;
        }
        else  if (i < r/2){

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

        // For Lower Shape
        else{
            oneStar();
            spaceNum(i);
            oneStar();
            cout<<endl;
        }

    }

    cout<<"\nS Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing S Pattern
    for( i = 0; i< r; i++){
        
        // For First, Middle and Last Row
        if (i==0 || i == r/2 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else  if (i < r/2){

            // For all other rows
            oneStar();
            cout<<endl;

        }

        // For Lower Shape
        else{
            spaceNum(r+1);
            oneStar();
            cout<<endl;
        }

    }
    
    cout<<"\nT Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing T Pattern
    for( i = 0; i< r; i++){
        
        // For First 
        if (i == 0){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            linePartitionStar(r);
            cout<<endl;

        }

    }

    cout<<"\nU Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing U Pattern
    for( i = 0; i< r; i++){
        
        // For Last Row
        if (i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }
        else {

            // For all other rows
            twoStarSpace(r);
            cout<<endl;

        }

    }

    cout<<"\nZ Pattern till "<<r<<" Rows is:\n"<<endl;

    // Printing Z Pattern
    for( i = 0; i< r; i++){
        
        // For First, Middle and Last Row
        if (i==0 || i == r-1){
            lineStarHalf(r);
            cout<<endl;
        }

        // For Lower Shape
        else{
            spaceNum(r-i);
            oneStar();
            cout<<endl;
        }

    }

    return 0;
}