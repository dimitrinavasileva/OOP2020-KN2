#include <iostream>
using namespace std;

class Fi
{
public:
    Fi(int = 1, int = 1);
    Fi(const Fi&);
    int get_x() const;
    int get_y() const;
    void print() const;
private:
    int x, y;
};

Fi::Fi(int a, int b)
{
    cout << "Fi(" << a << ", " << b << ")\n";
    x = a;
    y = b;
}
Fi::Fi(const Fi& p)
{
    cout << "Fi(const&)\n";
    x = p.x + 1;
    y = p.y - 2;
}
int Fi::get_x() const
{
    return x;
}
int Fi::get_y() const
{
    return y;
}
void Fi::print() const
{
    cout << x << ", " << y << endl;
}

class Se
{
public:
    Se(double, Fi);
    Se(const Se&);
    double get_x() const;
    Fi get_a() const;
    void print() const;
private:
    double x;
    Fi a;
};
Se::Se(double d, Fi e)
{
    cout << "Se(" << d << ", " << e.get_x() << ", "
        << e.get_y() << ")\n";
    x = d;
    a = Fi(e);
}
Se::Se(const Se& b)
{
    cout << "Se(const Se&)\n";
    x = b.x + 3;
}
void Se::print() const
{
    a.print();
    cout << x << endl;
}
double Se::get_x() const
{
    return x;
}
Fi Se::get_a() const
{
    return a;
}

int main()
{
    Fi a(5, 7), x(a);
    a.print();
    x.print();
    Se b(0.5, a), c = b;
    cout << b.get_x() << endl;
    b.get_a().print();
    c.print();
    return 0;
}