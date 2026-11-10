/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c690c; name: FUN_.text__003c690c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003c690c(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x170) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(long *)(param_1 + 0x60) = _DAT_0089f6b8 + 0x10;
  if (*(long *)(param_1 + 0x68) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    pcVar2 = *(code **)(param_1 + 0xf8);
  }
  else {
    FUN__text__005d9290();
    lVar1 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0xf8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (*pcVar2)(param_1 + 0x110);
  }
  pcVar2 = *(code **)(param_1 + 0x78);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    (*pcVar2)(param_1 + 0x90);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}


