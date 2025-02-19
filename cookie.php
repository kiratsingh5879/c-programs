<?php
if(isset($_COOKIE['last_visited'])) {
    $last_visited=$_COOKIE['last_visited'];
}
else {
    $last_visited="this is ur first visit";
}
$current_date=date();
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <p>last visited</p><?php echo $last_visited?>
    <p>current date and time</p><?php echo $current_date  ?>
    
</body>
</html>