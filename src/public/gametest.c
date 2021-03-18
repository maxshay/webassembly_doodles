char eActive[10];
float eX[10], eY[10], spawnDelay, spawnY;
int score;

void loop(float sDeltaTime){
  spawnDelay -= sDeltaTime;
  for(int e = 0; e < 10; ++e){
    if(eActive[e] == 1){
    if(eX[e] < 900.0f) eX[e] += 200.0f * sDeltaTime;
    else eActive[e] = 0;
    } else if (spawnDelay <= 0.0f){
    eActive[e] = 1;
    eX[e] = 0.0f;
    eY[e] = spawnY;

    spawnY += 150.0f;
    if (spawnY > 900.0f) spawnY = 0.0f;

    
    spawnDelay += 1.0f;
    }
  }
}

void onClick(float mouseX, float mouseY){
for(int e = 0; e < 10; ++ e){
if(mouseX > eX[e] - 50 && mouseX < eX[e] + 50 && mouseY > eY[e] - 50 && mouseY < eY[e] + 50){
eActive[e] = 0;
score ++;
}
}
}