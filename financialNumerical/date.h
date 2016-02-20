#include <string>
using namespace std;
class Date {
protected:
    int year_;
    int month_;
    int day_;
public:
    date(const int& d,const& int m,const& int y);

    int day()  const;
    int month() const;
    int year() const;

    void set_day (const int& day);
    void set_month(const int& month);
    void set_year(const int& year);

    date operator ++();
    date operator ++(int);
    date opertor --();
    date operator --(int);
};

bool operator == (const date&, const date&);
bool operator != (const date&, const date&);
bool operator < (const date&, const date&);
bool operator > (const date&, const date&);
bool operator <= (const date&, const date&);
bool operator >= (const date&, const date&);
