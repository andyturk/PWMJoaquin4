extern "C" {

class Foobar {
public:
  Foobar()
      : _state{0} {}
  void increment_state() { _state += 1; }
  int get_state() const { return _state; }

protected:
  int _state;
};

void foobar() {
  static Foobar a_foobar;

  a_foobar.increment_state();
}

}
