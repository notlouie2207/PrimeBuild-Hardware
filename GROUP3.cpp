#include <iostream>
using namespace std;

int main() {
    // Initialization of variables
    // Logic variables
    float itemTotal, taxedSubtotal, subtotal, grandTotal, change;
    bool validItem, validDiscountType;
    string selectItem, selectCategory, discountIdentifier;
    double cashTendered, discount, totalPaid = 0;

    // Temporary quantity variable
    float itemQty;

    // Item cost variables
    double chainsawPrice = 1499.99, drillPrice = 999.99, electricSawPrice = 2499.99, grinderPrice = 1199.99, pliersPrice = 219.99, 
    spannerPrice = 249.99, handsawPrice = 299.99, hammerPrice = 499.99, looseWrenchPrice = 179.99, pvcCutterPrice = 349.99, 
    screwdriverSetPrice = 299.99, sledgehammerPrice = 699.99, towerPincersPrice = 144.99, barLevelPrice = 999.99, measuringTapePrice = 49.99, 
    nailsPrice = 149.99, ductTapePrice = 59.99, padlockPrice = 199.99, safetyGlassesPrice = 199.99, workGlovesPrice = 199.99;

    // Item count variables
    double chainsawCount = 0, drillCount = 0, electricSawCount = 0, grinderCount = 0, pliersCount = 0, 
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

    // Constant values
    float valueAddedTax = 0.12, discountReduction = 0.20;
    bool isPwd, isSenior;

    // Menu printout sequence
    // Menu header printout
    cout << topBorder << endl;
    cout << "|                       PRIMEBUILD HARDWARE                          |" << endl;
    cout << topBorder << endl << divider << endl;

    // Category 1 printout
    cout << "|                     CATEGORY #1 | Power Tools                      |" << endl;
    cout << divider << endl << line << endl;
    cout << "| No.  | Item Name                | Price                            |" << endl;
    cout << line << endl;
    cout << "| 01   | Chainsaw                 | PHP 9,999.99                     |" << endl;
    cout << "| 02   | Drill                    | PHP 999.99                       |" << endl;
    cout << "| 03   | Electric Saw             | PHP 4,999.99                     |" << endl;
    cout << "| 04   | Grinder                  | PHP 1,199.99                     |" << endl;
    cout << line << endl << divider << endl;

    // Category 2 printout
    cout << "|                     CATEGORY #2 | Hand Tools                       |" << endl;
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
    cout << "|                     CATEGORY #3 | Miscellaneous Items              |" << endl;
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
    while (selectCategory != "Checkout") {
        cout << "Please enter a category name EXACTLY as displayed. (Enter \"Checkout\" to checkout): ";
        getline(cin, selectCategory);

        // Checks if selectCategory is Power Tools; if so, proceed
        if (selectCategory == "Power Tools") {
            validItem = false;
                // While loop to check if a valid item is selected
                while (validItem != true) {
                    cout << "POWER TOOLS Category selected. Please enter an item name from the menu (case-sensitive): ";
                    getline(cin, selectItem);
                    if (selectItem == "Chainsaw") {
                        cout << "Chainsaw selected. Please enter your desired quantity: ";
                        cin >> itemQty;
                        cin.ignore();
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Invalid quantity! Please enter a number.\n";
                            continue;
                        }
                        chainsawCount += itemQty;
                        validItem = true;
                    } else if (selectItem == "Drill") {
                        cout << "Drill selected. Please enter your desired quantity: ";
                        cin >> itemQty;
                        cin.ignore();
                         if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Invalid quantity! Please enter a number.\n";
                            continue;
                        }
                        drillCount += itemQty;
                        validItem = true;
                    } else if (selectItem == "Electric Saw") {
                        cout << "Electric Saw selected. Please enter your desired quantity: ";
                        cin >> itemQty;
                        cin.ignore();
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Invalid quantity! Please enter a number.\n";
                            continue;
                        }
                        electricSawCount += itemQty;
                        validItem = true;
                    } else if (selectItem == "Grinder") {
                        cout << "Grinder selected. Please enter your desired quantity: ";
                        cin >> itemQty;
                        cin.ignore();
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Invalid quantity! Please enter a number.\n";
                            continue;
                        }
                        grinderCount += itemQty;
                        validItem = true;
                    } else {
                        cout << "Invalid item! Please input a valid item name.\n";
                    }
                }
            } else if (selectCategory == "Hand Tools") { // Checks if selectCategory is Hand Tools; if so, proceed
                validItem = false;
                    // While loop to check if a valid item is selected
                    while (validItem != true) {
                        cout << "HAND TOOLS Category selected. Please enter an item name from the menu (case-sensitive): ";
                        getline(cin, selectItem);
                        if (selectItem == "Pliers") {
                            cout << "Pliers selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            pliersCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Adjustable Spanner") {
                            cout << "Adjustable Spanner selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            spannerCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Basic Hand Saw") {
                            cout << "Basic Hand Saw selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            handsawCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Hammer") {
                            cout << "Hammer selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            hammerCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Loose Size Wrench") {
                            cout << "Loose Size Wrench selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            looseWrenchCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "PVC Pipe Cutter") {
                            cout << "PVC Pipe Cutter selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            pvcCutterCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Screwdriver Set") {
                            cout << "Screwdriver Set selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            screwdriverSetCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Sledgehammer") {
                            cout << "Sledgehammer selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            sledgehammerCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Tower Pincers") {
                            cout << "Tower Pincers selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            towerPincersCount += itemQty;
                            validItem = true;
                        } else {
                            cout << "Invalid item! Please input a valid item name.\n";
                        }
                    }
                } else if (selectCategory == "Miscellaneous Items") { // Checks if selectCategory is Miscellaneous Items; if so, proceed
                    validItem = false;
                    // While loop to check if a valid item is selected
                    while (validItem != true) {
                        cout << "MISCELLANEOUS ITEMS Category selected. Please enter an item name from the menu (case-sensitive): ";
                        getline(cin, selectItem);
                        if (selectItem == "Assorted Nails") {
                            cout << "Assorted Nails selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            nailsCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Bar Level") {
                            cout << "Bar Level selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            barLevelCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Duct Tape") {
                            cout << "Duct Tape selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            ductTapeCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Measuring Tape") {
                            cout << "Measuring Tape selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            measuringTapeCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Padlock") {
                            cout << "Padlock selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            padlockCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Safety Glasses") {
                            cout << "Safety Glasses selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            safetyGlassesCount += itemQty;
                            validItem = true;
                        } else if (selectItem == "Work Gloves") {
                            cout << "Work Gloves selected. Please enter your desired quantity: ";
                            cin >> itemQty;
                            cin.ignore();
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Invalid quantity! Please enter a number.\n";
                                continue;
                            }
                            workGlovesCount += itemQty;
                            validItem = true;
                        } else {
                            cout << "Invalid item! Please input a valid item name.\n";
                        }
                    }  
                } else if (selectCategory == "Checkout") {
                    // Checkout sequence

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

                    // Calculate total of all items
                    subtotal = chainsawTotal + drillTotal + electricSawTotal + grinderTotal +
                    pliersTotal + spannerTotal + handsawTotal + hammerTotal + looseWrenchTotal +
                    pvcCutterTotal + screwdriverSetTotal + sledgehammerTotal + towerPincersTotal +
                    nailsTotal + barLevelTotal + ductTapeTotal + measuringTapeTotal + padlockTotal +
                    safetyGlassesTotal + workGlovesTotal;

                    // Pre-emptively print the total of all items
                    taxedSubtotal = (subtotal + (subtotal * valueAddedTax));
                    cout << "Your subtotal is: PHP " << taxedSubtotal << endl;

                    // Ask for discount type; if invalid, loop code block until discount type is valid
                    validDiscountType = false;
                    while (validDiscountType != true) {
                        cout << "Please enter your discount type (Senior, PWD, or None): ";
                        getline(cin, discountIdentifier);
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Please enter a valid discount type.\n";
                        }
                        if (discountIdentifier == "Senior") {
                            discount = subtotal * discountReduction;
                            cout << "Senior Citizen discount applied. VAT Exemption applied. Your new subtotal is: PHP " << subtotal - discount << endl;
                            validDiscountType = true;
                        } else if (discountIdentifier == "PWD") {
                            cout << "PWD discount applied. VAT Exemption applied. Your new subtotal is: PHP " << subtotal - discount << endl;
                            validDiscountType = true;
                        } else if (discountIdentifier == "None") {
                            cout << "No discount applied. VAT exemption not applied.\n";
                            validDiscountType = true;
                        } else {
                            cout << "Please enter a valid discount type.\n";
                        }
                    }

                    if (discountIdentifier == "Senior" || discountIdentifier == "PWD") {
                        while (totalPaid < subtotal) {
                            cout << "Please enter your cash amount: PHP ";
                            cin >> cashTendered;
                            if (cin.fail() || cashTendered < 0) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Please enter a valid cash amount.\n" << endl;
                            }

                            totalPaid += cashTendered;

                            /* Check if cashTendered is greater than or equal to the total; if less than the total,
                            keep asking until cashTendered is equal to or greater than the total */
                            if (totalPaid < subtotal) {
                                cout << "Insufficient funds. You are missing PHP " << subtotal - totalPaid << " more.\n";
                            }  
                        }
                    } else {
                        while (totalPaid < taxedSubtotal) {
                            cout << "Please enter your cash amount: PHP ";
                            cin >> cashTendered;
                            if (cin.fail() || cashTendered < 0) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                cout << "Please enter a valid cash amount.\n" << endl;
                            }

                            totalPaid += cashTendered;

                            /* Check if cashTendered is greater than or equal to the total; if less than the total,
                            keep asking until cashTendered is equal to or greater than the total */
                            if (totalPaid < taxedSubtotal) {
                                cout << "Insufficient funds. You are missing PHP " << taxedSubtotal - totalPaid << " more.\n";
                            }  
                        }
                    }
                    // Ask for cash amount; loop the code block until cash amount is valid

                    // Receipt printout section
                    // Receipt header printout
                    cout << "\nProceeding to checkout...\n\n";
                    cout << line << endl << dividerTwo << endl;
                    cout << "|                    PRIMEBUILD HARDWARE RECEIPT                     |" << endl;
                    cout << dividerTwo << endl << line << endl << dividerTwo << endl;
                    cout << "| Cashier: Monkey D. Luffy                        Serial No.: #06967 |" << endl;
                    cout << dividerTwo << endl << line << endl;
                    cout << "| Item                    Qty           Price           Cost         |" << endl;
                    cout << line << endl;

                    // Receipt proper printout
                    // Check if itemCount variables have values; if yes, print them to be part of the receipt
                    if (chainsawCount > 0) {
                        cout << "  Chainsaw                " << chainsawCount << "             PHP " << chainsawPrice << "     PHP " << chainsawTotal << endl;
                    }
                    if (drillCount > 0) {
                        cout << "  Drill                   " << drillCount << "             PHP " << drillPrice << "      PHP " << drillTotal << endl;
                    }
                    if (electricSawCount > 0) {
                        cout << "  Electric Saw            " << electricSawCount << "             PHP " << electricSawPrice << "     PHP " << electricSawTotal << endl;
                    }
                    if (grinderCount > 0) {
                        cout << "  Grinder                 " << grinderCount << "             PHP " << grinderPrice << "     PHP " << grinderTotal << endl;
                    }
                    if (pliersCount > 0) {
                        cout << "  Pliers                  " << pliersCount << "             PHP " << pliersPrice << "      PHP " << pliersTotal << endl;
                    }
                    if (spannerCount > 0) {
                        cout << "  Adjustable Spanner      " << spannerCount << "             PHP " << spannerPrice << "      PHP " << spannerTotal << endl;
                    }
                    if (handsawCount > 0) {
                        cout << "  Basic Hand Saw          " << handsawCount << "             PHP " << handsawPrice << "      PHP " << handsawTotal << endl;
                    }
                    if (hammerCount > 0) {
                        cout << "  Hammer                  " << hammerCount << "             PHP " << hammerPrice << "      PHP " << hammerTotal << endl;
                    } 
                    if (looseWrenchCount > 0) {
                        cout << "  Loose Size Wrench       " << looseWrenchCount << "             PHP " << looseWrenchPrice << "      PHP " << looseWrenchTotal << endl;
                    }
                    if (pvcCutterCount > 0) {
                        cout << "  PVC Pipe Cutter         " << pvcCutterCount << "             PHP " << pvcCutterPrice << "      PHP " << pvcCutterTotal << endl;
                    }
                    if (screwdriverSetCount > 0) {
                        cout << "  Screwdriver Set         " << screwdriverSetCount << "             PHP " << screwdriverSetPrice << "      PHP " << screwdriverSetTotal << endl;
                    }
                    if (sledgehammerCount > 0) {
                        cout << "  Sledgehammer            " << sledgehammerCount << "             PHP " << sledgehammerPrice << "      PHP " << sledgehammerTotal << endl;
                    }
                    if (towerPincersCount > 0) {
                        cout << "  Hammer                  " << towerPincersCount << "             PHP " << towerPincersPrice << "      PHP " << towerPincersTotal << endl;
                    }
                    if (nailsCount > 0) {
                        cout << "  Assorted Nails          " << nailsCount << "             PHP " << nailsPrice << "      PHP " << nailsTotal << endl;
                    }
                    if (barLevelCount > 0) {
                        cout << "  Bar Level               " << barLevelCount << "             PHP " << barLevelPrice << "      PHP " << barLevelTotal << endl;
                    } 
                    if (ductTapeCount > 0) {
                        cout << "  Duct Tape               " << ductTapeCount << "             PHP " << ductTapePrice << "       PHP " << ductTapeTotal << endl;
                    }
                    if (measuringTapeCount > 0) {
                        cout << "  Measuring Tape          " << measuringTapeCount << "             PHP " << measuringTapePrice << "       PHP " << measuringTapeTotal << endl;
                    }
                    if (padlockCount > 0) {
                        cout << "  Padlock                 " << padlockCount << "             PHP " << padlockPrice << "      PHP " << padlockTotal << endl;
                    }
                    if (safetyGlassesCount > 0) {
                        cout << "  Safety Glasses          " << safetyGlassesCount << "             PHP " << safetyGlassesPrice << "      PHP " << safetyGlassesTotal << endl;
                    }
                    if (workGlovesCount > 0) {
                        cout << "  Work Gloves             " << workGlovesCount << "             PHP " << workGlovesPrice << "      PHP " << workGlovesTotal << endl;
                    }

                    // Print bottom of receipt
                    cout << line << endl;
                    cout << "  SUBTOTAL:                                             PHP " << subtotal << endl;

                    // Check discountIdentifier if valid for VAT exemption
                    if (discountIdentifier == "Senior" || discountIdentifier == "PWD") {
                        discount = subtotal * discountReduction;
                        grandTotal = subtotal - discount;
                        change = totalPaid - grandTotal;
                        cout << "  DISCOUNT:                                           - PHP " << discount << endl;
                        cout << "  VAT:                                                  PHP 0" << endl;

                        // Print total cost, given cash, and change
                        cout << line << endl;
                        cout << "  TOTAL COST:                                           PHP " << grandTotal << endl;
                        cout << "  CASH TENDERED:                                        PHP " << totalPaid << endl;
                        cout << "  CHANGE:                                               PHP " << change << endl;
                        cout << line << endl;
                        cout << "|          THANK YOU FOR SHOPPING AT PRIMEBUILD HARDWARE!            |" << endl;
                        cout << line << endl;
                        return 0;

                    } else {
                        grandTotal = taxedSubtotal;
                        change = totalPaid - grandTotal;
                        cout << "  DISCOUNT:                                           - PHP 0" << endl;
                        cout << "  VAT:                                                  PHP " << (subtotal * valueAddedTax) << endl;

                        // Print total cost, given cash, and change
                        cout << line << endl;
                        cout << "  TOTAL COST:                                           PHP " << grandTotal << endl;
                        cout << "  CASH TENDERED:                                        PHP " << totalPaid << endl;
                        cout << "  CHANGE:                                               PHP " << change << endl;
                        cout << line << endl;
                        cout << "|          THANK YOU FOR SHOPPING AT PRIMEBUILD HARDWARE!            |" << endl;
                        cout << line << endl;
                        return 0;
                    }
            } else {
                cout << "Invalid input! Please select a valid category.\n";
        }
    }
}