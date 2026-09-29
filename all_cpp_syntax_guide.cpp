/**
 * =========================================================================================
 *                      THE ULTIMATE C++ SYNTAX & DATA TYPE GUIDE
 * =========================================================================================
 * 
 * HOW TO COMPILE AND RUN:
 * Open your terminal, go to this folder, and type:
 *     clang++ -std=c++20 all_cpp_syntax_guide.cpp -o guide && ./guide
 * (or using g++):
 *     g++ -std=c++20 all_cpp_syntax_guide.cpp -o guide && ./guide
 * 
 * =========================================================================================
 * FOR BEGINNERS:
 * Every single topic in this file has 3 clear notes:
 *   1. WHAT IS IT CALLED?      -> The official computer science & C++ name.
 *   2. WHAT DOES IT DO?        -> How it works in real computer programming.
 *   3. 8-YEAR-OLD EXPLANATION: -> A super simple, fun story or toy analogy so ANYONE can get it!
 * =========================================================================================
 * SAFETY GUARANTEE:
 * All code here uses modern, safe C++ practices (C++20/C++17):
 * - Safe standard library containers (std::vector, std::array, std::string)
 * - Safe modern smart pointers (std::unique_ptr) instead of risky manual memory leaks
 * - Bounds checking with .at()
 * - Const correctness to prevent accidental bugs
 * =========================================================================================
 */

// =========================================================================================
// SECTION 1: PREPROCESSOR DIRECTIVES & HEADERS
// =========================================================================================
// WHAT IS IT CALLED?
// Preprocessor Directives (#include, #define)
//
// WHAT DOES IT DO?
// Before the computer actually reads your C++ code, the "Preprocessor" takes these instructions
// to load external toolboxes (libraries) and insert needed tools into this file.
//
// 8-YEAR-OLD EXPLANATION:
// Imagine you are about to build a huge Lego castle. The #include is like going to your closet
// and bringing out your "Lego Wheels Box" or "Lego Space Helmet Box" onto your table before you play!
// =========================================================================================

#include <iostream>   // For screen printing (std::cout) and keyboard input (std::cin)
#include <string>     // For handling words, letters, and sentences (std::string)
#include <sstream>    // For string streams (simulating and parsing text inputs)
#include <vector>     // For expandable lists of items (std::vector)
#include <array>      // For fixed-size lists of items (std::array)
#include <memory>     // For modern smart pointers (automatic cleanup robots!)
#include <cmath>      // For math powers, square roots, etc.
#include <exception>  // For error catching and safety guards

// =========================================================================================
// SECTION 2: COMMENTS (NOTES FOR HUMANS)
// =========================================================================================
// WHAT IS IT CALLED?
// Single-Line Comment (//) and Multi-Line Block Comment (/* ... */)
//
// WHAT DOES IT DO?
// Any text written after // or between /* and */ is completely ignored by the computer.
// It is used exclusively for programmers to write notes to themselves or their teammates.
//
// 8-YEAR-OLD EXPLANATION:
// Invisible ink! The computer wears special sunglasses that make all these notes disappear,
// so only you and your human friends can read the secret messages!
// =========================================================================================

// This is a single-line comment. Everything on this line is a secret human note.

/*
 * This is a multi-line comment.
 * You can write a whole bedtime story here,
 * and the computer will not complain!
 */

// =========================================================================================
// SECTION 3: NAMESPACES & THE SCOPE RESOLUTION OPERATOR (::)
// =========================================================================================
// WHAT IS IT CALLED?
// Namespace and Scope Resolution Operator (::)
//
// WHAT DOES IT DO?
// A namespace packages code inside a labeled drawer. It stops name collisions (accidents where
// two things have the exact same name). The double colon (::) opens that specific drawer.
//
// 8-YEAR-OLD EXPLANATION:
// What if there are two kids in your school named "Leo"? One is "Leo from Class 2A"
// and the other is "Leo from Class 3B". 
// In C++, we write: Class2A::Leo and Class3B::Leo so nobody mixes them up!
// =========================================================================================

namespace SchoolRoomA {
    void sayHello() {
        std::cout << "[Room A]: Hello from Classroom A!\n";
    }
}

namespace SchoolRoomB {
    void sayHello() {
        std::cout << "[Room B]: Hello from Classroom B!\n";
    }
}

// =========================================================================================
// SECTION 4: DATA TYPES (EVERY TYPE EXPLAINED FOR BEGINNERS & 8-YEAR-OLDS!)
// =========================================================================================
// WHAT IS IT CALLED?
// Data Types (Variables & Memory Allocation)
//
// WHAT DOES IT DO?
// Computers store information in memory (RAM). A data type tells the computer:
// 1. How much memory box space to reserve.
// 2. What kind of thing is inside (a number, a single letter, true/false, or text).
//
// 8-YEAR-OLD EXPLANATION:
// Think of data types as differently shaped toy boxes!
// - You can't put a round basketball into a long narrow flute box.
// - Each box only holds its specific toy!
// =========================================================================================

