<?php
echo "data recived\n";
$min = $_POST['min'];
$max = $_POST['max'];
$remote = $_SERVER['REMOTE_ADDR'];
$today = date("Y-m-d H:i:s");
$record = $today . ' ' . $min . ' ' . $max .' '. $remote . "\n";
$fname = "mydata.txt";
if(file_exists($fname))
    $fp = fopen($fname, "a");
else $fp = fopen($fname, "w");
fwrite($fp, $record);
fclose($fp);
echo "data stored. ending v2\n";
?>