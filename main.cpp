// \n Denotes a transition to a new line (LF line feed).
// \r Denotes the return to the beginning of the line (CR carriage return).
// \a Denotes an alarm. Sending this to a teletype will cause a ringing sound. For computers it's a short beep. (BEL)
// \0 nul or nullus. A character that does not represent any character.
// \47 would be ' because 047 octal is 39 decimal and that's ' in ASCII code.
// \x27 indicates hexadecimal. 27 hexadecimal is 39 decimal.

int main(void) {
    char my_character = 'A';
    char apostrophe = '\''; // Backslash is used to make the next character escape from its normal use.
    char back_slash = '\\'; // Backslash before a black slash makes the back slash escape from its normal use.

    my_character += 32; // A is 65 in ASCII. 65 + 32 is 97 is a. The difference between uppercase and lowercase is 32.
    my_character -= ' '; // ' ' is equivalent to 32. So you could also do 'A' + ' ' to get a.

    char my_string[] = "sdasd"; // A string is just an array of characters.

    return 0;
}
