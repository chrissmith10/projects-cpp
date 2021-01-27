// c++ tutorial from YouTube video: C++ Tutorial 2020

// Comment

#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include "Shape.h"
#include "Circle.h"
#include <fstream>
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <mutex>
#include <deque>
#include <list>
#include <forward_list>
#include <regex>

using namespace std;

double AddNumbers(double num1, double num2);

int AssignAge2(int age);
void AssignAge3(int* pAge);
void DoubleArray(int *arr, int size);)

int imGlobal = 0;
const double PI = 3.141;

void ShowArea(Shape& shape);

class Box{
publc:
  double length, width, breadth;
  string boxString;
  Box(){
    length = 1, width = 1, breadth = 1;
  }
  Box(double l, double w, double b){
    length = l, width = w, breadth = b;
  }

  Box& operator ++(){
    length++;
    width++;
    breadth++;
    return *this;
  }
  operator const char*(){
    ostringstream boxStream;
    boxStream << "Box : " <<
      length << ", " <<
      width << ", " <<
      breadth;
    boxString = boxStream.str();
    return boxString.c_str();
  }

  Box operator + (const Box& box2){
    Box boxSum;
    boxSum.length = length + box2.length;
    boxSum.width = width + box2.width;
    boxSum.breadth = breadth + box2.breadth;
    return boxSum;
  }
  bool operator == (const Box& box2){
    return ((length = box2.length) && (width == box2.width) && (breadth == box2.breadth));
  }
};

vector<int> Generate RandVect(int numOfNums, int min, int max);

double MultBy2(double num) {
    return num * 2;
}

double DoMath(function<double(double)> func, double num){
    return func(num);
}

double MultBy3(double num){
    return num * 3
}

#define PI 3.14159
#define AREA_CIRCLE(radius) (PI * pow(radius, 2))

template <typename T>
void Times2(T val){
    cout << val << " * 2 = " << val * 2 << endl;
}

template <typename T>
T Add(T val, T val2){
    return val + val2;
}

template <typename T>
T Max(T val, T val2){
    return (val < val2) > val2 : val;
}

template <typename T, typename U>
class Person{
    public:
        T height;
        U weight;
        static int numOfPeople;
        Person(T h, U w){
            height = h, weight = w;
            numOfPeople++;
        }
        void GetData(){
            cout << "Height : " << height << " and weight : " << weight << endl;
        }
};

template<typename T, typename U> int Person<T, U>::numOfPeople;

int GetRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

void ExecuteThread(int id){
    auto nowTime = chrono::system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime)
    tm myLocalTime = *localtime(&sleepTime);
    cout << "Thread " << id << "Sleep Time : " << ctime(&sleepTime) << endl;
    cout << "Month : " << myLocalTime.tm_mon << endl;
    cout << "Day : " << myLocalTime.tm_mday << endl;
    cout << "Year : " << myLocalTime.tm_year + 1900 << endl;
    cout << "Hours" : " << myLocalTime.tm_hour << endl;
    cout << "Hours" : " << myLocalTime.tm_hour << endl;
    cout << "Minutes" : " << myLocalTime.tm_min << endl;
    cout << "Seconds" : " << myLocalTime.tm_sec << endl;
    this_thread::sleep_for (chrono::seconds(GetRandom(3));
    nowTime = chrono::system_clock::now();
    sleepTime =
        chrono::system_clock::to_time_t(nowTime);
        cout << "Thread " << id << "Awake Time: " << ctime(&sleepTime) << endl;
}


