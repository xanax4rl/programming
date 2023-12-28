using System;

// Інтерфейс Lamp
public interface ILamp
{
    string Type { get; set; }
    string Manufacturer { get; set; }
    int PowerInLumens { get; set; }
    string LightType { get; set; }
    int NumberOfLightElements { get; set; }

    void PrintInfo();
    void ChangePower(int newPower);
}

// Інтерфейс Camera
public interface ICamera
{
    string Type { get; set; }
    string Manufacturer { get; set; }
    int OpticalSensitivity { get; set; }

    void PrintInfo();
    void ChangeSensitivity(int newSensitivity);
}

// Клас PhotoStudio, що реалізує обидва інтерфейси
public class PhotoStudio : ILamp, ICamera
{
    // Властивості для інтерфейсу Lamp
    public string Type { get; set; }
    public string Manufacturer { get; set; }
    public int PowerInLumens { get; set; }
    public string LightType { get; set; }
    public int NumberOfLightElements { get; set; }

    // Властивості для інтерфейсу Camera
    public int OpticalSensitivity { get; set; }

    // Методи для інтерфейсу Lamp
    public void PrintInfo()
    {
        Console.WriteLine($"Lamp Info:\nType - {Type}\nManufacturer - {Manufacturer}\nPower - {PowerInLumens} lumens\nLight Type - {LightType}\nNumber of Light Elements - {NumberOfLightElements}");
    }

    public void ChangePower(int newPower)
    {
        PowerInLumens = newPower;
        Console.WriteLine($"Power changed to {newPower} lumens");
    }

    // Методи для інтерфейсу Camera
    public void ChangeSensitivity(int newSensitivity)
    {
        OpticalSensitivity = newSensitivity;
        Console.WriteLine($"Sensitivity changed to {newSensitivity}");
    }

    // Методи для інтерфейсу Camera
    public void PrintCameraInfo()
    {
        Console.WriteLine($"Camera Info:\nType - {Type}\nManufacturer - {Manufacturer}\nOptical Sensitivity - {OpticalSensitivity}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        PhotoStudio studio1 = new PhotoStudio();
        studio1.Type = "LED";
        studio1.Manufacturer = "XYZ";
        studio1.PowerInLumens = 2000;
        studio1.LightType = "White";
        studio1.NumberOfLightElements = 4;

        PhotoStudio studio2 = new PhotoStudio();
        studio2.Type = "Fluorescent";
        studio2.Manufacturer = "ABC";
        studio2.PowerInLumens = 1500;
        studio2.LightType = "Warm";
        studio2.NumberOfLightElements = 6;

        studio1.PrintInfo();
        studio2.PrintInfo();

        studio2.ChangeSensitivity(400);
        studio2.PrintCameraInfo();
    }
}
