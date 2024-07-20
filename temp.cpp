class IHelpDesk {
    // Pure virtual functions or interface definition
    // Usually no member variables, just function declarations
public:
    virtual void SomeFunction() = 0;
    virtual int AnotherFunction() const = 0;
    // etc.
};

class HelpDesk : public IHelpDesk {
public:
    // Implementing functions declared in IHelpDesk
    void SomeFunction() override {
        // Implementation
    }

    int AnotherFunction() const override {
        // Implementation
        return 0;
    }
};
