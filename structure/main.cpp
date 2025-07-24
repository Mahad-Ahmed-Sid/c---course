#include <iostream>
using namespace std;

const int max_rooms = 50;

struct Booking {
    int roomNumber;
    string name;
    int days;
    float price;
};
                                                                
Booking bookings[max_rooms];
int bookingCount = 0;

void bookRoom() {
    if (bookingCount >= max_rooms) {
        cout << "No rooms available!"<<endl;
        return;
    }

    cout << "Enter room number: ";
    cin >> bookings[bookingCount].roomNumber;

    cout << "Enter customer name: ";
    cin>>bookings[bookingCount].name;

    cout << "Enter number of days: ";
    cin >> bookings[bookingCount].days;

    cout << "Enter price per day: ";
    cin >> bookings[bookingCount].price;

    bookingCount++;
    cout << "Room booked successfully!"<<endl;
}


void viewBookings() {
    if (bookingCount == 0) {
        cout << "No bookings found."<<endl;
        return;
    }

    cout << "\n--- Current Bookings ---\n";
    for (int i = 0; i < bookingCount; ++i) {
        cout << "Room Number: " << bookings[i].roomNumber << ", Customer: " << bookings[i].name << ", Days: " << bookings[i].days << ", Price Per Day: $" << bookings[i].price << ", Total: $" << bookings[i].days * bookings[i].price << endl;
    }
}

void searchBooking() {
    int room;
    cout << "Enter room number to search: ";
    cin >> room;

    for (int i = 0; i < bookingCount; ++i) {
        if (bookings[i].roomNumber == room) {
            cout << "Booking Found:"<<endl;
            cout << "Customer: " << bookings[i].name
                 << " , Days: " << bookings[i].days
                 << " , Price Per Day: $" << bookings[i].price << endl;
            return;
        }
    }
    cout << "Booking not found for Room " << room << endl;
}

void checkoutRoom() {
    int room;
    cout << "Enter room number to checkout: ";
    cin >> room;

    for (int i = 0; i < bookingCount; ++i) {
        if (bookings[i].roomNumber == room) {
            for (int j = i; j < bookingCount - 1; ++j) {
                bookings[j] = bookings[j + 1];
            }
            bookingCount--;
            cout << "Checkout successful. Room is now available."<<endl;
            return;
        }
    }
    cout << "No booking found for Room " << room << endl;
}


int main() {

    cout<<"-------------WeLcome to TAJ HOTEL------------------\n";
    int choice;
    do {
        cout << "\n--- Hotel Management System ---"<<endl;
        cout << "1. Book Room"<<endl;
        cout << "2. View All Bookings"<<endl;
        cout << "3. Search Booking by Room Number"<<endl;
        cout << "4. Checkout Room"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bookRoom();
                break;
            case 2:
                viewBookings();
                break;
            case 3:
                searchBooking();
                break;
            case 4:
                checkoutRoom();
                break;
            case 0:
                cout << "Program Ends."<<endl;
                break;
            default:
                cout << "Invalid option. Try again."<<endl;
        }
    } while (choice != 0);
    
    return 0;
}
