<?php
// Start the session to use session variables
session_start();

// Check if the session variable 'counter' is set. If not, initialize it.
if (!isset($_SESSION['counter'])) {
    $_SESSION['counter'] = 0;  // Initialize counter if it doesn't exist
}

// Increment the counter by 1 on each page refresh
$_SESSION['counter']++;

// Display the current count
echo "<h1>Page Refresh Count: " . $_SESSION['counter'] . "</h1>";
?>
