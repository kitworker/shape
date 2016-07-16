#ifndef GSLIST_H
#define GSLIST_H
#include "slist.h"
#include "generic.h"

#define gslist(type) name2(type,gslist)

#define gslist_iterator(type)    name2(type,gslist_iterator)

//#define gslistdeclare(type)			   \
//struct gslist(type): slist {           \
//	int insert(type a) {               \
//		return slist::insert(ent(a));  \
//	}                                  \
//	int append(type a) {               \
//		return slist::append(ent(a));  \
//	}                                  \
//	type get() 		   {               \
//		return type(slist::get());     \
//	}                                  \
//	gslist(type) ()    {               \
//	                                   \
//	}                                  \
//	gslist(type)(type a) : (ent(a)) {} \
//	~gslist(type)() {                  \
//		clear();                       \
//	}                                  \
//};						               \
//                                       \
//                                       \
//                                       \
//struct gslist_iterator(type) : slist_iterator {	       \
//	gslist_iterator(type)(gslist(type)& s)	           \
//	: ((slist&)s) {}			                       \
//	  type operator()()				                   \
//	  { return type(slist_iterator::operator()()); }   \
//};
#endif




















