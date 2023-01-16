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


1. if the base class is inherited private, all the public members of the base class becomes
privae members of the derived class, so all the public members of base class are not accesible
to objects of deriverd class . They are only accesible by the member function of derived class

2. if the base class is inherited public, all the public members of base class becomes public
members of derived class and can be accesed by objects of derived class as well as member functions
of derived class/


*/
// in C++ default mode o f visibility is private
// in C++ private members= never inherited
