// Nick Williams
// CPSC 300 Project 5
// Make a copy of the program.
// Change the two functions to template functions so that they work with array types
// other than just integer. Do not make copies of the functions to accommodate the
// other variable types!
// Remove the comments from the two blocks of code in main.
// Test your changes to see that the program works correctly with all three arrays.
// Add the appropriate comments to the top of the program.

#include <iostream>
using namespace std;

//template function to sort the list
template <class Item1>
void sort(Item1 list[], int num)
{
	int i;
	int j;
	// Declare the variable as "Item1" so the array matches the input
	Item1 tmp;			

    for (i = 0; i < num - 1; i++)
        for (j = i + 1; j < num; j++)
            if (list[i] > list[j])
            {
                tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
}

// Template function
template <class Item1>
void print_list(Item1 list[], int num)	
{	
	// Leave because the varable will always be an int
	// Make the first variable to be any type
	int i;
    for (i = 0; i < num; i++)
    	cout << list[i] << endl;
}

int main()
{
	int list_i[] =
		{12, 34, 2, 99, 10, 8};
	int list_i_size = sizeof(list_i) / sizeof(list_i[0]);
	
	string list_s[] =
		{"Superior", "Huron", "Michigan", "Erie", "Ontario"};
	int list_s_size = sizeof(list_s) / sizeof(list_s[0]);
	
	double list_r[] =
		{3.14159, 22222, 0.0001, -1234.5, 678.9, 99.0, 88.0, 77.0, 1010.1};
	int list_r_size = sizeof(list_r) / sizeof(list_r[0]);
	
	cout << "Integer list before sort ...\n";
	print_list (list_i, list_i_size);
	cout << endl;
	sort (list_i, list_i_size);
	cout << "Integer list after sort ...\n";
	print_list (list_i, list_i_size);
	cout << endl;
	
	// Need to add this stuff back in by using template functions
	// It should be done 
	   
	cout << "String list before sort ...\n";    
	print_list (list_s, list_s_size);    
	cout << endl;    
	sort (list_s, list_s_size);
	cout << "String list after sort ...\n";    
	print_list (list_s, list_s_size);    
	cout << endl;
	
	cout << "Real number list before sort ...\n";    
	print_list (list_r, list_r_size);    
	cout << endl;    
	sort (list_r, list_r_size);    
	cout << "Real number list after sort ...\n";    
	print_list (list_r, list_r_size);    
	cout << endl;
	
	return 0;
}
