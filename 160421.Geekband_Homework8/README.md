## 1. 题目
假设有个计算类Calculator，它要处理int, long, float, 
double等数值类型。用模板实现GetLimit()方法，获得每种类型的数值的上限LIMIT，比如int的上限是100，long的上限是
1000，float的上限是999.99，double的上限是888.8888888等等。
## 2. 思考
- Original Version: Using Class Template directly
- V1 Version: Using Struct with Traits
- Output
	- using `std::setprecision` to print out `float` and `double` value correctly
	- TODO: in traits struct, failed to use member function or variables.

## 3. 编译

```
g++ homework8.cpp -o homework8 -std=c++11
g++ homework8_v1.cpp -o homework8_v1 -std=c++11
```

## 4. 结果分析

