## 1. 题目
为以下Programmer对象提供一个基于Id并且升序的仿函数ProgrammerIdGreater，使得Programmer对象可以在set中以Id 排序存放。
(1) 将Programmer(1, L"Scott Meyers")、Programmer(2, L"MartinFowler")、Programmer(3, L"Bill Gates")、Programmer(4, L"P.J.Plaught")、Programmer(5, L"Stanley B. Lippman")、Programmer(6, L"Andrei Alexandrescu")插入到一个set 中；
(2) 通过for_each 遍历set，并且使用Programmer 对象的Print 方法打印出对象，结果应该如下所示；
```
[6] : Andrei Alexandrescu
[5] : Stanley B. Lippman
[4] : P.J. Plaught
[3] : Bill Gates
[2] : Martin Fowler
[1] : Scott Meyers
```
(3) 在set 中查找Id 为3、名称为“Bill Gates”的对象；
(4) 如果(2)中找到目标对象，则将其名称改成“David Vandevoorde”，再通过for_each 重新打印set，查看是否真的修改成功了；
(5) 重新定义一个set(命名为set2)，将Programmer 在set2 中排序方式改为通过Name 来排序，为此还需重新定义一个仿函数用于比较Name，请写出该仿函数，名字可能类似ProgrammerNameComparer;
(6) 通过for_each 重打印set2，验证set2 中的元素是否是按照名字来排序的。
```
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
struct ProgrammerIdGreater { ... }
```
## 2. 思考




## 3. 编译

```
g++ homework7.cpp -o homework7 -std=c++11
```

## 4. 结果分析

