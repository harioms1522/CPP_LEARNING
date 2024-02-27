#include <iostream>
using namespace std;

// this is a way main can be written
//int main()
//{
//	cout << "hello world\n" << "See U" << endl;
//	return 0;
//}


//main can have the arguements from outside before starting the program
// argc (arguements count) is the number of arguements that are passed from the os while running 
// eg program.exe arg1 arg2 then argc = 2

//argv (arguements vector) --> all the arguements passed in the program
int main(int argc, char *argv[]){
    cout << argv[0];
    return 0;
}

// as you can see by running the upper main function we get one argv by default
// that is the path to the main file in OS

