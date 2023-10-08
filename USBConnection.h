#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#pragma once
#include <stack>

class USBConnection {
private:
    int ID;

    // Private constructor to create USBConnection objects
    USBConnection(int id) : ID(id) {}

public:
    // Public static function to create USBConnection objects
    static USBConnection* CreateUsbConnection() {
        if (ids.empty()) {
            return nullptr; // No available ports
        } else {
            int newID = ids.top();
            ids.pop();
            return new USBConnection(newID);
        }
    }

    // Public function to get the ID of the USBConnection
    int get_id() const {
        return ID;
    }

    // Public destructor to return a used ID to the stack
    ~USBConnection() {
        ids.push(ID);
    }

private:
    // Static stack to keep track of available IDs
    static std::stack<int> ids;
};

// Initialize the stack with IDs {3, 2, 1}
std::stack<int> USBConnection::ids({3, 2, 1});

#endif