/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015cde8; name: FUN_.text__0015cde8
 */


void FUN__text__0015cde8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  FUN__text__005f3ec0();
  if (*(char *)(param_1 + 0x158) == '\0') {
    if (**(long **)(param_1 + 0x58) != 0) {
      uVar1 = FUN__text__006bf32c();
      plVar2 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x160) = uVar1;
      uVar4 = *(undefined4 *)(*plVar2 + 0xf8);
      *(undefined4 *)(param_1 + 0x16c) = uVar4;
      *(undefined4 *)(param_1 + 0x170) = uVar4;
      lVar3 = *plVar2;
      fVar5 = *(float *)(lVar3 + 0x50);
      uVar4 = *(undefined4 *)(lVar3 + 0xe8);
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(lVar3 + 0xec);
      *(undefined4 *)(param_1 + 0x128) = uVar4;
      *(undefined1 *)(param_1 + 0x158) = 1;
      *(int *)(param_1 + 0x138) = (int)fVar5;
      lVar3 = FUN__text__006b46d0(*plVar2,0x71679d);
      if ((lVar3 != 0) ||
         (lVar3 = FUN__text__006b46d0(**(undefined8 **)(param_1 + 0x58),0x710d96), lVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
        *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
        *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
        return;
      }
    }
  }
  *(int *)(param_1 + 0x174) = *(int *)(param_1 + 0x174) + 1;
  return;
}


