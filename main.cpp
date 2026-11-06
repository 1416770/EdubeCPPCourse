#include <iostream>
using namespace std;

int main(void)
{
    string secret = "tung";
    string user_input;
    getline(cin, user_input);

    if (secret.compare(user_input) == 0) // Same as secret == tung.
    {
        cout << "secret!" << endl;
    }
    else if (secret.compare(1, 1, user_input, 1, 1) == 0)
    {
        cout << "The second letter of the secret is the same as your second letter!" << endl;
    }
    else if (secret.compare(0, 1, user_input) == 0) // substr_start, substr_length, other_string
    {
        // substr returns the requested segment of a string
        // start_position, length
        cout << user_input.substr(0, 1) + " is almost there!" << endl;
    }

    cout << user_input << endl;

    // cin on its own only gets the first word. getline() gets the entire line.

    string sir_stringy = "yeah";
    // If it fails to find the string it returns string::npos.
    // You can do this with characters too.
    cout << "Position in string: " << user_input.find(sir_stringy) << endl;
    cout << "String length: " << user_input.length() << endl;
    cout << "String buffer size: " << user_input.capacity() << endl;

    string reserved_string = "peter";
    reserved_string.reserve(30); // Atemps to preallocate memory for the given number of characters.

    // Strings have a default buffer size of 15 and then that gets doubled every time you have more characters than the buffer size.
    // So if you put 16 characters it would go from 15 to 30.
    // 31 characters would turn the buffer size to 60.

    reserved_string.clear(); // Removes all the characters from the string.
    //reserved_string.empty(); // Checks if the string has no characters.

    string goy = "goy";
    goy.resize(16); // Won't go lower than 15 </3. This will be rounded up to 30. (Changes buffer size).
    cout << "Goy size: " << goy.capacity() << endl;
    goy.resize(45, 'A'); // Resizes the buffer size to 60 and replaces all the strings characters with 'A'.
    cout << goy << goy.capacity() << endl;

    string jesus = "god";
    jesus.append("fortnite"); // godfortnite (same as jesus += "fortnite")
    jesus.append(3, 'x'); // godfortnitexxx (adds 3 of the given character)
    jesus.append("first_three_letters", 0, 3); // godfortnitexxxfir
    cout << jesus << endl;

    string evil_string = "";
    for (char character = 'A'; character <= 'Z'; character++)
    {
        // .push_back appends a single character
        evil_string.push_back(character);
    }
    evil_string.insert(3, "amongus"); // Inserts amongus after 3 letters.
    evil_string.insert(10, 3, '_'); // Inserts 3 _ after 10 letters.
    evil_string.insert(0, "garry", 3, 2); // Inserts two letters starting from the 4th (ry) at the start.
    cout << evil_string << endl;

    string sky;
    sky.assign(80, '*');
    cout << sky << endl; // Assigns 80 stars to the sky string.

    string to_do = "I need to go shopping.";
    to_do.replace(13, 8, "watch a movie"); // Replaces shopping with watch a movie.
    cout << to_do << endl;
    to_do.erase(); // Entirely erases the content of the string.
    to_do.erase(0, 4); // Erases 4 characters starting from 0.

    string string_a = "monday";
    string string_b = "tuesday";
    string_b.swap(string_a); // Turns string_b into string_a and string_a into string b.
    cout << string_a << string_b << endl;

    return 0;
}