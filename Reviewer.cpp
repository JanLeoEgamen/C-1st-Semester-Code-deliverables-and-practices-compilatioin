// Hi, I'm Jan Leo Egamen and I have created a progam that will help a student to pass a midterm exam in Introduction to IT
#include <iostream>
using namespace std;
class answer{

};
//This is the welcome message to the user
void Welcome(){
    cout << "---------------------------------------------------------------------------------------"<<endl;
    cout << "||Welcome to The Reviewer Program, do you want to review for your incoming exam? Y/N?||"<<endl;
    cout << "---------------------------------------------------------------------------------------"<<endl;

}

//These are the choices for reviewing a topic
void Choices() 
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "||     What do you want to review?           ||"<<endl;
    cout << "|| 1. Lesson 1: Introduction To Computer     ||"<<endl;
    cout << "|| 2. Lesson 2: Generation Of Computers      ||"<<endl;
    cout << "|| 3. Lesson 3: TYPES OF COMPUTERS           ||"<<endl;
    cout << "|| 4. Lesson 4: COMPONENTS OF A COMPUTER     ||"<<endl;
    cout << "|| 5. Lesson 5: Central Processing Unit      ||"<<endl;
    cout << "|| 6. Lesson 6: Input Device                 ||"<<endl;
    cout << "|| 7. Lesson 7: Output Devices               ||"<<endl;
    cout << "|| 8. Lesson 8: Computer Memory              ||"<<endl;
    cout << "|| 10. Lesson 9: Programming Languages       ||"<<endl;
    cout << "|| 11. Lesson 10: Flowcharts                 ||"<<endl;
    cout << "|| 12. Lesson 11: Numbering System           ||"<<endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}

//This is the topic of Introduction to computer
void introtoCom()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]  Computers  [  ]"<<endl;
    cout << "[]Computer is an advanced electronic device that takes raw data as an input from the user and processes it under the control of a set of instructions (called program), produces a result (output), and may saves it for future use."<<endl;
    cout << "[]Charles Babbage is called the Grandfather of the computer."<<endl;
    cout << "[]Computer hardware consists of physical devices of the computer."<<endl;
    cout << "[]Computer software is the intangible form of computer. It is the program."<<endl;
    cout << "[]Data are isolated values or raw facts."<<endl;
    cout << "[]Users are people who write computer programs or interact with the computer"<<endl;
    cout << "\t\t[  ]  Components of Computer  [  ]"<<endl;
    cout << "[]Input unit contains devices with the help of which we enter data into the computer."<<endl;
    cout << "[]Output unit consists of devices with the help of which we get the information from the computer."<<endl;
    cout << "[]Memory Unit stores the data, instructions, intermediate results and output, temporarily, during the processing of data."<<endl;
    cout << "[]Arihmetic Logic Unit or ALU performs arithmetic functions like addition, subtraction, multiplication, division and also logical operations."<<endl;
    cout << "[]Control Unit is the responsible for controlling of all operations like input, processing and output are performed by control unit."<<endl;
    cout << "[]Computer is Fast, Accurate, Diligent, has the capability to stores data, Versatile, can Communicate and do multi tasking."<<endl;
    cout << "[]Computer can be used now in Education, Entertainment, Sport, Advertising, Medicine, Science and Engineering, Government and Home."<<endl;
    cout << "[]The Advantages of Computer are it is Automatic, has speed, has accuracy, Diligent, Versatile, has the power of remembering."<<endl;
    cout << "[]The Disadvantages of Computer are has no self intelligence, No Decision making, No Learning power, Emotionless and Curtail of Human Capabilities. "<<endl;
    cout << "[]System Software are programs that control the operations of computer."<<endl;
    cout << "[]Application softwareare programs thatperform the specific task for the user."<<endl;
}
//This is the topic of the Generation of Computers
void genofCom()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]  Generation of Computers  [  ]"<<endl;
    cout << "[]First Generation of Computer (1940 to 1956): Using Vacuum Tubes."<<endl;
    cout << "[]Advantages: Vacuum tubes were used as electronic component, Electronic digital computers were developed for the first time, fastest calculating devices of their time, Computations were performed in millisecond."<<endl;
    cout << "[]Disadvantages: Too large in size, Unreliable, Induce a large amount of heat, Not portable, Limited commercial use."<<endl;
    cout << "[]Second Generation of Computer (1956 to 1963): Using Transistors"<<endl;
    cout << "[]Advantages: Smaller in size as compares to 1st generation, Much more reliable., Less heat generated, Computation was performing in micro second, Less hardware and maintenance problem, Could be used for commercial use"<<endl;
    cout << "[]Disadvantages: Very costly for commercial use, It still required frequent maintenance, Frequent cooling also required.	"<<endl;
    cout << "[]Third Generation of Computer (1964 to 1971): Using Integrated Circuits."<<endl;
    cout << "[]Advantages: Smaller in size as compared to second generation, More reliable, Portable, Less electricity consumption, Heat generation was rare, General purpose computer."<<endl;
    cout << "[]Disadvantages: Air conditioning was required in many cases due to ICs, Very advance technology was required to make the ICs."<<endl;
    cout << "[]Fourth Generation of Computer (1971 to present): Using Microprocessors."<<endl;
    cout << "[]Advantages: Smaller in size and much reliable, No cooling system required in many cases, Much faster computation, Portable and cheap, The heat generated was negligible, Totally general purpose computer, Cheapest among all generations, All types of High level languages can be used in this type of computers, Totally general purpose."<<endl;
    cout << "[]Disadvantages: Very advanced technology was required to fabricate to the ICs, The latest technology is required for manufacturing of Microprocessors."<<endl;
    cout << "[]Fifth Generation of Computer (Present and Next): Using Artificial Intelligence."<<endl;
    cout << "[]Advantageas: Very large storage capacity, Long bit processor builds, Artificial Intelligence Language developed, Advancement in Parallel Processing, Advancement in Superconductor technology, These computers are much smaller in size than other generation computers"<<endl;
    cout << "[]Disadvantages: They can give more power to companies to watch what you are doing and even allow them to infect your computer, They tend to be sophisticated and complex tools."<<endl;
}

