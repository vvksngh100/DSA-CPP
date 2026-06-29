// Character set - Set of characters supported by a language.
// ASCII Code (0-127{7 bits}) - Standard numeric codes for characters.

// A = 65   a = 97

char temp; // (1 byte memory)
temp = 'A'; //Actuall in memory 65 is stored
cout<<temp;

// Character array
char X[5] = {'A', 'B', 'C', 'D', 'E'};


// Array of characters basically a string
// End point of the string marked by null symbol '\0'
// With termination character, it is just an array of characters otherwise it is a string.


// Creating string
char name1[10] = {'P', 'e', 'n', '\0'};
char name2[] ={'P', 'e', 'n', '\0'};
char name3[] = "Pen";
// All the above strings are created in the stack memory

char *name = "Pen";  // This one is created in the heap memory.


// For input of a string we use the gets(name1). because the cin will not accepts the blank space where as the gets accepts the blank space as well.