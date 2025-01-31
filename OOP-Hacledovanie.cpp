#include <iostream>


using namespace std;



 class Figure 
 {
protected:
int CountSide = 0;
public:
	
Figure()
{
	cout << "Фигура: " << CountSide << endl; 
}
};
class Treygolnik: public Figure
{

public:
Treygolnik()
{
	CountSide = 3;
cout << "Треугольник: "<< CountSide<<endl;	
}
};
class Chetiryohygolink: public Treygolnik
{

public:
Chetiryohygolink()
{
	CountSide = 4;
	cout << "Четырёхугольник: "<< CountSide<< endl; 
}
};
int main ()
{
cout << "Количество сторон: "<< endl;
Chetiryohygolink fig ;

}