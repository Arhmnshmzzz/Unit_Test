I implemented unit testing using Google Test to verify the functionality of a getGrade function. This function assigns a grade based on an input score, and you wrote tests to check it under various conditions.

The tests cover:

Valid score ranges (e.g., ensuring scores like 85, 75, and 65 return correct grades "A+", "A", and "B").
Boundary cases for each grade range to confirm the function handles limits properly.
Invalid input handling for scores outside the 0-100 range, verifying that it returns "Invalid" when expected.

These unit tests help ensure the getGrade function works as intended across all relevant cases.

