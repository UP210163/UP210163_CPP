export async function getAllUsers() {
  try {
    debugger;
      const resp = await fetch("/api/getUsers.php");
      const json = await resp.json();
      console.log(json)

      return json;
  } catch (error) {
    console.error("Error al procesar la petición: ", error);
  }
}