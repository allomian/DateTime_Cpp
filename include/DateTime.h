#ifndef DATETIME_CPP_DATETIME_H
#define DATETIME_CPP_DATETIME_H

#include <string>
#include <ctime>
    class DateTime{
public:
    DateTime() = default;
    DateTime(int&,int&,int&);
    DateTime(int&,int&,int&,int&,int&,int&);
    std::string Now(int&,int&,int&,int&,int&,int&);
    std::string Now(int&,int&,int&);
    std::string Now();
    std::string Kind();
    std::string GetMinValue() const {return m_MinValue;}
    std::string GetMaxValue() const {return m_MaxValue;}
    std::string ToString() const;


private:
  const std::string m_MinValue;
  const std::string m_MaxValue;
  const std::string m_t_Date;
  std::tm *m_TimeStruct;
  std::time_t m_Time;
};

#endif //DATETIME_CPP_DATETIME_H
