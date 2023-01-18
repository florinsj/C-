// JavaTPoint

// inheritance = one obj aquires all the properties and behavieurs of its parent obj automaticaly
// in C++  class which inherits the member of another class= derived class
// the class whose member are inherited= base class
// the derived class= specialized class for the base class

// inheritence = IS A relationship between derived class and base class

// advantages = code reusability

// types of inheritance
// single inheritance
// multiple inheritance
// multilevel iheritance
// hybrid inheritance

// syntax:

/*

class derivedClassName : visibilityAccessModifier baseClassName
 {

// body

}

 visibilityAccessModifier can be public or private and specifies whether the features of the
 base class are public or private


1. if the base class is inherited PRIVATE, all the public members of the base class becomes
privae members of the derived class, so all the public members of base class are not accesible
to objects of deriverd class . They are only accesible by the member function of derived class

2. if the base class is inherited PUBLIC, all the public members of base class becomes public
members of derived class and can be accesed by objects of derived class as well as member functions
of derived class and all the members of the base class keep their accessible level in derived class
same with base class.the private/protected members of base class keep their accesibilty level same
in derived class

3.if the base class is inherited PROTECTED, all public members from base class will be inherited
as protected, and private members of base class will be inherited as private in derived class

4.if no acces modifier is specifid for inheritance , the default will be PRIVATE for classes
and PUBLIC for struct.


usualy in C++ for class inheritance we use PUBLIC inheritance

*/
// in C++ default mode of visibility is private
// in C++ private members= never inherited

/*
In principly , a public derived class inherits access to all members of base class EXCEPTS:

- constructor and destructor of base class (they are called automaticaly by derived class constr)
-  it is possible to call different constructor from base class
    Ex: derivedConstructName(params):baseConstructName(params){}
- assignnment operator member( operator =)
- friends from base class
- private members from base class

*/