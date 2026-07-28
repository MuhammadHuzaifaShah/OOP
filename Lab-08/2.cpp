#include <iostream>
using namespace std;
class Complex{
    double real;
    double imaginary;
    public:
        Complex(){
            real=0;
            imaginary=0;
        } 
        Complex(double r){
            real=r;
            imaginary=0;
        }
        Complex (double r, double i){
            real=r;
            imaginary=i;
        }
        Complex (const Complex & c){
            real=c.real;
            imaginary=c.imaginary;
        }

        void setReal(double);
        void setImag(double);
        double getReal() const;
        double getImag() const;
        Complex add(Complex);
        Complex subtract (Complex);
        Complex multiply (Complex);
        Complex divide (Complex);
        Complex conjugate();
        void print ();
};

void Complex::setReal(double r){
    real=r;
}
void Complex::setImag(double i){
    imaginary=i;
}
double Complex::getReal()const
{
    return real;
}
double Complex::getImag()const
{
    return imaginary;
}

Complex Complex::add(Complex c){
    Complex temp;
    temp.real=real+c.real;
    temp.imaginary=imaginary+c.imaginary;
    return temp;
}
Complex Complex::subtract(Complex c){
    Complex temp;
    temp.real=real-c.real;
    temp.imaginary=imaginary-c.imaginary;
    return temp;
}
Complex Complex::multiply(Complex c){
    Complex temp;
    temp.real=(real*c.real)-(real*c.imaginary);
    temp.imaginary=(imaginary*c.imaginary)+(imaginary*c.real);
    return temp;
}
Complex Complex::divide(Complex c){
     Complex temp;

    int denominator = (c.real * c.real) + (c.imaginary * c.imaginary);

    temp.real = ((real * c.real) + (imaginary * c.imaginary)) / denominator;
    temp.imaginary = ((imaginary * c.real) - (real * c.imaginary)) / denominator;

    return temp;
}
void Complex::print (){
    cout << real ;
    if(imaginary>=0){
        cout << "+" << imaginary << "i\n";
    }
    else{
        cout << "-" << -imaginary << "i\n";
    }
}
int main()
{
    Complex c1(4,8);
    Complex c2(2,6);

    Complex c=c1.add(c2);

    c.print();
   return 0;
}