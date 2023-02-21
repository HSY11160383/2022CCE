PImage img;
void setup(){
  size(500,500);
  img = loadImage("001.jpg");
}

void draw(){
  image(img, 0, 0);
}
