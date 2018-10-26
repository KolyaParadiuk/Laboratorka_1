#pragma once

#include<iostream>

using namespace std;
class Matrix
{

private:
	double **M ;
	int M_size;
	int N_size;

public: 
	Matrix();
	Matrix(int,int);
	Matrix(int,int ,double);
	Matrix(Matrix&);
	Matrix(Matrix&,int);
	Matrix& operator =( const Matrix& M1);

	bool operator == ( Matrix &M1);
	Matrix operator + ( Matrix &that);
	Matrix operator - ( Matrix &that);
	Matrix operator * ( Matrix &that);
	Matrix operator * ( double &that);
	double* operator [](int);
	friend Matrix operator ~(Matrix that);
	friend ostream & operator<<(ostream & os, const Matrix & that);
	friend istream & operator>>(istream & os, const Matrix & that);
	int get_size();

	double norma();
	double skal_dob(Matrix&);

	Matrix method_gaussa(Matrix );
	Matrix method_kachmaga(Matrix);

	Matrix chek_answer(Matrix,Matrix);

};

