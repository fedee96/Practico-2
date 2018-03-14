#pragma once

class Operaciones_preprocesador
{
public:
	Operaciones_preprocesador();
	~Operaciones_preprocesador();
    #define concat(a, b) (a##b)

    #define IMPR(cad) (cad)
	char impr(char cad);
};

