#include <iostream>
using namespace std;


class Phigure {
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
    Phigure(){}
    virtual void get_Phigure() = 0; 
    virtual ~Phigure() {}          
};


class Treygolni : public Phigure {

public:
Treygolni(){}
Treygolni(int ASide, int BSide, int CSide, double AAngle, double BAngle, double CAngle){
this->ASide = ASide;
this->BSide = BSide;
this->CSide = CSide;
this->AAngle = AAngle;
this->BAngle = BAngle;
this->CAngle = CAngle; 
}

    void get_Phigure() override {
        cout << "Треугольник:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;
    }
};


class PryamoygolniTreygolnik : public Treygolni {
public:
    
PryamoygolniTreygolnik( int ASide, int BSide, int CSide, double AAngle, double BAngle, double CAngle){
        this->ASide = ASide;
        this->BSide = BSide;
        this->CSide = CSide;
        this->AAngle = AAngle;
        this->BAngle = BAngle;
        this->CAngle = CAngle; 
}

    void get_Phigure() override {
        cout << "Прямоугольный треугольник:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;
    }
};


class RavnobedreniTreuqolnik : public Treygolni {
public:
    RavnobedreniTreuqolnik(int ASide, int CSide,  double AAngle, double BAngle)
    {
        this->ASide = ASide;
        this->BSide = ASide;
        this->CSide = CSide;
        this->AAngle = AAngle;
        this->BAngle = BAngle;
        this->CAngle = AAngle; 
    }

    void get_Phigure() override {
        cout << "Равнобедренный треугольник:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;
    }
};


class RavnostoroniiTreuqolnik : public Treygolni {
public:
    RavnostoroniiTreuqolnik(int ASide,  double AAngle)
    {
        this->ASide = ASide;
        this->BSide = ASide;
        this->CSide = ASide;
        this->AAngle = AAngle;
        this->BAngle = AAngle;
        this->CAngle = AAngle; 
    }

    void get_Phigure() override {
        cout << "Равносторонний треугольник:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << endl;
        cout << endl;
    }
};


class Chetriohugolnik : public Phigure {
public:
    Chetriohugolnik(){}

    Chetriohugolnik(int ASide, int BSide, int CSide, int DSide, double AAngle, double BAngle, double CAngle, double DAngle)
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

   
    void get_Phigure() override {
        cout << "Четырёхугольник:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};


class Pryamougolnik : public Chetriohugolnik {
public:
    Pryamougolnik(int ASide, int BSide, double AAngle)
    {
        this->ASide = ASide;
        this->BSide = BSide;
        this->CSide = ASide;
        this->DSide = BSide;
        this->AAngle = AAngle;
        this->BAngle = AAngle;
        this->CAngle = AAngle;
        this->DAngle = AAngle;
    }

    void get_Phigure() override {
        cout << "Прямоугольник:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};


class Kvadrat : public Chetriohugolnik {
public:
    Kvadrat(int ASide, double AAngle)
    {
        this->ASide = ASide;
        this->BSide = ASide;
        this->CSide = ASide;
        this->DSide = ASide;
        this->AAngle = AAngle;
        this->BAngle = AAngle;
        this->CAngle = AAngle;
        this->DAngle = AAngle;
    }

    void get_Phigure() override {
        cout << "Квадрат:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};


class Pomb : public Chetriohugolnik {
public:
    Pomb(int ASide,  double AAngle, double BAngle)
    {
        this->ASide = ASide;
        this->BSide = ASide;
        this->CSide = ASide;
        this->DSide = ASide;
        this->AAngle = AAngle;
        this->BAngle = BAngle;
        this->CAngle = AAngle;
        this->DAngle = BAngle;
    }

    void get_Phigure() override {
        cout << "Ромб:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};


class Parallelogram : public Chetriohugolnik {
public:
    Parallelogram(int ASide, int BSide, double AAngle, double BAngle){
        this->ASide = ASide;
        this->BSide = BSide;
        this->CSide = ASide;
        this->DSide = BSide;
        this->AAngle = AAngle;
        this->BAngle = BAngle;
        this->CAngle = AAngle;
        this->DAngle = BAngle;
    }

    void get_Phigure() override {
        cout << "Параллелограмм:" << endl;
        cout << "Стороны: a=" << ASide << " b=" << BSide << " c=" << CSide << " d=" << DSide << endl;
        cout << "Углы: A=" << AAngle << " B=" << BAngle << " C=" << CAngle << " D=" << DAngle << endl;
        cout << endl;
    }
};

int main() {
    
    Phigure* Treygolnik[] = {
        new Treygolni(10, 20, 30, 50, 60, 70),
        new PryamoygolniTreygolnik(10, 20, 30, 30, 60, 90),
        new RavnobedreniTreuqolnik(10, 5,50, 80),
        new RavnostoroniiTreuqolnik(20,60)
    };

    
    for (int i = 0; i < 4; ++i) {
        Treygolnik[i]->get_Phigure();
    }

   
    Phigure* Chetriohugolni[] = {
        new Chetriohugolnik(10, 20, 30, 40, 60, 120, 70, 50),
        new Pryamougolnik(10,20,90),
        new Kvadrat(20,90),
        new Pomb(20,60,120),
        new Parallelogram(20, 30, 60, 120)
    };

    
    for (int i = 0; i < 5; ++i) {
        Chetriohugolni[i]->get_Phigure();
    }

    
    for (int i = 0; i < 4; ++i) {
        delete Treygolnik[i];
    }

    for (int i = 0; i < 5; ++i) {
        delete Chetriohugolni[i];
    }

    return 0;
}
