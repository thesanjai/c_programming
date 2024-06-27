<?php
// Prompt the user for input
echo "Enter the password: ";
$user_input = trim(fgets(STDIN));

// Replace '&' and '/' with '\'
$modified_input = preg_replace('/[&\/]/', '\\\\', $user_input);

// Execute the system command with the modified input
system("./password " . escapeshellarg($modified_input));

// Print the modified input
echo $modified_input . PHP_EOL;