/* Weather App
Name: Sriharini S
College: Vivekananda College of engineering for women 

Statements used:
Switch case 
*/
#include <iostream>
#include <string>

using namespace std;

int main()
 {
    string email, location;
    int choice;

    cout << "Welcome to Weather App\n";
    cout << "enter your email address: ";
    cin >> email;
    cout << "enter your location: ";
    cin >> location;

    
    while (true)
 {
        cout << "\nMenu:\n1. Display weekly report\n2. Display current climate\n3. Display yesterday's weather\n4. Display today's weather\n5. Display tomorrow's weather\n6. Exit\n";
        cout << "Please enter your choice: ";
        cin >> choice;

        
        switch (choice) {
            case 1:
                
                cout << "Weekly report for " << location << ":\n";
                cout << "The weather is cloudy ";
                break;
            case 2:
                
                cout << "Current climate for " << location << ":\n";
                cout << " the weather is rainly ";
                break;
            case 3:
                
                cout << "Yesterday's weather for " << location << ":\n";
                cout << " the weather is thunderstrom";
                break;
            case 4:
                
                cout << "Today's weather for " << location << ":\n";
                cout << " the weather is sunny";
                break;
            case 5:
               
                cout << "Tomorrow's weather for " << location << ":\n";
                cout << "the weather is sunny";
                break;
            case 6:
                
                cout << "Goodbye!\n";
                return 0;
            default:
                
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}
