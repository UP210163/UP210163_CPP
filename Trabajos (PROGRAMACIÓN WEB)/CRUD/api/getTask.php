<?php
include "./partials/Connection.php";

if (isset($_POST['id'])) {
  $id = $_POST['id'];

  try {
    $query = "SELECT * FROM task WHERE id = ?";
    $statement = $conn->prepare($query);
    $statement->execute([$id]);

    $row = $statement->fetch(PDO::FETCH_ASSOC);

    if (!$row) {
      die('Task not found');
    }

    $json = [
      'name' => $row['name'],
      'description' => $row['description'],
      'id' => $row['id']
    ];

    header('Content-Type: application/json');
    echo json_encode($json);
  } catch (PDOException $e) {
    die($e->getMessage());
  }
} else {
  die('ID not provided');
}
?>
