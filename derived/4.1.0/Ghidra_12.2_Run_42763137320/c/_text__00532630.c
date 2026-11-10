/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532630; name: FUN_.text__00532630
 */


uint * FUN__text__00532630(long *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    iVar5 = 0;
    *param_3 = 0;
    lVar7 = *param_1;
  }
  else {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + (uVar6 >> 1);
      uVar2 = *(uint *)(*param_1 + (long)iVar1 * 0x58);
      if (uVar2 == param_2) {
        *param_3 = 1;
        return (uint *)(*param_1 + (long)iVar1 * 0x58);
      }
      if (uVar2 < param_2) {
        iVar5 = iVar1 + 1;
      }
      uVar2 = uVar6 - (uVar2 < param_2);
      uVar6 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_3 = 0;
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    uVar2 = *(uint *)((long)param_1 + 0xc);
    if (uVar6 < uVar2) {
      *(uint *)(param_1 + 1) = uVar6 + 1;
      return (uint *)0x0;
    }
    iVar5 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar5 = 1;
    }
    uVar4 = FUN__text__00532970(param_1,iVar5);
    if ((uVar4 & 1) == 0) {
      return (uint *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar6) {
      return (uint *)0x0;
    }
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*param_1 == 0) {
      return (uint *)0x0;
    }
    puVar3 = (uint *)(*param_1 + (ulong)uVar6 * 0x58);
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0x3f800000;
    puVar3[9] = 0x3f800000;
    *puVar3 = 0;
    puVar3[10] = 0;
    *(undefined2 *)(puVar3 + 0xb) = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x14) = 0;
    puVar3[0xc] = 1;
    puVar3[0xd] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  else {
    puVar3 = (uint *)FUN__text__005327a0(param_1,iVar5);
    if (puVar3 == (uint *)0x0) {
      return (uint *)0x0;
    }
  }
  *puVar3 = param_2;
  return puVar3;
}


