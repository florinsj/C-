/*

* prepocesors - provide directives that tell to compiler to preprocess the source code
            before compiling

* all preprocesor directives start with hash symbol #
 ex. #include , #define, #ifndef , ..
 #include -  will include extra code in program before compiling ex. #include <iostream>

 * types of preprocesors directives
    1.Macros
    2.File Inclusion
    3.Conditional Compilation
    4.Others


    1.Macros
Macros= pieces of code with a name.
Whenever this name is encountered by compiler,replace the name with the sequence

    #define name sequence
    ex. #define LIMIT 4     // will replace LIMIT(everywhere in program) with 4
    ex. #define SQUARE(a) ((a)*(a)) // will replace SQUARE(everywhere in program) with (a*a)

    #undef macro_name -- undefine macro named macro_name
    ex: #define a 1
        #undef a
        #define a 3  // everywhere in source code , a will be replaced with 3

       ## operator with #define
        #define func(x,y) (x##y) // replace func(x,y) with x concatenate with y
        #define func(3,4) (3##4) // replace func(3,4) with 34



    2.File Inclusion
    #include <fileName>   // where filename is the name of file to be included in source code.

The preprocesor will include filename file in the sourcecode.
The included files can be  Header or Standard files.
  #include <iostream> ... iostream file contains I/O standard functions , etc


   for user defined files : #include "userFileName"

   3.Conditional compilation
   conditional compilation directive are a type of directive that help the compiler to compile a
   specific part of the program or to skip the compilation of some specific part of program based
   on some condition

#ifdef macro_name

statement1;
statement2;
statement3;

#endif

if the macro_name is defined, then the block statements will execute normal, else this statements
are skipped

    4. Other directives


 #undef name - undefine an existing macro
 ex: #undef LIMIT    - undefine macro named LIMIT, after this every #ifdef will evaluate to false

#pragma - turn on/off some features
#pragma startup -- sprecify the functions that are needed to run before program startup
#pragma exit -- specify the functions that are needed to run before the program exit








*/