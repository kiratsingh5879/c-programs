<?php
// Check if the "last_visited" cookie is set
if (isset($_COOKIE['last_visited'])) {
    // Retrieve the last visited date and time from the cookie
    $lastVisited = $_COOKIE['last_visited'];
} else {
    // If the cookie is not set, display a message indicating it's the first visit
    $lastVisited = "This is your first visit!";
}

// Set a cookie that stores the current date and time (expires in 1 day)
$currentDateTime = date("Y-m-d H:i:s"); // Current date and time in "YYYY-MM-DD HH:MM:SS" format
setcookie("last_visited", $currentDateTime, time() + 86400); // Expires in 1 day

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Last Visited Date and Time</title>
</head>
<body>
    <h1>Welcome to the Page!</h1>
    <p><strong>Last visited:</strong> <?php echo $lastVisited; ?></p>
    <p><strong>Current date and time:</strong> <?php echo $currentDateTime; ?></p>
</body>
</html>
