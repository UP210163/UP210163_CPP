import { getAllUsers } from './petitions.js';
debugger;
const listUsers = document.getElementById('users');

document.addEventListener('DOMContentLoaded', async () => {
  const users = await getAllUsers();

  let template = ''; // Inicializar template con un string vacío

  for (const user of users) {
    template += `
      <option value="${user.id}">${user.fullname}</option> <!-- Corregir cierre de la etiqueta option -->
    `;
  }

  listUsers.innerHTML = template;
});

console.log(listUsers);
