#include <iostream>
using namespace std;

static void print_object(const char* name, void* this_, size_t size) {
      void** ugly = reinterpret_cast<void**>(this_);
      size_t i;
      printf("created %s at address %p of size %zu\n", name, this_, size);
      for(i = 0 ; i < size / sizeof(void*) ; i++) {
        printf("  pointer[%zu] == %p\n", i, ugly[i]);
      }
      cout << "-------------------------------"<<endl;
}

class A {
public:
    long iA;
    long iAA;
    A ():iA (1), iAA(10) {print_object(__FUNCTION__, this, sizeof(*this));
}
    virtual void f() { cout << "A::f()" << endl; }
    virtual void g() { cout << "A::g()" << endl; }
    virtual void h() { cout << "A::h()" << endl; }
 
};
 
class B : public A {
public:
    long iB;
    B():iB(2) {
        print_object(__FUNCTION__, this, sizeof(*this));

}
    virtual void f() { cout << "B::f()" << endl; }
    virtual void g_B() { cout << "B::g_B()" << endl; }
    virtual void h_B() { cout << "B::h_B()" << endl; }
};
 
class C : public B{
public:
    long iC;
    C():iC(3) {
        print_object(__FUNCTION__, this, sizeof(*this));
}
    virtual void f() { cout << "C::f()" << endl; }
    virtual void g_B() { cout << "C::g_B()" << endl; }
    virtual void h_C() { cout << "C::h_C()" << endl; }
};


int main()
{
    typedef void(*Fun)(void);
    long** pVtab = nullptr;
    Fun pFun = nullptr;
 
    C c; 
    pVtab = (long**)&c;




    long *cAsLong = (long *)&c;        
    cout << "C::vptr memory address is " << &cAsLong[0] <<endl;
    cout << "[0] C::_vptr->" << endl;
    cout << "    No.\tMemory Address\t Value\t\tFunction" << endl;
    for (int i=0; (Fun)pVtab[0][i] != nullptr; i++){
                pFun = (Fun)pVtab[0][i];
                cout << "    ["<<i<<"]\t";
                cout << " " << &pVtab[0][i]<<"\t";;
                cout << " " << (void *)pVtab[0][i]<<"\t";;
                pFun();
    }
    cout << " ----------------------------------" << endl;
    cout << "[0] addr = " << &pVtab[0] << "\t";
    cout << "value = " << pVtab[0] << endl;

    cout << "[1] addr = "<< &pVtab[1] << "\t";
    cout << "value = " << pVtab[1] << "\t";    
    cout << "A.iA = " << *((long *) &pVtab[1] )<< endl;
    cout << c.iA << endl;
   
    cout << "[2] addr = " << &pVtab[2] << "\t";
    cout << "value = " << pVtab[2] << "\t";    
    cout << "A.iAA = " << *((long *) &pVtab[2]) << endl;
    
    
    cout << "[3] addr = " << &pVtab[3] << "\t";
    cout << "value = " << pVtab[3] << "\t";    
    cout << "B.iB = " << *((long *) &pVtab[3]) << endl;

    cout << "[4] addr = " << &pVtab[4] << "\t";
    cout << "value = " << pVtab[4] << "\t";    
    cout << "C.iC = " << *((long *) &pVtab[4]) << endl;


    //cout << "A.iA: \t" << gc.iA << endl;
    //cout << "B.iB: \t" << gc.iB << endl;
    //cout << "C.iC: " << gc.iC << endl;

    /*
    cout << "-------------------------" << endl;
    Test test;
    long *testAsLong = (long *)&test;
    long** pTest = (long**)&test;
    cout << "Test ptr 1 = " << &test << endl;
    cout << "Test ptr 2 = " << &testAsLong[0] << endl;
    cout << "sizeof(test)" << sizeof(test) << endl;


    cout << "[0] = " << &pTest[0] << "\t";
    cout << " " << pTest[0] << "\t";
    cout << " " << *((long *) &pTest[0])<< endl;
    pFun = (Fun)pTest[0][0];
    pFun();
    
    cout << "[1] = " << &pTest[1] << "\t";
    cout << " " << pTest[1] << "\t";
    cout << " " << *((long *) &pTest[1]) << endl;

    cout << "[2] = " << &pTest[2] << "\t";
    cout << " " << pTest[2] << "\t";
    cout << " " << *((long *) &pTest[2]) << endl;
    
    B b;
    long *bAsLong = (long *)&b;
    long** pb = (long**)&b;
    
    cout << "[0] = " << &pb[0] << "\t";
    cout << " " << pb[0] << "\t";
    cout << " " << *((long *) &pb[0])<< endl;
    pFun = (Fun)pb[0][0];
    pFun();
    

    cout << "[1] = " << &pb[1] << "\t";
    cout << " " << pb[1] << "\t";
    cout << " " << *((long *) &pb[1]) << endl;

    cout << "[2] = " << &pb[2] << "\t";
    cout << " " << pb[2] << "\t";
    cout << " " << *((long *) &pb[2]) << endl;

    cout << "[3] = " << &pb[3] << "\t";
    cout << " " << pb[3] << "\t";
    cout << " " << *((long *) &pb[3]) << endl;

    cout << "[4] = " << &pb[4] << "\t";
    cout << " " << pb[4] << "\t";
    cout << " " << *((long *) &pb[4]) << endl;

    cout << "[5] = " << &pb[5] << "\t";
    cout << " " << pb[5] << "\t";
    cout << " " << *((long *) &pb[5]) << endl;
    */


    return 0;
}