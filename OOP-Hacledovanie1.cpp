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
virtual void get_Phigure()=0;

virtual ~Phigure(){}

};
class Treygolni:public Phigure{

    public:
    using Phigure::Phigure;
     void get_Phigure() override
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
void get_Phigure() override
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
    void get_Phigure() override
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
    void get_Phigure()override
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
    void get_Phigure() override
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
    void get_Phigure() override
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
    void get_Phigure() override
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
    void get_Phigure() override
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
    void get_Phigure() override
    {
    cout << "Параллелограмм:"<<endl;
        cout <<"Стороны: a=" << ASide << " b=" << BSide<<" c="<< CSide<< " d="<<DSide << endl;
        cout << "Углы: A="<< AAngle<< " B="<< BAngle<<" C="<< CAngle<< " D="<< DAngle<<endl; 
        cout<<endl;
    }
};



int main () 
{

Phigure* Treygolnik[] = {new Treygolni(10,20,30,50,60,70) , new PryamoygolniTreygolnik(10,20,30,30,60,90), new RavnobedreniTreuqolnik(10,10,20,50,80,50), new RavnostoroniiTreuqolnik(20,20,20,60,60,60)};

for (int i = 0 ; i < 4 ; ++i)
{
    Treygolnik[i]->get_Phigure();
}
Phigure* Chetriohugolni[] = {new Chetriohugolnik(10,20,30,40,60,120,70,50) , new Pryamougolnik(10,20,10,20,90,90,90,90), new Kvadrat(20,20,20,20,90,90,90,90), new Pomb(20,20,20,20,60,120,60,120), new Parallelogram(20,30,20,30,60,120,60,120)};
for (int i = 0; i < 5 ; ++i)
{
    Chetriohugolni[i]->get_Phigure();
}

delete Treygolnik;
delete Chetriohugolni;

return 0 ;
}
