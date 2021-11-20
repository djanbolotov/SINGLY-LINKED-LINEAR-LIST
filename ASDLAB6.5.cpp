//#include <iostream>
//using namespace std;
//
//struct List {
//    int value;
//    List* next;
//};
//
//void print(List*);
//
//List* insertPosition(List*, int, int, int*);
//
//List* deletePosition(List*, int, int*);
//List* deleteValue(List*, int, int*);
//
//List* Create(List*, int, int*);
//List* Clear(List*, int*);
//List* Sort(List*, int);
//
//int getVariant(int);
//int getValue();
//int getPosition();
//
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
//    int value, position, size = 0;
//    int select_menu, select_delete;
//
//    do {
//        system("CLS");
//        printMenu();
//        select_menu = getVariant(7);
//        if (select_menu != 5)
//        {
//            print(head);
//        }
//        switch (select_menu) 
//        {
//        case 1:
//            value = getValue();
//            head = Create(head, value, &size);
//            break;
//        case 2:
//            position = getPosition();
//            value = getValue();
//            head = insertPosition(head, position, value, &size);
//            break;
//        case 3:
//            printDeleteMenu();
//            select_delete = getVariant(2);
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
//            }
//            break;
//        case 4:
//            head = Clear(head, &size);
//            break;
//        case 5:
//            print(head);
//            break;
//        case 6:
//            head = Sort(head, size);
//            break;
//        }
//        if (select_menu != 5)
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
//    cout << "(1: INITIALIZE, 2: INSERT, 3: DELETE, 4: CLEAR, 5: PRINT, 6: SORT, 7: EXIT)" << endl;
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
//List* Sort(List* head, int size)
//{
//    if (size > 1)
//    {
//        List* pv = head;
//        List* max, * p2;
//        int maxIndex, reverse_count = size;
//        for (int current_index = 1; current_index <= size; current_index++)
//        {
//            maxIndex = 1;
//            max = head;
//            p2 = max->next;
//            for (int j = 2; j <= reverse_count; j++)
//            {
//                if (max->value < p2->value)
//                {
//                    max = p2;
//                    maxIndex = j;
//                }
//                p2 = p2->next;
//            }
//            p2 = head;
//            if (maxIndex == 1)
//            {
//                head = max->next;
//            }
//            else
//            {
//                while (p2->next != max)
//                {
//                    p2 = p2->next;
//                }
//                p2->next = max->next;
//            }
//            while (p2->next != NULL)
//            {
//                p2 = p2->next;
//            }
//            p2->next = max;
//            pv = pv->next;
//            max->next = NULL;
//            reverse_count--;
//        }
//    }
//    return head;
//}