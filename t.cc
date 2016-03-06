class foo
{
    public:
        foo(){ i_ = 1;}
        foo(int i){ i_ = i; d_ = 1.0;}
        foo(double d){ i_ = 1; d_ = d; }
        foo(int i, double d) { i_ = i; d_ = d; }
    private:
        int i_;
        double d_;
};
 
int main()
{
    foo f1;
    foo f2(1);
    foo f3(1.0);
    foo f4(1, 1.0);
    return 0;
}