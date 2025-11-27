# Morse Code Converter
#### Video Demo: https://youtu.be/ycxxIVJAnaE

This is a simple command-line program written in C that allows you to convert text to Morse code and Morse code to text. It supports uppercase and lowercase alphabets, digits (0-9), and some common special characters.

## Introduction to Morse Code

Morse code is a system of representing letters, numbers, and punctuation using short signals (dots) and long signals (dashes). Developed for telegraph communication, it assigns a unique sequence of dots and dashes to each character.

Despite modern technology, Morse code still has real-world applications:

* **Emergency Communications:** Used as a robust backup in maritime and aviation emergencies and by amateur radio operators for long-distance, low-power communication.
* **Assistive Technology:** Provides an alternative communication method for individuals with certain disabilities.
* **Hobbies and Education:** A popular hobby and a tool for teaching rhythm and pattern recognition.
* **Navigation:** Still used in some navigational aids like lighthouses for identification.

This program allows you to convert between English text and Morse code, offering a way to engage with this enduring communication method.

## Features

* **English to Morse Code Conversion:** Converts English text into its Morse code representation. Words are separated by `/`, and letters within a word are separated by spaces.
* **Morse Code to English Conversion:** Converts Morse code input back into English text. Morse code for each letter/digit/special character should be separated by spaces, and words should be separated by `/`.
* **Supports Alphanumeric and Special Characters:** Handles uppercase and lowercase letters (A-Z), digits (0-9), and the following special characters: `. , ? ' ! / ( ) "`.
* **Basic Error Handling:** Indicates unknown characters or Morse code sequences with a `?` in the output.

## How to Compile and Run

1.  **Save:** Save the provided C code as a `.c` file (e.g., `morse_converter.c`).
2.  **Compile:** Open your terminal or command prompt and use a C compiler (like GCC) to compile the code:
    ```bash
    gcc morse_converter.c -o morse_converter
    ```
3.  **Run:** Execute the compiled program:
    ```bash
    ./morse_converter
    ```

## Usage

1.  When you run the program, you will be prompted to choose the conversion direction:
    ```
    Choose conversion:
    1. English to Morse
    2. Morse to English
    ```
2.  Enter `1` for English to Morse or `2` for Morse to English and press Enter.
3.  You will then be asked to enter the text you want to convert:
    ```
    Enter text to convert:
    ```
4.  Type your text and press Enter. The program will output the converted text.

### Examples

**English to Morse:**
English Text : Namaskara! My Name is Mahathi Srinath and I am from India.
Morse Code : -. .- -- .- ... -.- .- .-. .- -.-.-- / -- -.-- / -. .- -- . / .. ... / -- .- .... .- - .... .. / ... .-. .. -. .- - .... / .- -. -.. / .. / .- -- / ..-. .-. --- -- / .. -. -.. .. .- .-.-.- /


**Morse to English:**
Morse Code : -.. .... .- -. -.-- .- ...- .- .- -.. / -.-.--
English Text : Dhanyavaad!


**Handling Unknown Characters:**

If you enter a character that is not supported, it will be represented by a `?` in the Morse code output. Similarly, if an unknown Morse code sequence is encountered, it will be represented by a `?` in the English output.

**Morse to English with Unknown Sequence:**
Enter text to convert:
.-.-.- ...--... .-
. ? A

## Supported Characters

The converter supports the following characters:

* Uppercase letters: `A` to `Z`
* Lowercase letters: `a` to `z` (will be converted to uppercase)
* Digits: `0` to `9`
* Special characters: `. , ? ' ! / ( ) "`
* Space: ` ` (represented by `/` between words in Morse, and a space in English)

## Notes

* The Morse code for each letter/digit/special character in the input should be separated by a single space.
* Words in Morse code input should be separated by a forward slash `/`.
* The English input should have words separated by spaces.




