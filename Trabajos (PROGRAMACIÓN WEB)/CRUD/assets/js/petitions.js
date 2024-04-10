export async function getAllUsers() {
  const resp = await fetch("/api/getUsers.php");
  const json = await resp.json();

  return json;
}

export async function getTasks() {
  const resp = await fetch("/api/getTasks.php");
  const json = await resp.json();

  return json;
}

export async function getTask(id) {
  const resp = await fetch("/api/getTask.php", {
    method: 'POST',
    headers: {
      'Content-Type': 'application/x-www-form-urlencoded'
    },
    body: new URLSearchParams({
      id: id
    })
  });
  const json = await resp.json();

  return json;
}

export async function deleteTask(taskId) {
  try {
    const response = await fetch('/api/deleteTask.php', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/x-www-form-urlencoded'
      },
      body: new URLSearchParams({ id: taskId })
    });

    // Verificamos si la solicitud fue exitosa
    if (!response.ok) {
      throw new Error('Failed to delete task');
    }


    const message = await response.text();
    

    return message;
  } catch (error) {

    throw error;
  }
}

export async function createTask(taskData) {
  const response = await fetch('/api/createTask.php', {
    method: 'POST',
    headers: {
      'Content-Type': 'application/json'
    },
    body: JSON.stringify(taskData)
  });

  if (!response.ok) {
    throw new Error('Failed to add task');
  }

  return response.text(); // Return the response message
}

export async function updateTask(taskData) {
  const response = await fetch('/api/updateTask.php', {
    method: 'POST',
    headers: {
      'Content-Type': 'application/json'
    },
    body: JSON.stringify(taskData)
  });

  if (!response.ok) {
    throw new Error('Failed to update task');
  }

  return response.text(); // Return the response message
}



