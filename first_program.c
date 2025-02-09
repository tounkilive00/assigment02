 

// Function to convert binary to hexadecimal
void binaryToHex(char *binary) {
    long int decimal = strtol(binary, 0, 2); // Convert binary to decimal
    printf("Hexadecimal: %lX\n", decimal); // Convert decimal to hexadecimal and print it
}

int main() {
    char binary[65]; // Buffer to hold binary input (up to 64 bits)
    
    printf("Enter a binary number: ");
    scanf("%64s", binary);
    
    binaryToHex(binary);
    
    return 0;
}