void demonstrateDataTypes() {
    std::cout << "\n--- DEMO 1: DATA TYPES ---\n";

    // -------------------------------------------------------------------------------------
    // 1. bool (BOOLEAN)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Boolean (bool)
    // WHAT DOES IT DO: Holds only one of two values: true (1) or false (0). Uses 1 byte.
    // 8-YEAR-OLD EXPLANATION: A light switch! It can only be flipped ON (true) or OFF (false).
    bool isSunnyToday = true;
    bool isRaining = false;
    std::cout << "bool: isSunnyToday = " << (isSunnyToday ? "true" : "false") 
              << ", isRaining = " << (isRaining ? "true" : "false") << "\n";

    // -------------------------------------------------------------------------------------
    // 2. char (CHARACTER)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Character (char)
    // WHAT DOES IT DO: Holds a single letter, symbol, or digit in single quotes (' ').
    // 8-YEAR-OLD EXPLANATION: A single alphabet sticker from a sticker sheet! e.g., 'A', 'Z', '!'.
    char favoriteLetter = 'A';
    char luckySymbol = '#';
    std::cout << "char: favoriteLetter = " << favoriteLetter << ", luckySymbol = " << luckySymbol << "\n";

    // -------------------------------------------------------------------------------------
    // 3. int (INTEGER)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Integer (int)
    // WHAT DOES IT DO: Holds whole numbers (positive, negative, or zero). No decimals. Usually 4 bytes.
    // 8-YEAR-OLD EXPLANATION: Counting whole cookies! You can have 5 cookies, or -2 cookies if you
    // owe cookies to your friend. But no half-bitten crumbs here!
    int cookieCount = 12;
    int freezingTemperature = -5;
    std::cout << "int: cookieCount = " << cookieCount << ", freezingTemperature = " << freezingTemperature << "\n";

    // -------------------------------------------------------------------------------------
    // 4. float (FLOATING-POINT NUMBER)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Single-precision floating point (float)
    // WHAT DOES IT DO: Holds numbers with decimal points (fractions). Good for ~7 decimal digits of precision.
    // 8-YEAR-OLD EXPLANATION: A small measuring cup for liquid juice, like 3.14 milliliters!
    // Note the letter 'f' at the end!
    float bodyTemperature = 36.6f;
    std::cout << "float: bodyTemperature = " << bodyTemperature << " C\n";

    // -------------------------------------------------------------------------------------
    // 5. double (DOUBLE-PRECISION FLOATING-POINT NUMBER)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Double precision float (double)
    // WHAT DOES IT DO: Holds decimal numbers with double precision (~15 decimal digits). The standard choice for math.
    // 8-YEAR-OLD EXPLANATION: A super-accurate giant science measuring cylinder used by rocket scientists!
    double piPrecise = 3.141592653589793;
    std::cout << "double: piPrecise = " << piPrecise << "\n";

    // -------------------------------------------------------------------------------------
    // 6. std::string (STRING OF CHARACTERS / TEXT)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: String (std::string)
    // WHAT DOES IT DO: Holds sentences, words, and text surrounded by double quotes (" ").
    // 8-YEAR-OLD EXPLANATION: A friendship bracelet necklace made by stringing letter beads together!
    std::string heroName = "Super Programmer";
    std::cout << "std::string: heroName = " << heroName << "\n";

    // -------------------------------------------------------------------------------------
    // 7. MODIFIERS: unsigned, short, long, long long
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Type Modifiers
    // WHAT DOES IT DO:
    // - unsigned: Only positive numbers and zero (no negative minus sign!).
    // - short: A smaller number box (saves memory).
    // - long / long long: A giant number box for gigantic numbers like stars in the universe!
    // 8-YEAR-OLD EXPLANATION:
    // - 'unsigned' is a toy box where minus-monsters are banned!
    // - 'long long' is an enormous suitcase for counting all the grains of sand on the beach!
    unsigned int score = 9999;                   // Never goes below 0
    short smallNumber = 300;                     // Holds up to ~32,767
    long long universeStars = 1000000000000000LL;// Giant number!
    std::cout << "unsigned int: " << score << ", short: " << smallNumber << ", long long: " << universeStars << "\n";

    // -------------------------------------------------------------------------------------
    // 8. const & constexpr (CONSTANTS - UNCHANGEABLE VALUES)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Constant (const) / Compile-time Constant (constexpr)
    // WHAT DOES IT DO: Locks a variable so its value can NEVER be changed again. Prevents mistakes!
    // 8-YEAR-OLD EXPLANATION: Superglue! Once you stick a number onto a 'const' box, nobody can ever rip it off!
    const int DAYS_IN_A_WEEK = 7;
    constexpr int HOURS_IN_A_DAY = 24;
    std::cout << "const: Days in a week = " << DAYS_IN_A_WEEK << ", Hours in a day = " << HOURS_IN_A_DAY << "\n";
    // DAYS_IN_A_WEEK = 8; // ERROR! Compiler will stop you if you try to change this!

    // -------------------------------------------------------------------------------------
    // 9. auto (TYPE INFERENCE)
    // -------------------------------------------------------------------------------------
    // WHAT IS IT CALLED: Type Deduction (auto)
    // WHAT DOES IT DO: Tells C++ to automatically guess the correct data type based on the value!
    // 8-YEAR-OLD EXPLANATION: A smart pet dog! If you throw a tennis ball, your dog knows it's a ball
    // without you having to whisper "Hey, that is a green rubber tennis ball!"
    auto smartNumber = 42;          // C++ automatically knows this is an 'int'
    auto smartGreeting = "Hello!";  // C++ knows this is a const char*
    std::cout << "auto: smartNumber is " << smartNumber << " (int), smartGreeting is \"" << smartGreeting << "\"\n";
}

