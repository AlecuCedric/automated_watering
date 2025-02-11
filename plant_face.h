//Custom characters for Plant Face
//Every Face has 8 bytes: Face 1 - 6
//First 2 bytes are the same for all 3 faces leftEye / RightEye
//Bytes 1 - 4 are for the mouth
//So we will have 2 Eyes bytes
//And we will only change the mouth

//Eyes
byte leftEye[8] = {
  0b00000,
  0b01111, 
  0b01111,
  0b01111,
  0b01111,
  0b01111,
  0b01111,
  0b01111
};

byte rightEye[8] = {
  0b00000,
  0b11110, 
  0b11110,
  0b11110,
  0b11110,
  0b11110,
  0b11110,
  0b11110
};

//NormalFace
byte normalFace1[8] = {
  0b01111,
  0b01111, 
  0b01111,
  0b00000,
  0b00000,
  0b01111,
  0b01111,
  0b00000
};

byte normalFace2[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111,
  0b00000
};

byte normalFace3[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111,
  0b00000
};

byte normalFace4[8] = {
  0b11110,
  0b11110,
  0b11110,
  0b00000,
  0b00000,
  0b11110,
  0b11110,
  0b00000
};

//HappyFace
byte happyFace1[8] = {
  0b01111,
  0b01111, 
  0b01111,
  0b00000,
  0b00000,
  0b01111,
  0b01111,
  0b00111
};

byte happyFace2[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111
};

byte happyFace3[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111
};

byte happyFace4[8] = {
  0b11110,
  0b11110,
  0b11110,
  0b00000,
  0b00000,
  0b11110,
  0b11110,
  0b11100
};

//SadFace
byte sadFace1[8] = {
  0b01111,
  0b01111, 
  0b01111,
  0b00000,
  0b00000,
  0b00111,
  0b01111,
  0b01111
};

byte sadFace2[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111,
  0b00000
};

byte sadFace3[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b11111,
  0b00000
};

byte sadFace4[8] = {
  0b11110,
  0b11110,
  0b11110,
  0b00000,
  0b00000,
  0b11100,
  0b11110,
  0b11110
};