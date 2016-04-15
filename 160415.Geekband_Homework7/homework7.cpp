#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <set>
#include <string>

using namespace std;
struct Programmer
{
    Programmer(const int id, const std::wstring name)
        : Id(id), Name(name)
    {
    }
    void Print() const
    {
        std::wcout << L"[" << Id << L"] : " << Name << std::endl;
    }

    int Id;
    std::wstring Name;
};
struct ProgrammerIdGreater : public std::binary_function<Programmer, Programmer, bool>
{ 
    bool operator() (const Programmer& p1, const Programmer& p2) const
    {
        return (p1.Id > p2.Id) ? true: false;
    }
};

struct ProgrammerNameComparer : public std::binary_function<Programmer, Programmer, bool>
{ 
    bool operator() (const Programmer& p1, const Programmer& p2) const
    {
        return (p1.Name < p2.Name) ? true: false;
    }
};

struct findById
{
    findById(const int id) : ID(id){}
    bool operator() (const Programmer& p)
    {
        return p.Id == ID;
    }
private:
    int ID;
};

int main(int argc, char** argv) 
{
    const std::size_t nSize = 6;
    const Programmer programmerArray[nSize] = {
        Programmer(1, L"Scott Meyers"),
        Programmer(2, L"MartinFowler"),
        Programmer(3, L"Bill Gates"),
        Programmer(4, L"P.J.Plaught"),
        Programmer(5, L"Stanley B. Lippman"),
        Programmer(6, L"Andrei Alexandrescu")        
    };
    

    cout << "--------- ID Compare Print  --------" << endl;
    std::set<Programmer, ProgrammerIdGreater> set1(programmerArray, programmerArray + nSize);
    for_each(set1.begin(), set1.end(), std::mem_fun_ref(&Programmer::Print));

    cout << "-------- Change Bill Gates to David Vandevoorde -------------" << endl;    
    std::set<Programmer>::iterator it = find_if(set1.begin(), set1.end(), findById(3));
    set1.erase(it);
    set1.insert(Programmer(3, L"David Vandervoorde"));
    for_each(set1.begin(), set1.end(), std::mem_fun_ref(&Programmer::Print));

    cout << "-------- Name Compare Print ---------" << endl;
    std::set<Programmer, ProgrammerNameComparer> set2(programmerArray, programmerArray + nSize);
    for_each(set2.begin(), set2.end(), std::mem_fun_ref(&Programmer::Print));

    return 0;
}