// =========================================================================================
// SECTION 5: CONSOLE INPUT AND OUTPUT (std::cout, std::cin, std::getline, std::endl)
// =========================================================================================
// WHAT IS IT CALLED?
// Standard I/O Streams (std::cout, std::cin), Stream Operators (<<, >>), and std::getline()
//
// WHAT DOES IT DO?
// - std::cout (Character Output): Sends text, numbers, and variables to the screen/terminal.
// - << (Stream Insertion Operator): Pushes data OUT to the stream.
// - std::cin (Character Input): Reads data typed by the user from the keyboard.
// - >> (Stream Extraction Operator): Pulls data IN from the keyboard into a variable.
//   (Stops at spaces, tabs, or newlines!)
// - std::getline(std::cin, str): Reads a full line of text, INCLUDING spaces, until Enter.
// - std::cin.ignore(): Cleans up leftover Enter keys (\n) lingering in the keyboard buffer.
// - \n vs std::endl: '\n' is a fast newline; std::endl adds a newline AND forces the screen
//   to flush immediately. '\n' is preferred for performance!
//
// 8-YEAR-OLD EXPLANATION:
// - std::cout is a GIANT MEGAPHONE! You shout words into it (cout << "Hello!"), and it broadcasts
//   them onto the TV screen for everyone to see!
// - std::cin is your BIG LISTENING EARS! It waits patiently until someone whispers a secret number
//   or word into your ear and puts it directly into your pocket (cin >> secretWord)!
// - The arrows show the direction:
//     cout << "Hi";   (Arrows point OUT toward the megaphone!)
//     cin >> number;  (Arrows point IN toward your pocket!)
// - std::cin >> is like eating one bite at a time (stops when it sees a space).
// - std::getline is like slurping an ENTIRE long spaghetti noodle in one go!
// =========================================================================================

void demonstrateConsoleIO() {
    std::cout << "\n--- DEMO 2: CONSOLE INPUT & OUTPUT (cout, cin, getline) ---\n";

    // 1. Printing with std::cout and <<
    int score = 100;
    std::string playerName = "Alex";
    std::cout << "std::cout: Player " << playerName << " scored " << score << " points!\n";

    // 2. The difference between \n and std::endl
    std::cout << "Fast newline using \\n" << "\n";
    std::cout << "Flushed newline using std::endl" << std::endl;

    // -------------------------------------------------------------------------------------
    // HOW YOU USE KEYBOARD INPUT (std::cin) IN A REAL INTERACTIVE APP:
    // -------------------------------------------------------------------------------------
    // In a live app, you would write:
    //
    //    int userAge;
    //    std::cout << "Enter your age: ";
    //    std::cin >> userAge;               // Reads one number from keyboard
    //
    //    std::string fullName;
    //    std::cout << "Enter your full name: ";
    //    std::cin.ignore();                  // Clears leftover Enter key from the buffer!
    //    std::getline(std::cin, fullName);   // Reads entire line with spaces!
    // -------------------------------------------------------------------------------------

    // 3. LIVE DEMONSTRATION OF cin EXTRACTION (>>) AND getline():
    // To let this guide run automatically without pausing forever for keyboard input,
    // we simulate the keyboard input stream using std::istringstream (which works IDENTICALLY to std::cin!):
    std::istringstream simulatedKeyboard("25\nPrincess Peach of Mushroom Kingdom");

    int extractedAge = 0;
    std::string extractedFullName;

    // Step A: Extract number using >> (Identical to std::cin >> extractedAge)
    simulatedKeyboard >> extractedAge;
    std::cout << "cin >> extraction: Read number -> " << extractedAge << "\n";

    // Step B: Clear leftover newline (Identical to std::cin.ignore())
    simulatedKeyboard.ignore();

    // Step C: Read full line with spaces (Identical to std::getline(std::cin, extractedFullName))
    std::getline(simulatedKeyboard, extractedFullName);
    std::cout << "std::getline extraction: Read full sentence -> \"" << extractedFullName << "\"\n";
}

// =========================================================================================
// SECTION 6: OPERATORS (DOING MATH, LOGIC, AND COMPARISONS)
// =========================================================================================
// WHAT IS IT CALLED?
// Operators (+, -, *, /, %, ==, !=, &&, ||, !)
//
// WHAT DOES IT DO?
// Operators perform actions or calculations between values and variables.
//
// 8-YEAR-OLD EXPLANATION:
// The magic wand buttons! Some buttons do math homework (+, -, *), some buttons compare
// which toy is bigger (>), and some buttons check if your room is clean AND your homework is done (&&).
// =========================================================================================

