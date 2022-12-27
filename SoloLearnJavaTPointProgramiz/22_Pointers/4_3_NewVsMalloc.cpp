// JavaTPoint

/*
 1.new = operator for allocating memory(heap) at runtime in C++ (not compatible in C)
 1.malloc() = function in stdlib, for allocating memory(heap) at runtime, in C(compatible in C++)
 1.malloc() allocate memory at runtime and return a void pointer, wich means that can be assigned to any
  pointer type. Void pointer can be further typecast to get the pointer that points to the memory
  of specified type

 2. new = constructs an object , calls the constructor to initialize it
 2. delete = invoke the destructor to destroy the object created with new

 2. malloc() construct an object in memory. doesn't have an constructor.
 2. free() ==  free(deallocate) the allocated memory with malloc()

 3. new and delete = operators
 3. malloc() and free() are function defined in stdlib

 4. new and delete can be overloaded
 4. malloc() cannot be overloaded

 5. if not suffient memory in heap, new will throw an exception
 5. if not suffient memory in heap, malloc() will return NULL pointer

 6. with new op no need to specoify the number of objects to be allocated
 6. with malloc() we need to specify the number of bytes to be allocated

 7. in the case of new operator we have to use delete operator to deallocate the memory
 7. in the case of malloc() we have to use free() func to deallocate the memory

 8. type varName=new type(initializationList)
 8. int *a=new int;
 8. int *b = new int(10);

 8. type varName=(type*)malloc(sizeof(type));
 8. int *a=(int*)malloc(sizeof(int));

 9. New - Once allocated memory with new operator, it cannot be resized
 9. Malloc- if allocated memory not sufficient we can use realloc() == resize the allocated memory

 10. new is faster(execution time) than malloc()
 10. malloc() lower(execution time) than new

 11. new return the address of the newly created object.
 11. malloc() return a void pointer wich can be further typecast in a specified type
*/
