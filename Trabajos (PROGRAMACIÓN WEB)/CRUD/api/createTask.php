<?php
include "./partials/Connection.php";


if(isset($_POST['name']) && isset($_POST['description'])) {
  // Obtenemos los datos de la solicitud POST
  $task_name = $_POST['name'];
  $task_description = $_POST['description'];

  try {

    $data = array(
      'name' => $task_name,
      'description' => $task_description
    );


    $options = array(
      'http' => array(
        'header' => "Content-type: application/x-www-form-urlencoded\r\n",
        'method' => 'POST',
        'content' => http_build_query($data)
      )
    );

    // Creamos el contexto de la solicitud fetch
    $context = stream_context_create($options);

    $result = file_get_contents('http://localhost/api/createTask.php', false, $context);

    if ($result === false) {
      echo "Failed to add task";
    } else {
      echo $result;
    }
  } catch (Exception $e) {

    echo "Error: " . $e->getMessage();
  }
} else {

    echo 'Name or description not provided';
}
?>
