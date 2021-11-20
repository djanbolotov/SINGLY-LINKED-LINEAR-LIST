//#include <iostream>
//using namespace std;
//
//struct List {
//    int value;
//    int key;
//    List* next;
//};
//
//void print(List*);
//
//List* insert(List*, char, int*);
//List* insertPosition(List*, int, int, int, int*);
//List* insertBefore(List*, int, int, int, int*);
//List* insertAfter(List*, int, int, int, int*);
//
//List* deletePosition(List*, int, int*);
//List* deleteValue(List*, int, int*);
//List* deleteBefore(List*, int, int*);
//List* deleteAfter(List*, int, int*);
//
//void searchValue(List*, int);
//void searchKey(List*, int);
//
//List* Create(List*, int, int, int*);
//List* Clear(List*, int*);
//
//bool isUniqueKey(List*, int);
//
//int getVariant(int);
//int getValue();
//int getKey();
//int getPosition();
//int getElement();
//
//void printMenu();
//void printSearchMenu();
//void printInsertMenu();
//void printDeleteMenu();
//
//void incorrectPosition();
//void elementNotFound();
//void listIsEmpty();
//void listIsAlreadyInitialized();
//void deletedElement(int value);
//
//int main()
//{
//    List* head = NULL;
//    int value, key, position, element, size = 0;
//    int select_menu, select_search, select_delete, select_insert;
//    bool unique = false;
//    do {
//        system("CLS");
//        printMenu();
//        select_menu = getVariant(7);
//        if (select_menu < 6)
//        {
//            print(head);
//        }
//        switch (select_menu) 
//        {
//        case 1:
//            value = getValue();
//            key = getKey();
//            head = Create(head, value, key, &size);
//            break;
//        case 2:
//            printInsertMenu();
//            select_insert = getVariant(3);
//            switch (select_insert)
//            {
//            case 1:
//                position = getPosition();
//                value = getValue();
//                while (!unique)
//                {
//                    key = getKey();
//                    unique = isUniqueKey(head, key);
//                }
//                head = insertPosition(head, position, value, key, &size);
//                unique = false;
//                break;
//            case 2:
//                element = getElement();
//                value = getValue();
//                while (!unique)
//                {
//                    key = getKey();
//                    unique = isUniqueKey(head, key);
//                }
//                head = insertBefore(head, element, value, key, &size);
//                unique = false;
//                break;
//            case 3:
//                element = getElement();
//                value = getValue();
//                while (!unique)
//                {
//                    key = getKey();
//                    unique = isUniqueKey(head, key);
//                }
//                head = insertAfter(head, element, value, key, &size);
//                unique = false;
//            }
//            break;
//        case 3:
//            printDeleteMenu();
//            select_delete = getVariant(4);
//            switch (select_delete)
//            {
//            case 1:
//                position = getPosition();
//                head = deletePosition(head, position, &size);
//                break;
//            case 2:
//                value = getValue();
//                head = deleteValue(head, value, &size);
//                break;
//            case 3:
//                value = getValue();
//                head = deleteBefore(head, value, &size);
//                break;
//            case 4:
//                value = getValue();
//                head = deleteAfter(head, value, &size);
//            }
//            break;
//        case 4:
//            printSearchMenu();
//            select_search = getVariant(2);
//            switch (select_search)
//            {
//            case 1:
//                value = getValue();
//                searchValue(head, value);
//                break;
//            case 2:
//                key = getKey();
//                searchKey(head, key);
//                break;
//            }
//            break;
//        case 5:
//            head = Clear(head, &size);
//            break;
//        case 6:
//            print(head);
//            break;
//        }
//        if (select_menu < 6)
//        {
//            print(head);
//        }
//        if (select_menu != 7)
//        {
//            system("pause");
//        }
//    } while (select_menu != 7);
//    return 0;
//}
//
////get values
//int getElement()
//{
//    int element;
//    cout << "Enter element value: ";
//    cin >> element;
//    return element;
//}
//int getValue()
//{
//    int value;
//    cout << "Enter value: ";
//    cin >> value;
//    return value;
//}
//int getKey()
//{
//    int key;
//    cout << "Enter key: ";
//    cin >> key;
//    return key;
//}
//int getPosition()
//{
//    int position;
//    cout << "Enter position: ";
//    cin >> position;
//    return position;
//}
//int getVariant(int maxvalue)
//{
//    int variant;
//    cin >> variant;
//    while (variant < 1 || variant > maxvalue)
//    {
//        cout << "Incorrect input. Try again: ";
//        cin >> variant;
//    }
//    return variant;
//}
//
////menu
//void printMenu()
//{
//    cout << "(1: INITIALIZE, 2: INSERT, 3: DELETE, 4: SEARCH, 5: CLEAR, 6: PRINT, 7: EXIT)" << endl;
//    cout << "Select any value you want:";
//}
//void printSearchMenu()
//{
//    cout << "(1: SEARCH VALUE, 2: SEARCH KEY)" << endl;
//    cout << "Which search we will use:";
//}
//void printInsertMenu()
//{
//    cout << "(1: INSERT POSITION, 2: INSERT BEFORE, 3: INSERT AFTER)" << endl;
//    cout << "Which insert we will use:";
//}
//void printDeleteMenu()
//{
//    cout << "(1: DELETE POSITION, 2: DELETE VALUE, 3: DELETE BEFORE, 4: DELETE AFTER)" << endl;
//    cout << "Which delete we will use:";
//}
//
////messages
//void incorrectPosition()
//{
//    cout << "You entered incorrect position!" << endl;
//}
//void elementNotFound()
//{
//    cout << "Element not found!" << endl;
//}
//void listIsEmpty()
//{
//    cout << "List is empty!" << endl;
//}
//void listIsAlreadyInitialized()
//{
//    cout << "List is already initialized!" << endl;
//}
//void deletedElement(int value)
//{
//    cout << "Deleted element is: " << value << endl;
//}
//
////is unique key
//bool isUniqueKey(List* head, int key)
//{
//    List* pv = head;
//    while (pv != NULL)
//    {
//        if (pv->key == key)
//        {
//            cout << "Key that you entered is already exsist!" << endl;
//            return false;
//        }
//        pv = pv->next;
//    }
//    return true;
//}
//
////create
//List* Create(List* head, int value, int key, int* size)
//{
//    if (*size == 0)
//    {
//        List* pv = new List;
//        pv->value = value;
//        pv->key = key;
//        pv->next = NULL;
//        *size = 1;
//        return pv;
//    }
//    else
//    {
//        listIsAlreadyInitialized();
//        return head;
//    }
//}
//
////print
//void print(List* head)
//{
//    if (head != NULL)
//    {
//        List* pv = head;
//        while (pv != NULL)
//        {
//            cout << "L(v:" << pv->value << ", k:" << pv->key << "), ";
//            pv = pv->next;
//        }
//        cout << endl;
//    }
//    else
//    {
//        listIsEmpty();
//    }
//}
//
////insert
//List* insert(List* head, char value, int* size)
//{
//    if (head != NULL)
//    {
//        List* current_element = head;
//        List* pv = new List;
//        pv->value = value;
//        pv->next = NULL;
//        while (current_element->next != NULL)
//        {
//            current_element = current_element->next;
//        }
//        current_element->next = pv;
//        *size += 1;
//    }
//    return head;
//}
//List* insertPosition(List* head, int position, int value, int key, int* size)
//{
//    if (1 <= position && position <= *size + 1)
//    {
//        List* current_element = head;
//        List* pv = new List;
//        pv->value = value;
//        pv->key = key;
//        int current_position = 1;
//        if (position == current_position)
//        {
//            pv->next = head;
//            head = pv;
//        }
//        else if(position == *size + 1)
//        {
//            pv->next = NULL;
//            while (current_element->next != NULL)
//            {
//                current_element = current_element->next;
//            }
//            current_element->next = pv;
//        }
//        else
//        {
//            while (current_position != position - 1)
//            {
//                current_element = current_element->next;
//                current_position++;
//            }
//            pv->next = current_element->next;
//            current_element->next = pv;
//        }
//        *size += 1;
//    }
//    else
//    {
//        incorrectPosition();
//    }
//    return head;
//}
//List* insertBefore(List* head, int element, int value, int key, int* size)
//{
//    if (head != NULL)
//    {
//        List* current_element = head;
//        int position = 1;
//        bool found = false;
//        while (current_element != NULL)
//        {
//            if (current_element->value == element)
//            {
//                found = true;
//                break;
//            }
//            position++;
//            current_element = current_element->next;
//        }
//        if (found)
//        {
//            head = insertPosition(head, position, value, key, size);
//        }
//        else
//        {
//            elementNotFound();
//        }
//    }
//    return head;
//}
//List* insertAfter(List* head, int element, int value, int key, int* size)
//{
//    if (head != NULL)
//    {
//        List* current_element = head;
//        int position = 1;
//        bool found = false;
//        while (current_element != NULL)
//        {
//            if (current_element->value == element)
//            {
//                found = true;
//                break;
//            }
//            position++;
//            current_element = current_element->next;
//        }
//        if (found)
//        {
//            head = insertPosition(head, position + 1, value, key, size);
//        }
//        else
//        {
//            elementNotFound();
//        }
//    }
//    return head;
//}
//
////delete
//List* deletePosition(List* head, int position, int* size)
//{
//    if (1 <= position && position <= *size)
//    {
//        int current_position = 1;
//        List* pv = head;
//        List* current_element = head;
//        int value;
//        if (position == 1)
//        {
//            current_element = current_element->next;
//            value = head->value;
//            delete head;
//            head = current_element;
//        }
//        else if (position == *size)
//        {
//            while (current_position != *size - 1)
//            {
//                pv = pv->next;
//                current_position++;
//            }
//            current_element = pv->next;
//            pv->next = NULL;
//            value = current_element->value;
//            delete current_element;
//        }
//        else
//        {
//            while (current_position != position - 1)
//            {
//                current_position++;
//                pv = pv->next;
//            }
//            current_element = pv;
//            pv = pv->next;
//            List* link = pv->next;
//            value = pv->value;
//            delete pv;
//            current_element->next = link;
//        }
//        *size -= 1;
//        deletedElement(value);
//    }
//    else
//    {
//        incorrectPosition();
//    }
//    return head;
//}
//List* deleteValue(List* head, int value, int* size)
//{
//    if (head != NULL)
//    {
//        List* current_element = head;
//        int position = 1;
//        bool found = false;
//        while (current_element != NULL)
//        {
//            if (current_element->value == value)
//            {
//                found = true;
//                break;
//            }
//            position++;
//            current_element = current_element->next;
//        }
//        if (found)
//        {
//            head = deletePosition(head, position, size);
//        }
//        else
//        {
//            elementNotFound();
//        }
//    }
//    return head;
//}
//List* deleteBefore(List* head, int value, int* size)
//{
//    if (head != NULL)
//    {
//        List* current_element = head;
//        int position = 1;
//        bool found = false;
//        while (current_element != NULL)
//        {
//            if (current_element->value == value)
//            {
//                found = true;
//                break;
//            }
//            position++;
//            current_element = current_element->next;
//        }
//        if ((found) && (position - 1 > 0))
//        {
//            head = deletePosition(head, position - 1, size);
//        }
//        else
//        {
//            elementNotFound();
//        }
//    }
//    return head;
//}
//List* deleteAfter(List* head, int value, int* size)
//{
//    if (head != NULL)
//    {
//        List* current_element = head;
//        int position = 1;
//        bool found = false;
//        while (current_element != NULL)
//        {
//            if (current_element->value == value)
//            {
//                found = true;
//                break;
//            }
//            position++;
//            current_element = current_element->next;
//        }
//        if ((found) && (position + 1 < *size))
//        {
//            head = deletePosition(head, position + 1, size);
//        }
//        else
//        {
//            elementNotFound();
//        }
//    }
//    return head;
//}
//
////search
//void searchValue(List* head, int value)
//{
//    if (head != NULL)
//    {
//        List* pv = head;
//        int position = 0;
//        bool found = false;
//        while (pv != NULL)
//        {
//            position++;
//            if (pv->value == value)
//            {
//                found = true;
//                cout << "Value that you entered is found at index: " << position << " = L(v:" << pv->value << ", k:" << pv->key << ")" << endl;
//            }
//            pv = pv->next;
//        }
//        if (!found)
//        {
//            elementNotFound();
//        }
//    }
//}
//void searchKey(List* head, int key)
//{
//    if (head != NULL)
//    {
//        List* pv = head;
//        int position = 0;
//        bool found = false;
//        while (pv != NULL)
//        {
//            position++;
//            if (pv->key == key)
//            {
//                found = true;
//                cout << "Key that you entered is found at index: " << position << " = L(v:" << pv->value << ", k:" << pv->key << ")" << endl;
//            }
//            pv = pv->next;
//        }
//        if (!found)
//        {
//            elementNotFound();
//        }
//    }
//}
//
////clear
//List* Clear(List* head, int* size)
//{
//    if (head != NULL)
//    {
//        List* pv = head;
//        List* current_element = head;
//        while (pv != NULL)
//        {
//            current_element = pv->next;
//            *pv = {};
//            pv = current_element;
//        }
//        *size = 1;
//    }
//    return head;
//}