<?php

$host = "localhost";
$dbName = "taskList";
$user = "root";
$password = "";
$protocol = "mysql:host={$host};dbname={$dbName}";
try {

  $conn = new PDO($protocol, $user, $password);

  if ($conn) {
    echo "Conexión establecida correctamente.";
  } else {
    echo "No se pudo establecer la conexión.";
  }
 
} catch (PDOException $e) {
  die($e->getMessage());
}
?>
