// Elementos HTML
const userSelect = document.getElementById('select-users');
const userContainer = document.getElementById('user-container');
const taskContainer = document.getElementById('task-container');

// Funciones
/**
 * Optiene una lista de todos los usuarios que pueden existir
 * @returns {Promise<User[]>}
 */
function getAllUsers() {
  return fetch('/data/usuarios.json')
    .then(resp => resp.json());
}

/**
 * Optiene una lista de todas las tareas que hay de todos los usuarios
 * @returns {Promise<Task[]>}
 */
function getAllTasks() {
  return fetch('/data/tareas.json')
    .then(resp => resp.json());
}

/**
 * Actualiza la información del usuario seleccionado
 * @param {User} user El usuario seleccionado
 */
function updateUserInformation(user) {
  // Limpiar el contenedor de usuario
  userContainer.innerHTML = '';

  // Crear elementos de lista para mostrar la información del usuario
  const fullNameLi = document.createElement('li');
  fullNameLi.textContent = `Nombre completo: ${user.firstname} ${user.lastname}`;
  userContainer.appendChild(fullNameLi);

  const emailLi = document.createElement('li');
  emailLi.textContent = `Email: ${user.email}`;
  userContainer.appendChild(emailLi);
}

// Codígo necesario para mostrar información

// Fin de codígo 

// Cuando la página se carga
window.onload = function() {
  // Obtener usuarios y mostrar la información del primer usuario por defecto
  getAllUsers()
    .then(users => {
      // Hacer algo con los usuarios, como mostrarlos en un select
      users.forEach(user => {
        const option = document.createElement('option');
        option.value = user.id;
        option.textContent = `${user.firstname} ${user.lastname}`;
        userSelect.appendChild(option);
      });

      // Mostrar la información del primer usuario por defecto
      const defaultUser = users[0]; // Seleccionar el primer usuario
      updateUserInformation(defaultUser); // Mostrar la información del usuario seleccionado
    });

  // Manejar el cambio de selección del usuario
  userSelect.addEventListener('change', function() {
    const selectedUserId = parseInt(userSelect.value); // Obtener el ID del usuario seleccionado

    // Obtener la información del usuario seleccionado
    getAllUsers()
      .then(users => {
        const selectedUser = users.find(user => user.id === selectedUserId); // Encontrar el usuario por ID
        if (selectedUser) {
          updateUserInformation(selectedUser); // Actualizar la información del usuario
        }
      });
  });
};
