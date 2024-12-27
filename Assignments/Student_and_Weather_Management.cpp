#include <iostream>
#include <string>
using namespace std;

// Structure to store Student information
struct Student
{
    string name;
    int rollNumber;
    // 2D array to store marks for each subject and exam (maximum 10x10)
    int marks[10][10];
};

// Structure to store Weather data
struct Weather
{
    string cityName;
    // 1D array to store temperatures for 7 days
    double temperature[7];
};

int main()
{
    // Student Marks Table Implementation
    int numStudents, numSubjects, numExams;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;
    cout << "Enter number of exams per subject: ";
    cin >> numExams;

    // Assuming a maximum of 50 students
    Student students[50];

    // Input student data
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        for (int j = 0; j < numSubjects; ++j)
        {
            cout << "Enter marks for subject " << j + 1 << " (" << numExams << " exams): ";
            for (int k = 0; k < numExams; ++k)
            {
                cin >> students[i].marks[j][k];
            }
        }
    }

    // Calculate and display total marks of each student
    int highestTotalMarks = 0;
    string topStudent;
    for (int i = 0; i < numStudents; ++i)
    {
        int totalMarks = 0;
        for (int j = 0; j < numSubjects; ++j)
        {
            for (int k = 0; k < numExams; ++k)
            {
                totalMarks += students[i].marks[j][k];
            }
        }
        cout << "Total marks of " << students[i].name << ": " << totalMarks << endl;

        if (totalMarks > highestTotalMarks)
        {
            highestTotalMarks = totalMarks;
            topStudent = students[i].name;
        }
    }
    cout << "Student with highest total marks: " << topStudent << " (" << highestTotalMarks << " marks)" << endl;

    // Calculate and display average marks for each subject
    for (int j = 0; j < numSubjects; ++j)
    {
        int subjectTotalMarks = 0;
        int examCount = 0;
        for (int i = 0; i < numStudents; ++i)
        {
            for (int k = 0; k < numExams; ++k)
            {
                subjectTotalMarks += students[i].marks[j][k];
                examCount++;
            }
        }
        double averageMarks = static_cast<double>(subjectTotalMarks) / examCount;
        cout << "Average marks for subject " << j + 1 << ": " << averageMarks << endl;
    }

    // Weather Data Analysis
    int numCities = 0;
    cout << "\nEnter number of cities: ";
    cin >> numCities;

    // Assuming a maximum of 20 cities
    Weather cities[20];

    // Input temperature data for each city
    for (int i = 0; i < numCities; ++i)
    {
        cout << "Enter city name: ";
        cin >> cities[i].cityName;

        cout << "Enter temperatures for 7 days: ";
        for (int j = 0; j < 7; ++j)
        {
            cin >> cities[i].temperature[j];
        }
    }

    // Calculate and display average temperature for each city
    double highestWeeklyAverage = 0.0;
    string hottestCity;

    for (int i = 0; i < numCities; ++i)
    {
        double totalTemperature = 0.0;
        double hottestDayTemp = 0.0;
        for (int j = 0; j < 7; ++j)
        {
            totalTemperature += cities[i].temperature[j];
            if (cities[i].temperature[j] > hottestDayTemp)
            {
                hottestDayTemp = cities[i].temperature[j];
            }
        }
        double averageTemperature = totalTemperature / 7;
        cout << "Average temperature for " << cities[i].cityName << ": " << averageTemperature << endl;
        cout << "Hottest day temperature for " << cities[i].cityName << ": " << hottestDayTemp << endl;

        if (averageTemperature > highestWeeklyAverage)
        {
            highestWeeklyAverage = averageTemperature;
            hottestCity = cities[i].cityName;
        }
    }

    cout << "City with the highest overall weekly average temperature: " << hottestCity
         << " (" << highestWeeklyAverage << " degrees)" << endl;

    return 0;
}
