#pragma once
#include<string.h>
#include<iostream>
using namespace std;
using namespace System;
typedef unsigned int uint;
template <typename T, T NADA = 0>

class cancion
{
public:
	cancion(string nombre, string genero, string artista, string album, float duracion){
		this->nombre = nombre;
		this->genero = genero;
		this->artista = artista;
		this->album = album;
		this->duracion = duracion;
	}
	~cancion();

	string getNombre() {//getters
		return nombre;
	}
	void setNombre(string nombre) {
		this->nombre = nombre;
	}

	string getGenero() {
		return genero;
	}
	void setGenero(string genero) {
		this->genero = genero;
	}

	string getArtista() {
		return artista;
	}
	void setArtista(string artista) {
		this->artista = artista;
	}

	string getAlbum() {
		return album;
	}
	void setAlbum(string album) {
		this->album = album;
	}

	float getDuracion() {
		return duracion;
	}
	void setDuracion(float duracion) {
		this->duracion = duracion;
	}


private:
	string nombre;
	string genero;
	string artista;
	string album;
	float duracion;


};

class Artista
{
public:
	Artista(string nombre, string nacionalidad, int edad, int fechadenacimiento, int dni) {
		this->nombre = nombre;
		this->nacionalidad = nacionalidad;
		this->edad = edad;
		this->fechadenacimiento = fechadenacimiento;
		this->dni = dni;
	}
	~Artista();

private:
	string nombre;
	string nacionalidad;
	int edad;
	int fechadenacimiento;
	int dni;
};

class Usuario
{
public:
	Usuario(string nombre, string apellido, string nacionalidad, int edad, int fechadenacimiento, int dni) {
		this->nombre = nombre;
		this->apellido = apellido;
		this->nacionalidad = nacionalidad;
		this->edad = edad;
		this->fechadenacimiento = fechadenacimiento;
		this->dni = dni;
	}
	~Usuario();

private:
	string nombre;
	string apellido;
	string nacionalidad;
	int edad;
	int fechadenacimiento;
	int dni;
};

class Genero
{
public:
	Genero(string nombre, string salsa, int disco,string regeton,string romantico) {
		this->nombre = nombre;;
		this->salsa=salsa;
		this->disco = disco;
		this->regeton = regeton;
		this->romantico = romantico;
	}
	~Genero();

private:
	string nombre;
	string salsa;
	int disco;
	string regeton;
	string romantico;
};

class Listadeproduccion

{
public:
	Listadeproduccion(string titulo, string album, int fecha, float duracion) {
		this->titulo = titulo;
		this->album = album;
		this->fecha = fecha;
	}
	~Listadeproduccion();

private:
	string titulo;
	string album;
	int fecha;
	float duracion;
};