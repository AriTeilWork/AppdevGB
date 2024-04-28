<?php

$rmin = $_POST['min'];
$rmax = $_POST['max'];
$ruid = $_POST['user'];
$ip = $_SERVER['REMOTE_ADDR'];

echo "You really rock!!\n";

$now = date("Y-m-d H:i:s");
$record = $now . ", " . $rmin . ", " . $rmax . ", " . $ruid . ", " . $ip . "\n";

$file = "record.txt";

if (file_exists($file)) {
  $p = fopen($file, "a");
  fwrite($p, $record);
  fclose($p);
} else {
  $p = fopen($file, "w");
  fwrite($p, $record);
  fclose($p);
}

?>
