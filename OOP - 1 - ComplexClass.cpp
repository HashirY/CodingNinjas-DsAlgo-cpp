class ComplexNumbers
{

private:
    int real;
    int imaginary;

public:
    ComplexNumbers(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void print()
    {

        cout << this->real << " + "
             << "i" << this->imaginary << endl;
    }

    void plus(ComplexNumbers const &c2)
    {

        int x = this->real + c2.real;
        int y = this->imaginary + c2.imaginary;

        this->real = x;
        this->imaginary = y;
    }

    void multiply(ComplexNumbers const &c2)
    {

        int a = (this->real * c2.real) - (this->imaginary * c2.imaginary);
        int b = (this->real * c2.imaginary) + (this->imaginary * c2.real);

        this->real = a;
        this->imaginary = b;
    }
};
