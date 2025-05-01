#include <stdio.h> //# means preprocessor directive that containes library files.
// stdio.h(standard input output) is a library file that includes printf scanf predefined functions

#include <conio.h> //conio.h(Console input output) was a part of turbo compiler in 90's and it is a library that include a predefined functions, older one not supported in morden compiler and C

int main()
{ // int,void is a return type means it return a intiger

    // these methods are old compiler specific functions that is not supported by morden C and compiler like GCC they are the part of conio.h file.
    clrscr();
    getch();

    // morden approach but not recommended:
    // #include <stdlib.h>
    system("clear"); // For Linux/Mac
    // or
    system("cls"); // For Windows

    // why back in the days the clrscr(); and getch(); where important :

    // In early DOS-based systems (like with Turbo C), programs typically ran in a single terminal window or command prompt. When you executed a program, its output was printed directly to that window.
    // so in this way we have to clear everything to execute a new program if we don't clear a screen then Previous Program's Output Could Interfere
    // Solution: Use clrscr() to Clear the Screen

    // Why Programs Closed Too Quickly in Early Systems:
    // In early DOS-based systems (like Turbo C), after a program finished executing, the terminal window closed automatically without giving you a chance to read the output.
    // When you ran a program, the output would be displayed on the screen.
    // However, after the program finished executing, the command prompt window would close immediately, especially if you ran the program by double-clicking an executable (.exe).
    // This left you with no time to read the program’s output. The window would disappear before you could see what was printed.
    // The getch() function was introduced to pause the program and wait for the user to press a key before continuing. This gave you time to read the output before the program finished and the window closed.

    // how and when these problums were solve?
    // Modern IDEs and Compilers (Late 1990s - Early 2000s)
    // As modern IDEs like Visual Studio, Eclipse, Xcode, and others became more popular, they provided a much better way to handle output visibility and program execution flow. The key changes here include:
    // Automatic Terminal Window Management: IDEs automatically handled program output in a way that prevented it from disappearing immediately.
    // When you run a program, the IDE often opens a built-in terminal or console window. This window stays open, displaying the program's output until you close it manually.
    // No need for getch() anymore, since the program output remains visible as long as needed.

    // 2. Command Line Improvements (Late 1990s - 2000s)
    // When you run a program from the command prompt or terminal (without using an IDE), operating systems like Windows, Linux, and macOS gradually improved their behavior over time:

    // 3. Introduction of pause Command in Windows (Early 2000s)
    // Before IDEs and modern terminals, Windows command prompt had a simple pause command that provided a similar effect to getch() without needing extra coding.

    // 📝 How pause Command Works:
    // In Windows, the pause command can be used in batch files or C programs to pause execution and display a message like: "Press any key to continue..."
    // The command would hold the screen open until a key is pressed, eliminating the need for getch() in many cases.
    // Example:
        system("pause"); // This will pause the program and wait for user input
}
// 4. The Rise of Cross-Platform Tools (Late 2000s - Present)
// As cross-platform development tools became more common (like Qt, SDL, Mono, Java, etc.), the concept of terminal window management and output visibility evolved further:
// Cross-Platform Development: Tools like Qt (for GUI apps) or SDL (for game development) handled output visibility in a platform-independent way
// Windowed Applications: With graphical user interfaces (GUIs) becoming the norm, many programs no longer needed a terminal window to display output, and the concept of pausing became less relevant.

// 5. Automatic Pausing in Compilers (Post-2010s)
// In more recent versions of IDEs and compilers, some compilers automatically pause the terminal window after program execution, even if you run the program directly from the terminal or through an IDE.

// For example:
// In Visual Studio, the default setting often keeps the output window open after a program finishes.
// In Code::Blocks, similar behavior is observed.



// Summary of the Evolution:
// Early DOS-based environments (Turbo C, old compilers) needed getch() or clrscr() because the terminal would close immediately after program execution.

// Modern IDEs (Visual Studio, Eclipse, etc.) automatically manage the terminal window, keeping output visible without needing getch().

// Command-line improvements (like Windows’ pause command) provided alternative ways to hold the output on screen.

// Cross-platform tools and GUI-based applications largely removed the need for terminal-based pauses altogether.