#include <iostream>
using namespace std;

int main() {
    // Initialization of variables
    // Logic variables
    int selectCategory, discountIdentifier;
    float itemTotal, grandTotal;
    bool validItem;
    string selectItem;

    // Temporary quantity variable
    float itemQty;

    // Item cost variables
    float chainsawPrice = 9999.99, drillPrice = 999.99, electricSawPrice = 4999.99, grinderPrice = 1199.99, pliersPrice = 219.99, 
    spannerPrice = 249.99, handsawPrice = 299.99, hammerPrice = 499.99, looseWrenchPrice = 179.99, pvcCutterPrice = 349.99, 
    screwdriverSetPrice = 299.99, sledgehammerPrice = 699.99, towerPincersPrice = 144.99, barLevelPrice = 999.99, measuringTapePrice = 49.99, 
    nailsPrice = 149.99, ductTapePrice = 59.99, padlockPrice = 199.99, safetyGlassesPrice = 199.99, workGlovesPrice = 199.99;

    // Item count variables
    float chainsawCount = 0, drillCount = 0, electricSawCount = 0, grinderCount = 0, pliersCount = 0, 
    spannerCount = 0, handsawCount = 0, hammerCount = 0, looseWrenchCount = 0, pvcCutterCount = 0, 
    screwdriverSetCount = 0, sledgehammerCount = 0, towerPincersCount = 0, barLevelCount = 0, 
    measuringTapeCount = 0, nailsCount = 0, ductTapeCount = 0, padlockCount = 0, safetyGlassesCount = 0, workGlovesCount = 0;

    // Item total variables
    double chainsawTotal = 0, drillTotal = 0, electricSawTotal = 0, grinderTotal = 0, pliersTotal = 0, 
    spannerTotal = 0, handsawTotal = 0, hammerTotal = 0, looseWrenchTotal = 0, pvcCutterTotal = 0, 
    screwdriverSetTotal = 0, sledgehammerTotal = 0, towerPincersTotal = 0, barLevelTotal = 0, 
    measuringTapeTotal = 0, nailsTotal = 0, ductTapeTotal = 0, padlockTotal = 0, safetyGlassesTotal = 0, workGlovesTotal = 0;

    // Menu printout strings
    string line = "======================================================================";
    string topBorder = "+====================================================================+";
    string divider = "|                                 |                                  |";
    string dividerTwo = "|                                                                    |";

    // Menu printout sequence
    cout << topBorder << endl;
    cout << "|                       PRIMEBUILD HARDWARE                          |" << endl;
    cout << topBorder << endl << divider << endl;

    // Category 1 printout
    cout << "|                     CATEGORY #1 | POWER TOOLS                      |" << endl;
    cout << divider << endl << line << endl;
    cout << "| No.  | Item Name                | Price                            |" << endl;
    cout << line << endl;
    cout << "| 01   | Chainsaw                 | PHP 9,999.99                     |" << endl;
    cout << "| 02   | Drill                    | PHP 999.99                       |" << endl;
    cout << "| 03   | Electric Saw             | PHP 4,999.99                     |" << endl;
    cout << "| 04   | Grinder                  | PHP 1,199.99                     |" << endl;
    cout << line << endl << divider << endl;

    // Category 2 printout
    cout << "|                     CATEGORY #2 | HAND TOOLS                       |" << endl;
    cout << divider << endl << line << endl;
    cout << "| No.  | Item Name                | Price                            |" << endl;
    cout << line << endl;
    cout << "| 01   | Pliers                   | PHP 219.99                       |" << endl;
    cout << "| 02   | Adjustable Spanner       | PHP 249.99                       |" << endl;
    cout << "| 03   | Basic Hand Saw           | PHP 299.99                       |" << endl;
    cout << "| 04   | Hammer                   | PHP 499.99                       |" << endl;
    cout << "| 05   | Loose Size Wrench        | PHP 179.99                       |" << endl;
    cout << "| 06   | PVC Pipe Cutter          | PHP 349.99                       |" << endl;
    cout << "| 07   | Screwdriver Set          | PHP 299.99                       |" << endl;
    cout << "| 08   | Sledgehammer             | PHP 699.99                       |" << endl;
    cout << "| 09   | Tower Pincers            | PHP 144.99                       |" << endl;
    cout << line << endl << divider << endl;

    // Category 3 printout
    cout << "|                     CATEGORY #3 | MISCELLANEOUS ITEMS              |" << endl;
    cout << divider << endl << line << endl;
    cout << "| No.  | Item Name                | Price                            |" << endl;
    cout << line << endl;
    cout << "| 01   | Assorted Nails           | PHP 149.99                       |" << endl;
    cout << "| 02   | Bar Level                | PHP 999.99                       |" << endl;
    cout << "| 03   | Duct Tape                | PHP 59.99                        |" << endl;
    cout << "| 04   | Measuring Tape           | PHP 49.99                        |" << endl;
    cout << "| 05   | Padlock                  | PHP 199.99                       |" << endl;
    cout << "| 06   | Safety Glasses           | PHP 199.99                       |" << endl;
    cout << "| 07   | Work Gloves              | PHP 199.99                       |" << endl;
    cout << line << endl;

    // Category selection
    while (selectCategory != 4) {
        cout << "Please enter a category number from 1-3 (4 to checkout): ";
        cin >> selectCategory;
        cin.ignore();

        // Checks if selectCategory is within 1 to 3
        if (selectCategory >= 1 && selectCategory <= 3) {
            switch (selectCategory) {
                // Case 1: Power Tools selected
                case 1:
                    validItem = false;
                    while (validItem != true) {
                        cout << "POWER TOOLS Category selected. Please enter an item name from the menu (case-sensitive): ";
                        getline(cin, selectItem);
                        if (selectItem == "Chainsaw") {
                            cout << "Chainsaw selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            chainsawCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Drill") {
                            cout << "Drill selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            drillCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Electric Saw") {
                            cout << "Electric Saw selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            electricSawCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Grinder") {
                            cout << "Grinder selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            grinderCount += itemQty;
                            validItem = true;
                        } else {
                            cout << "Invalid item! Please input a valid item name.\n";
                        }
                    }
                break;

                // Case 2: Hand Tools selected
                case 2:
                    validItem = false;
                    while (validItem != true) {
                        cout << "HAND TOOLS Category selected. Please enter an item name from the menu (case-sensitive): ";
                        getline(cin, selectItem);
                        if (selectItem == "Pliers") {
                            cout << "Pliers selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            pliersCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Adjustable Spanner") {
                            cout << "Adjustable Spanner selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            spannerCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Basic Hand Saw") {
                            cout << "Basic Hand Saw selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            handsawCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Hammer") {
                            cout << "Hammer selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            hammerCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Loose Size Wrench") {
                            cout << "Loose Size Wrench selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            looseWrenchCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "PVC Pipe Cutter") {
                            cout << "PVC Pipe Cutter selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            pvcCutterCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Screwdriver Set") {
                            cout << "Screwdriver Set selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            screwdriverSetCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Sledgehammer") {
                            cout << "Sledgehammer selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            sledgehammerCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Tower Pincers") {
                            cout << "Tower Pincers selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            towerPincersCount += itemQty;
                            validItem = true;
                        } else {
                            cout << "Invalid item! Please input a valid item name.\n";
                        }
                    }
                break;

                // Case 3: Miscellaneous Items selected
                case 3:
                    validItem = false;
                    while (validItem != true) {
                        cout << "MISCELLANEOUS ITEMS Category selected. Please enter an item name from the menu (case-sensitive): ";
                        getline(cin, selectItem);
                        if (selectItem == "Assorted Nails") {
                            cout << "Assorted Nails selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            nailsCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Bar Level") {
                            cout << "Bar Level selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            barLevelCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Duct Tape") {
                            cout << "Duct Tape selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            ductTapeCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Measuring Tape") {
                            cout << "Measuring Tape selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            measuringTapeCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Padlock") {
                            cout << "Padlock selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            padlockCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Safety Glasses") {
                            cout << "Safety Glasses selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            safetyGlassesCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Work Gloves") {
                            cout << "Work Gloves selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            workGlovesCount += itemQty;
                            validItem = true;
                        } else {
                            cout << "Invalid item! Please input a valid item name.\n";
                        }
                    }  
                break;  
            }
        } else if (selectCategory == 4) {
            // Checkout sequence
            // Checkout header printout
            cout << "\nProceeding to checkout...\n\n";
            cout << line << endl << dividerTwo << endl;
            cout << "|                    PRIMEBUILD HARDWARE RECEIPT                     |" << endl;
            cout << dividerTwo << endl << line << endl;
            cout << "| Item         Quantity         Unit Price        Total Cost         |" << endl;
            cout << line << endl;

            // Callculate total costs of each item in the Power Tools category
            chainsawTotal = chainsawCount * chainsawPrice;
            drillTotal = drillCount * drillPrice;
            electricSawTotal = electricSawCount * electricSawPrice;
            grinderTotal = grinderCount * grinderPrice;

            // Calculate total costs of each item in the Hand Tools category
            pliersTotal = pliersCount * pliersPrice;
            spannerTotal = spannerCount * spannerPrice;
            handsawTotal = handsawCount * handsawPrice;
            hammerTotal = hammerCount * hammerPrice;
            looseWrenchTotal = looseWrenchCount * looseWrenchPrice;
            pvcCutterTotal = pvcCutterCount * pvcCutterPrice;
            screwdriverSetTotal = screwdriverSetCount * screwdriverSetPrice;
            sledgehammerTotal = sledgehammerCount * sledgehammerPrice;
            towerPincersTotal = towerPincersCount * towerPincersPrice;

            // Calculate total costs of each item in the Miscellaneous Items category
            nailsTotal = nailsCount * nailsPrice;
            barLevelTotal = barLevelCount * barLevelPrice;
            ductTapeTotal = ductTapeCount * ductTapePrice;
            measuringTapeTotal = measuringTapeCount * measuringTapePrice;
            padlockTotal = padlockCount * padlockPrice;
            safetyGlassesTotal = safetyGlassesCount * safetyGlassesPrice;
            workGlovesTotal = workGlovesCount * workGlovesPrice;

        } else {
            cout << "Invalid input! Please select a valid category.\n";
        }
    }
}