void demonstrateOperators() {
    std::cout << "\n--- DEMO 3: OPERATORS ---\n";

    int a = 10;
    int b = 3;

    // 1. Arithmetic Operators (+, -, *, /, %)
    // '%' is MODULO: it gives the remainder after division!
    // 8-YEAR-OLD EXPLANATION: If you have 10 cookies and share them with 3 kids equally,
    // each kid gets 3 cookies, and there is 1 cookie leftover! The leftover 1 is the modulo (%).
    std::cout << "Arithmetic:\n";
    std::cout << "  10 + 3 = " << (a + b) << " (Addition)\n";
    std::cout << "  10 - 3 = " << (a - b) << " (Subtraction)\n";
    std::cout << "  10 * 3 = " << (a * b) << " (Multiplication)\n";
    std::cout << "  10 / 3 = " << (a / b) << " (Integer Division - no fractions!)\n";
    std::cout << "  10 % 3 = " << (a % b) << " (Modulo - Leftover remainder!)\n";

    // 2. Increment & Decrement (++, --)
    // WHAT IS IT CALLED: Increment (++) / Decrement (--)
    // WHAT DOES IT DO: Adds 1 or subtracts 1 quickly.
    // 8-YEAR-OLD EXPLANATION: Pressing the "Level Up (+1)" or "Lose a life (-1)" button in a game!
    int level = 1;
    level++; // Now level is 2
    std::cout << "Increment: Level after level++ is " << level << "\n";

    // 3. Relational / Comparison Operators (==, !=, <, >, <=, >=)
    // WHAT DOES IT DO: Compares two items and returns true (1) or false (0).
    // Note: '==' checks equality. '=' is for assigning a value.
    // 8-YEAR-OLD EXPLANATION: Asking a question: "Is toy A the exact twin of toy B?"
    std::cout << "Comparisons:\n";
    std::cout << "  Is 10 equal to 3? (a == b): " << (a == b ? "Yes" : "No") << "\n";
    std::cout << "  Is 10 NOT equal to 3? (a != b): " << (a != b ? "Yes" : "No") << "\n";
    std::cout << "  Is 10 greater than 3? (a > b): " << (a > b ? "Yes" : "No") << "\n";

    // 4. Logical Operators (&& AND, || OR, ! NOT)
    // && means BOTH must be true.
    // || means AT LEAST ONE must be true.
    // ! means FLIP the truth (true becomes false, false becomes true).
    // 8-YEAR-OLD EXPLANATION:
    // Mom says: "You can watch cartoons if you cleaned your room (A) AND finished your carrots (B)!"
    bool cleanedRoom = true;
    bool finishedCarrots = false;
    bool canWatchCartoons = cleanedRoom && finishedCarrots; // false, didn't eat carrots!
    bool hadFun = cleanedRoom || finishedCarrots;          // true, at least one happened!
    bool opposite = !cleanedRoom;                          // false, flipped!
    std::cout << "Logical: canWatchCartoons (room && carrots) = " << (canWatchCartoons ? "Yes" : "No") << "\n";
    std::cout << "Logical: hadFun (room || carrots) = " << (hadFun ? "Yes" : "No") << "\n";
    std::cout << "Logical: opposite (!cleanedRoom) = " << (opposite ? "True" : "False") << "\n";

    // 5. Ternary Operator (condition ? if_true : if_false)
    // WHAT IS IT CALLED: Conditional / Ternary Operator (? :)
    // WHAT DOES IT DO: A tiny, compact one-line if-else decision!
    // 8-YEAR-OLD EXPLANATION: A quick coin flip: "Heads we get pizza, tails we get soup!"
    int energy = 80;
    std::string mood = (energy > 50) ? "Hyper and ready to play!" : "Sleepy, need a nap.";
    std::cout << "Ternary: " << mood << "\n";
}

// =========================================================================================
// SECTION 7: CONTROL FLOW (MAKING DECISIONS: IF, ELSE IF, ELSE, NESTED IF, SWITCH)
// =========================================================================================
// WHAT IS IT CALLED?
// Conditional Statements / Branching (if, else if, else, nested if, switch, case)
//
// WHAT DOES IT DO?
// Evaluates boolean expressions (true/false) to decide which path of code the computer executes:
// - if (condition): Runs the block ONLY if the condition inside () evaluates to true.
// - else if (condition): Tested ONLY if the previous if was false.
// - else: Catch-all fallback. Runs if all previous conditions were false.
// - Nested if: Placing an if-statement INSIDE another if-statement for multi-step checks.
// - switch / case: Quickly routes execution based on a single integer or enum matching a list.
//
// 8-YEAR-OLD EXPLANATION:
// A "Choose Your Own Adventure" storybook or a castle security guard!
// - "IF you have the golden key, unlock the treasure chest!"
// - "ELSE IF you have the silver key, open the secret pantry!"
// - "ELSE, sound the castle intruder alarm!"
// - Nested IF: "First, check IF you have a ticket. Once inside, check IF you are tall enough
//   for the roller coaster!"
// =========================================================================================

void demonstrateControlFlow() {
    std::cout << "\n--- DEMO 4: CONTROL FLOW (DECISIONS: IF, ELSE IF, ELSE) ---\n";

    // 1. Basic if, else if, else
    int playerHealth = 65;
    std::cout << "Health check (health = " << playerHealth << "):\n  ";
    if (playerHealth >= 80) {
        std::cout << "Status: Full Health! Ready for battle!\n";
    } else if (playerHealth >= 40) {
        std::cout << "Status: Healthy enough, but be careful!\n";
    } else {
        std::cout << "Status: Danger! Drink a potion immediately!\n";
    }

    // 2. Compound conditions inside 'if' (using && and ||)
    // 8-YEAR-OLD EXPLANATION: Double security check: You need a ticket AND you must wear shoes!
    int playerAge = 10;
    bool hasTicket = true;
    std::cout << "Amusement park gate: ";
    if (playerAge >= 8 && hasTicket) {
        std::cout << "Welcome aboard the ride!\n";
    } else {
        std::cout << "Sorry, you cannot enter yet.\n";
    }

    // 3. Nested if statements (an 'if' inside another 'if')
    // 8-YEAR-OLD EXPLANATION: Opening a secret treasure chest inside a secret dungeon room!
    bool inSecretRoom = true;
    bool knowsSecretPassword = true;
    std::cout << "Secret Vault: ";
    if (inSecretRoom) {
        if (knowsSecretPassword) {
            std::cout << "Treasure vault opened! You found 100 gold coins!\n";
        } else {
            std::cout << "In the room, but the password was wrong!\n";
        }
    }

    // 4. Modern C++ 'if with initializer' (C++17)
    // WHAT DOES IT DO: Creates a variable directly inside the 'if' statement that disappears after!
    if (int magicPower = 95; magicPower > 50) {
        std::cout << "Magic Power (" << magicPower << ") is super charged!\n";
    }

    // 5. switch, case, break, default
    // WHAT IS IT CALLED: Switch statement
    // WHAT DOES IT DO: Compares one variable against a checklist of exact values (cases).
    // 'break' stops the switch so it doesn't fall through to the next case.
    // 'default' runs if none of the cases matched!
    // 8-YEAR-OLD EXPLANATION: A vending machine!
    // Press button 1 for Apple Juice, button 2 for Chocolate Milk, default gives cold water.
    int choice = 2;
    std::cout << "Vending Machine selection (" << choice << "): ";
    switch (choice) {
        case 1:
            std::cout << "Dispensing Apple Juice!\n";
            break;
        case 2:
            std::cout << "Dispensing Chocolate Milk!\n";
            break;
        case 3:
            std::cout << "Dispensing Orange Soda!\n";
            break;
        default:
            std::cout << "Dispensing Fresh Water!\n";
            break;
    }
}

