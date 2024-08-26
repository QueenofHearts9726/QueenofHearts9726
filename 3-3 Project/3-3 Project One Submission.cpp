//Developer: Jordan Gensler
//Date: July 21, 2024
//Here is a sample code for an object-oriented programming application in C++ that creates two clocks displaying simultaneously and allows for user input:
#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Clock() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime() {
        std::cout << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    void tick() {
        seconds++;
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
            if (minutes >= 60) {
                minutes = 0;
                hours++;
                if (hours >= 24) {
                    hours = 0;
                }
            }
        }
    }
};
int main() {
    Clock clock1, clock2;

    int h, m, s;

    std::cout << "Enter the initial time for clock 1 (hours minutes seconds): ";
    std::cin >> h >> m >> s;
    clock1.setTime(h, m, s);

    std::cout << "Enter the initial time for clock 2 (hours minutes seconds): ";
    std::cin >> h >> m >> s;
    clock2.setTime(h, m, s);

    while (true) {
        system("clear"); // Clear the console
        clock1.tick();
        clock2.tick();
        clock1.displayTime();
        clock2.displayTime();
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Pause for 1 second
    }
return 0;
}
//This code defines a `Clock` class with methods to set the time, display the time, and update the time by one second. The `main` function creates two instances of the `Clock` class, allows the user to input the initial time for each clock, and then continuously updates and displays the time for both clocks every second.