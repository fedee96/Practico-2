#pragma once
 
class Operaciones_matematicas
{
public:
	Operaciones_matematicas();
	~Operaciones_matematicas();

    #define CUADR(a) (a*a)
	float cuadrado(float a);

    #define SUM(a,b) (a+b)
	float sum(float a, float b);

	double aCirc(double r);
	double PI = (3,14159);
    #define CIRC(r) (2*PI*r)

    #define MAX(a, b) ((a)>(b)?(a):(b))
	float max(float a, float b);
};
	