// =========================================================================================
// SECTION 8: LOOPS (REPEATING ACTIONS AUTOMATICALLY: FOR, WHILE, DO-WHILE, NESTED LOOPS)
// =========================================================================================
// WHAT IS IT CALLED?
// Iteration Statements / Loops (for, while, do-while, range-based for, nested loops)
//
// WHAT DOES IT DO?
// Executes a block of code multiple times until a condition stops it:
// - for loop: Best when you know in advance HOW MANY times to repeat (counter-based).
// - while loop: Best when you want to repeat UNTIL a condition becomes false (condition-based).
// - do-while loop: Guarantees the body runs AT LEAST ONCE before testing the condition.
// - Nested loop: A loop INSIDE another loop (e.g., walking through rows and columns in a grid).
// - Range-based for: Iterates cleanly through each item in a container or array.
// - break: Emergency exit! Breaks out of the loop immediately.
// - continue: Skips the rest of the current turn and jumps directly to the next turn.
//
// 8-YEAR-OLD EXPLANATION:
// - for loop: Counting jumping jacks: 1, 2, 3, stop!
// - while loop: "While you're hungry, keep eating apple slices!"
// - do-while loop: "Take at least one bite of soup before deciding if it's too hot!"
// - Nested loops: A checkerboard! You walk across Row 1 (square 1, 2, 3), then Row 2 (square 1, 2, 3)!
// - break: Pulling the emergency brake on the merry-go-round!
// - continue: Skipping a puddle on the sidewalk without stopping your walk!
// =========================================================================================

void demonstrateLoops() {
    std::cout << "\n--- DEMO 5: LOOPS (REPETITION & NESTED LOOPS) ---\n";

    // 1. Traditional for loop
    // Structure: for (start; condition; step)
    // 8-YEAR-OLD EXPLANATION: Counting jumping jacks: Start at 1, jump until 3, add 1 each jump!
    std::cout << "For loop (Counting 1 to 3): ";
    for (int i = 1; i <= 3; ++i) {
        std::cout << i << " ";
    }
    std::cout << "\n";

    // 2. While loop
    // Runs WHILE the condition is true. Checks BEFORE running.
    // 8-YEAR-OLD EXPLANATION: "While you still have coins in your pocket, buy gumballs!"
    int coins = 3;
    std::cout << "While loop: ";
    while (coins > 0) {
        std::cout << "[Coin spent! Left: " << --coins << "] ";
    }
    std::cout << "\n";

    // 3. Do-While loop
    // Runs the code AT LEAST ONCE, then checks if it should run again.
    // 8-YEAR-OLD EXPLANATION: "Take at least one bite of broccoli before you say you don't like it!"
    int attempts = 0;
    std::cout << "Do-While loop: ";
    do {
        std::cout << "(Runs at least once!) ";
        attempts++;
    } while (attempts < 1);
    std::cout << "\n";

    // 4. Nested Loops (A loop inside another loop!)
    // 8-YEAR-OLD EXPLANATION: Drawing a 2x3 grid of toy blocks!
    std::cout << "Nested Loops (2 rows x 3 columns grid):\n";
    for (int row = 1; row <= 2; ++row) {
        std::cout << "  Row " << row << ": ";
        for (int col = 1; col <= 3; ++col) {
            std::cout << "[R" << row << "C" << col << "] ";
        }
        std::cout << "\n";
    }

    // 5. Range-Based for loop (Modern C++)
    // Iterates cleanly through an entire collection of items.
    // 8-YEAR-OLD EXPLANATION: Opening a bag of colored marbles and taking out every single marble one by one!
    std::vector<std::string> toys = {"Teddy Bear", "Lego Car", "Yo-Yo"};
    std::cout << "Range-based for loop: Toys in box -> ";
    for (const auto& toy : toys) {
        std::cout << "[" << toy << "] ";
    }
    std::cout << "\n";

    // 6. Infinite Loop with break
    // WHAT DOES IT DO: while(true) loops forever until a 'break' condition is triggered!
    int countdown = 3;
    std::cout << "Infinite loop with break: ";
    while (true) {
        std::cout << countdown << "... ";
        countdown--;
        if (countdown == 0) {
            std::cout << "Blast off!\n";
            break; // Stop the loop!
        }
    }

    // 7. break and continue
    // 'break' exits the loop immediately.
    // 'continue' skips the rest of the current turn and jumps to the next turn.
    std::cout << "Break & Continue demo (skipping 2, stopping at 4): ";
    for (int number = 1; number <= 5; ++number) {
        if (number == 2) {
            continue; // Skip number 2!
        }
        if (number == 4) {
            break;    // Stop completely when we hit 4!
        }
        std::cout << number << " ";
    }
    std::cout << "\n";
}

// =========================================================================================
// SECTION 9: DATA STRUCTURES & CONTAINERS (STORING GROUPS OF THINGS)
// =========================================================================================
// WHAT IS IT CALLED?
// Containers (std::vector, std::array, C-style arrays)
//
// WHAT DOES IT DO?
// Allows storing multiple items together in an organized order.
//
// 8-YEAR-OLD EXPLANATION:
// - std::array is an egg carton: It has exactly 6 or 12 fixed slots. You can never add a 13th slot!
// - std::vector is an expandable magic backpack: You can keep stuffing new toys into it forever,
//   and it grows bigger automatically!
// =========================================================================================