//This is the topic for the types of computers
void typesofCOm()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]  Types of Computers  [  ]"<<endl;
    cout << "[]\tOn the basis of working principle (Operational Based )."<<endl; 
    cout << "[]Analog computer:computer that uses continuous physical phenomena."<<endl; 
    cout << "[]Digital computer: They use digital circuits and are designed to operate on two states, namely bits 0 and 1.."<<endl; 
    cout << "[]Hybrid computer: computers are a combination of both digital and analog computers."<<endl; 
    cout << "[]\tOn the basis of Size and Processing Powers."<<endl; 
    cout << "[]Super Computer: Supercomputers are used for highly calculation-intensive tasks."<<endl; 
    cout << "[]Mainframe Computer: Mainframe computers are multi-user, multi-programming and high performance computers ."<<endl; 
    cout << "[]Mini Computer: Minicomputers are digital computers, generally used in multi-user systems ."<<endl; 
    cout << "[]Micro Computer: Microcomputers are small, low-cost and single-user digital computer."<<endl; 
    cout << "[]\tOn the basis of Purpose."<<endl; 
    cout << "[]General Purpose: Most computers in use today are General-Purpose computers."<<endl; 
    cout << "[]Special Purpose: Special-Purpose Computer are designed to be task specific and most of the times their job is to solve one particular problem.."<<endl; 
}

//This is the topic for Components of Computer
void componentofCom()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]  Components of Computers  [  ]"<<endl;
    cout << "[]The Input-Process-Output Concept(BIOS)."<<endl;
    cout << "[]Three Components of Computer Hardware:."<<endl;
    cout << "1. Input/Output (I/O) Unit: The user interacts."<<endl;
    cout << "2. Central Processing Unit (CPU): CPU controls, coordinates and supervises the operations of the computer and it is the responsible for processing the data ."<<endl;
    cout << "3. Memory Unit: Memory unit stores the data, instructions, intermediate results and output, temporarily, during the processing of data.."<<endl;
    cout << "[]Three Components of Computer Software:"<<endl;
    cout << "[]1. Systsem Software: a computer's system software performs one or more of the functions.."<<endl;
    cout << "[]2. Application Software: set of one or more programs designed to solve a specific problem.."<<endl;
    cout << "[]Data: Words, images, numbers. Information: Purpose, meaning, process. Knowledge: Structure, Growth, System.."<<endl;
}

