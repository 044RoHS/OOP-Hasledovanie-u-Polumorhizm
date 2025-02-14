#include <iostream>
#include<string>


using namespace std;



 class Figure 
 {
protected:
int CountSide ;
std::string NameFigure;

public:
	
 void get_Figure ()
 {
	CountSide = 0;
	NameFigure  = "Фигура"; 

	cout<< NameFigure << ": " << CountSide <<endl;
 }
};
class Treygolnik: public Figure
{

public:
Treygolnik()
{
	NameFigure = "Треугольник";
	CountSide = 3;

}
void get_Treygolnik()
{
	cout << NameFigure <<": "<< CountSide <<endl;	
}
};
class Chetiryohygolink: public Figure
{

public:
Chetiryohygolink()
{
	NameFigure ="Четырёхугольник";
	CountSide= 4;
}
void get_Chetiryohygolink()
{
	cout << NameFigure <<": "<< CountSide << endl; 
}
};
int main ()
{
cout << "Количество сторон: "<< endl;
Figure figure;;
figure.get_Figure();
Treygolnik Treygolnik;
Treygolnik.get_Treygolnik();
Chetiryohygolink Chetiryohygolink ;
Chetiryohygolink.get_Chetiryohygolink();


}