const http = require('http');
const fs = require('fs');
const path = require('path');

const server = http.createServer((req, res) => {
  // Obtener la URL solicitada
  const url = req.url === '/' ? '/index.html' : req.url;

  // Obtener la extensión del archivo solicitado
  const extname = path.extname(url);

  // Determinar el tipo de contenido
  let contentType = 'text/html';

  // Asignar el tipo de contenido adecuado para diferentes extensiones de archivo
  switch (extname) {
    case '.json':
      contentType = 'application/json';
      break;
    case '.css':
      contentType = 'text/css';
      break;
    case '.js':
      contentType = 'text/javascript';
      break;
  }

  // Ruta al archivo solicitado
  const filePath = path.join(__dirname, url);

  // Leer el archivo
  fs.readFile(filePath, (err, data) => {
    if (err) {
      // Si hay un error al leer el archivo, responder con un error 404
      res.writeHead(404, { 'Content-Type': 'text/plain' });
      res.end('404 Not Found');
    } else {
      // Si se pudo leer el archivo, responder con su contenido y el tipo de contenido adecuado
      res.writeHead(200, { 'Content-Type': contentType });
      res.end(data);
    }
  });
});

const PORT = 3000;
server.listen(PORT, () => {
  console.log(`Server running on port ${PORT}`);
});
