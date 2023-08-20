// Digital Output on LED 

const int LED = 2; // LED BUILT-IN KHUSUS ESP01
void setup ()  
{
     pinMode (LED, OUTPUT); // Declaring LED pin as an output.
}
void loop () // Code under this loop runs forever.
{
    digitalWrite (LED, HIGH); // Making LED High.
    delay(1000);              // Some Delay
    digitalWrite (LED, LOW);  // Making LED LOW.
    delay(1000);              // Some Delay
}
