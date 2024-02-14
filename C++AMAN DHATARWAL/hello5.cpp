#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
struct datarevenue
{
    int year;
    double central_motor_vehicle_accessories_import_duty;
    double central_motor_vehicle_accessories_excise_duty;
    double central_tyres_tubes_import_duty;
    double central_tyres_tubes_excise_duty;
    double central_high_speed_diesel_oil_import_duty;
    double central_high_speed_diesel_oil_excise_duty;
    double central_motor_spirit_import_duty;
    double central_motor_spirit_excise_duty;
    double states_motor_vehicle_taxes_fees;
    double states_sales_tax_on_motor_spirit_lubricants;
    double states_taxes_on_passengers_and_goods_traffic;
    double import_revenue;
    double excise_revenue;
};
class generaterevenue
{
     datarevenue a[15];
    for(int i = 0; i < 15; i++)
    {
        double sum_import;
        double sum_excise;
        int x;
        double x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11;
        cin >> x;
        cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6 >> x7 >> x8 >> x9 >> x10 >> x11;
        a[i].year = x;
        a[i].central_motor_vehicle_accessories_import_duty = x1;
        sum_import+=x1;
        a[i].central_motor_vehicle_accessories_excise_duty = x2;
        sum_excise+=x2;
        a[i].central_tyres_tubes_import_duty = x3;
        sum_import+=x3;
        a[i].central_tyres_tubes_excise_duty = x4;
        sum_excise+=x4;
        a[i].central_high_speed_diesel_oil_import_duty = x5;
        sum_import+=x5;
        a[i].central_high_speed_diesel_oil_excise_duty = x6;
        sum_excise+=x6;
        a[i].central_motor_spirit_import_duty = x7;
        sum_import+=x7;
        a[i].central_motor_spirit_excise_duty = x8;
        sum_excise+=x8;
        a[i].states_motor_vehicle_taxes_fees = x9;
        a[i].states_sales_tax_on_motor_spirit_lubricants = x10;
        a[i].states_taxes_on_passengers_and_goods_traffic = x11;
        a[i].import_revenue=sum_import;
        a[i].export_revenue=sum_excise;
    }
};
