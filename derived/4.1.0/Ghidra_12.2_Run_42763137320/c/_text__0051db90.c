/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051db90; name: FUN_.text__0051db90
 */


undefined8 * FUN__text__0051db90(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == 0) {
    iVar4 = 0;
    *param_3 = 0;
    lVar6 = *param_1;
  }
  else {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar5 >> 1);
      uVar7 = *(ulong *)(*param_1 + (long)iVar1 * 0x20 + 0x18);
      if (uVar7 == param_2) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 0x20);
      }
      if (uVar7 < param_2) {
        iVar4 = iVar1 + 1;
      }
      uVar2 = uVar5 - (uVar7 < param_2);
      uVar5 = uVar2 >> 1;
    } while (1 < uVar2);
    *param_3 = 0;
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    uVar2 = *(uint *)((long)param_1 + 0xc);
    if (uVar5 < uVar2) {
      *(uint *)(param_1 + 1) = uVar5 + 1;
      return (undefined8 *)0x0;
    }
    iVar4 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar4 = 1;
    }
    uVar7 = FUN__text__0051de40(param_1,iVar4);
    if ((uVar7 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
      return (undefined8 *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*param_1 == 0) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)(*param_1 + (ulong)uVar5 * 0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xffffffffffffffff;
  }
  else {
    puVar3 = (undefined8 *)FUN__text__0051dce0(param_1,iVar4);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  puVar3[3] = param_2;
  return puVar3;
}


