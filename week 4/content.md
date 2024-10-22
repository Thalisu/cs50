# resume

### Memory adresses

`In C, an address refers to the memory location where a variable is stored.`

    & = "Address-of" operator. returns the memory address of a var
    * = Dereference operator. access the value at the memory adress a pointer holds

    Example:
        // declare a new variable and set a pointer to its address
        int n = 50, *p = &n;
        // print the value stored at the pointer
        printf("%i\n", *p);

### Memory allocation

    Malloc: Allocates dynamic memory.
    Free: Deallocates memory previously allocated.

    heap: Region of memory for dynamic allocation.
    stack: Region for static allocation, Function calls, local var etc.

    heap overflow and stack overflow happens when something overflowing and touching memory that it shouldn't touch
    
### File management

    files can be managed with file commands ex: fopen, fprintf etc

