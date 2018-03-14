#pragma once
#include <xstring> 
#define SAME(string1, string2) (((string1) == (string2))? true:false)
class Operaciones_String
{
public:
	Operaciones_String();
	~Operaciones_String();

	bool same(std::string string1, std::string string2);
};

