<?php
include "../partials/Connection.php";

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
  try {
    $data = json_decode(file_get_contents("php://input"), true);

    $task_name = $data['name'];
    $task_description = $data['description'];
    $id = $data['id'];

    $query = "UPDATE task SET name = :name, description = :description WHERE id = :id";
    $statement = $conn->prepare($query);
    $statement->bindParam(':name', $task_name);
    $statement->bindParam(':description', $task_description);
    $statement->bindParam(':id', $id);

    if ($statement->execute()) {
      echo "Task Update Successfully";
    } else {
      die('Query Failed.');
    }
  } catch (PDOException $e) {
    die($e->getMessage());
  }
}
?>