//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {

    cout << "Hello World" << endl;

    bool married = true;
    char myGrade = 'A';
    short int smallNum = 10;
    long longNum = 113417904174;
    float f1 = 1.123456;
    float f2 = 1.12345678;
    double d1 = 1.123456789012345678;
    auto whatAmI = true;
    cout << "int Bytes : " << sizeof(int) << endl;

    printf("Sum = %.7f\n", (f1 + f2));

    printf("%c %d %5d %.3f %s"\n, 'A',
        10, 5, 74, 23, 5.56);

    string q1 = "Enter a Nuber : ";
    string num1, num2;
    cout << q1;
    cin >> num1;
    cout << "Enter Another Number : ";
    cin << num2;
    int nNum1 = stoi(num1);
    int nNum2 = stoi(num2);
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));

    // Conditional Operators : > < >= <= == !=
    // Logical Operators : && || !

    string sAge;
    cout << "Enter your age : ";
    cin >> sAge;
    int nAge = stoi(sAge);

    if ((nAge >= 1) && (nAge <= 18)){
      cout << "Important Birthday" << endl;
    } else if ((nAge == 21) || (nAge == 50)){
      cout << "Sort of Important Birthday" << endl;
    } else if (nAge >= 65){
      cout << "Very Important Birthday, and you're old" << endl;
    } else {
      cout << Not an Important Birthday" << endl;
    }

    int age43 = 43;
    bool canIVote = (age43 >= 18) ? true : false;
    cout.setf(ios::boolalpha);
    cout << "Can Derek Vote : " << canIVote << endl;

    int arrnNums [10] = {1};
    int arrnNums2[] = {1, 2, 3};
    int arrnNums3[5] = {8, 9};
    cout << "1st value: " << arrnNums3[0] << endl;
    arrnNums3[0] = 7;
    cout << "1st value: " << arrnNums3[0] << endl;
    int arrnNums4[2][2][2] = {{{1, 2,}, {3, 4}}, {{5, 6}, {7, 8}}};
    cout << arrnNums4[0][1][1] << endl;

    // Vectors
    vector<int> vNums(2);
    vNums[0] = 1;
    vNums[1] = 2;
    vNums.push_back(3);
    cout << "Vector Size: " << vNums.size() << endl;

    // Loops
    int i = 1;
    while (i <= 20){
      if((i % 2)) == 0){
        i += 1;
        continue;
      }
      if(i == 15) break;
      cout << i << endl;
      i += 1;
    }

    vector<string> words;
    stringstream ss("Some Random Words");
    string word;
    while(getline(ss, word, ' ')){
      words.push_back(word);

    }
    for(int i = 0; i < words.size(); ++i){
      cout << words[i] << endl;
    }

    int arr3[] = {1, 2, 3};
    for(auto x: arr3) cout << x << endl;

    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    do{
      cout << "Guess the Number: ";
      cin >> guess;
      if(guess > secretNum) cout << "To Big\n";
      if(guess > secretNum) cout << "To Small\n";
    } while(secretNum != guess);
    cout << "You Guessed it" << endl;

    // Strings
    string str1 = "I'm a string";
    cout << "1st : " << str1[0] << endl;
    cout << "last : " << str1.back() << endl;
    cout << "Length : " << str1.length() << endl;
    string str2 = str1;
    string str3(str2, 4);
    string str4 = str1 + " and you're not";
    str4.append("!");
    str4.erase(12, str4.length() - 1);
    cout << "New String" << str4 << endl;
    if (str4.find("string") != string::npos)
      cout << "string Index: " <<
        str4.find("string") << endl;
    cout << "Substring : " << str4.substr(6, 6) << ersubstr(x, y)
    string strNum = to_string(1+2);
    cout << " I'm a string : " << strNum << endl;
    char letterZ = 'z';
    char num5 = '5';
    char aSpce = ' ';
    cout << "Is z a letter or number" <<
      isalnum(letterZ) << endl;
    cout << "Is z a letter" <<
      isalpha(letterZ) << endl;
    cout << "Is 5 a number" <<
      isdigit(num5) << endl;
    cout << "Is space a space" <<
      isspace(aSpace) << endl;

    // Math functions -> en.cppreference.com/w/cpp/numeric/math
    cout << "abs(-10) = " << abs(-10) << endl;
    cout << "max(5, 4) = " << max(5, 4) << endl;
    cout << "min(5, 4) = " << min(5, 4) << endl;
    cout << "fmax(5.3, 4.3) = " << fmax(5.3, 4.3) << endl;
    cout << "fmin(5.3, 4.3) = " << fmin(5.3, 4.3) << endl;
    cout << "ceil(10.45) = " << ceil(10.45) << endl;
    cout << "floor(10.45) = " << floor(10.45) << endl;
    cout << "round(10.45) = " << round(10.45) << endl;
    cout << "pow(2, 3) = " << pow(2, 3) << endl;
    cout << "sqrt(100) = " << sqrt(100) << endl;
    cout << "cbrt(1000) = " << cbrt(1000) << endl;
    cout << "exp(1) = " << exp(1) << endl;
    cout << "exp2(1) = " << exp2(1) << endl;
    cout << "log(20.079) = " << log(20.079) << endl;
    cout << "log2(8) = " << log2(8) << endl;
    cout << "hypot(2, 3) = " << hypot(2, 3) << endl; // sin(), acos(), atanh()

    printf("%.1f + %.1f = %.1f", 5.0, 4.0, AddNumbers(5, 4));

    // Function
    int age1 = 20;
    age1 = AssignAge2(age1);
    cout << age1;

    // Pointer
    int age2 = 20;
    AssignAge3(&age2);
    cout << age2;

    int age2 = 57;
    int* pAge2 = NULL;
    pAge2 = &age2;
    cout << "Address : " << pAge2 << endl;
    cout << "Value : " << *pAge2 << endl;

    int intArray[] = {1, 2, 3, 4};
    int* pIntArray = intArray;
    cout << "1st " << pIntArray << endl;
    cout << "2nd " << pIntArray << endl;

    DoubleArray(intArray, 4);
    for(int i = 0; i < 4; ++i){
        cout << "Array " << intArray[i] << endl;
    }

    // Exceptions
    double num3 = 10, num4 = 0;
    try{
        if(num4 == 0){
            throw "Division by Zero Error";
        } else {
            printf("%.1f / %.1f = %.1f", num3, num4, (num3 / num4));
        }
    }
    catch(const char* exp){
        cout << "Error : " << exp << endl;
    }

    // Objects and classes, simulate real objects that have attributes/fields and capabilities/methods
    Shape square(10, 5);
    Circle circle(10);
    ShowArea(square);
    ShowArea(circle);

    // Abstract Classes
