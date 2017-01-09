#include <iostream>
using namespace std;
double EstimateOfTotal(int minPeas,int maxPeas,int podCount);
int main()
{
    int maxCount, minCount, podCount;
    double averagePea, yield;
    cout << "Δωστε τον Ελαχιστο και το μεγιστο αριθμο "
        << "Μπιζελιων σε ενα καρπο: ";
        cin >> minCount >> maxCount ;
        cout << "Δωσε τον αριθμο των καρπων: ";
        cin >> podCount;
        cout << "Δωσε το βαρος του μεσου μπιζελιου (σε γραμμαρια):";
        cin >> averagePea;
        yield= EstimateOfTotal(minCount,maxCount,podCount)*averagePea;
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);
        cout << "min αριθμος μπιζελιων ανα καρπο= "<< minCount<<endl;
        cout << "max αριθμος μπιζελιων ανα καρπο= "<< maxCount<<endl;
        cout << "Αριθμος καρπων= "<< podCount<< endl;
        cout << "Βαρος μεσου μπιζελιου= "<< averagePea << endl;
        cout << "Εκτιμωμενη μεση σοδεια= "<< yield << endl;
    return 0;
}
double EstimateOfTotal(int minPeas,int maxPeas,int podCount)
{
    double averagePea;
    averagePea = (maxPeas+minPeas)/2.0;
    return (podCount*averagePea);
}

