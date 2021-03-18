const createApp = require("./src/app");
const http = require("http");
(() => {
  const app = createApp();
  http.createServer(app).listen(8000);
})();
