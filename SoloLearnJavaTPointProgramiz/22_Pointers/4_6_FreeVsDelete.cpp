// JavaTPoint
/*
    1. free()= function in stdlib.h, used in C/C++ to de-allocate the memory dynamically
             = used when the pointer either point to mem allocated with malloc() or Null pointer
    1. delete = operator in C++, used to de-allocate the memo dynamically, destroy mem and value
             = used for pointers allocated with "new" or Null pointers


    2. delete operator call the destructor of the class in C++
    2. free() doesn't call the destructor, hust frees the memory from heap

    3. ex. free(ptr);  // ptr=pointer to mem allocated with malloc(),realloc(),calloc()
                          ptr= pointer can be null or pointer alloc with malloc pointing to nothing
        if pointer = NULL , free(p) will give runtime error
    3. ex. delete p; // p=pointer to mem allocated with new operator
       ex. delete[] p; // delete pointer to array


    4. free() - no return value

    5. delete operator is faster than free() function
*/