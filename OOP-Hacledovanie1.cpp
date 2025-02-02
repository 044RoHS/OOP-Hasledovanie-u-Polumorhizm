#include <iostream>

using namespace std;

class Phigure{
    protected:
    int ASide;
    int BSide;
    int CSide;
    int DSide;
    double AAngle;
    double BAngle;
    double CAngle;
    double DAngle;
    public:
    Phigure(int Aside1,int Bside1 , int CSide1 , double AAngle1 ,  double BAngle1 , double CAngle1)
    {
    this->ASide = Aside1;
    this->BSide = Bside1;
    this->CSide = CSide1;
    this->AAngle = AAngle1;
    this->BAngle = BAngle1;
    this->CAngle = CAngle1;
    }
    Phigure(int Aside1,int Bside1 , int CSide1, int DSide , double AAngle1 ,  double BAngle1 , double CAngle1,double DAngle)
    {
    this->ASide = Aside1;
    this->BSide = Bside1;
    this->CSide = CSide1;
    this->DSide = DSide;
    this->AAngle = AAngle1;
    this->BAngle = BAngle1;
    this->CAngle = CAngle1;
    this->DAngle= DAngle;
    }

};
class Treygolni:public Phigure{

    public:
    using Phigure::Phigure;
    void get_Treygolnik()
    {
        cout << "Треугольник:"<<endl;
        cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< endl;
        cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<< endl;
        cout<<endl;
    }
};
class PryamoygolniTreygolnik: public Treygolni{
    public :
using Treygolni::Treygolni;
void get_PryamoygolniTreygolni()
{
    cout << "Прямоугольный треугольник:"<<endl;
    cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< endl;
    cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<<endl; 
    cout<<endl;
}

};
class RavnobedreniTreuqolnik: public Treygolni{
    public :
    using Treygolni::Treygolni;
    void get_RavnobedreniTreuqolnik()
    {
    cout << "Равнобедренный треугольник:"<<endl;
    cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< endl;
    cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<<endl; 
    cout<<endl;

    }
};
class RavnostoroniiTreuqolnik: public Treygolni{
    public :
    using Treygolni::Treygolni;
    void get_RavnostoroniTreuqolnik()
    {
    cout << "Равносторонний треугольник:"<<endl;
    cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< endl;
    cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<<endl; 
    cout<<endl;

    }
};

class Chetriohugolnik:public Phigure{
    public:
    using Phigure::Phigure;
    void get_Chetriohugolnik()
    {
        cout << "Четырёхугольник:"<<endl;
        cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< " d="<<DSide << endl;
        cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<< " D="<< DAngle<<endl; 
        cout<<endl;
    }
    
};
class Pryamougolnik: public Chetriohugolnik{
    public :
    using Chetriohugolnik::Chetriohugolnik;
    void get_Pryamougolnik()
    {
    cout << "Прямоугольник:"<<endl;
        cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< " d="<<DSide << endl;
        cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<< " D="<< DAngle<<endl; 
        cout<<endl;
    }
};
class Kvadrat: public Chetriohugolnik{
    public :
    using Chetriohugolnik::Chetriohugolnik;
    void get_Kvadrat()
    {
    cout << "Квадрат:"<<endl;
        cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< " d="<<DSide << endl;
        cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<< " D="<< DAngle<<endl; 
        cout<<endl;
    }
};
class Pomb: public Chetriohugolnik{
    public :
    using Chetriohugolnik::Chetriohugolnik;
    void get_Pomb()
    {
    cout << "Ромб:"<<endl;
        cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< " d="<<DSide << endl;
        cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<< " D="<< DAngle<<endl; 
        cout<<endl;
    }
};
class Parallelogram: public Chetriohugolnik{
    public :
    using Chetriohugolnik::Chetriohugolnik;
    void get_Parallelogram()
    {
    cout << "Параллелограмм:"<<endl;
        cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< " d="<<DSide << endl;
        cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<< " D="<< DAngle<<endl; 
        cout<<endl;
    }
};



int main () 
{
Treygolni Treygolni(10,20,30,50,60,70);
Treygolni.get_Treygolnik();
Chetriohugolnik Chetriohugolnik(10,20,30,40,50,60,70,80);
Chetriohugolnik.get_Chetriohugolnik();
PryamoygolniTreygolnik PryamoygolniTreygolnik(10,20,30,45,45,90);
PryamoygolniTreygolnik.get_PryamoygolniTreygolni();
RavnobedreniTreuqolnik RavnobedreniTreuqolnik(30,30,40,50,50,80);
RavnobedreniTreuqolnik.get_RavnobedreniTreuqolnik();
RavnostoroniiTreuqolnik RavnostoroniiTreuqolnik(30,30,30,60,60,60);
RavnostoroniiTreuqolnik.get_RavnostoroniTreuqolnik();
Pryamougolnik Pryamougolnik(10,20,10,20,90,90,90,90);
Pryamougolnik.get_Pryamougolnik();
Kvadrat Kvadrat(10,10,10,10,90,90,90,90);
Kvadrat.get_Kvadrat();
Parallelogram Parallelogram(10,20,10,20,30,30,150,150);
Parallelogram.get_Parallelogram();
Pomb Pomb(10,10,10,10,60,120,60,120);
Pomb.get_Pomb();

}