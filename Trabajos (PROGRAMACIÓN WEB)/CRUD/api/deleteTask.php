<?php
include "./partials/Connection.php";

if (isset($_POST['id'])) {
  $id = $_POST['id'];

  try {
    // Prepara la consulta para eliminar la tarea
    $query = "DELETE FROM task WHERE id = ?";
    $statement = $conn->prepare($query);
    
    // Ejecuta la consulta, pasando el ID como parámetro
    $statement->execute([$id]);

    // Devuelve un mensaje de éxito
    echo "Task Deleted Successfully";
  } catch (PDOException $e) {
    // Maneja cualquier error de PDO
    die($e->getMessage());
  }
} else {
  // Si no se proporciona el ID, devuelve un mensaje de error
  die('ID not provided');
}
?>
