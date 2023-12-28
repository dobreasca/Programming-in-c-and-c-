#ifndef __VECTOR_H
#define __VECTOR_H

class Vector
{
    private:
        int size;
        double *arr;
    public:
        Vector();
        Vector(int newsize, double *newarr);
        Vector(const Vector& v);
//the three usual constructors
        ~Vector();
//destructor
        void setSize(int newsize);
        void setArr(double *newarr);
//setters for size and arr
        double* getArr() const;
        int getSize() const;
//getters for size and arr
        void printc();
//method for printing the elements of the vector
        double norm();
//method for the norm
        Vector add(const Vector& v) const;
//method for adding two vectors
        Vector diff(const Vector& v) const;
//method for subtracting two vectors
        double scalar_prod(const Vector& v) const;
//method for the scalar product
};

#endif