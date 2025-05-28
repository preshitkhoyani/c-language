#include <iostream>
using namespace std;

// TimeConverter ક્લાસ
class TimeConverter {
public:
    // સેકંડને HH:MM:SS માં રૂપાંતર
    void secondsToHHMMSS(int totalSeconds) {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;
        cout << "HH:MM:SS => " << hours << ":" << minutes << ":" << seconds << endl;
    }

    // HH:MM:SS ને સેકંડમાં રૂપાંતર
    void HHMMSSToSeconds(int hours, int minutes, int seconds = 0) {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
        cout << "કુલ સેકંડ: " << totalSeconds << endl;
    }
};

int main() {
    TimeConverter tc;
    int choice;

  cout << "તમારું પસંદગી પસંદ કરો:\n";
    cout << "1. સેકંડને HH:MM:SS માં રૂપાંતર\n";
    cout << "2. HH:MM:SS ને સેકંડમાં રૂપાંતર\n";
    cout << "તમારું પસંદ (1 અથવા 2): ";
    cin >> choice;

 if (choice == 1) {
        int totalSeconds;
        cout << "કુલ સેકંડ દાખલ કરો: ";
        cin >> totalSeconds;
        tc.secondsToHHMMSS(totalSecons);
    } else if (choice == 2) {
        int hours, minutes, seconds;
        cout << "કલાક દાખલ કરો: ";
        cin >> hours;
        cout << "મિનિટ દાખલ કરો: ";
        cin >> minutes;
        cout << "સેકંડ દાખલ કરો (જો હોય તો, નહી હોય તો 0 લખો): ";
        cin >> seconds;
        tc.HHMMSSToSeconds(hours, minutes, seconds);
    } else {
        cout << "અયોગ્ય પસંદગી!" << endl;
    }
    
}
