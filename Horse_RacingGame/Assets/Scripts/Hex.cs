using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Hex 
{
    public static string DivideHexadecimal(string dividend, string divisor)
    {
        // Initialize variables
        string quotient = "";
        string remainder = "";

        // Ensure divisor is not zero
        if (divisor == "0")
        {
            throw new DivideByZeroException("Division by zero error.");
        }

        // Iterate through each digit of the dividend
        foreach (char digit in dividend)
        {
            // Append the current digit to the remainder
            remainder += digit;

            // Convert the remainder to an integer
            int remainderValue = Convert.ToInt32(remainder, 16);

            // Perform division
            int quotientDigit = remainderValue / Convert.ToInt32(divisor, 16);

            // Append the quotient digit to the result
            quotient += quotientDigit.ToString("X"); // Convert quotient digit to hexadecimal string

            // Update the remainder for the next iteration
            remainder = (remainderValue % Convert.ToInt32(divisor, 16)).ToString("X");
        }

        // Remove leading zeros from the quotient
        quotient = quotient.TrimStart('0');

        // If quotient is empty, set it to "0"
        if (string.IsNullOrEmpty(quotient))
        {
            quotient = "0";
        }

        return quotient;
    }
}
