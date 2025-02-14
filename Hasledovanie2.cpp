
#include <iostream>

using namespace std;

class Phigure {
protected:
    int CountSide;
    int ASide;
    int BSide;
    int CSide;
    int DSide;
    double AAngle;
    double BAngle;
    double CAngle;
    double DAngle;
public:
    Phigure(int CountSide) : CountSide(CountSide),ASide(0),BSide(0),CSide(0),DSide(0),
    AAngle(0),BAngle(0),CAngle(0),DAngle(0){}
    
    virtual void get_Phigure() 
    {
        cout << "Фигура:" << endl;
        if (this->CountSide == 0) 
        {
            cout << "Правильная" << endl;
        }
        else 
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << endl;
    }
    virtual bool Check() = 0;
    

    virtual ~Phigure() {}

};
class Treygolni :public Phigure {

public:
    Treygolni(int ASide, int BSide, int CSide, double AAngle, double BAngle, double CAngle):Phigure(3)
    {
this->ASide = ASide;
this->BSide = BSide;
this->CSide = CSide;
this->AAngle = AAngle;
this->BAngle = BAngle;
this->CAngle = CAngle; 
    }
    bool Check()override
    {
        return(AAngle + BAngle + CAngle == 180 && CountSide ==3);
    }

    void get_Phigure() override
    {
        cout << "Треугольник:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;
    }
};
class PryamoygolniTreygolnik : public Treygolni {
public:
    PryamoygolniTreygolnik( int ASide, int BSide, int CSide, double AAngle, double BAngle, double CAngle):
    Treygolni(ASide,BSide,CSide,AAngle,BAngle,CAngle){}

bool Check () override
{
   return (Treygolni::Check()&&AAngle || BAngle || CAngle == 90 && CountSide ==3);
}

    void get_Phigure() override
    {
        cout << "Прямоугольный треугольник:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;
    }

};
class RavnobedreniTreuqolnik : public Treygolni {
public:
    RavnobedreniTreuqolnik(int ASide, int CSide,  double AAngle, double BAngle):
    Treygolni(ASide,ASide,CSide,AAngle,BAngle,AAngle){}
    bool Check()override
    {
        return(Treygolni::Check()&&AAngle == CAngle && ASide == BSide);
    }
    void get_Phigure() override
    {
        cout << "Равнобедренный треугольник:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;

    }
};
class RavnostoroniiTreuqolnik : public Treygolni {
public:
  RavnostoroniiTreuqolnik(int ASide,  double AAngle):Treygolni(ASide,ASide,ASide,AAngle,AAngle,AAngle){}
  bool Check() override
  {
    return(Treygolni::Check()&&AAngle ==60 &&  BAngle == 60 &&  CAngle == 60 && ASide == BSide && ASide == CSide);
  }
    void get_Phigure()override
    {
        cout << "Равносторонний треугольник:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;

    }
};
class Chetriohugolnik :public Phigure 
{
public:
     Chetriohugolnik(int ASide, int BSide, int CSide, int DSide, double AAngle, double BAngle, double CAngle, double DAngle):
     Phigure(4)
     {
        this->ASide = ASide;
        this->BSide = BSide;
        this->CSide = CSide;
        this->DSide = DSide;
        this->AAngle = AAngle;
        this->BAngle = BAngle;
        this->CAngle = CAngle;
        this->DAngle = DAngle;
     }
     bool Check()override
     {
        return (CountSide == 4 && AAngle + BAngle + CAngle + DAngle == 360);
     }
    void get_Phigure() override
    {
        cout << "Четырёхугольник:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }

};
class Pryamougolnik : public Chetriohugolnik {
public:
    Pryamougolnik(int ASide, int BSide, double AAngle):
    Chetriohugolnik(ASide,BSide,ASide,BSide,AAngle,AAngle,AAngle,AAngle){}
    bool Check() override
    {
        return(Chetriohugolnik::Check() && AAngle ==90 && BAngle ==90 &&  CAngle ==90 &&  DAngle == 90 && ASide == CSide && BSide == DSide);
    }
    void get_Phigure() override
    {
        cout << "Прямоугольник:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};
class Kvadrat : public Chetriohugolnik {
public:
    Kvadrat(int ASide, double AAngle):Chetriohugolnik(ASide,ASide,ASide,ASide,AAngle,AAngle,AAngle,AAngle){}
    bool Check()override
    {
        return (Chetriohugolnik::Check() && AAngle == 90 &&  BAngle == 90 &&  CAngle == 90 &&  DAngle == 90 && ASide == CSide && BSide == DSide && ASide == BSide);
    }
    void get_Phigure() override
    {
        cout << "Квадрат:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};
class Pomb : public Chetriohugolnik {
public:
    Pomb(int ASide,  double AAngle, double BAngle):
    Chetriohugolnik(ASide,ASide,ASide,ASide,AAngle,BAngle,AAngle,BAngle){}
    bool Check()override
    {
        return( Chetriohugolnik::Check()&&AAngle == CAngle && BAngle == DAngle && ASide == CSide && BSide == DSide && ASide == BSide );

    }

    void get_Phigure() override
    {
        cout << "Ромб:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};
class Parallelogram : public Chetriohugolnik {
public:
    Parallelogram(int ASide, int BSide, double AAngle, double BAngle):
    Chetriohugolnik(ASide,BSide,ASide,BSide,AAngle,BAngle,AAngle,BAngle){}
    bool Check()override
    {
        return ( Chetriohugolnik::Check()&&AAngle == CAngle && BAngle == DAngle && ASide == CSide && BSide == DSide);
    }

    void get_Phigure() override
    {
        cout << "Параллелограмм:" << endl;
        if (Check())
        {
            cout << "Правильная" << endl;
        }
        else
        {
            cout << "Неправильная" << endl;
        }
        cout << "Количество строн:" << CountSide << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};



int main()
{
    
    
    Phigure* Treygolnik[] = { 
        new Treygolni(10, 20, 30, 50, 60, 70),
        new PryamoygolniTreygolnik(10, 20, 30, 30, 60, 90),
        new RavnobedreniTreuqolnik(10, 5,50, 80),
        new RavnostoroniiTreuqolnik(20,60)
    };

    for (int i = 0; i < 4; ++i)
    {

        Treygolnik[i]->get_Phigure();
    }

    Phigure* Chetriohugolni[] = {  new Chetriohugolnik(10, 20, 30, 40, 60, 120, 70, 50),
        new Pryamougolnik(10,20,90),
        new Kvadrat(20,90),
        new Pomb(20,60,120),
        new Parallelogram(20, 30, 60, 120)
    };
    for (int i = 0; i < 5; ++i)
    {
        Chetriohugolni[i]->get_Phigure();
    }

    for (int i = 0 ; i < 4 ; ++i )
    {
    delete Treygolnik[i];
    }
    for (int i = 0 ; i < 5 ; ++i)
    {
    delete Chetriohugolni[i];
    }
    return 0;
}