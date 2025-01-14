// This is the breakdown process for when a user runs 'clang'
//
// STEP 1 : preprocessing
//
// Preprocessing is when you add '#include <stdio.h>' (for example) in your code.
// It acts as a prototype of what you will be using in your code later.
// Given an example :
// #include <stdio.h>

// int main(void)
// {
//     printf("hello, world\n");
// }

// So here, in the main function, we are using the command 'printf' which we extract from stdio library.
// What happens if we exclude it?
// Error below will show up.
// pcal.c:12:5: error: call to undeclared library function 'printf' with type 'int (const char *, ...)'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
//    12 |     printf("hello, world\n");
//       |     ^
// pcal.c:12:5: note: include the header <stdio.h> or explicitly provide a declaration for 'printf'
// 1 error generated.
// make: *** [<builtin>: pcal] Error 1
// And below is the output if it's (<stdio.h>) included :
// $ make pcal <---- prompt
// $ ./pcal <------- prompt
// hello, world <--- here is the output / return val

// Same goes for this example below :
#include <stdio.h> // prototype for printf (== int printf(string format, ...);)
void meow(int n); //As a prototype, for preprocessing,

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

// From the code above, we can see repitition of 'void meow(int n);'
// Here is another example, add another library.
// #include <stdio.h> // int printf(string format, ...);
// #include <cs50.h> // string get_string(string prompt);

// int main(void)
// {
//     string answer = get_string("What's your name? ");
//     printf("hello, %s\n", answer);
// }

// // Why do we need two of them ? Why can't we just use once that includes the whole function instead of just the prototype?
// It is really part of the process.. The compiler cannot compile as it does not support implicit function declarations.
// Preprocessing CONVERTS all of those hash include lines to whatever the underlying prototypes are within the file (plus some other stuff)

// Step 2 : Compiling
// This process occurs in the computer's memory
// Converting C into another language called Assembly.
// Unfortunately, Assembly is also not a machine code (yet)

// Step 3 : Assembling
// Converts Assembly code into Binary (0's and 1's)
// The reason that Clang names its files a.out (by default) a.k.a assembler output, is a side effect of that being one of the steps in this process.


// Step 4 : Linking
// So, technically there are 3 different files involved in compiling (for example, any of the codes above)
// for example for this file,
// Files :
//          (i) pcal.c (this file)
//          (ii) stdio.h (somewhere in the server's hard drive is stdio.c that implements 'printf')
//          (iii) cs50.h (technically, somewhere else in the computer's hard drive is a stdio.c file, WHICH actually contains the staff's implementation of 'get_string' get_int' functions)
// So this process (Linking) combines intelligently into a FINAL file named 'pcal' (in this case)
