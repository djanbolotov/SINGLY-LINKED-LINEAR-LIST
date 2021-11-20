//#include <iostream>
//using namespace std;
//
//struct List {
//    char value;
//    List* next;
//};
//
//void print(List*);
//
//List* wordChange(List*, string, int*);
//
//List* insertPosition(List*, int, char, int*);
//List* insert(List* head, char value, int* size);
//
//List* deletePosition(List*, int, int*);
//List* deleteValue(List*, char, int*);
//
//List* Create(List*, char, int*);
//List* Clear(List*, int*);
//
//int getVariant(int);
//char getValue();
//int getPosition();
//
//void printMenu();
//void printDeleteMenu();
//
//void incorrectPosition();
//void elementNotFound();
//void listIsEmpty();
//void listIsAlreadyInitialized();
//void deletedElement(char value);
//
//int main()
//{
//    List* head = NULL;
//    List* head2 = NULL;
//    int position, size = 0;
//    int select_menu, select_delete;
//    char value;
//    string word;
//
//    do {
//        system("CLS");
//        cout << "Word: " << word << endl;
//        printMenu();
//        select_menu = getVariant(7);
//        if (select_menu != 5 && select_menu != 7)
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
//            cout << "Enter any word: ";
//            cin >> word;
//            head = wordChange(head, word, &size);
//            break;
//        }
//        if (select_menu != 5 && select_menu != 7)
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
//char getValue()
//{
//    char value;
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
//    cout << "(1: INITIALIZE, 2: INSERT, 3: DELETE, 4: CLEAR, 5: PRINT, 6: CHANGE WORD, 7: EXIT)" << endl;
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
//void deletedElement(char value)
//{
//    cout << "Deleted element is: " << value << endl;
//}
//
////create
//List* Create(List* head, char value, int* size)
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
//            cout << pv->value << "-";
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
//List* insertPosition(List* head, int position, char value, int* size)
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
//        else if (position == *size + 1)
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
//List* insert(List* head, char value, int* size)
//{
//    if (head != NULL)
//    {
//        List* current_element = head;
//        List* pv = new List;
//        pv->value = value;
//        int current_position = 1;
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
//List* deleteValue(List* head, char value, int* size)
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
////change word
//List* wordChange(List* head, string word, int* size)
//{
//    if (head == NULL)
//    {
//        if (word[0] == (char)65 || word[0] == (char)97)
//        {
//            head = Create(head, word[0], size);
//            for (int i = 1; i < word.length(); i++)
//            {
//                head = insert(head, word[i], size);
//            }
//            head = insert(head, word[0], size);
//        }
//        else
//        {
//            head = Create(head, word[0], size);
//            for (int i = 1; i < word.length(); i++)
//            {
//                if (word[i] == 65 || word[i] == 97)
//                {
//                    continue;
//                }
//                else
//                {
//                    head = insert(head, word[i], size);
//                }
//            }
//        }
//    }
//    else
//    {
//        cout << "Please empty the list!" << endl;
//    }
//    return head;
//}