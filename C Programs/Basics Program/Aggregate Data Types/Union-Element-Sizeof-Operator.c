// Program to See size of Union elements
#include<stdio.h>
#include<string.h>

// Declaring a Union Student
union student{
	char gender[10];
	int rollno;
	float marks;
	char name[20];
	char address[30];
};


int main(){

    // Declaring object/ instance of union or union variable
    union student s1;

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
	

	printf("Size of Union Member Roll Number(Integer) is: %d\n", sizeof(s1.rollno));
	printf("Size of Union Member Marks(Float) is: %d\n", sizeof(s1.marks));
    printf("Size of Union Member Name(String) is: %d\n", sizeof(s1.name));
	printf("Size of Union Member Gender(String) is: %d\n", sizeof(s1.gender));
	printf("Size of Union Member Address(String) is: %d\n", sizeof(s1.address));

	// It is the combined size of all Union elements
	printf("Size of Union is: %d\n", sizeof(s1));
	
	return 0; 
}

/*

The size of a union is determined by the size of its largest member, 
but in certain cases, compilers might add padding to ensure proper alignment. 
In this case, it seems that the compiler has added 2 bytes of padding to align 
the `float` member (`marks`) on a 4-byte boundary.

Let's break down the size calculation again, taking alignment into account:

1. **Gender (char[10]):** 10 bytes
2. **Roll Number (int):** 4 bytes
3. **Marks (float):** 4 bytes
4. **Name (char[20]):** 20 bytes
5. **Address (char[30]):** 30 bytes

Since the size of a union is determined by the largest member (which is 30 bytes), 
and compilers often align structures and unions to optimize memory access, the total 
size becomes 32 bytes. The extra 2 bytes are likely due to padding added by the compiler.

Keep in mind that padding and alignment can vary between compilers and architectures, 
and this behavior is compiler-specific.

*/