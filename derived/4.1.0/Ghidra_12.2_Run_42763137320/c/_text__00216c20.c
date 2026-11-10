/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00216c20; name: FUN_.text__00216c20
 */


int FUN__text__00216c20(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = 0;
  do {
    uVar4 = FUN__text__002155e0(param_1);
    if ((uVar4 & 1) != 0) {
      uVar4 = (ulong)(uVar6 >> 3);
      uVar3 = 1 << (ulong)(uVar6 & 7);
      lVar1 = *(long *)(param_1 + 0x80) + uVar4;
      uVar2 = uVar3 & *(byte *)(lVar1 + 0x28);
      if ((((uVar2 != 0) && (uVar2 == (uVar3 & *(byte *)(lVar1 + 0x5c)))) &&
          (uVar2 == (uVar3 & *(byte *)(*(long *)(param_1 + 0x88) + uVar4 + 0x5f8)))) &&
         (uVar2 == (uVar3 & *(byte *)(*(long *)(param_1 + 0x88) + 0x3a18 + uVar4)))) {
        iVar5 = iVar5 + 1;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x96);
  uVar6 = 0x97;
  do {
    uVar4 = FUN__text__002155e0(param_1);
    if ((uVar4 & 1) != 0) {
      uVar4 = (ulong)(uVar6 >> 3);
      uVar3 = 1 << (ulong)(uVar6 & 7);
      lVar1 = *(long *)(param_1 + 0x80) + uVar4;
      uVar2 = uVar3 & *(byte *)(lVar1 + 0x28);
      if (((uVar2 != 0) && (uVar2 == (uVar3 & *(byte *)(lVar1 + 0x5c)))) &&
         ((uVar2 == (uVar3 & *(byte *)(*(long *)(param_1 + 0x88) + uVar4 + 0x5f8)) &&
          (uVar2 == (uVar3 & *(byte *)(*(long *)(param_1 + 0x88) + 0x3a18 + uVar4)))))) {
        iVar5 = iVar5 + 1;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0xf8);
  uVar6 = 0xfb;
  do {
    uVar4 = FUN__text__002155e0(param_1);
    if ((uVar4 & 1) != 0) {
      uVar4 = (ulong)(uVar6 >> 3);
      uVar3 = 1 << (ulong)(uVar6 & 7);
      lVar1 = *(long *)(param_1 + 0x80) + uVar4;
      uVar2 = uVar3 & *(byte *)(lVar1 + 0x28);
      if (((uVar2 != 0) && (uVar2 == (uVar3 & *(byte *)(lVar1 + 0x5c)))) &&
         ((uVar2 == (uVar3 & *(byte *)(*(long *)(param_1 + 0x88) + uVar4 + 0x5f8)) &&
          (uVar2 == (uVar3 & *(byte *)(*(long *)(param_1 + 0x88) + 0x3a18 + uVar4)))))) {
        iVar5 = iVar5 + 1;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x180);
  return iVar5;
}


