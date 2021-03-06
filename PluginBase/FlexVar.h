#pragma once
#include <string>

struct FlexVar
{
	std::string szContent;
	double dfContent;

	FlexVar operator =(const char * szValue);
	FlexVar operator =(double dfValue);
	FlexVar operator =(float fValue);
	FlexVar operator =(long lValue);
	FlexVar operator =(int iValue);
	FlexVar operator =(short sValue);

	operator const char*();
	operator double();
	operator float();
	operator long();
	operator int();
	operator short();
	operator unsigned long() { return this->operator long(); }
	operator unsigned int() { return this->operator int(); }
	operator unsigned short() { return this->operator short(); }
};