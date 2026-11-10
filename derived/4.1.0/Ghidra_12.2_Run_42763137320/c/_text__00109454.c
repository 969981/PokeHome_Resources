/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00109454; name: FUN_.text__00109454
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00109454(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  *(long *)(param_1 + 0x150) = _DAT_0089f710 + 0x10;
  if (*(long *)(param_1 + 0x158) == 0) {
    *(undefined8 *)(param_1 + 0x158) = 0;
    pcVar2 = *(code **)(param_1 + 0x1e8);
  }
  else {
    FUN__text__005d9290(*(long *)(param_1 + 0x158),param_1 + 0x150);
    lVar1 = *(long *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0x1e8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    (*pcVar2)(param_1 + 0x200);
  }
  pcVar2 = *(code **)(param_1 + 0x168);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    (*pcVar2)(param_1 + 0x180);
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(long *)(param_1 + 0x40) = _DAT_0089f718 + 0x10;
  if (*(long *)(param_1 + 0x48) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    pcVar2 = *(code **)(param_1 + 0xd8);
  }
  else {
    FUN__text__005d9290();
    lVar1 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = *(code **)(param_1 + 0xd8);
  }
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar2)(param_1 + 0xf0);
  }
  pcVar2 = *(code **)(param_1 + 0x58);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    (*pcVar2)(param_1 + 0x70);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x48) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x18) = 0x70f683;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


