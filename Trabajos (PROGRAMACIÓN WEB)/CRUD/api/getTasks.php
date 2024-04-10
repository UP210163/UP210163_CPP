<?php
include "./partials/Connection.php";

try {
  $query = "SELECT * FROM task";
  $result = $conn->query($query);

  if (!$result) {
    die('Query Failed' . $conn->error);
  }

  $json = [];
  while ($row = $result->fetch_assoc()) {
    $json[] = [
      'name' => $row['name'],
      'description' => $row['description'],
      'id' => $row['id']
    ];
  }

  header('Content-Type: application/json');
  echo json_encode($json);
} catch (PDOException $e) {
  die($e->getMessage());
}
?>
