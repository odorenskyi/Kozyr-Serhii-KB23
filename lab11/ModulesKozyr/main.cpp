#include "MoudelsKozyr.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void searchRecord(const vector<Record>& registry) {
    cout << "Введіть перші п'ять цифр поштового коду для пошуку: ";
    string searchCode;
    cin >> searchCode;

    bool found = false;
    for (const auto& record : registry) {
        if (record.index.substr(0, 5) == searchCode) {
            found = true;
            cout << record.index << " "
                 << record.region << " "
                 << record.locality << " "
                 << record.street << endl;
        }
    }
    if (!found) {
        cout << "Запис не знайдено." << endl;
    }
}
