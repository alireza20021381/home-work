#include<iostream> // To receive input and output from the user
using namespace std;

// A function to get an array
void set_array(int array[] , int n) // Receive an n array as input
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << "Enter a[" << i<< "]=" ; // Display the appropriate message
        cin >> array[i]; // Get the array from the user
    } // End of for
} // End of function


// Function to print the array
void print_array(int array[] , int n) // Receive an n array as input
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << "array[" << i << "]= " << array[i] << "\n"; // Print the
         // array with the appropriate message
    } // End of for
    cout << endl;
} // End of function


// A function to find the largest element of an array
int find_max(int array[] , int n) // Receive an n array as input
{
    int max = array[0]; // Define and initialize the max variable for
     // the largest element 
    int index = 0; // Define the index variable to store the index of the
     // Largest element of the array and initialize it with zero
    
    for(int i = 0 ; i < n ; i++)
    {
        if(array[i] > max) // Condition to find the largest element
        {
            max = array[i];
            index = i;
        }
    }
    return index; // Return index as output
} // End of function

// A function to find an element in an array
int find_item(int array[] , int n , int item) // Get an n array and
 // one element to search 
{
    for(int i = 0 ; i < n ; i++)
    {
        if(array[i] == item) // A condition to find the item
        {
            return i; // Item found
        }
    }
    return -1; // Item not found
} // End of function



// A main function
int main()
{
    const int n = 4; // Define and initialize a constant for the number
    // of array elements
    int array[n]; // Define an n array
    int item = 5; // Define and initialize a variable to search within an array

    set_array(array , n); // Call set_array function
    print_array(array , n); // Call print_array function

    cout << "The index of the largest element is equal to " <<
        find_max(array , n) << ".\n"; // Display appropriate message and call find_max function
    
    int a = find_item(array , n , item); // Defining the variable a and initializing it with 
     // the find_max function

    if (a == -1) // condition for the result of find_item function
    {
        cout << "The item not found." << "\n";
    }
    else
    {
        cout << "Item index is equal to " << a <<".\n";
    }
} // End of main function