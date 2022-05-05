// This file does nothing
void resetMCP();
void Center(String Input, int row);
void homePage();
void printIC();
void writeToReg(uint8_t reg, uint8_t data, int address = 38);
int readFromReg(uint8_t reg, int address = 38);
int MCP_pinMode(int pin[], int Mode, int size);
void MCP_digitalWrite(int pin, int Mode);
void checkAndShow(CRGB OutOn,CRGB OutOff,CRGB InOn,CRGB InOff);
void initLED();
int MCP_DigitalRead(int pinToRead);
void summaryShow(int counted,int countExpected);
void Select();