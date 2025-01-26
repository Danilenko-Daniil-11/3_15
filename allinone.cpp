#include <iostream>
#include <string>
using namespace std;

void printScalesWithUnits(const string& rightUnit) {
    cout << "      ┳       " << endl;
    cout << "   ┣━━╋━━┫    " << endl;
    cout << "   ┃  ┃  ┃    " << endl;
    cout << "┏━━┻━┓┃┏━┻━━┓ " << endl;
    cout << "╰━кг━╯┃╰━" << rightUnit << "━╯" << endl;
    cout << "┈┈┈┈┈━┻━┈┈┈┈┈┈" << endl;
}

void masstokillograms(int unit, double mass) {
    double massInKilograms;
    switch (unit) {
        case 1:
            massInKilograms = mass; 
            break;
        case 2:
            massInKilograms = mass / 1000000; 
            break;
        case 3:
            massInKilograms = mass / 1000; 
            break;
        case 4:
            massInKilograms = mass * 1000; 
            break;
        case 5:
            massInKilograms = mass * 100;  
            break;
        default:
            cout << "Невірний номер одиниці маси!" << endl;
            return;
    }

    
    cout << "Маса тіла у кілограмах: " << massInKilograms << " кг" << endl;
}

int main() {
    int unit;
    double mass;
    
    cout << "╔╗╔══╗╔══╗╔╗╔╗╔══╗─╔═══╗╔═══╗╔════╗╔═══╗╔═══╗\n║║║╔═╝║╔╗║║║║║║╔╗║─║╔══╝║╔═╗║╚═╗╔═╝║╔══╝║╔═╗║\n║╚╝║──║║║║║╚╝║║╚╝╚╗║╚══╗║╚═╝║──║║──║╚══╗║╚═╝║\n║╔╗║──║║║║║╔╗║║╔═╗║║╔══╝║╔══╝──║║──║╔══╝║╔══╝\n║║║╚═╗║╚╝║║║║║║╚═╝║║╚══╗║║─────║║──║╚══╗║║───\n╚╝╚══╝╚══╝╚╝╚╝╚═══╝╚═══╝╚╝─────╚╝──╚═══╝╚╝───\n";






    cout << "Введіть номер одиниці маси (1 – кілограм || 2 – міліграм || 3 – грам || 4 – тонна || 5 – центнер): ";
    cin >> unit;

    
    if (unit < 1 || unit > 5) {
        cout << "Невірний номер одиниці маси!" << endl;
        return 1;
    }

    string rightUnit;
    switch (unit) {
        case 1:
            rightUnit = "кг";
            break;
        case 2:
            rightUnit = "мг";
            break;
        case 3:
            rightUnit = "г ";
            break;
        case 4:
            rightUnit = "т ";
            break;
        case 5:
            rightUnit = "ц ";
            break;
    }

    printScalesWithUnits(rightUnit);

    
    cout << "Введіть масу тіла: ";
    cin >> mass;

    masstokillograms(unit, mass);
    return 0;
}
