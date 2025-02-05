#include <unordered_map>
#include <iostream>

int main()
{
    std::unordered_map<std::string, int> months;
    months["january"] = 31;
    months["february"] = 28;
    months["march"] = 31;
    months["april"] = 30;
    months["may"] = 31;
    months["june"] = 30;
    months["july"] = 31;
    months["august"] = 31;
    months["september"] = 30;
    months["october"] = 31;
    months["november"] = 30;
    months["december"] = 31;
    std::cout << "september -> " << months["september"] << std::endl;
    std::cout << "april     -> " << months["april"] << std::endl;
    std::cout << "december  -> " << months["december"] << std::endl;
    std::cout << "february  -> " << months["february"] << std::endl;

    // Check if a key exists
    if (months.find("january") != myMap.end())
    {
        std::cout << "january is in the map" << std::endl;
    }
    else
    {
        std::cout << "january is not in the map" << std::endl;
    }

    return 0;
}