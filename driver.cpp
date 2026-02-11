// #include <iostream>
// #include <string>
// #include "LinkedList.hpp"

// using namespace std;

// struct Person {
//     string name;
//     int age;

//     Person(string n = "", int a = 0) : name(n), age(a) {}
// };

// // Overload << for Person so LinkedList can print it
// ostream& operator<<(ostream& os, const Person& p) {
//     os << "{ " << p.name << ", " << p.age << " }";
//     return os;
// }

// int main() {

//     LinkedList<int> list;

//     cout << "\nInitial state:\n";
//     cout << "Length: " << list.getLength() << endl;
//     cout << "Is Empty? " << (list.isEmpty() ? "Yes" : "No") << endl;
//     cout << list;

//     // Append
//     list.append(10);
//     list.append(20);
//     list.append(30);
//     cout << "\nAfter append 10, 20, 30:\n" << list;

//     // Insert at head
//     list.insert(0, 5);
//     cout << "\nAfter insert(0, 5):\n" << list;

//     // Insert in middle
//     list.insert(2, 15);
//     cout << "\nAfter insert(2, 15):\n" << list;

//     // Insert at end
//     list.insert(list.getLength(), 40);
//     cout << "\nAfter insert at end (40):\n" << list;

//     // getElement
//     cout << "\ngetElement tests:\n";
//     cout << "Position 0: " << list.getElement(0) << endl;
//     cout << "Position 3: " << list.getElement(3) << endl;
//     cout << "Last Position: " << list.getElement(list.getLength() - 1) << endl;

//     // Replace
//     list.replace(1, 999);
//     cout << "\nAfter replace(1, 999):\n" << list;

//     // Remove head
//     list.remove(0);
//     cout << "\nAfter remove(0):\n" << list;

//     // Remove middle
//     list.remove(2);
//     cout << "\nAfter remove(2):\n" << list;

//     // Remove last
//     list.remove(list.getLength() - 1);
//     cout << "\nAfter remove(last):\n" << list;

//     // Copy constructor
//     LinkedList<int> copyList(list);
//     cout << "\nCopy constructed list:\n" << copyList;

//     // Assignment operator
//     LinkedList<int> assignList;
//     assignList.append(111);
//     assignList.append(222);
//     cout << "\nBefore assignment:\n" << assignList;

//     assignList = list;
//     cout << "\nAfter assignment:\n" << assignList;

//     // Deep copy test
//     list.replace(0, 7777);
//     cout << "\nOriginal after replace(0, 7777):\n" << list;
//     cout << "Copy should remain unchanged:\n" << copyList;

//     // Exception tests
//     cout << "\nException tests:\n";
//     try {
//         list.getElement(-1);
//     } catch (string e) {
//         cout << e << endl;
//     }

//     try {
//         list.insert(-1, 100);
//     } catch (string e) {
//         cout << e << endl;
//     }

//     try {
//         list.remove(100);
//     } catch (string e) {
//         cout << e << endl;
//     }

//     // Clear
//     list.clear();
//     cout << "\nAfter clear():\n" << list;
//     cout << "Length: " << list.getLength() << endl;
//     cout << "Is Empty? " << (list.isEmpty() ? "Yes" : "No") << endl;



//     LinkedList<string> strList;

//     strList.append("Alice");
//     strList.append("Bob");
//     strList.append("Charlie");

//     cout << "\nString list:\n" << strList;

//     strList.insert(1, "Zara");
//     cout << "\nAfter insert(1, Zara):\n" << strList;

//     strList.remove(2);
//     cout << "\nAfter remove(2):\n" << strList;

//     strList.replace(0, "UpdatedAlice");
//     cout << "\nAfter replace(0):\n" << strList;

//     LinkedList<Person> people;

//     people.append(Person("John", 25));
//     people.append(Person("Emma", 30));
//     people.append(Person("Liam", 22));

//     cout << "\nPeople list:\n" << people;

//     people.insert(1, Person("Sophia", 28));
//     cout << "\nAfter insert(1, Sophia):\n" << people;

//     people.remove(0);
//     cout << "\nAfter remove(0):\n" << people;

//     people.replace(1, Person("Updated", 99));
//     cout << "\nAfter replace(1):\n" << people;

//     cout << "\nAll tests completed successfully.\n";

//     return 0;
// }
