# include <iostream>
using namespace std;

int main() {
    int marks[10] = {60, 67, 89, 96, 80, 45, 96, 82, 94, 76};
    int search_mark, found, position_found;
    found = 0;
    
    cout << "Enter the mark you want to search for: ";
    cin >> search_mark;
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] == search_mark)
        {
            found = 1;
            position_found = i+1;
            cout << "The mark was found on the position: " << position_found <<endl;
        }
        
    }
    if (found == 0)
    {
        cout << "The value was not found.";
    }
    return 0;
}
/*
Output:
Enter the mark you want to search for: 96
The mark was found on the position: 4
The mark was found on the position: 7
*/