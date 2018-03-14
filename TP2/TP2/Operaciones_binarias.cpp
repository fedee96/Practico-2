#include "stdafx.h"
#include "Operaciones_binarias.h"


Operaciones_binarias::Operaciones_binarias()
{
}


Operaciones_binarias::~Operaciones_binarias()
{
}

int Operaciones_binarias::andBi(int x, int y)
{
	return AND(x, y);
}

int Operaciones_binarias::orBi(int x, int y)
{
	return OR(x, y);
}

int Operaciones_binarias::der(int z)
{
	return DER(z);
}

int Operaciones_binarias::izq(int z)
{
	return IZQ(z);
}
