// sumofdigits.js

// Function to calculate the sum of digits of a number
function SumofDigits(number) {
    let sum = 0;

    // Ensure the number is a valid positive integer
    if (isNaN(number) || number < 0) {
        return "Please enter a valid positive number.";
    }

    // Convert the number to a string to loop through each digit
    let numString = number.toString();

    // Loop through each character of the string (each digit)
    for (let i = 0; i < numString.length; i++) {
        sum += parseInt(numString[i]);  // Add the digit to the sum
    }

    return sum;
}
