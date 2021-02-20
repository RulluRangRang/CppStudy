## C++ macro vs inline functions
- inline : parameter에 대한 type을 명시 가능
- inline : pass by value 가능(예: parameter로 c++를 명시할 때 c의 +1 값으로 연산 가능)
- macro : pass by value 불가(error)
- macro : 연산자가 포함된 parameter라도 연산하지 않고 그대로 넘김.

## Why Retrun a Reference?(C++ Primer Plus 6th Edition, P.399)
- 예를 들어 구조체를 반환한다고 가정할 때 단순 구조체를 반환하면 구조체 전체를 임시 장소로 복사를 한 후
그 값을 다시 특정 변수에 복사하게 된다.
- 만약 구조체의 참조값으로 반환하는 경우 임시 장소로 복사하는 과정이 없고 바로 특정 변수로 복사가
진행되므로 더 효율적이다.

## When to Use Reference Argumatents
- 호출한 함수 내에서 데이터 개체를 변경할 수 있도록 할 때
- 전체 데이터 오브젝트 대신 참조를 넘김으로 프로그램 속도 향상을 시킬 때

## endl vs \n 차이
- endl는 buffer를 flush하는 기능을 포함하고 있다.
- \n는 buffer를 flush하는 기능을 포함하고 있지 않다.
- buffer는 임시 메모리 공간 자주 flush할 경우 프로그램 속도가 낮아질 수 있으므로 반드시 필요할 때만 사용

## register variable은 &연산자 사용 불가
- 레지스터 변수는 CPU 레지스터만 사용하므로 메모리에는 생성되지 않는다.
- 따라서, &연산자를 통해 메모리 주소를 확인할 수 없다.

## register variable 특징
- 속도가 빠르다.
- 메모리가 아닌 CPU를 사용한다.
- register로 선언한다고 해서 항상 CPU에서 처리하는 것이 아니다.(register의 개수가 한정)

## auto, thread_local
- added by C++ 11

## Specifiers and Qualifiers
- auto
- register
- static
- extern
- thread_local
- mutable

## Constructors and Destructors in Review
[C++ 11 이전]
- Bozo(const char * fname, const char * lname)	// constructor prototype
- Bozo bosetta = bozo("Bozetta", "Biggens");	// primary form
- Bozo fufu("Fufu", "O`Dweeb");					// short form
- Bozo *pc = new Bozo("Popo", "Le Peu");		// dynamic object

[C++ 11 이후]
Bozo bozetta = {"Bozetta", "Biggens"};			// C++11
Bozo fufu{"Fufu", "O’Dweeb"}					// C++11;
Bozo *pc = new Bozo{"Popo", "Le Peu"};			// C++11

## Union(공용체, P.150)
- 참고 : https://stackoverflow.com/questions/346536/difference-between-a-structure-and-a-union
- 참고 : http://soen.kr/lecture/ccpp/cpp1/13-5-1.htm
union foo {
	int a;	// can`t use both a and b at once
	char b;
} foo;
- union 내에 선언된 변수 a, b는 동시에 사용할 수 없고 한번에 한개의 변수만 사용할 수 있다.
현재 GB급 메모리를 제공하는 시스템에서는 특별히 사용용도가 없지만, 
Embadded System같은 한정적인 메모리를 가진 시스템에서는 아주 유용하게 사용할 수 있다.
만약, 어떠한 값(ID value)를 동일한 메모리 위치에 저장해야할 필요가 있는 데, 해당 값이
1 가지 이상의 type(예: int, long, string 등)으로 처리해야할 필요성이 있을 때 사용해야 한다.
