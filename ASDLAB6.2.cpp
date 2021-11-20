//#include <iostream>
//using namespace std;
//
//struct List {
//    int value;
//    List* next;
//};
//
//void print(List*);
//void printMini();
//void printAddress(List*);
//
//List* insertPosition(List*, int, int, int*);
//
//List* deletePosition(List*, int, int*);
//List* deleteValue(List*, int, int*);
//
//List* Create(List*, int, int*);
//List* Clear(List*, int*);
//List* Concatinate(List*, List*, List*, List**, List**);
//List* Concatinate(List*, List*, List**);
//
//int getVariant(int);
//int getValue();
//int getPosition();
//
//void printMenu();
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
//    List* head2 = NULL;
//    List* head3 = NULL;
//    List** Head = &head;
//    List** Head2 = &head2;
//    List** Head3 = &head3;
//    int value, position, size3 = 0, size2 = 0, size = 0;
//    int select_menu, select_delete, main_menu;
//
//    do {
//        system("CLS");
//        cout << "1: FIRST LIST, 2: SECOND LIST, 3: THIRD LIST, 4: CONCATINATE, 5 CONCATINATED LIST, 6: EXIT" << endl;
//        main_menu = getVariant(6);
//        switch (main_menu)
//        {
//        case 1:
//            do {
//                system("CLS");
//                cout << "First list!!!" << endl;
//                printMini();
//                select_menu = getVariant(5);
//                if (select_menu < 4)
//                {
//                    print(head);
//                }
//                switch (select_menu)
//                {
//                case 1:
//                    value = getValue();
//                    head = Create(head, value, &size);
//                    break;
//                case 2:
//                    position = getPosition();
//                    value = getValue();
//                    head = insertPosition(head, position, value, &size);
//                    break;
//                case 3:
//                    printDeleteMenu();
//                    select_delete = getVariant(2);
//                    switch (select_delete)
//                    {
//                    case 1:
//                        position = getPosition();
//                        head = deletePosition(head, position, &size);
//                        break;
//                    case 2:
//                        value = getValue();
//                        head = deleteValue(head, value, &size);
//                        break;
//                    }
//                    break;
//                case 4:
//                    print(head);
//                    break;
//                }
//                system("pause");
//            } while (select_menu != 5);
//            break;
//        case 2:
//            do {
//                system("CLS");
//                cout << "Second list!!!" << endl;
//                printMini();
//                select_menu = getVariant(5);
//                if (select_menu < 4)
//                {
//                    print(head2);
//                }
//                switch (select_menu)
//                {
//                case 1:
//                    value = getValue();
//                    head2 = Create(head2, value, &size2);
//                    break;
//                case 2:
//                    position = getPosition();
//                    value = getValue();
//                    head2 = insertPosition(head2, position, value, &size2);
//                    break;
//                case 3:
//                    printDeleteMenu();
//                    select_delete = getVariant(2);
//                    switch (select_delete)
//                    {
//                    case 1:
//                        position = getPosition();
//                        head2 = deletePosition(head2, position, &size2);
//                        break;
//                    case 2:
//                        value = getValue();
//                        head2 = deleteValue(head2, value, &size2);
//                        break;
//                    }
//                    break;
//                case 4:
//                    print(head2);
//                    break;
//                }
//                system("pause");
//            } while (select_menu != 5);
//            break;
//        case 3:
//            do {
//                system("CLS");
//                cout << "Third list!!!" << endl;
//                printMini();
//                select_menu = getVariant(5);
//                if (select_menu < 4)
//                {
//                    print(head3);
//                }
//                switch (select_menu)
//                {
//                case 1:
//                    value = getValue();
//                    head3 = Create(head3, value, &size3);
//                    break;
//                case 2:
//                    position = getPosition();
//                    value = getValue();
//                    head3 = insertPosition(head3, position, value, &size3);
//                    break;
//                case 3:
//                    printDeleteMenu();
//                    select_delete = getVariant(2);
//                    switch (select_delete)
//                    {
//                    case 1:
//                        position = getPosition();
//                        head3 = deletePosition(head3, position, &size3);
//                        break;
//                    case 2:
//                        value = getValue();
//                        head3 = deleteValue(head3, value, &size3);
//                        break;
//                    }
//                    break;
//                case 4:
//                    print(head3);
//                    break;
//                }
//                system("pause");
//            } while (select_menu != 5);
//            break;
//        case 4:
//            do {
//                system("CLS");
//                cout << "1: CONCATIINATE (1 + 3), 2: CONCATINATE (2 + 1), 3: CONCATINATE (3 + 2 + 1), 4: EXIT" << endl;
//                select_menu = getVariant(4);
//                switch (select_menu)
//                {
//                case 1:
//                    cout << "First list:" << endl;
//                    printAddress(head);
//                    cout << "Third list:" << endl;
//                    printAddress(head3);
//                    head = Concatinate(head, head3, Head3);
//                    cout << "Concatinated list:" << endl;
//                    printAddress(head);
//                    size = size + size3;
//                    size3 = 0;
//                    break;
//                case 2:
//                    cout << "First list:" << endl;
//                    printAddress(head);
//                    cout << "Second list:" << endl;
//                    printAddress(head2);
//                    head = Concatinate(head2, head, Head2);
//                    cout << "Concatinated list:" << endl;
//                    printAddress(head);
//                    size = size + size2;
//                    size2 = 0;
//                    break;
//                case 3:
//                    cout << "First list:" << endl;
//                    printAddress(head);
//                    cout << "Second list:" << endl;
//                    printAddress(head2);
//                    cout << "Third list:" << endl;
//                    printAddress(head3);
//                    head = Concatinate(head2, head3, head, Head2, Head3);
//                    cout << "Concatinated list:" << endl;
//                    printAddress(head);
//                    size = size + size2 + size3;
//                    size2 = 0;
//                    size3 = 0;
//                    break;
//                }
//                system("pause");
//            } while (select_menu != 4);
//            break;
//        case 5:
//            do {
//                system("CLS");
//                printMenu();
//                select_menu = getVariant(6);
//                if (select_menu < 5)
//                {
//                    print(head);
//                }
//                switch (select_menu)
//                {
//                case 1:
//                    value = getValue();
//                    head = Create(head, value, &size);
//                    break;
//                case 2:
//                    position = getPosition();
//                    value = getValue();
//                    head = insertPosition(head, position, value, &size);
//                    break;
//                case 3:
//                    printDeleteMenu();
//                    select_delete = getVariant(2);
//                    switch (select_delete)
//                    {
//                    case 1:
//                        position = getPosition();
//                        head = deletePosition(head, position, &size);
//                        break;
//                    case 2:
//                        value = getValue();
//                        head = deleteValue(head, value, &size);
//                        break;
//                    }
//                    break;
//                case 4:
//                    head = Clear(head, &size);
//                    break;
//                case 5:
//                    print(head);
//                    break;
//                }
//                if (select_menu < 5)
//                {
//                    print(head);
//                }
//                if (select_menu != 6)
//                {
//                    system("pause");
//                }
//            } while (select_menu != 6);
//            break;
//        }
//    } while (main_menu != 6);
//
//    return 0;
//}
//
////get values
//int getValue()
//{
//    int value;
//    cout << "Enter value: ";
//    cin >> value;
//    return value;
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
//    cout << "(1: INITIALIZE, 2: INSERT, 3: DELETE, 4: CLEAR, 5: PRINT, 6: EXIT)" << endl;
//    cout << "Select any value you want:";
//}
//void printMini()
//{
//    cout << "(1: INITIALIZE, 2: INSERT, 3: DELETE, 4: PRINT, 5: EXIT)" << endl;
//    cout << "Select any value you want:";
//}
//void printDeleteMenu()
//{
//    cout << "(1: DELETE POSITION, 2: DELETE VALUE)" << endl;
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
////create
//List* Create(List* head, int value, int* size)
//{
//    if (*size == 0)
//    {
//        List* pv = new List;
//        pv->value = value;
//        pv->next = NULL;
//        *size = 1;
//        head = pv;
//    }
//    else
//    {
//        listIsAlreadyInitialized();
//    }
//    return head;
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
//            cout << "L(v:" << pv->value << "), ";
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
//void printAddress(List* head)
//{
//    if (head != NULL)
//    {
//        List* pv = head;
//        while (pv != NULL)
//        {
//            cout << pv << ", ";
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
//List* insertPosition(List* head, int position, int value, int* size)
//{
//    if (1 <= position && position <= *size + 1)
//    {
//        List* current_element = head;
//        List* pv = new List;
//        pv->value = value;
//        int current_position = 1;
//        if (position == current_position)
//        {
//            pv->next = head;
//            *size += 1;
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
//            *size += 1;
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
//            *size += 1;
//        }
//    }
//    else
//    {
//        incorrectPosition();
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
//        List* current_element = head->next;
//        int value;
//        if (position == 1)
//        {
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
//
////concatinate
//List* Concatinate(List* head, List* head2, List** Head2)
//{
//    if (head != NULL && head2 != NULL)
//    {
//        List* pv = head;
//        while (pv->next != NULL)
//        {
//            pv = pv->next;
//        }
//        pv->next = head2;
//        *Head2 = NULL;
//    }
//    else
//    {
//        cout << "One of the lists is empty!" << endl;
//    }
//    return head;
//}
//List* Concatinate(List* head, List* head2, List* head3, List** Head2, List** Head3)
//{
//    if (head != NULL && head2 != NULL && head3 != NULL)
//    {
//        List* pv = head;
//        while (pv->next != NULL)
//        {
//            pv = pv->next;
//        }
//        pv->next = head2;
//        while (pv->next != NULL)
//        {
//            pv = pv->next;
//        }
//        pv->next = head3;
//        *Head2 = NULL;
//        *Head3 = NULL;
//    }
//    else
//    {
//        cout << "One of the lists is empty!" << endl;
//    }
//    return head;
//}