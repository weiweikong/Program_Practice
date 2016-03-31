
#include <iostream>
using namespace std;

static void print_object(const char *name, void *this_, size_t size) {
      void **ugly = reinterpret_cast<void**>(this_);
      size_t i;
      printf("created %s at address %p of size %zu\n", name, this_, size);
      for(i = 0 ; i < size / sizeof(void*) ; i++) {
        printf("  pointer[%zu] == %p\n", i, ugly[i]);
      }
      cout << "-------------------------------"<<endl;
}

class Parent {
public:
    long iparent;
    Parent ():iparent (1) {print_object(__FUNCTION__, this, sizeof(*this));
}
    virtual void f() { cout << " Parent::f()" << endl; }
    virtual void g() { cout << " Parent::g()" << endl; }
    virtual void h() { cout << " Parent::h()" << endl; }
 
};
 
class Child : public Parent {
public:
    long ichild;
    Child():ichild(2) {
        print_object(__FUNCTION__, this, sizeof(*this));

}
    virtual void f() { cout << "Child::f()" << endl; }
    virtual void g_child() { cout << "Child::g_child()" << endl; }
    virtual void h_child() { cout << "Child::h_child()" << endl; }
};
 
class GrandChild : public Child{
public:
    long igrandchild;
    GrandChild():igrandchild(3) {
        print_object(__FUNCTION__, this, sizeof(*this));
}
    virtual void f() { cout << "GrandChild::f()" << endl; }
    virtual void g_child() { cout << "GrandChild::g_child()" << endl; }
    virtual void h_grandchild() { cout << "GrandChild::h_grandchild()" << endl; }
};


class Test{
public:
    Test():intA{1}, lB{10} {
        print_object(__FUNCTION__, this, sizeof(*this));
    }
    int intA;
    int lB;
    virtual void f() { cout << "virtual Call From Test" << endl;}
};

class B : public Test{
public:
    B(): b1{2}, b2{20}, b3{200} {
        print_object(__FUNCTION__, this, sizeof(*this));   
    }
    int b1;
    int b2;
    int b3;
    virtual void f() { cout << "virtual Call from B" << endl;}
    void ff() { cout << "ff() Call from B" << endl;}
};

int main()
{
    typedef void(*Fun)(void);
    long** pVtab = nullptr;
    Fun pFun = nullptr;
 
    GrandChild gc; 
    pVtab = (long**)&gc;




    long *cAsLong = (long *)&gc;
    cout << "GrandChild vtable ptr: "<<&cAsLong[0]<<endl; 
    cout << "[0] GrandChild::_vptr->" << endl;
    for (int i=0; (Fun)pVtab[0][i] != nullptr; i++){
                pFun = (Fun)pVtab[0][i];
                cout << "    ["<<i<<"] ";
                pFun();
    }

    cout << "[0] addr = " << &pVtab[0] << "\t";
    cout << "ptr = " << pVtab[0] << endl;

    cout << "[1] addr = "<< &pVtab[1] << "\t";
    cout << "ptr = " << pVtab[1] << "\t";    
    cout << "Parent.iparent = " << *((long *) &pVtab[1] )<< endl;
    
   
    cout << "[2] addr = " << &pVtab[2] << "\t";
    cout << "ptr = " << pVtab[2] << "\t";    
    cout << "Child.ichild = " << *((long *) &pVtab[2]) << endl;
    
    
    cout << "[3] addr = " << &pVtab[3] << "\t";
    cout << "ptr = " << pVtab[3] << "\t";    
    cout << "GrandChild.igrandchild = " << *((long *) &pVtab[3]) << endl;


    //cout << "Parent.iparent: \t" << gc.iparent << endl;
    //cout << "Child.ichild: \t" << gc.ichild << endl;
    //cout << "GrandChild.igrandchild: " << gc.igrandchild << endl;

    
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
    


    return 0;
}