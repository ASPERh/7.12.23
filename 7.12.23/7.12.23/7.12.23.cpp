#include <iostream>
#include <string>

using namespace std;

class Smartphone {
private:
    string brand;
    string model;
    double screenSize;
    int batteryLife;
    int storageCapacity;

public:
    string getBrand() const {
        return brand;
    }

    string getModel() const {
        return model;
    }

    double getScreenSize() const {
        return screenSize;
    }

    int getBatteryLife() const {
        return batteryLife;
    }

    int getStorageCapacity() const {
        return storageCapacity;
    }

    void setBrand(const string& brand) {
        this->brand = brand;
    }

    void setModel(const string& model) {
        this->model = model;
    }

    void setScreenSize(double screenSize) {
        this->screenSize = screenSize;
    }

    void setBatteryLife(int batteryLife) {
        this->batteryLife = batteryLife;
    }

    void setStorageCapacity(int storageCapacity) {
        this->storageCapacity = storageCapacity;
    }
};

class Cat {
private:
    string name;
    int age;
    string color;
    string breed;
    bool isHungry;

public:
    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getColor() const {
        return color;
    }

    string getBreed() const {
        return breed;
    }

    bool getIsHungry() const {
        return isHungry;
    }

    void setName(const string& name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    void setBreed(const string& breed) {
        this->breed = breed;
    }

    void setIsHungry(bool isHungry) {
        this->isHungry = isHungry;
    }
};

class Pen {
private:
    string color;
    string brand;
    bool isBallpoint;
    double inkLevel;
    bool isCapPresent;

public:
    string getColor() const {
        return color;
    }

    string getBrand() const {
        return brand;
    }

    bool getIsBallpoint() const {
        return isBallpoint;
    }

    double getInkLevel() const {
        return inkLevel;
    }

    bool getIsCapPresent() const {
        return isCapPresent;
    }

    void setColor(const string& color) {
        this->color = color;
    }

    void setBrand(const string& brand) {
        this->brand = brand;
    }

    void setIsBallpoint(bool isBallpoint) {
        this->isBallpoint = isBallpoint;
    }

    void setInkLevel(double inkLevel) {
        this->inkLevel = inkLevel;
    }

    void setIsCapPresent(bool isCapPresent) {
        this->isCapPresent = isCapPresent;
    }
};

class RemoteControl {
private:
    string brand;
    int numOfButtons;
    bool hasBattery;
    bool isProgrammable;
    string compatibleDevices;

public:
    string getBrand() const {
        return brand;
    }

    int getNumOfButtons() const {
        return numOfButtons;
    }

    bool getHasBattery() const {
        return hasBattery;
    }

    bool getIsProgrammable() const {
        return isProgrammable;
    }

    string getCompatibleDevices() const {
        return compatibleDevices;
    }

    void setBrand(const string& brand) {
        this->brand = brand;
    }

    void setNumOfButtons(int numOfButtons) {
        this->numOfButtons = numOfButtons;
    }

    void setHasBattery(bool hasBattery) {
        this->hasBattery = hasBattery;
    }

    void setIsProgrammable(bool isProgrammable) {
        this->isProgrammable = isProgrammable;
    }

    void setCompatibleDevices(const string& compatibleDevices) {
        this->compatibleDevices = compatibleDevices;
    }
};

class Coin {
private:
    int value;
    string countryOfOrigin;
    int yearOfMint;
    string material;
    bool isRare;

public:
    int getValue() const {
        return value;
    }

    string getCountryOfOrigin() const {
        return countryOfOrigin;
    }

    int getYearOfMint() const {
        return yearOfMint;
    }

    string getMaterial() const {
        return material;
    }

    bool getIsRare() const {
        return isRare;
    }

    void setValue(int value) {
        this->value = value;
    }

    void setCountryOfOrigin(const string& countryOfOrigin) {
        this->countryOfOrigin = countryOfOrigin;
    }

    void setYearOfMint(int yearOfMint) {
        this->yearOfMint = yearOfMint;
    }

    void setMaterial(const string& material) {
        this->material = material;
    }

    void setIsRare(bool isRare) {
        this->isRare = isRare;
    }
};

int main() {
    Smartphone myPhone;
    Cat myCat;
    Pen myPen;
    RemoteControl myRemote;
    Coin myCoin;

    myPhone.setBrand("Apple");
    myPhone.setModel("iPhone 13");
    myPhone.setScreenSize(6.1);
    myPhone.setBatteryLife(24);
    myPhone.setStorageCapacity(256);

    myCat.setName("Fluffy");
    myCat.setAge(5);
    myCat.setColor("Gray");
    myCat.setBreed("Persian");
    myCat.setIsHungry(true);

    myPen.setColor("Blue");
    myPen.setBrand("Parker");
    myPen.setIsBallpoint(true);
    myPen.setInkLevel(50.0);
    myPen.setIsCapPresent(true);

    myRemote.setBrand("Sony");
    myRemote.setNumOfButtons(20);
    myRemote.setHasBattery(true);
    myRemote.setIsProgrammable(true);
    myRemote.setCompatibleDevices("TV, DVD player");

    myCoin.setValue(25);
    myCoin.setCountryOfOrigin("USA");
    myCoin.setYearOfMint(2020);
    myCoin.setMaterial("Nickel");
    myCoin.setIsRare(false);

    cout << "Phone details:" << "\n";
    cout << "Brand: " << myPhone.getBrand() << "\n";
    cout << "Model: " << myPhone.getModel() << "\n";
    cout << "Screen Size: " << myPhone.getScreenSize() << " inches" << "\n";
    cout << "Battery Life: " << myPhone.getBatteryLife() << " hours" << "\n";
    cout << "Storage Capacity: " << myPhone.getStorageCapacity() << " GB" << "\n\n";

    cout << "Cat details:\n";
    cout << "Name: " << myCat.getName() << "\n";
    cout << "Age: " << myCat.getAge() << " years old\n";
    cout << "Color: " << myCat.getColor() << "\n";
    cout << "Breed: " << myCat.getBreed() << "\n";
    cout << "Is Hungry: " << (myCat.getIsHungry() ? "Yes" : "No") << "\n\n";

    cout << "Pen details:\n";
    cout << "Color: " << myPen.getColor() << "\n";
    cout << "Brand: " << myPen.getBrand() << "\n";
    cout << "Is Ballpoint: " << (myPen.getIsBallpoint() ? "Yes" : "No") << "\n";
    cout << "Ink Level: " << myPen.getInkLevel() << "\n";
    cout << "Is Cap Present: " << (myPen.getIsCapPresent() ? "Yes" : "No") << "\n\n";

    cout << "Remote Control details:\n";
    cout << "Brand: " << myRemote.getBrand() << "\n";
    cout << "Number of Buttons: " << myRemote.getNumOfButtons() << "\n";
    cout << "Has Battery: " << (myRemote.getHasBattery() ? "Yes" : "No") << "\n";
    cout << "Is Programmable: " << (myRemote.getIsProgrammable() ? "Yes" : "No") << "\n";
    cout << "Compatible Devices: " << myRemote.getCompatibleDevices() << "\n\n";

    cout << "Coin details:\n";
    cout << "Value: " << myCoin.getValue() << " cents\n";
    cout << "Country of Origin: " << myCoin.getCountryOfOrigin() << "\n";
    cout << "Year of Mint: " << myCoin.getYearOfMint() << "\n";
    cout << "Material: " << myCoin.getMaterial() << "\n";
    cout << "Is Rare: " << (myCoin.getIsRare() ? "Yes" : "No") << "\n";
    
    return 0;
}