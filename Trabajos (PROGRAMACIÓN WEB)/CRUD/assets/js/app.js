import { getAllUsers } from './petitions.js';

const listUsers = document.getElementById('users');

document.addEventListener('DOMContentLoaded', async () => {
  const users = await getAllUsers();

  let template = listUsers.innerHTML;
  for (const user of users) {
    template += `
      <option value="${user.id}">${user.fullname}</option>
    `;
  }

  listUsers.innerHTML = template;
});

console.log(listUsers);

import { getTasks } from './petitions.js';

document.addEventListener('DOMContentLoaded', async () => {
  const tasks = await getTasks();
  const tableBody = document.querySelector('tbody');

  // Limpiar filas existentes en la tabla
  tableBody.innerHTML = '';

  // Iterar sobre las tareas y crear filas de tabla
  tasks.forEach(task => {
    const row = `
      <tr>
        <td>${task.id}</td>
        <td>${task.user}</td>
        <td>${task.name}</td>
        <td>${task.description}</td>
        <td>
          <button class="btn btn-secondary btn-sm">
            <span>Update</span> <i class="nf nf-md-pencil"></i>
          </button>
          <button class="btn btn-danger btn-sm">
            <span>Delete</span> <i class="nf nf-cod-trash"></i>
          </button>
        </td>
      </tr>
    `;
    tableBody.insertAdjacentHTML('beforeend', row);
  });
});

import { deleteTask } from './petitions.js';


async function handleDeleteTask(event) {

  const taskId = event.target.dataset.taskId;


  const confirmation = confirm('Are you sure you want to delete this task?');

  if (confirmation) {
    try {

      const message = await deleteTask(taskId);
      

      alert(message);
      

    } catch (error) {

      console.error('Error deleting task:', error.message);
      alert('Failed to delete task');
    }
  }
}


document.addEventListener('click', (event) => {

  if (event.target.classList.contains('delete-task-btn')) {

    handleDeleteTask(event);
  }
});

import { createTask } from './petitions.js';

const taskForm = document.getElementById('task-form');

taskForm.addEventListener('submit', async (event) => {
  event.preventDefault();

  const name = document.getElementById('name').value;
  const description = document.getElementById('description').value;

  const response = await createTask({ name, description });
  console.log(response);
});

import { updateTask } from './petitions.js';

const updateForm = document.getElementById('update-form');

updateForm.addEventListener('submit', async (event) => {
  event.preventDefault();

  const id = document.getElementById('update-id').value;
  const name = document.getElementById('update-name').value;
  const description = document.getElementById('update-description').value;

  const response = await updateTask({ id, name, description });
  console.log(response);
});

