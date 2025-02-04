
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
    Phigure(int CountSide) 
    {
        this->CountSide = CountSide;
    }
    Phigure(int CountSide, int Aside1, int Bside1, int CSide1, double AAngle1, double BAngle1, double CAngle1)
    {
        this->CountSide = CountSide;
        this->ASide = Aside1;
        this->BSide = Bside1;
        this->CSide = CSide1;
        this->AAngle = AAngle1;
        this->BAngle = BAngle1;
        this->CAngle = CAngle1;
    }
    Phigure(int CountSide ,int Aside1, int Bside1, int CSide1, int DSide, double AAngle1, double BAngle1, double CAngle1, double DAngle)
    {
        this->CountSide = CountSide;
        this->ASide = Aside1;
        this->BSide = Bside1;
        this->CSide = CSide1;
        this->DSide = DSide;
        this->AAngle = AAngle1;
        this->BAngle = BAngle1;
        this->CAngle = CAngle1;
        this->DAngle = DAngle;
    }
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

    virtual ~Phigure() {}

};
class Treygolni :public Phigure {

public:
    using Phigure::Phigure;
    void get_Phigure() override
    {
        cout << "Треугольник:" << endl;
        if (AAngle + BAngle + CAngle == 180 && CountSide ==3)
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
    using Treygolni::Treygolni;
    void get_Phigure() override
    {
        cout << "Прямоугольный треугольник:" << endl;
        if (AAngle || BAngle || CAngle == 90 && CountSide ==3)
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
    using Treygolni::Treygolni;
    void get_Phigure() override
    {
        cout << "Равнобедренный треугольник:" << endl;
        if (AAngle == CAngle && ASide == BSide)
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
    using Treygolni::Treygolni;
    void get_Phigure()override
    {
        cout << "Равносторонний треугольник:" << endl;
        if (AAngle == BAngle == CAngle == 60 && ASide == BSide == CSide)
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
class Chetriohugolnik :public Phigure {
public:
    using Phigure::Phigure;
    void get_Phigure() override
    {
        cout << "Четырёхугольник:" << endl;
        if (CountSide==4 && AAngle+ BAngle + CAngle + DAngle == 360)
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
    using Chetriohugolnik::Chetriohugolnik;
    void get_Phigure() override
    {
        cout << "Прямоугольник:" << endl;
        if (AAngle == BAngle == CAngle == DAngle == 90 && ASide == CSide && BSide == DSide)
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
    using Chetriohugolnik::Chetriohugolnik;
    void get_Phigure() override
    {
        cout << "Квадрат:" << endl;
        if (AAngle == BAngle == CAngle == DAngle == 90 && ASide == CSide == BSide == DSide)
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
    using Chetriohugolnik::Chetriohugolnik;
    void get_Phigure() override
    {
        cout << "Ромб:" << endl;
        if ( AAngle == CAngle && BAngle == DAngle && ASide == CSide == BSide == DSide)
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
    using Chetriohugolnik::Chetriohugolnik;
    void get_Phigure() override
    {
        cout << "Параллелограмм:" << endl;
        if (AAngle == CAngle && BAngle == DAngle && ASide == CSide && BSide == DSide)
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
    setlocale(LC_ALL, "Ru");
    Phigure phig(0);
    phig.get_Phigure();
    
    Phigure* Treygolnik[] = { new Treygolni(3,10,20,30,50,60,70) ,
        new PryamoygolniTreygolnik(3,10,20,30,30,60,90),
        new RavnobedreniTreuqolnik(3,10,10,20,50,80,50), 
        new RavnostoroniiTreuqolnik(3,20,20,20,60,60,60) };

    for (int i = 0; i < 4; ++i)
    {
        Treygolnik[i]->get_Phigure();
    }
    Phigure* Chetriohugolni[] = { new Chetriohugolnik(4,10,20,30,40,60,120,70,50) ,
        new Pryamougolnik(4,10,20,10,20,90,90,90,90), 
        new Kvadrat(4,20,20,20,20,90,90,90,90), 
        new Pomb(4,20,20,20,20,60,120,60,120),
        new Parallelogram(4,20,30,20,30,60,120,60,120) };
    for (int i = 0; i < 5; ++i)
    {
        Chetriohugolni[i]->get_Phigure();
    }

    delete[] Treygolnik;
    delete[] Chetriohugolni;
    return 0;
}