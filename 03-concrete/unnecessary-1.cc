#include "unnecessary.h"

void use(Ptr &p);

int main() {
  Ptr p{10};
  use(p);
}
