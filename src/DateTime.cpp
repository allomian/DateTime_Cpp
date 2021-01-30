#include "../include/DateTime.h"
#include <iostream>
#include <sstream>

std::string DateTime::Now() {
    std::stringstream t_time;
    m_Time = std::time(0);
    m_TimeStruct =  std::localtime(&m_Time);
    t_time << m_TimeStruct->tm_wday << "/" << m_TimeStruct->tm_mon << "/" << m_TimeStruct->tm_year
            << "" << m_TimeStruct->tm_hour << ":" << m_TimeStruct->tm_min << ":" << m_TimeStruct->tm_sec;
    return t_time.str();
}

std::string DateTime::Now(int &year, int &month, int &day) {
    std::stringstream  t_time;
    m_Time = std::time(0);
    m_TimeStruct = std::localtime(&m_Time);
    m_TimeStruct->tm_year = year, m_TimeStruct->tm_mon = month,m_TimeStruct->tm_mday = day;
    t_time << m_TimeStruct->tm_wday << "/" << m_TimeStruct->tm_mon << "/" << m_TimeStruct->tm_year
           << "" << m_TimeStruct->tm_hour << ":" << m_TimeStruct->tm_min << ":" << m_TimeStruct->tm_sec;
    return t_time.str();
}
std::string DateTime::ToString() const {
    std::stringstream t_time;
    t_time << m_TimeStruct->tm_wday << "/" << m_TimeStruct->tm_mon << "/" << m_TimeStruct->tm_year
           << "" << m_TimeStruct->tm_hour << ":" << m_TimeStruct->tm_min << ":" << m_TimeStruct->tm_sec;
    return t_time.str();
}

DateTime::DateTime(int &year, int &month, int &day) {
    std::stringstream t_time;
    m_TimeStruct->tm_year = year,m_TimeStruct->tm_mon = month,m_TimeStruct->tm_wday;
    t_time << m_TimeStruct->tm_wday << "/" << m_TimeStruct->tm_mon << "/" << m_TimeStruct->tm_year
           << "" << m_TimeStruct->tm_hour << ":" << m_TimeStruct->tm_min << ":" << m_TimeStruct->tm_sec;
}

DateTime::DateTime(int &year, int &month, int &day, int &hour, int &min, int &sec) {
    std::stringstream t_time;
    m_TimeStruct->tm_year = year, m_TimeStruct->tm_mon = month,m_TimeStruct->tm_mday = day,
    m_TimeStruct->tm_hour = hour,m_TimeStruct->tm_min = min,m_TimeStruct->tm_sec = sec;
}
std::string DateTime::Kind() {
    return std::to_string(timezone);
}