// This is the topic for CPU
void cpu()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]   Central Processing Unit   [  ]"<<endl;
    cout << "[]Central Processing Unit (CPU) or the processor is also often called the brain of computer.."<<endl;
    cout << "[]CPU consists of Arithmetic Logic Unit (ALU) and Control Unit (CU).."<<endl;
    cout << "[]ALU performs the arithmetic and logic operations."<<endl;
    cout << "[]CU is responsible for organizing the processing of data and instructions.."<<endl;
    cout << "[]The CPU is fabricated as a single Integrated Circuit (IC) chip.."<<endl;
    cout << "[]The microprocessor is plugged into the motherboard of the computer ."<<endl;
    cout << "[]Motherboard is a circuit board that has electronic circuit etched on it and connects the microprocessor with the other hardware components."<<endl;

}

// This is the topic for Input device
void inputDev()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]   Input Devices   [  ]"<<endl;
    cout << "[]Input devices allow users and other applications to input data and instructions into computer for processing."<<endl;
    cout << "1. Receive data from user"<<endl;
    cout << "2. Convert data into binary form "<<endl;
    cout << "3. Provide converted data to computer memory for processing."<<endl;
    cout << "[]Human data entry devices: requires data to be inputted manually."<<endl;
    cout << "[]Example: Keyboard, Pointing devices—mouse, trackball, joystick, digitizing tablet, Pick devices—light pen, touch screen"<<endl;
    cout << "[]Source data entry devices: o not require data to be typed-in."<<endl;
    cout << "[]Exampple: Audio input—speech recognition, Video input—digital camera, Scanner—hand-held scanner, flat-bed scanner, Optical Scanner—OCR, OMR, MICR, barcode reader"<<endl;
}

// This is the topic for Output device
void outputDev()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]   Input Devices   [  ]"<<endl;
    cout << "[]An output device is an electromechanical device that receives information from the CPU and presents it to the user in the desired from."<< endl;
    cout << "[]Hard Copy Devices: the device used to produce hard copy output.."<< endl;
    cout << "[]Example: Printer, Plotter, Computer Output on Microfilm (microfiche)."<< endl;
    cout << "[]Hard Copy Output: the output obtained in a tangible form, portable and can be stored permanently.."<< endl;
    cout << "[]Soft Copy Devices: the output obtained in an intangible form, The soft copy output requires a computer to be read or used."<< endl;
    cout << "[]Example: Monitor, Visual Display Terminal, Video Output, Audio Response."<< endl;
}

// This is the topic for Computer Memory
void comMem()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]   Computer Memory   [  ]"<<endl;
    cout << "[]The computer's memory stores data, instructions required during the processing of data, and output results."<<endl;
    cout << "[]Following are are generally Computer Memory :."<<endl;
    cout << "1. Primary Memory/Main Memory."<<endl;
    cout << "2. Secondary Memory."<<endl;
    cout << "3. CPU Registers."<<endl;
    cout << "4. Cache Memory."<<endl;
    cout << "[]Primary memory is categorized into two main types- Random Access Memory (RAM), Read Only Memory (ROM)."<<endl;
    cout << "[]Secondary storage is non-volatile ."<<endl;
    cout << "[]General Secondary Memorys are Hard Disk, Floppy Disk, Zip Disk, Optical Disk, Magenetic Disk."<<endl;
    cout << "[]Primary memory is temporary while secondary memory is permanent."<<endl;
}

// This is the topic for programming Languages
void progLang()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]   Programming Languages   [  ]"<<endl;
    cout << "[]A programming language is a computer language that is used by programmers (developers) to communicate with computers."<<endl;
    cout << "[]Machine Language is a collection of binary digits or bits that the computer reads and interprets."<<endl;
    cout << "[]Assembly Language uses symbolic representation of machine codes needed to program a particular processor."<<endl;
    cout << "[]High-level Language is written in English-like language."<<endl;
    cout << "[]There are three different kind of translator software:"<<endl;
    cout << "Assembler: converts a program written in assembly language into machine code."<<endl;
    cout << "Compiler: software that translates the program written in a high-level language to machine language."<<endl;
    cout << "Interpreter: convert the high-level language program into computer-understandable form."<<endl;
    cout << "[]Interpreter looks at a source code line-by-line. Compiler looks at the entire source code."<<endl;
    cout << "[]Linker is a program that links several object modules and libraries to a single executable program."<<endl;
}

