#ifndef SLIST_H
#define SLIST_H

//#include <iostream>

typedef void* ent;

class slink {
	friend class slist;
	friend class slist_iterator;

	slink *next;
	ent e;
	slink(ent a, slink *p) {
		e = a;
		next = p;
	}
};

class slist {
	friend class slist_iterator;
	slink *last;
public:
	int insert(ent a);
	int append(ent a);
	ent get();
	void clear();
	slist() {
		last = 0;
	}
	slist(ent a) {
		last = new slink(a, 0);
		last->next = last;
	}
	~slist() {
		clear();
	}
};

class slist_iterator {
	slink *ce;
	slist *cs;

public:
	slist_iterator(slist &s) {
		cs = &s;
		ce = cs->last;
	}

	ent operator()() {
		ent ret = ce ? (ce = ce->next)->e : 0;
		if (ce == cs->last)
			ce = 0;
		return ret;
	}
};

typedef void (*PFC)(char*);
extern PFC slist_handler;
extern PFC set_slist_handler(PFC);
#endif
