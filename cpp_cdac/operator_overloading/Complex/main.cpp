#include "Complex.cpp"

int main(){
    {
        Complex n1(10,20);
        n1.Display();
        Complex n2(5,2);
        n2.Display();
        Complex n3;
        cout<<"Addition is: ";
        n3 = n1 + n2;
        n3.Display();
    }
    {
        Complex n1(10,20);
        n1.Display();
        Complex n2(5,2);
        n2.Display();
        Complex n3;
        cout<<"Substraction is: ";
        n3 = n1 - n2;
        n3.Display();
    }
    {
        Complex n1(10,20);
        n1.Display();
        Complex n2(5,2);
        n2.Display();
        Complex n3;
        cout<<"Multiplication is:";
        n3 = n1 * n2;
        n3.Display();
    }

    {
        Complex n1(10,20);
        n1.Display();
        cout<<"After pre-increamentation: ";
        ++n1;
        n1.Display();
        Complex n2(5,2);
        n2.Display();
        cout<<"After post-increamentation: ";
        n2++;
        n2.Display();
    }
    return 0;
}