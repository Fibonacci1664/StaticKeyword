/*
 * Main.cpp
 *
 *  Created on: 15 Jul 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

// .h file
class Test
{
private:
	static int count;		/*
	 	 	 	 	 	 	 * 'static' means that there is only ONE of the 'count' variable, shared
	 	 	 	 	 	 	 * between ALL instances of the Test class object/s OR can simply just be associated
	 	 	 	 	 	 	 * with the class and doesn't even require an instance of an object to gain
	 	 	 	 	 	 	 * access to the variable.
	 	 	 	 	 	 	 *
	 	 	 	 	 	 	 * As opposed to an non static variable where each of the Test class objects
	 	 	 	 	 	 	 * have their own int count variable.
	 	 	 	 	 	 	 */
	int id;

public:
	static int const MAX = 99;	// 'const' must be initialised straight away when they are declared.

public:
	Test()
	{
		id = ++count;
	}

	int getId()
	{
		return id;
	}

	static void showInfo()		// static methods can only access static variables, you cant access an
	{							// instance variable(non static) from a static method, because static
		cout << count << endl;	// methods the same as static variables are associated with the class and
	}							// not the object.
};

// .cpp file
int Test::count = 0;

int main()
{
	//cout << Test::count << endl;

	cout << Test::MAX << endl;

	Test test1;
	cout << "Object 1 ID: " << test1.getId() << endl;


	Test test2;				/*
							 * Here we can see that although we have created two separate Test objects
							 * there is still only one count variable which is incremented.
							 */

	cout << "Object 2 ID: " << test2.getId() << endl;


	Test::showInfo();



	return 0;
}


