#include <iostream>


using namespace std;



 class Figure 
 {
protected:
int CountSide = 0;
public:
	
 void get_Figure ()
 {
	cout<< "Фигура: " << CountSide <<endl;
 }
};
class Treygolnik: public Figure
{

public:
Treygolnik()
{
	CountSide = 3;

}
void get_Treygolnik()
{
	cout << "Треугольник: "<< CountSide<<endl;	
}
};
class Chetiryohygolink: public Figure
{

public:
Chetiryohygolink()
{
	CountSide = 4;
}
void get_Chetiryohygolink()
{
	cout << "Четырёхугольник: "<< CountSide<< endl; 
}
};
int main ()
{
cout << "Количество сторон: "<< endl;
Figure figure;;
figure.get_Figure();
Treygolnik treh;
treh.get_Treygolnik();
Chetiryohygolink fig ;
fig.get_Chetiryohygolink();


}