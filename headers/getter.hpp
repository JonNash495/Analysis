#ifndef _GETTER_
#define _GETTER_

#include <QtWidgets> 
#include <QString>

template<typename T> class API {
	virtual T* getData(const char*) = 0;
};

#endif
