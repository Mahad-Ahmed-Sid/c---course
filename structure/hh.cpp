#include <windows.h>
#include <vector>
#include <sstream>
#include <fstream> // For file writing
using namespace std;

class Person {
protected:
    string name; int id;
public:
    Person(string n, int i) : name(n), id(i) {}
    virtual string getInfo() = 0;
};

class Staff : public Person {
protected:
    string dept; double salary;
public:
    Staff(string n, int i, string d, double s) : Person(n, i), dept(d), salary(s) {}
    string getInfo() override {
        stringstream ss;
        ss << "[Staff]\r\nID: " << id << "\r\nName: " << name << "\r\nDept: " << dept << "\r\nSalary: " << salary;
        return ss.str();
    }
};

class Doctor : public Staff {
    double bonus;
public:
    Doctor(string n, int i, string d, double s, double b) : Staff(n, i, d, s), bonus(b) {}
    string getInfo() override {
        stringstream ss;
        ss << "[Doctor]\r\nID: " << id << "\r\nName: " << name << "\r\nDept: " << dept << "\r\nTotal Salary: " << salary + bonus;
        return ss.str();
    }
};

vector<Person*> people;
HWND hName, hID, hDept, hSalary, hBonus, hOut;

void AddStaff(HWND hWnd) {
    char name[30], id[10], dept[20], sal[20];
    GetWindowTextA(hName, name, 30);
    GetWindowTextA(hID, id, 10);
    GetWindowTextA(hDept, dept, 20);
    GetWindowTextA(hSalary, sal, 20);
    people.push_back(new Staff(name, atoi(id), dept, atof(sal)));
    MessageBoxA(hWnd, "Staff Added", "Done", MB_OK);
}

void AddDoctor(HWND hWnd) {
    char name[30], id[10], dept[20], sal[20], bonus[20];
    GetWindowTextA(hName, name, 30);
    GetWindowTextA(hID, id, 10);
    GetWindowTextA(hDept, dept, 20);
    GetWindowTextA(hSalary, sal, 20);
    GetWindowTextA(hBonus, bonus, 20);
    people.push_back(new Doctor(name, atoi(id), dept, atof(sal), atof(bonus)));
    MessageBoxA(hWnd, "Doctor Added", "Done", MB_OK);
}

void ShowAll() {
    stringstream ss;
    for (auto p : people)
        ss << p->getInfo() << "\r\n------------------\r\n";

    string result = ss.str();

    
    SetWindowTextA(hOut, result.c_str());

    
    ofstream outFile("records.txt", ios::app);
    if (outFile.is_open()) {
        outFile << result;
        outFile.close();
        MessageBoxA(NULL, "Data appended to records.txt", "Success", MB_OK);
    } else {
        MessageBoxA(NULL, "Failed to write to file", "Error", MB_OK);
    }
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_CREATE:
        CreateWindowA("static", "Name:", WS_VISIBLE | WS_CHILD, 20, 20, 50, 20, hWnd, NULL, NULL, NULL);
        hName = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 80, 20, 200, 20, hWnd, NULL, NULL, NULL);
        CreateWindowA("static", "ID:", WS_VISIBLE | WS_CHILD, 20, 50, 50, 20, hWnd, NULL, NULL, NULL);
        hID = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 80, 50, 200, 20, hWnd, NULL, NULL, NULL);
        CreateWindowA("static", "Dept:", WS_VISIBLE | WS_CHILD, 20, 80, 50, 20, hWnd, NULL, NULL, NULL);
        hDept = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 80, 80, 200, 20, hWnd, NULL, NULL, NULL);
        CreateWindowA("static", "Salary:", WS_VISIBLE | WS_CHILD, 20, 110, 50, 20, hWnd, NULL, NULL, NULL);
        hSalary = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 80, 110, 200, 20, hWnd, NULL, NULL, NULL);
        CreateWindowA("static", "Bonus:", WS_VISIBLE | WS_CHILD, 20, 140, 50, 20, hWnd, NULL, NULL, NULL);
        hBonus = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER, 80, 140, 200, 20, hWnd, NULL, NULL, NULL);

        CreateWindowA("button", "Add Staff", WS_VISIBLE | WS_CHILD, 30, 180, 100, 30, hWnd, (HMENU)1, NULL, NULL);
        CreateWindowA("button", "Add Doctor", WS_VISIBLE | WS_CHILD, 150, 180, 100, 30, hWnd, (HMENU)2, NULL, NULL);
        CreateWindowA("button", "Show All", WS_VISIBLE | WS_CHILD, 90, 220, 100, 30, hWnd, (HMENU)3, NULL, NULL);
        hOut = CreateWindowA("edit", "", WS_VISIBLE | WS_CHILD | WS_BORDER | ES_MULTILINE | WS_VSCROLL,
            20, 260, 330, 200, hWnd, NULL, NULL, NULL);
        break;
    case WM_COMMAND:
        if (LOWORD(wp) == 1) AddStaff(hWnd);
        if (LOWORD(wp) == 2) AddDoctor(hWnd);
        if (LOWORD(wp) == 3) ShowAll();
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    }
    return DefWindowProc(hWnd, msg, wp, lp);
}

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE, LPSTR, int nCmdShow) {
    WNDCLASSA wc = { 0 };
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInst;
    wc.lpszClassName = "MyApp";
    RegisterClassA(&wc);
    HWND hWnd = CreateWindowA("MyApp", "Hospital App", WS_OVERLAPPEDWINDOW, 100, 100, 400, 520, NULL, NULL, hInst, NULL);
    ShowWindow(hWnd, nCmdShow);
    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    for (Person* p : people) delete p;
    return 0;
}
