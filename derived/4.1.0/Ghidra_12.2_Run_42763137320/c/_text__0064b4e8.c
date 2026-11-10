/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064b4e8; name: FUN_.text__0064b4e8
 */


void FUN__text__0064b4e8(long param_1)

{
  long lVar1;
  Context *this;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN__text__005e8af0();
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  this = *(Context **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (this != (Context *)0x0) {
    nn::ssl::Context::~Context(this);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),this,*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0xa8));
  }
  lVar1 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),lVar1,*(undefined8 *)(param_1 + 0x48),
               *(undefined8 *)(param_1 + 0x50));
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
              (*(long **)(param_1 + 0x20),lVar1,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


