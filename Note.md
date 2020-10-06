## C++ macro vs inline functions
- inline : parameter에 대한 type을 명시 가능
- inline : pass by value 가능(예: parameter로 c++를 명시할 때 c의 +1 값으로 연산 가능)
- macro : pass by value 불가(error)
- macro : 연산자가 포함된 parameter라도 연산하지 않고 그대로 넘김.