#pragma once
#include <iostream>
#include <cmath>
class Complex
{
private:
	float realpart;
	float imagepart;
public:
	float getreal();
	float getimage();
	Complex();
	Complex(float real, float image);
	//��Ԫ�������õ����˽�г�Ա
	friend Complex& operator+(Complex C, Complex c);
	friend Complex& operator-(Complex C, Complex c);
	friend Complex& operator*(Complex C, Complex c);
	friend Complex& operator/(Complex C, Complex c);
	Complex& operator=(Complex c);
	void show();
};
