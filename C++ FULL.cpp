 #include <iostream>

using namespace std;

int main()
{
	cout << "hello world" << endl;

	
# Data Types in C++    (case sensitive)
	int a,b,c;
	a = 30; 
	b = 80;
	c = 99;
	cout << a+b ; 
	
		return 0;
		
		//VAriables camelCase NOTATION
		int marksInMaths=83;
		cout << marksInMaths;
} 



#include <iostream>
using namespace std;
int main()
{
	cout << "size of char : " << sizeof(char) << endl;
	
	return 0;
}  


 #include <iostream>
using namespace std;

//Variable Declaration:
extern int a,b;
extern int c;
extern float f;

int main()
{
	//Variable Defination:
	int a,b;
	int c;
	float f;
	
	//actual initialization
	a = 10;
	b = 20;
	c = a+b;
	cout << c << endl;
	
	f = 70.0/3.0;
	cout << f << endl;
	return 0 ;
} 

#SEQUENCE CHARACTERS

 #include <iostream>
using namespace std;
int main()
{
	cout << "hello\t\tworld" <<endl;
	return 0;
} 

#DEFINING CONSTANTS
// using #define preprocessor
// using CONST keyword

 #include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
	int area;
	
	area = LENGTH*WIDTH;
	
	cout << area;
	cout << NEWLINE;
	
	return 0;
} 

#include <iostream>
// function declaration
void func(void);

static int count =10; /*Global Variable*/

main()
{
	while(count--)
	{
		func();
	}
	return 0;
}

// Function definition

void func(void)

{
	static int i= 5; // local static variable
	i++;
	std::cout << "i is" << i;
	std::cout << "and count is" << count << std::endl;
	}




