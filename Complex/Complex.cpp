#include "Complex.h"

using namespace std;

float Complex::getreal()
{
	return realpart;
}
float Complex::getimage()
{
	return imagepart;
}
Complex::Complex()
{
	realpart = imagepart = 0.0;
}

Complex::Complex(float real, float image)
{
	this->realpart = real;
	this->imagepart = image;
}
Complex& operator+(Complex C, Complex c)
{
	C.realpart += c.realpart;
	C.imagepart += c.imagepart;
	return C;
}
Complex& operator-(Complex C, Complex c)
{
	C.realpart -= c.realpart;
	C.imagepart -= c.imagepart;
	return C;
}
Complex& operator*(Complex C, Complex c)
{
	float index = C.realpart;
	C.realpart = C.realpart * c.realpart - C.imagepart * c.imagepart;
	C.imagepart = index * c.imagepart + C.imagepart * c.realpart;
	return C;
}
Complex& operator/(Complex C, Complex c)
{
	if (c.realpart == 0 && c.imagepart == 0)
	{
		cout << "分母不能为零！" << endl;
		exit(0);
	}
	float index = C.realpart;
	C.realpart = (C.realpart * c.realpart + C.imagepart * c.imagepart) / (pow(c.realpart, 2) + pow(c.imagepart, 2));
	C.imagepart = (C.imagepart * c.realpart - index * c.imagepart) / (pow(c.realpart, 2) + pow(c.imagepart, 2));
	return C;
}

Complex& Complex::operator=(Complex c)
{
	realpart = c.realpart;
	imagepart = c.imagepart;
	return *this;
}

void Complex::show()
{
	if (this->getimage() > 0 && this->getreal() != 0)
	{
		cout << "c = " << this->getreal() << " + " << this->getimage() << "i" << endl;
	}
	else if (this->getimage() < 0 && this->getreal() != 0)
	{
		cout << "c = " << this->getreal() << " " << this->getimage() << "i" << endl;
	}
	else if (this->getimage() == 0 && this->getreal() != 0)
	{
		cout << "c = " << this->getreal() << endl;
	}
	else if (this->getimage() == 0 && this->getreal() == 0)
	{
		cout << "c = 0" << endl;
	}
	else
	{
		cout << "c = " << this->getimage() << "i" << endl;
	}
}