void demonstrateContainers() {
    std::cout << "\n--- DEMO 6: CONTAINERS (LISTS OF THINGS) ---\n";

    // 1. std::array (Fixed size container, super fast, safe)
    std::array<int, 3> fixedScores = {100, 95, 98};
    std::cout << "std::array size: " << fixedScores.size() << ", first element: " << fixedScores[0] << "\n";

    // 2. std::vector (Dynamic expandable container - THE MOST COMMON CONTAINER IN C++!)
    std::vector<std::string> superHeroes;
    superHeroes.push_back("Batman");      // Add to back of list
    superHeroes.push_back("Superman");    // Add another
    superHeroes.push_back("Wonder Woman");// Add another

    std::cout << "std::vector has " << superHeroes.size() << " heroes:\n";
    for (size_t i = 0; i < superHeroes.size(); ++i) {
        // SAFETY TIP: .at(i) checks if index 'i' is inside the list!
        // If it's out of bounds, it safely stops instead of crashing your whole computer.
        std::cout << "  Hero #" << (i + 1) << ": " << superHeroes.at(i) << "\n";
    }

    // Removing the last item
    superHeroes.pop_back(); // Removes "Wonder Woman"
    std::cout << "After pop_back(), size is now: " << superHeroes.size() << "\n";
}

// =========================================================================================
// SECTION 10: FUNCTIONS (REUSABLE RECIPES OF CODE)
// =========================================================================================
// WHAT IS IT CALLED?
// Functions, Parameters, Return Types, and Overloading
//
// WHAT DOES IT DO?
// A function bundles instructions into a named recipe. You give it ingredients (arguments),
// it executes the steps, and optionally hands you back a cooked meal (return value).
//
// 8-YEAR-OLD EXPLANATION:
// A magic blender recipe! You put in strawberries and milk (ingredients), the blender whirls,
// and it hands you back a delicious strawberry smoothie!
// =========================================================================================

// 1. Simple function that returns a value
int addNumbers(int x, int y) {
    return x + y; // Gives back the sum
}

// 2. Void function (does work, but returns nothing!)
// 8-YEAR-OLD EXPLANATION: A greeting robot that waves its hand. It doesn't give you a gift, it just waves!
void waveHand(const std::string& name) {
    std::cout << "Robot waves friendly hand at " << name << "! *wave wave*\n";
}

// 3. Pass-by-Value vs. Pass-by-Reference
// WHAT IS IT CALLED:
// - Pass-by-Value: (int x) creates a COPY.
// - Pass-by-Reference: (int& x) works on the ORIGINAL variable itself using '&'!
// 8-YEAR-OLD EXPLANATION:
// - Pass-by-value is photocopying your homework page so your friend can color on it. Your original stays clean!
// - Pass-by-reference is handing your original drawing directly to your friend. If they color on it,
//   your original page changes!
void tryToDoubleByValue(int copyOfNumber) {
    copyOfNumber = copyOfNumber * 2; // Only changes local copy!
}

void reallyDoubleByReference(int& originalNumber) {
    originalNumber = originalNumber * 2; // Changes the real original!
}

// 4. Function Overloading
// WHAT IS IT CALLED: Function Overloading
// WHAT DOES IT DO: Multiple functions can have the EXACT SAME NAME, as long as their ingredients
// (parameters) have different types or counts!
// 8-YEAR-OLD EXPLANATION:
// The command "Draw()". If you say Draw(Circle), you draw a circle. If you say Draw(Square),
// you draw a square. The word is the same, but the paper gets what you asked for!
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

// 5. Lambda Expressions (Modern C++ Anonymous Functions)
// WHAT IS IT CALLED: Lambda Expression / Anonymous Function
// WHAT DOES IT DO: A tiny, nameless mini-function created on-the-spot inside another function.
// Syntax: [captures](parameters) { body }
// 8-YEAR-OLD EXPLANATION: A mini pocket robot you construct right now just to do one fast trick!
void demonstrateFunctions() {
    std::cout << "\n--- DEMO 7: FUNCTIONS & RECIPES ---\n";

    int sum = addNumbers(5, 7);
    std::cout << "addNumbers(5, 7) = " << sum << "\n";

    waveHand("Alice");

    int myScore = 50;
    tryToDoubleByValue(myScore);
    std::cout << "After tryToDoubleByValue, myScore is still: " << myScore << " (unchanged!)\n";

    reallyDoubleByReference(myScore);
    std::cout << "After reallyDoubleByReference, myScore is now: " << myScore << " (doubled!)\n";

    // Overloading in action:
    std::cout << "multiply(int, int): " << multiply(3, 4) << "\n";
    std::cout << "multiply(double, double): " << multiply(2.5, 4.0) << "\n";

    // Lambda demo:
    auto shout = [](const std::string& word) {
        return word + "!!!";
    };
    std::cout << "Lambda shout: " << shout("C++ is Awesome") << "\n";
}

// =========================================================================================
// SECTION 11: REFERENCES, POINTERS & SAFE SMART POINTERS
// =========================================================================================
// WHAT IS IT CALLED?
// References (&), Pointers (*), nullptr, and Modern Smart Pointers (std::unique_ptr)
//
// WHAT DOES IT DO?
// - Reference (&): An alias or nickname for an existing variable.
// - Pointer (*): A variable that stores the physical memory address (location) of another variable.
// - Smart Pointer: An automated guardian that manages memory for you so you NEVER get memory leaks!
//
// 8-YEAR-OLD EXPLANATION:
// - Reference: A nickname! If your friend "Robert" is also called "Bob", Bob and Robert are
//   the exact same boy.
// - Pointer: A treasure map! The map itself is NOT the gold chest. It just has an 'X' showing
//   the house address where the chest is buried!
// - Smart Pointer: A super-smart robot housekeeper. When you finish playing with your toy,
//   the robot automatically packs it up and recycles it cleanly so your room is never messy!
// =========================================================================================

