/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010dcf0; name: FUN_.text__0010dcf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0010dcf0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x8d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8d8) = 0;
  }
  if (*(long *)(param_1 + 0x8e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8e8) = 0;
  }
  if (*(long *)(param_1 + 0x8e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8e0) = 0;
  }
  if (*(long *)(param_1 + 0x8d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8d8) = 0;
  }
  lVar5 = 0x880;
  lVar1 = _DAT_0089f820 + 0x10;
  do {
    lVar2 = param_1 + lVar5;
    *(long *)(lVar2 + -0xc0) = lVar1;
    if (*(long *)(lVar2 + -0xb8) == 0) {
      *(undefined8 *)(lVar2 + -0xb8) = 0;
      pcVar4 = *(code **)(lVar2 + -0x28);
    }
    else {
      FUN__text__005d9290();
      lVar3 = *(long *)(lVar2 + -0xb8);
      *(undefined8 *)(lVar2 + -0xb8) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      pcVar4 = *(code **)(lVar2 + -0x28);
    }
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0x20) = 0;
      *(undefined8 *)(lVar2 + -0x18) = 0;
      *(undefined8 *)(lVar2 + -0x30) = 0;
      *(undefined8 *)(lVar2 + -0x28) = 0;
      (*pcVar4)(lVar2 + -0x10);
    }
    pcVar4 = *(code **)(lVar2 + -0xa8);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar2 + -0xa0) = 0;
      *(undefined8 *)(lVar2 + -0x98) = 0;
      *(undefined8 *)(lVar2 + -0xb0) = 0;
      *(undefined8 *)(lVar2 + -0xa8) = 0;
      (*pcVar4)(lVar2 + -0x90);
    }
    if (*(long *)(lVar2 + -0xb8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + -0xb8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + -0xb8) = 0;
    }
    lVar5 = lVar5 + -0x110;
  } while (lVar5 != 0);
  return;
}


