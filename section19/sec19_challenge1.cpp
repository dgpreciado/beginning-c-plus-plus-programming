//
// Created by Gabe on 3/22/2020.
//
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main_challenge1() {

    Tours tours
            {"Tour Ticket prices from Miami",
             {
                     {
                             "Colombia", {
                             {"Bogota", 8778000, 400.98},
                             {"Cali", 2401000, 424.12},
                             {"medellin", 2464000, 350.98},
                             {"Cartagena", 972000, 345.34}
                     },
                     }, {
                             "Brazil", {
                             {"Rio DeJaniero", 13500000, 567.45},
                             {"Sao Paulo", 11310000, 975.45},
                             {"Salvador", 18234000, 855.99}
                     },
                     }, {
                             "Chile", {
                             {"Valdivia", 260000, 569.12},
                             {"Santiago", 7040000, 520.00}
                     },
                     }, {
                             "Argentina", {
                             {"Buenos Aires", 3010000, 723.77}
                     }
                     },
             }
            };

/*
    std::cout << tours.title << std::endl;
    for (auto country:tours.countries) {
        std::cout << country.name << std::endl;
        for (auto city:country.cities) {
            std::cout << "\t" << city.name
                      << "\t" << city.population
                      << "\t" << city.cost
                      << std::endl;
        }
    }**/
/* my solution
    std::cout << "1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
    std::cout << std::left << std::setw(20) << " " << std::setw(20) << tours.title << std::endl;
    std::cout   << std::setw(20) << "Country" << std::setw(20)<< "City"
                << std::right
                << std::setw(20) << "Population" << std::setw(20)<< "Price" << std::endl;
    std::cout << std::setw(80) << std::setfill('-') << ""<< std::left << std::endl;
    std::cout << std::setfill(' ');
    for (auto country:tours.countries) {
        std::cout<< std::setw(20)  << country.name;
        for (auto city:country.cities) {
            std::cout   << std::setw(20) << city.name
                        << std::right
                        << std::setw(20) << city.population
                        << std::setw(20) << city.cost
                      << "\n" << std::setw(20) << "" << std::left;
                      //<< std::endl;
        }std::cout << std::left <<"\n";
    }
**/
    /* Solution */
    const int total_width {70};
    const int field1_width {20};//Country name
    const int field2_width {20};//City name
    const int field3_width {15};//Population
    const int field4_width {15};//Cost

    //ruler()
    std::cout << "\n1234567890123456789012345678901234567890123456789012345678901234567890" << std::endl;
    int title_length = tours.title.length();
    std::cout << std::setw((total_width -title_length)/2) << "" << tours.title << std::endl;
    std::cout << std::setw(field1_width) << std::left << "Country"
            << std::setw(field2_width) << std::left << "City"
            << std::setw(field3_width) << std::right << "Population"
            << std::setw(field4_width) << std::right << "Price"
            <<std::endl;

    std::cout << std::setw(total_width) << std::setfill('-') << "" << std::endl;

    std::cout << std::setfill(' ') << std::setprecision(2) << std::fixed;

    for(Country country : tours.countries){
        for(int i = 0; i< country.cities.size(); ++i){
            std::cout << std::setw(field1_width) << std::left << ((i == 0) ? country.name:"")
                    << std::setw(field2_width) << std::left << country.cities.at(i).name
                    << std::setw(field3_width) << std::right << country.cities.at(i).population
                    << std::setw(field4_width) << std::right << country.cities.at(i).cost
                    << std::endl;
        }
    }
    return 0;
}