class Shape{
public:
    virtual double Area() = 0;

};

class Circle : public Shape{
protected:
    double width;
public:
    Circle(double w){
        width = w;
    }
    double Area() override
        return 3.14159 * pow((width / 2), 2);
};

    // struct
struct Shape{
  double length, width;
  Shape(double l = 1, double w = 1){
      length = l;
      width = w;
  }
  double Area(){
      return length * width;
  }
private:
    int id;
};

struct Circle : Shape{
    Circle(double width){
        this->width = width;
    }
    double Area(){
        return 3.14159 * pow((width))
    }
}

    Shape shape(10, 10);
    cout << "Square Area : " << shape.Area() << endl;
    Circle circle(10);
    cout << "Circle Area : " << circle.Area() << endl;
    Shape rectangle{10, 15};
    cout << "Rectangle Area : " << rectangle.Area;

// Operator Overload
    Box box(10, 10, 10);
    ++box;
    cout << box << endl;
    Box box2(5, 5, 5);
    cout << "Box1 + Box2 = " << box + box2 << endl;
    cout << "Box1 == Box2 = " << box == box2 << endl;


// Lambda
vector<int> vecVals = GenerateRandVect(10, 1, 50);
sort(vecVals.begin(), vecVals.end(), [](int x, int y;){return x < y});
    for(auto val: vecVals) cout << val << endl;

    vector<int> evenVecVals;
    copy_if(vecVals.begin(), vecVals.end(), back_inserter(evenVecVals), [](int x){return (x % 2) == 0; };
    for(auto val: evenVecVals)
    cout << "Even Valuse: " << evenVecVals << endl;

    for_each(vecVals.begin(), vecVals.end(), [&](int x) {sum += x;});
    cout << "Sum : " << sum << endl;

// File io
    ofstream writeToFile;
    ifStream readFromFile;
    string txtToWrite = "";
    string txtFromFile = "";

    writeToFile.open("text.txt", ios_base::out | ios_base::trunc) // besidse out or you could use in, at, etce
    if(writeToFile.is.open()){
        writeToFile << "Beginning of File\n";
        cout << "Enter data to write : ";
        getline(cin, txtToWrite);
        writeToFile << txtToWrite;
        writeToFile.close();
    }

    readFromFile.open("text.txt", ios_base::in);
    if(readFromFile.is_open()){
        while(readFromFile.good()){
            getline(readFromFile, txtFromFile);
            cout << txtFromFile << endl;
        }
        readFromFile.close();
    }

// Functions as Objects
    auto times2 = MultBy2;
    cout << "5 * 2 = " << times2(5) << endl;
    cout << "6 * 2 = " << DoMath(times2, 6) << endl;

    vector<function<double(double)>> funcs(2);
    funcs[0] = MultBy2;
    funcs[1] = MultBy2;
    cout << "2 * 10 = " << funcs[0](10) << endl;

// Macros
cout << "Cricle Area" << AREA_CIRCLE(5) << endl;

// Template Functions
    Times2(5);
    Times2(5.3);

    cout << "5 + 4 = " << Add(5, 4) << endl;
    cout << "5.5 + 4.4 = " << Add(5.5, 4.4) << endl;

    cout << "Max 4 or 8 = " << Max(4, 8) << endl;
    cout << "Max A or B = " << Max('A', 'B') << endl;
    cout << "Max Dog or Cat = " << Max("Dog", "Cat") << endl;

    Person<double, int> mikeTyson(5.83, 216);
    mikeTyson.GetData();
    cout << "Number of People : " << mikeTyson.numOfPeople << endl;

// Containers -- Double Ended Queue
    deque<int> nums = {1, 2, 3, 4};
    nums.push_front(0);
    nums.push_back(5);
    for(int x: nums){
        cout << x << endl;
    }
    cout << nums[0] << endl;

// Iterators
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int>::iterator itr;
    for(itr = nums2.begin();
            itr < nums2.end();
            itr++){
        cout << *itr << endl;
    }

    vector<int>::iterator itr2 = nums2.begin();
    advance(itr2, 2);
    cout << *itr2 << endl;
    auto itr3 = nuext(itr2, 1);
    cout << *itr3 << endl;
    auto itr4 = prev(itr2, 1);
    cout << *itr4 << endl;

    vector<int> nums3 = {1, 4, 5, 6};
    vector<int> nums4 = {2, 3};
    auto itr5 = nums3.begin();
    advance(itr5, 1);
    copy(nums4.begin(), nums4.end(), inserter(nums3, itr5));
    for(int &i: nums3)
        cout << i << endl;

// Malloc/Memory Management
    int amtToStore;
    cout << "How many numbers do you want to store :"
    cin >> amtToStore;
    int * pNums;
    pNums = (int *) malloc(amToStore * sizeof(int));
    if(pNums != NULL){
        int i = 0;
        while(i < amtToStore){
            cout << "Enter a Numer : ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "You entered these numbers" << endl;
    for(int i = 0; i < amToStore; i++){
        cout << pNums[i] << endl;
    }
    delete pNums;

    int amtToStore;
    cout << "How many numbers do you want to store :"
    cin >> amtToStore;
    unique_ptr<int[]> pNums(new int[amtToStore])
    if(pNums != NULL){
        int i = 0;
        while(i < amtToStore){
            cout << "Enter a Number : ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "You entered these numbers" << endl;
    for(int i = 0; i < amToStore; i++){
        cout << pNums[i] << endl;
    }

// Threads
    thread th1 (ExecuteThread, 1);
    th1.join();

    thread th2 (ExecuteThread, 1);
    th2.join();

    deque<iunt> deq1;
    deq1.push_back(5);
    deq1.push_front(1);
    deq1.assign({11, 12});
    cout << "Size " << deq1.size() << endl;
    cout << deq1[0] << endl;
    cout << deq1.at(1) << endl;
    deque<int>::iterator it = deq1.begin() + 1;
    deq1.insert(it, 3);
    int tempArr[5] = {6, 7, 8, 9, 10};
    deq1.insert(de1.end(), tempArr, tempArr + 5);

    deq1.erase(de1.end());
    deq1.erase(deq1.begin(), deq1.begin() + 2);
    deq1.pop_front()
    deq1.pop_back();
    deque<int> deq2(2, 50);
    deq1.swap(deq2);
    deq1.clear();
    for(int i: deq1)
        cout << i << endl;

    int arr[5] {1, 2, 3, 4, 5};
    list<int> list1;
    list1.insert(list1.begin(), arr, arr+5);
    list1.assign({10, 11, 12});
    list1.push_back(5);
    list1.push_front(1);
    cout << list1.size() << endl;
    list<int>::iterator it2 = list1. begin();
    advance(it2, 1);
    cout << "2nd Index : << *it2 << endl;

    it2 = list1.begin();
    list1.insert(it2, 8);
    list1.erase(list1.begin());
    it2 = list1.begin();
    list<int>::iterator it3 = list1.begin();
    advance(it3, 2);
    list1.erase(it2, it3);

    list1.pop_front();
    list1.pop_back;

    int arr2[6] = {10, 9, 8, 7, 6, 6};
    list<int> list2;
    list2.insert(list2.begin(), arr2, arr2+5));

    list2.sort();
    list2.reverse();
    list2.unique();
    list2.remove(6);
    list2.remove_if();
    list1.merge(list2);

    for(int i: list1)
        cout << i << endl;

// Forward List
    forward_list<int> fl1;
    fl1.assign({1, 2, 3, 4});
    fl1.push_front(0);
    fl1.pop_front();
    cout << "Front " << fl1.front() << endl;
    forward_list<int>::iterator it4 = fl1.begin();
    it4 = fl1.insert_after(it4, 5);
    fl1.emplace_front(6);
    fl1.remove(6);
    foward_list<int>fl2;
    fl2.assign({9,8,7,6,6});
    fl2.unique();
    fl2.sort();
    fl2.reverse();
    fl2.merge(fl2);

    for(int i: fl1)
        cout << i << endl;

// Sets
    set<int> set1 {5,4,3,2,1,1};
    cout << "Size " << set1.size() << endl;

    set1.insert(0);
    set<int>::iterator it = set1.begin();
    it++;
    cout << "2nd " << *it << endl;
    set1.erase(5);
    it = set1.end();
    advance(it, -2);
    set1.erase(it, set1.end());

    int arr[] = {6,7,8,9};
    set1.insert(arr, arr+4);

    auto val = set1.find(6);
    cout << "Found " << *val << endl;

    auto eight = set1.lower_bound(8);
    cout << "8 " << *eight << endl;

    auto nine = set1.upper_bound(8);
    cout << "9 " << *nine << endl;

    set<int> set2 {10, 11};
    set1.swap(set2);

    for(int i : set1)
        cout << i << endl;

// Muliset
    multiset<int> mset1 {1, 2, 2, 3, 4};
    mset1.insert(4);
    mset1.insert(0);
    if(!mset1.empty()){
        for(int i : mset1)
            cout << i << endl;
    }


// Map
    map<int, string> map1;
    map1.insert(pair<int, string> (1, "Bart"));
    map1.insert(pair<int, string> (2, "Lisa"));
    map1.insert(pair<int, string> (3, "Marge"));
    map1.insert(pair<int, string> (4, "Chuck"));

    auto match = map1.find(1);
    cout << match->second << endl;

    auto bart = map1.lower_bound(1);
    cout << "LB " << bart->second << endl;
    auto lisa = map1.upper_bound(1);
    cout << "UB " lisa->second << endl;
    map<int, string>::iterator it2;
    for(it2 = map1.begin(); it2 != map1.end(); ++it2){
        cout << "Key " << it2->first << endl;
        cout << "Value " << it2->second << endl;
    }

// Container adapters -- Stacks
    stack<string> custs;
    custs.push("George");
    custs.push("Louise");
    custs.push("Florence");
    cout << "Size " << custs.size() << endl;
    if(!custs.empty()){
        for(int i = 0; i < custs.size(); i++){
            cout << custs.top() << endl;
            custs.pop();
        }
    }

// Queue
    queue<string> cast;
    cast.push("Zoidberg");
    cast.push("Bender");
    cast.push("Leela");
    int size = cast.size();
    if(!cast.empty()){
        for(int i = 0; i < size; i++){
            cout << cast.front() << endl;
            cast.pop();
        }
    }

// Priority Queue
    priority_queue<int> nums;
    nums.push(4);
    nums.push(8);
    nums.push(5);
    int size = nums.size();
    if(!nums.empty()){
        for(int i = 0; i < size; i++){
            cout << nums.top() << endl;
            nums.pop();
        }
    }

// Enumerated type
    enum day{Mon=1, Tues, Wed, Thur, Fri};
    enum day tuesday = Tues;
    count << "Tuesday is the " << tuesday << "2nd day of the week" << endl;
    for(int i = Mon; i <= Fri; i++){
        cout << i << endl;
    }

// Regular Expressions
    string str = "The ape was at the apex";
    regex reg ("(ape)[^ ]?")
    smatch matches;

    if(regex_search(str, matches, reg) == true){
        cout << matches.size() << "Matches" << endl;
        while(regex_search(str, matches, reg)){
            cout << matches.str(1) << endl;
            cout << "At index " << matches.position(1) << endl;
            str = matches.suffix().str();
        }
    }




    return 0;
}

////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

    double AddNumbers(double num1 = 0, double num2 = 0);{
        return num1 + num2;
    }

    int AssignAge2(int age){
        age = 27;
        return age;
    }

    void AssignAge3(int* pAge){
        *pAge = 55;
    }

    void DoubleArray(int *arr, int size);{
        for(int i = 0; i < size; ++i){
          arr[i] = arr[i * 2];
      }
    }

void ShowArea(Shape& shape){
  cout << "Area: " << shape.Area() << endl;
}


vector<int> Generate RandVect(int numOfNums, int min, int max){
  vector<int> vecValues;
  srand(time(NULL));
  int i = 0, randVal = 0;
  while(i < numOfNums){
    randVal = min + rand() % ((max + 1) - min);
    vecValues.push_back(randVal);
    i++;
