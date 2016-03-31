#include <iostream>
using namespace std;

static void print_object(const char *name, void *this_, size_t size) {
  void **ugly = reinterpret_cast<void**>(this_);
  size_t i;
  printf("created %s at address %p of size %zu\n", name, this_, size);
  for(i = 0 ; i < size / sizeof(void*) ; i++) {
    printf("  pointer[%zu] == %p\n", i, ugly[i]);
  }
}

class A {
public:
  int id;

  A(): id(1) {
    printf("A: yay, my address is %p, my size is %zu, and my id is %d!\n",
           this, sizeof(*this), this->id);
    print_object(__FUNCTION__, this, sizeof(*this));
  }

  virtual void print() {
    printf("I am A(%d)\n", id);
  }
  virtual void print2(){
  	printf("I am print2() from A\n");
  }
};

class B {
public:
  int age;

  B(): age(2) {
    printf("B: yay, my address is %p, my size is %zu, and my age is %d!\n",
           this, sizeof(*this), this->age);
    print_object(__FUNCTION__, this, sizeof(*this));

  }

  virtual void print() {
    printf("I am B(%d)\n", age);
  }
};

class C: public A, public B {
public:
  int mode;

  C(): mode(4) {
    printf("C: yay, my address is %p, my size is %zu, my id, age and mode are %d, %d, %d!\n",
           this, sizeof(*this), this->id, this->age, this->mode);    
    print_object(__FUNCTION__, this, sizeof(*this));

  }

  virtual void print() {
    printf("I am C(%d, %d, %d)\n", id, age, mode);
  }
  virtual void print2(){
  	printf("I am print2() from C\n");
  }
};

int main(int argc, char* argv[])
{
    //A a;
    //B b;
    C c;

	typedef void(*Fun)(void);
    Fun pFun = nullptr;

    long *cAsLong = (long *)&c;
    cout << "C vtable ptr: "<<&cAsLong[0]<<endl;

    long **cVtable = (long **)&c;
    cout << "[0] C vtable: " << &cVtable[0][0] <<endl;
    cout << "[1] C vtable: " << &cVtable[0][1] <<endl;
    cout << "[2] C vtable: " << &cVtable[0][2] <<endl;
    cout << "[3] C vtable: " << &cVtable[0][3] <<endl;
    cout << "[4] C vtable: " << &cVtable[0][4] <<endl;



   /* for (int i = 0; (Fun)cVtable[0][i] != NULL; i++)
    {
    	pFun = (Fun)cVtable[0][i];
    	cout << "  [" << i << "] ";    	
    	pFun();
    }*/
    cout << "[0]" << endl;
    pFun = (Fun)cVtable[0][0];
    pFun();
    cout << "[1]" << endl;
    pFun = (Fun)cVtable[0][1];
    pFun();
    cout << "[2]" << endl;
    cout << *((int *) &cVtable[0][2]) << endl;
    //pFun();
    //cout << "[3]" << endl;
    //pFun = (Fun)cVtable[0][3];
    //pFun();
    cout << "[4]" << endl;
    pFun = (Fun)cVtable[0][4];
    pFun();

    
   

    return 0;
}