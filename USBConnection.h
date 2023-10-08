// USBConnection.h

#pragma once
#include <stack>

class USBConnection {
private:
    int ID;

    // Private constructor to create USBConnection objects
    USBConnection(int id) : ID(id) {}

public:
    // Public function to create USBConnection objects
    static USBConnection* createConnection() {
        if (ids.empty()) {
            return nullptr; // No available ports
        } else {
            int newID = ids.top();
            ids.pop();
            return new USBConnection(newID);
        }
    }

    // Destructor to return a used ID to the stack
    ~USBConnection() {
        ids.push(ID);
    }

private:
    // Static stack to keep track of available IDs
    static std::stack<int> ids;
};

// Initialize the stack with IDs {3, 2, 1}
std::stack<int> USBConnection::ids({3, 2, 1});