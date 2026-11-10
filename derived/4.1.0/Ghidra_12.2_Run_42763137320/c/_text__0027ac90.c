/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027ac90; name: FUN_.text__0027ac90
 */


int FUN__text__0027ac90(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  ushort *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_64 [4];
  
  puVar10 = (uint *)(param_1 + (ulong)(param_2 & 0xffff) * 4 + 0xd0);
  uVar4 = *puVar10;
  if (uVar4 == 0) {
    return 0;
  }
  iVar7 = 0;
  uVar8 = 0;
joined_r0x0027ace8:
  uVar9 = (ulong)uVar4;
  if (uVar9 != 0) {
    puVar5 = (ushort *)(*(long *)(param_1 + (ulong)(param_2 & 0xffff) * 8 + 0x70) + 2);
    do {
      if ((puVar5[-1] <= uVar8) && ((uVar8 & 0xffff) <= (uint)*puVar5)) {
        local_64[0] = 0;
        local_a0 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        FUN__text__005ffbe4(&local_a0,local_64,uVar8,0);
        if (local_64[0] == 0) {
          local_64[0] = 10;
        }
        uVar9 = 0;
        goto LAB__text__0027ad60;
      }
      puVar5 = puVar5 + 2;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  goto joined_r0x0027ae18;
  while (uVar9 = uVar9 + 1, uVar9 < local_64[0]) {
LAB__text__0027ad60:
    uVar3 = FUN__text__00325c10(uVar8,uVar9 & 0xffffffff);
    if ((uVar3 & 0x8001) != 0) {
      uVar9 = 0;
      uVar4 = 0;
      if ((param_3 & 1) == 0) {
        puVar6 = (uint *)(param_1 + 0x698d8);
        goto LAB__text__0027ade0;
      }
      puVar5 = (ushort *)(param_1 + 0x158);
      goto LAB__text__0027adb0;
    }
  }
  goto joined_r0x0027ae18;
  while (uVar9 = uVar9 + 1, puVar5 = puVar5 + 0xc, uVar8 != uVar2) {
LAB__text__0027adb0:
    uVar2 = *puVar5;
    if ((uVar2 == 0) || (uVar4 = uVar8 == uVar2 | uVar4, 0xbb6 < uVar9)) break;
  }
  goto LAB__text__0027ae08;
  while (uVar9 = uVar9 + 1, puVar6 = puVar6 + 6, uVar1 != uVar8) {
LAB__text__0027ade0:
    uVar1 = *puVar6;
    if ((uVar1 == 0) || (uVar4 = uVar1 == uVar8 | uVar4, 0xbb6 < uVar9)) break;
  }
LAB__text__0027ae08:
  iVar7 = iVar7 + uVar4;
joined_r0x0027ae18:
  if (uVar8 == 0x401) {
    return iVar7;
  }
  uVar8 = uVar8 + 1;
  uVar4 = *puVar10;
  goto joined_r0x0027ace8;
}


