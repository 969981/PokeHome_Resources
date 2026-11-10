/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cbb3c; name: FUN_.text__005cbb3c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cbb3c(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  FUN__text__005a0018(*(undefined8 *)(param_1 + 0x60));
  lVar3 = *(long *)(param_1 + 0x60);
  iVar1 = *_DAT_008a0300;
  if (*(int *)(lVar3 + 0x100) == 0) {
    lVar4 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x168;
    FUN__text__006ec8e0(lVar4);
    FUN__text__005cc3a0(param_1);
    if (*(int *)(lVar4 + 0x160) != 0) {
      FUN__text__006eddd4(lVar4);
      *(undefined4 *)(lVar4 + 0x160) = 0;
    }
    FUN__text__006ec93c(lVar4);
    *(undefined1 *)(lVar3 + 0x109) = 1;
    return;
  }
  pcVar2 = *(code **)(lVar3 + 0x88);
  *(int *)(lVar3 + 0x104) = iVar1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x90) = 0;
    *(undefined8 *)(lVar3 + 0x98) = 0;
    *(undefined8 *)(lVar3 + 0x80) = 0;
    *(undefined8 *)(lVar3 + 0x88) = 0;
    (*pcVar2)(lVar3 + 0xa0);
    iVar1 = *(int *)(lVar3 + 0x104);
  }
  *(long *)(lVar3 + 0xa0) = param_1;
  *(code **)(lVar3 + 0x80) = FUN__text__005cc8ec;
  *(undefined **)(lVar3 + 0x88) = &DAT__text__005cc8f4;
  lVar4 = *(long *)(lVar3 + 0x58) + (long)iVar1 * 0x168;
  *(undefined1 **)(lVar3 + 0x90) = &LAB__text__005cc8f8;
  *(undefined1 **)(lVar3 + 0x98) = &LAB__text__005cc904;
  FUN__text__006ec8e0(lVar4);
  (**(code **)(lVar3 + 0x80))((long *)(lVar3 + 0xa0));
  if (*(int *)(lVar4 + 0x160) != 0) {
    FUN__text__006eddd4(lVar4);
    *(undefined4 *)(lVar4 + 0x160) = 0;
  }
  FUN__text__006ec93c(lVar4);
  FUN__text__005b5520(*_DAT_0089f418,lVar3);
  *(undefined1 *)(lVar3 + 0x109) = 1;
  return;
}


