int index;
int size;

void setup()
{
    // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    Serial.println("Enter a word: ");
    while (Serial.available() == 0)
    {
    }
    index = 0;
    String menuChoice = Serial.readString();
    size = menuChoice.length();

    while (size > 1)
    {
        switch (menuChoice[index])
        {
        case 'a':
            digitalWrite(LED_BUILTIN, HIGH);
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH);
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'b':
            digitalWrite(LED_BUILTIN, HIGH);
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH);
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH);
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH);
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'c':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'd':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'e':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'f':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'g':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'h':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'i':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'j':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'k':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'l':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'm':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'n':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'o':                            // three dashes
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 2
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 3
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'p':                            // dot, dash, dash, dot
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 2
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 2
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'q':                            // dash, dash, dot, dash
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 2
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 3
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'r':                            // dot, dash, dot
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 2
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 's':                            // 3 dots
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 2
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 3
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 't':                            // 1 dash
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'u':                            // dot dot dash
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 2
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'v':                            // dot dot dot dash
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 2
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 3
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'w':                            // dot dash dash
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 2
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'x':                            // dash dot dot dash
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 2
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 2
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'y':                            // dash dot dash dash
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 2
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 3
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case 'z':                            // dash dash dot dot
            digitalWrite(LED_BUILTIN, HIGH); // dash 1
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 2
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 1
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 2
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '1':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '2':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '3':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '4':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '5':
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '6':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '7:
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '8':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '9':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dot 
            delay(500);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        case '0':
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            digitalWrite(LED_BUILTIN, HIGH); // dash 
            delay(1000);
            digitalWrite(LED_BUILTIN, LOW);
            delay(500);
            break;

        default:
            digitalWrite(LED_BUILTIN, HIGH);
            delay(100);
            digitalWrite(LED_BUILTIN, LOW);
            delay(100);
        }
        size = size - 1;
        index = index + 1;
    }
}