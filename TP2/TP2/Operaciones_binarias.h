#pragma once
#define AND(x,y) (x & y)
#define OR(x,y) (x | y) 
#define DER(z) (z>>2)
#define IZQ(z) (z<<2)
class Operaciones_binarias
{
public:
	Operaciones_binarias();
	~Operaciones_binarias();

	int andBi(int x, int y);

	int orBi(int x, int y);

	int der(int z);

	int izq(int z);

};