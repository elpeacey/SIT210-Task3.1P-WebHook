const int signalpin = A0;

void setup() {
    pinMode(signalpin, INPUT);
}

void loop() {
    bool motion;
    
    if (digitalRead(signalpin) == HIGH)
    {
        motion = true;
        Particle.publish("Motion detected", String(motion), PRIVATE);
    }
    else
    {
        motion = false;
        Particle.publish("Motion detected", String(motion), PRIVATE);
    }
    
    delay(3000);

}