/*
 * List.h
 *
 *  Created on: jun 06, 2016
 *      Author: rayderto perera y francis rosario
 */
#ifndef LIST_H_
#define LIST_H_
#include "Element.h"
class List
{
	public:
		List();
		void add(Element* element);
		void remove(int index);
	private:
		Element* _first;
		Element* _last;
};

#endif /* LIST_H_ */
