// Program to See size of structure elements
#include<stdio.h>
#include<string.h>

// Declaring a Structure Student
struct student{
	char gender[10];
	int rollno;
	float marks;
	char name[20];
	char address[30];
};


int main(){

    // Declaring object/ instance of structure or structure variale
    struct student s1;

    // Passing Argument to Name
	strcpy (s1.name, "XYZ");

	s1.rollno = 90;
	s1.marks = 75;

    // Passing Argument to Gender
	strcpy(s1.gender, "Female");

    // Passing Argument to Address
	strcpy(s1.address, "Chhattisgarh");


	// Printing Variables
	printf("Roll Number is - %d \n", s1.rollno);
	printf("Marks is - %f \n", s1.marks);
    printf("Name is - %s \n", s1.name);
    printf("Gender is - %s \n", s1.gender);
    printf("Address is - %s \n", s1.address);
	

	printf("Size of Structure Member Roll Number(Integer) is: %d\n", sizeof(s1.rollno));
	printf("Size of Structure Member Marks(Float) is: %d\n", sizeof(s1.marks));
    printf("Size of Structure Member Name(String) is: %d\n", sizeof(s1.name));
	printf("Size of Structure Member Gender(String) is: %d\n", sizeof(s1.gender));
	printf("Size of Structure Member Address(String) is: %d\n", sizeof(s1.address));
	
	return 0; 
}