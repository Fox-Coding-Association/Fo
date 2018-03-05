
#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <string>

//every type in the language will be a class inheriting from this one. this ensures that every object can be saved
//on the stack (using pointers to the BaseObject).

class BaseObject{
	public:
		int refcount;
		BaseObject();
		virtual BaseObject * __add__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __sub__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __mul__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __div__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __pow__(BaseObject * A, BaseObject * B);
		virtual BaseObject * __mod__(BaseObject * A, BaseObject * B);


		virtual std::string __type__();
};



#endif