void demonstratePointersAndReferences() {
    std::cout << "\n--- DEMO 8: REFERENCES, POINTERS & SMART POINTERS ---\n";

    int treasureCoins = 500;

    // 1. Reference (&) - An alias
    int& nickname = treasureCoins;
    nickname += 100; // Changes treasureCoins!
    std::cout << "Reference: treasureCoins is now " << treasureCoins << " (via nickname)\n";

    // 2. Safe Pointer (*) Basics
    // The '&' symbol in front of a variable means "Give me the memory address of this variable".
    // The '*' symbol in front of a pointer means "Go to that address and grab the value" (Dereferencing).
    int* mapToTreasure = &treasureCoins;
    std::cout << "Pointer Address (Where in RAM?): " << mapToTreasure << "\n";
    std::cout << "Pointer Dereferenced (What is there?): " << *mapToTreasure << "\n";

    // 3. Safety: nullptr
    // NEVER leave a pointer uninitialized (it points to random garbage memory!).
    // Always point it to nullptr (nowhere) if it has nothing to point to yet.
    int* emptyMap = nullptr;
    if (emptyMap == nullptr) {
        std::cout << "Safety Check: emptyMap points to nothing right now. Safe to check!\n";
    }

    // 4. Modern Safe Smart Pointers (std::unique_ptr)
    // In old C++, people used "new" and forgot "delete", crashing games with memory leaks.
    // Modern C++ uses std::make_unique! It destroys the memory automatically when done.
    std::unique_ptr<int> smartToy = std::make_unique<int>(999);
    std::cout << "Smart Pointer value: " << *smartToy << " (Will auto-delete safely!)\n";
}

// =========================================================================================
// SECTION 11: OBJECT-ORIENTED PROGRAMMING (CLASSES, STRUCTS, ENUMS, INHERITANCE)
// =========================================================================================
// WHAT IS IT CALLED?
// OOP (Classes, Structs, Encapsulation, Inheritance, Polymorphism, Enum Class)
//
// WHAT DOES IT DO?
// Groups data (attributes) and functions (behaviors) together to model real-world concepts.
//
// 8-YEAR-OLD EXPLANATION:
// - A Class is a blueprint for a Lego robot!
// - An Object is the actual Lego robot you build using that blueprint!
// - Inheritance: If you make a "SuperRobot" blueprint based on the normal "Robot" blueprint,
//   the SuperRobot automatically gets all the normal robot's skills, plus laser eyes!
// =========================================================================================

// 1. Enum Class (Enumeration)
// WHAT DOES IT DO: Creates a custom type with a closed set of allowed values.
// 8-YEAR-OLD EXPLANATION: A traffic light that can ONLY be Red, Yellow, or Green.
// No one is allowed to paint it purple polka-dots!
enum class TrafficLight {
    Red,
    Yellow,
    Green
};

// 2. Struct (Simple grouping of public variables)
// 8-YEAR-OLD EXPLANATION: An ID card that holds your Name and your Age.
struct StudentBadge {
    std::string name;
    int gradeLevel;
};

// 3. Base Class (Parent Blueprint)
class Pet {
// 'protected' means this pet's children (like Dog) can see it, but strangers cannot!
protected:
    std::string name;
    int energy;

// 'public' means anyone can talk to these functions!
public:
    // Constructor: Called automatically when the object is born!
    // 8-YEAR-OLD EXPLANATION: The birthday party where the pet gets its name tag!
    Pet(const std::string& petName, int startingEnergy) 
        : name(petName), energy(startingEnergy) {
        std::cout << "  [Pet Born]: " << name << " is here!\n";
    }

    // Virtual Destructor: Cleans up safely when the pet object is finished.
    virtual ~Pet() = default;

    // Virtual Function: Can be customized (overridden) by child classes!
    // 8-YEAR-OLD EXPLANATION: All animals make a sound, but dogs bark and cats meow!
    virtual void speak() const {
        std::cout << "  " << name << " makes a cute animal noise.\n";
    }

    // Getter function (Encapsulation)
    // Keeps internal data protected and reads it safely.
    int getEnergy() const {
        return energy;
    }
};

// 4. Derived Class (Child Blueprint with Inheritance)
// 'class Dog : public Pet' means Dog INHERITS everything from Pet!
class Dog : public Pet {
private:
    std::string favoriteToy;

public:
    // Child Constructor passes name and energy up to the Parent Pet constructor!
    Dog(const std::string& dogName, int startingEnergy, const std::string& toy)
        : Pet(dogName, startingEnergy), favoriteToy(toy) {}

    // 'override' tells C++: "Replace the parent's generic speak with my special Dog bark!"
    void speak() const override {
        std::cout << "  " << name << " barks: WOOF WOOF! (Loves to play with " << favoriteToy << ")\n";
    }

    void fetch() {
        std::cout << "  " << name << " fetches the " << favoriteToy << "!\n";
    }
};

class Cat : public Pet {
public:
    Cat(const std::string& catName, int startingEnergy)
        : Pet(catName, startingEnergy) {}

    void speak() const override {
        std::cout << "  " << name << " meows: Meowwwwww! *purr purr*\n";
    }
};

