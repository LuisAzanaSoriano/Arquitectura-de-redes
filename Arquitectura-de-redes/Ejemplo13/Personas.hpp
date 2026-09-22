#ifndef PERSONAS_HPP
#define PERSONAS_HPP

class Personas
{
public:
	Personas();
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	char getDNI();
	void setDNI(char edad);
	~Personas();
private:
	bool genero; // t=mujer f=hombre
	int edad;
	char DNI[10];
	
};



#endif // PERSONAS_HPP
