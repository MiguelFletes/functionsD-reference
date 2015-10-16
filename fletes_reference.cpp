//Miguel Fletes
//10/15/15
//functionsD

#include<iostream>
#include<cassert>

using namespace std;

void sort(int& numA, int& numB, int& numC);
void numDigits(int  valA, int& n);
void computeSphere(double& a, double& v, double r);
void swap(int& A, int& B);

int main()
{
    //problem 1
    int a = 56;
    int b = 94;
    int c = 20;
    int d = 45;
    int e = 74;
    int f = 4;
    sort(a, b, c);
    sort(d, e, f);
    
    //problem 2
    int g = 5607;
    int h = -50;
    int i = 0;
    numDigits(g, i);
    numDigits(h, i);
    
    //problem 3
    double j = 5;
    double k = 8;
    double l = 4;
    double m = 9;
    double n = 7;
    computeSphere(j, k, l);
    computeSphere(m, n, l);
    
    //problem 4
    int o = 9;
    int p = 43;
    int q = 18;
    int r = 11;
    swap(o, q);
    swap(p, r);
    
    
    return 0;
}

void sort(int& numA, int& numB, int& numC)
{//precondition: three ints that are between zero and 100 are passed into the function 
 //postcondition: the three values are sorted from least value to the greatest
    assert((numA > 0) && (numA < 100));//asserts to check precondition is true
    assert((numB > 0) && (numB < 100));
    assert((numC > 0) && (numC < 100));
    
    int greatest, middle, least;
    //these are to categorize the numbers from least to greatest
    if((numA > numB) && (numA > numC))
    {
        greatest = numA;
    }
    else if(((numA > numB) && (numA < numC)) || ((numA < numB) && (numA > numC)))
    {
        middle = numA;
    }
    else if((numA < numB) && (numA < numC))
    {
        least = numA;
    }
    
    if((numB > numA) && (numB > numC))
    {
        greatest = numB;
    }
    else if(((numB > numA) && (numB < numC)) || ((numB < numA) && (numB > numC)))
    {
        middle = numB;
    }
    else if((numB < numA) && (numB < numC))
    {
        least = numB;
    }
    
    if((numC > numA) && (numC > numB))
    {
        greatest = numC;
    }
    else if(((numC > numA) && (numC < numB)) || ((numC < numA) && (numC > numB)))
    {
        middle = numC;
    }
    else if((numC < numA) && (numC < numB))
    {
        least = numC;
    } 
    cout << "least: " << least << endl;
    cout << "middle: " << middle << endl;
    cout << "greatest: " << greatest << endl; 
}

//*****************************************************************************************

void numDigits(int  valA, int& n)
{   //precondition: one int that is between -10000 and 10000 is passed into the function
    //postcondition: the function outputs the number of digits in the number
    assert((valA >= -10000) && (valA <= 10000));//assert to check precondition is true
    int oneD = 1;
    int twoD = 2;
    int threeD = 3;
    int fourD = 4;
    int fiveD = 5;
    //these if statements check what number valA is
    if((valA == 10000) || (valA == -10000))
    {//if valA fits any of these categories then n will be the assigned variable
        n = fiveD;
    }
    if(((valA >= 1000) && (valA <= 9999))|| ((valA <= -1000) && (valA >= 9999)))
    {
        n = fourD;
    }
    if(((valA >= 100) && (valA <= 999)) || ((valA <= -100) && (valA >= -999)))
    {
        n = threeD;
    }
    if(((valA >= 10) && (valA <= 99)) || ((valA <= -10) && (valA >= -99)))
    {
        n = twoD;
    }
    if(((valA >= 1) && (valA <= 9)) || ((valA <= -1) && (valA >= -9)))
    {
        n = twoD;
    }
    
    cout << valA << " has " << n << " digits." << endl;
}

//********************************************************************************************

void computeSphere(double& a, double& v, double r)
{
    //precondition: the function has three inputs that are between 0 and 10000 and are served as the area, volume, and radius.
    //postcondition: the function outputs the sphere's area and volume
    assert((a >= 0) && (a <= 10000));//asserts to check precondition is true
    assert((v >= 0) && (v <= 10000));
    const double PI = 3.14; 
    int ans, ans2;
    ans = 4 * PI * (r * r);//formula for area of a sphere
    cout << "Area of a sphere is: " << ans << endl;
    ans2 = (4/3) * PI * (r * r * r);//formula for volume of a sphere
    cout << "Volume of that sphere is: " << ans2 << endl;
}

//*************************************************************************************************

void swap(int& A, int& B)
{
    //precondition: the function has two inputs that are positive integer values
    //postcondition: the function outputs the two variables swapped
    assert(A > 0);//asserts to check precondition is true
    assert(B > 0);
    cout << "Integers " << A << " and " << B << " swapped are: ";
    //these wsap the numbers
    int temp;
    temp = A;
    A = B;
    B = temp;
    cout << A << ", " << B << endl;
    
}