void demonstrateOOP() {
    std::cout << "\n--- DEMO 9: OBJECT-ORIENTED PROGRAMMING (OOP) ---\n";

    // Struct demo:
    StudentBadge badge1{"Timmy", 3};
    std::cout << "Struct Badge: " << badge1.name << ", Grade: " << badge1.gradeLevel << "\n";

    // Enum demo:
    TrafficLight signal = TrafficLight::Green;
    if (signal == TrafficLight::Green) {
        std::cout << "TrafficLight: GREEN means GO!\n";
    }

    // Polymorphism Demo:
    // A list of pets where each pet makes its own unique sound!
    std::vector<std::unique_ptr<Pet>> petPark;
    petPark.push_back(std::make_unique<Dog>("Buddy", 100, "Red Tennis Ball"));
    petPark.push_back(std::make_unique<Cat>("Whiskers", 80));

    std::cout << "Pet concert in the park:\n";
    for (const auto& pet : petPark) {
        pet->speak(); // Polymorphism! Calls Dog::speak for Buddy and Cat::speak for Whiskers!
    }
}

// =========================================================================================
// SECTION 13: TEMPLATES (GENERIC PROGRAMMING / WRITE ONCE, USE FOR ANY TYPE!)
// =========================================================================================
// WHAT IS IT CALLED?
// Function Template (template <typename T>)
//
// WHAT DOES IT DO?
// Creates a blueprint function where the data type itself is flexible! You can pass ints,
// doubles, or strings, and the template handles all of them without duplicating code.
//
// 8-YEAR-OLD EXPLANATION:
// A shaped cookie cutter!
// You can use a star-shaped cookie cutter on sugar dough, chocolate dough, or even play-dough.
// The cutter is the exact same, but it shapes any ingredient you give it!
// =========================================================================================

template <typename T>
T getBiggerValue(T first, T second) {
    return (first > second) ? first : second;
}

void demonstrateTemplates() {
    std::cout << "\n--- DEMO 10: TEMPLATES (COOKIE CUTTERS) ---\n";

    // Works for integers:
    int bigInt = getBiggerValue(15, 42);
    std::cout << "Bigger int: " << bigInt << "\n";

    // Works for decimals (doubles):
    double bigDouble = getBiggerValue(3.14, 2.71);
    std::cout << "Bigger double: " << bigDouble << "\n";

    // Works for strings (alphabetical order):
    std::string bigString = getBiggerValue(std::string("Apple"), std::string("Zebra"));
    std::cout << "Bigger string alphabetically: " << bigString << "\n";
}

// =========================================================================================
// SECTION 14: ERROR HANDLING (TRY, THROW, CATCH)
// =========================================================================================
// WHAT IS IT CALLED?
// Exception Handling (try, throw, catch)
//
// WHAT DOES IT DO?
// When an unexpected problem happens (like dividing by zero), 'throw' sounds the alarm.
// The 'try' block watches for alarms, and 'catch' handles the problem so the app doesn't crash!
//
// 8-YEAR-OLD EXPLANATION:
// Wearing a safety bicycle helmet!
// If you trip or fall ('throw'), your helmet cushions the fall ('catch') and you get right back up
// instead of getting hurt!
// =========================================================================================

double safeDivide(double top, double bottom) {
    if (bottom == 0.0) {
        // Sound the alarm! Throw an exception!
        throw std::runtime_error("Attempted to divide by zero! That is mathematically illegal!");
    }
    return top / bottom;
}

void demonstrateErrorHandling() {
    std::cout << "\n--- DEMO 11: ERROR HANDLING (SAFETY HELMETS) ---\n";

    try {
        std::cout << "Attempting 10.0 / 2.0 = " << safeDivide(10.0, 2.0) << "\n";
        
        std::cout << "Attempting 10.0 / 0.0...\n";
        safeDivide(10.0, 0.0); // This will throw an error!
        
        std::cout << "This line will never be reached because of the error.\n";
    } catch (const std::exception& error) {
        // The catch block protects the program!
        std::cout << "  [Caught Error Safely!]: " << error.what() << "\n";
        std::cout << "  Program safely recovered without crashing!\n";
    }
}

// =========================================================================================
// SECTION 15: THE MAIN FUNCTION (THE FRONT DOOR OF EVERY C++ PROGRAM)
// =========================================================================================
// WHAT IS IT CALLED?
// The Entry Point: int main()
//
// WHAT DOES IT DO?
// Every single C++ program MUST have exactly one 'main' function. When you double click an app
// or run it in the terminal, the computer enters through this front door and executes line by line.
// 'return 0;' at the end tells the operating system: "Everything finished with ZERO errors!"
//
// 8-YEAR-OLD EXPLANATION:
// The big green "START GAME" button on your favorite arcade machine!
// =========================================================================================

int main() {
    std::cout << "=========================================================\n";
    std::cout << "   WELCOME TO THE COMPLETE C++ SYNTAX & DATA TYPE GUIDE  \n";
    std::cout << "=========================================================\n";

    // 1. Namespaces
    std::cout << "\n--- NAMESPACES DEMO ---\n";
    SchoolRoomA::sayHello();
    SchoolRoomB::sayHello();

    // 2. Data Types
    demonstrateDataTypes();

    // 3. Console Input & Output (cout, cin, getline)
    demonstrateConsoleIO();

    // 4. Operators
    demonstrateOperators();

    // 5. Control Flow (If / Else / Nested If / Switch)
    demonstrateControlFlow();

    // 6. Loops (For / While / Do-While / Nested Loops)
    demonstrateLoops();

    // 7. Containers (Arrays & Vectors)
    demonstrateContainers();

    // 8. Functions & Lambdas
    demonstrateFunctions();

    // 9. Pointers, References & Smart Pointers
    demonstratePointersAndReferences();

    // 10. Object Oriented Programming (Classes & Inheritance)
    demonstrateOOP();

    // 11. Templates
    demonstrateTemplates();

    // 12. Exception Handling
    demonstrateErrorHandling();

    std::cout << "\n=========================================================\n";
    std::cout << "   TUTORIAL COMPLETE! You now know all key C++ syntax!   \n";
    std::cout << "=========================================================\n";

    return 0; // 0 means Success!
}
