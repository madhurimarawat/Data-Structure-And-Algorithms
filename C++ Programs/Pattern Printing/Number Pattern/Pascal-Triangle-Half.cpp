// C++ code for Pascal's Triangle
#include <iostream>
using namespace std;

/*

For r=6

 1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1

*/

int main(){

	int r,i,j,s,coef;

	printf("Enter number of Rows: ");
	scanf("%d",&r);

	for(i=0;i<r;i++){

		for(j=0;j<=i;j++){

  			if(j==0||i==0){
  				coef = 1;
			}
			else
			{
 			coef = (coef*(i-j+1)) / j;
			}

			cout<<" " <<coef;
		}
   		cout<<endl;
}
}