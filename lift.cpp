#include<iostream>
using namespace std;
template < class T>
int sum( const T& t1, const T& t2)
{
	int a = t1.get();
	int b = a * t2.get();
	return a * b;
}


template <class Type>
class Point
{
public:
	static enum Status { unallocated, normalized,forss};

	Point( Type x = 0.0, Type y = 0.0, Type z = 0.0);
	~Point();

	void* operator new(size_t);
	void operator delete(void*, size_t);
private:
	static Point< Type> * freelist;
	static int chunkSize;
	Type _x, _y, _z;
};
class A{};
class B{};

class D : public B
{
	
};

int main()
{

	B *pb = new B;
	D *pd = new D;

	cout << typeid(pb).name() << endl;
	cout << typeid(pd).name() << endl;



	A *f = new A;
	type_info inf ;
	f = typeid(f);
	cout << inf.name() << endl;

	cout << typeid(f).name() << endl;
	
	return 0;
}

/*
 *
 * class Datas
 * {
 * public:
 * Datas(int five):number(five){}
 *
 * int get() const
 * {
 * return number;
 * }
 * private:
 * int number;
 * };
 *
 *
 * Datas d1(3),d2(4);
 *
 * cout << sum( d1, d2) << endl;
 *
 *
 * */