// This is the topic for Flowchart
void flowchart(){
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]   Flowchart   [  ]"<<endl;
    cout << "[]Rules For Drawing Flowcharts:"<<endl;
    cout << "1. Use conventional flowchart symbols."<<endl;
    cout << "2. Lines should not cross each other."<<endl;
    cout << "3. The processing logic within the flowchart should flow from top to bottom and from left to right."<<endl;
    cout << "4. It should be independent of programming languages."<<endl;
    cout << "5. The flow lines coming out of the decision symbol should be properly labelled."<<endl;
    cout << "6. If the flowchart is complex make use of ordinary connector symbols to avoid crossing of flow lines."<<endl;
    cout << "7. Every flow chart must have the start and End points."<<endl;
}

// This is the topic for Numbering System
void numberSys()
{
    cout << "PLEASE READ: ";
    cout << "\t\t[  ]   Numbering System   [  ]"<<endl;
    cout << "[]A number system in base r or radix r uses unique symbols for r digits."<<endl;
    cout << "[]Decimal Number System — Base 10"<<endl;
    cout << "[]Binary Number System — Base 2"<<endl;
    cout << "[]Octal Number System — Base 8"<<endl;
    cout << "[]Hexadecimal Number System — Base 16"<<endl;
    cout << "1. Decimal Number System: consists of 10 digits—0, 1, 2, 3, 4, 5, 6, 7, 8 and 9."<<endl;
    cout << "2. Binary Number System: The binary number system consists of two digits—0 and 1."<<endl;
    cout << "3. Octal Number System: The octal number system consists of eight digits—0 to 7."<<endl;
    cout << "4. Hexadecimal Number System: The hexadecimal number system consists of sixteen digits—0 to 9, A, B, C, D, E, F, where (A is for 10, B is for 11, C-12, D-13, E-14, F-15)."<<endl;
    cout << "[]The Extended Binary Coded Decimal Interchange Code (EBCDIC) uses 8 bits"<<endl;
    cout << "[]The American Standard Code for Information Interchange (ASCII) is widely used in computers of all types."<<endl;
    cout << "[]Unicode is a universal character encoding standard for the representation of text which includes letters, numbers and symbols in multi-lingual environments"<<endl;
}

/*void question(char ans1){
    cout << " Do you still want to review?Y/N"<<endl;
    cout << "Enter here: ";

    if (ans1=='Y'){
        Choices();
        int y;
        cout << "Please select another topic: ";
        cin >> y;
        select(y);
    }
    else if(ans1=='N'){
        cout << "Thank  you for reviewing, I hope that this would be a great help to pass your midterm!";
    }
}
*/

// this is the switch case statement for the whole topics, all of the topics are being called here
void select(int choose)
{
    switch (choose)
    {
        case 1:
        introtoCom();
        break;
        case 2:
        genofCom();
        break;
        case 3: 
        typesofCOm();
        break;
        case 4:
        componentofCom();
        break;
        case 5:
        cpu();
        break;
        case 6:
        inputDev();
        break;
        case 7:
        outputDev();
        break;
        case 8:
        comMem();
        break;
        case 9:
        progLang();
        break;
        case 10:
        flowchart();
        break;
        case 11:
        numberSys();
        break;
        default:
        cout << "Error, you have entered an invalid character.";

    }

}


// This is the int main function
int main()
{
char ans;

Welcome();

cout << "Enter answer: ";
cin >> ans;

if(ans=='Y')
{
    Choices();
    cout << "Please select a Topic: ";
    int x;
    cin >> x;
    select(x);
}
else if (ans=='N')
{
    cout << "\t\t !! You better study to have better grades !!";
}
else
{
    cout << "\t\t Error, you have entered a wrong character(please re-run the program) ";
}
   return 0;
}