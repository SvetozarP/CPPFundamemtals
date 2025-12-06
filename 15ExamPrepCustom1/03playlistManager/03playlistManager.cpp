#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

void readSongs(vector<string>& songs)
{
    string song;
    while (getline(cin, song))
    {
        if (song == "FINISH")
            break;
        if (song == "empty") {
            songs.push_back("");
        }
        else {
            songs.push_back(song);
        }
    }
}

void printSongs(const vector<string>& songs)
{
    cout << ">>";
    for (const auto& song : songs) {
        if (song.empty()) {
            cout << " | ";
        }
        else {
            cout << song << " | ";
        }
    }
    cout << "<<" << endl;
}

int main()
{
    vector<string> playlist;
    readSongs(playlist);

    string commandLine;
    while (getline(cin, commandLine))
    {
        stringstream ss(commandLine);
        string command;
        ss >> command;

        if (command == "ADD")
        {
            string newSong;
            int position;
            vector<string> tokens;
            string tempToken;
            while (ss >> tempToken) {
                tokens.push_back(tempToken);
            }
            position = stoi(tokens.back());
            tokens.pop_back();

            for (size_t i = 0; i < tokens.size(); ++i) {
                newSong += tokens[i];
                if (i < tokens.size() - 1) {
                    newSong += " ";
                }
            }

            position -= 1;

            if (position >= 0 && position <= static_cast<int>(playlist.size()))
            {
                playlist.insert(playlist.begin() + position, newSong);
            }
            else
            {
                playlist.push_back(newSong);
            }
        }
        else if (command == "REMOVE")
        {
            int index;
            ss >> index;
            index -= 1;

            if (index >= 0 && index < static_cast<int>(playlist.size()))
            {
                playlist.erase(playlist.begin() + index);
            }
        }
        else if (command == "PRINT")
        {
            printSongs(playlist);
        }
        else if (command == "MOVE")
        {
            int fromIndex, toIndex;
            ss >> fromIndex >> toIndex;
            fromIndex -= 1;
            toIndex -= 1;

            if (fromIndex >= 0 && fromIndex < static_cast<int>(playlist.size()))
            {
                string songToMove = playlist[fromIndex];
                playlist.erase(playlist.begin() + fromIndex);

                if (toIndex > static_cast<int>(playlist.size())) {
                    toIndex = static_cast<int>(playlist.size());
                }
                else if (toIndex < 0) {
                    toIndex = 0;
                }

                playlist.insert(playlist.begin() + toIndex, songToMove);
            }
        }
        else if (command == "END")
        {
            break;
        }
    }
    return 0;
}