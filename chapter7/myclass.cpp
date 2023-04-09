#include <iostream>
using namespace std;

class ClassRoom{        // Classroom Class

    private:
    string roomNum;
    int capacity;

    public:
    ClassRoom() {} // Mandatory default constructor
    ClassRoom(string rN, int c)     // Actual object constructor
    {
        roomNum = rN;
        capacity = c;
    }

    string getRoomNumber() { return roomNum; }          // Accessor
    void setRoomNumber(string rN)                       // Mutator
    {
        roomNum = rN;
    }

    int getCapacity() { return capacity; }              // Accessor
    void setCapacity(int c)                             // Mutator
    {
        capacity = c;
    }

    void display()     // Display method called in Student class. Displays classroom number and capacity.
    {
        cout << "Classroom Number: " << roomNum << endl;
        cout << "Classroom Capacity: " << capacity << endl;
    }

};

class Course {  // Course Class

    private:
    string name;
    int score;

    public:
    Course() {} // Mandatory default constructor
    Course(string N, int S)     // Actual object constructor
    {
        name = N;
        score = S;
    }

    string getName() { return name; }                   // Accessor
    void setName(string N)                              // Mutator
    {
        name = N;
    }

    int getScore() { return score; }                    // Accessor
    void setScore(int S)                                // Mutator
    {
        score = S;
    }

    void display()          // Display method called in Student class. Displays course name and score.
    {
        cout << "Course Name: " << name << endl; 
        cout << "Course Score: " << score << "\n\n";
    }

};

class Student{      // Student Class

    private:
    string name;
    int age;
    ClassRoom classRoom;
    Course course;

    public:
    Student() {}    // Mandatory default constructor
     Student(string N, int A, ClassRoom CR, Course C)       // Actual object constructor
     {     
        name = N;
        age = A;
        classRoom = CR;
        course = C;
    }

    string getName() { return name; }                   // Accessor
    void setName(string N)                              // Mutator
    {
        name = N;
    }

    int getAge() { return age; }                        // Accessor
    void setAge(int A)                                  // Mutator
    {
        age = A;
    }

    ClassRoom getClassRoom() { return classRoom; }      // Accessor
    void setClassRoom(ClassRoom CR)                     // Mutator
    {
        classRoom = CR;
    }

    Course getCourse() { return course; }               // Accessor
    void setCourse(Course C)                            // Mutator
    {
        course = C;
    }

    void display()          // Displays the info!
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Student Age: " << age << "\n\n";

        cout << "COURSE INFORMATION: " << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << "\n\n";

        course.display();       // Calls display method in Course Class

        cout << "CLASSROOM INFORMATION: " << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << "\n\n";

        classRoom.display();    // Calls display method in Classroom Class
    }
};


int main()  // Asks for all the information
{
    string roomNum, courseName, studentName;
    int capacity, score, age;

    cout << "\nENTER CLASSROOM INFORMATION..." << endl;
    cout << "Classroom Number: ";
    cin >> roomNum;

    cout << "Classroom Capacity: ";
    cin >> capacity;
    cout << "\n";

    ClassRoom classRoom (roomNum, capacity);    // Creates classroom object using roomNum and capacity

    cout << "ENTER COURSE INFORMATION..." << endl;
    cout << "Course Name: ";
    cin >> courseName;

    cout << "Course Score: ";
    cin >> score;
    cout << "\n";

    Course course (courseName, score);      // Creates course object using courseName and score

    cout << "ENTER STUDENT INFORMATION..." << endl;
    cout << "Student Name: ";
    cin >> studentName;

    cout << "Student Age: ";
    cin >> age;
    cout << "\n";

    Student student (studentName, age, classRoom, course);      
    // Created course object using student, age, classroom (provided previously), and course (provided previously)

    cout << "\n\nSTUDENT INFORMATION: " << endl;
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

    student.display();  // Display method that displayes all the information in Student Class
}

