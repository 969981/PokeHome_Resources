/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052c8e0; name: FUN_.text__0052c8e0
 */


long FUN__text__0052c8e0(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_15c [4];
  undefined1 auStack_158 [264];
  
  uVar4 = *(uint *)(param_1 + 0x38);
  uVar5 = *(uint *)(param_1 + 0x3c);
  plVar1 = (long *)(param_1 + 0x30);
  if (uVar5 <= uVar4) {
    iVar2 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar2 = 1;
    }
    uVar3 = FUN__text__00530960(plVar1,iVar2);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x3c) <= uVar4) {
      return 0;
    }
    uVar4 = *(uint *)(param_1 + 0x38);
  }
  *(uint *)(param_1 + 0x38) = uVar4 + 1;
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar7 = 0;
  }
  else {
    puVar6 = (undefined4 *)(*(long *)(param_1 + 0x30) + (ulong)uVar4 * 0x118);
    *puVar6 = 0;
    memset(puVar6 + 2,0,0x108);
    puVar6[0x44] = 0x42c80000;
    uVar4 = *(uint *)(param_1 + 0x38);
    if (1 < uVar4) {
      uVar5 = uVar4 - 1;
      if (0 < (int)uVar5) {
        lVar7 = (ulong)(uVar4 - 2) * 0x118;
        lVar8 = (ulong)uVar5 * 0x118;
        do {
          memcpy((void *)(*plVar1 + lVar8),(void *)(*plVar1 + lVar7),0x114);
          uVar5 = uVar5 - 1;
          lVar7 = lVar7 + -0x118;
          lVar8 = lVar8 + -0x118;
        } while (0 < (int)uVar5);
      }
      memset(auStack_158,0,0x108);
      puVar6 = (undefined4 *)*plVar1;
      *puVar6 = 0;
      memcpy(puVar6 + 1,auStack_15c,0x10c);
      puVar6[0x44] = 0x42c80000;
    }
    lVar7 = *plVar1;
  }
  return lVar7;
}


