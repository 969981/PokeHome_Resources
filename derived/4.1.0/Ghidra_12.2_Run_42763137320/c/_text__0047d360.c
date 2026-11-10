/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d360; name: FUN_.text__0047d360
 */


undefined8 FUN__text__0047d360(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  uVar7 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar7 + (uVar7 >> 1);
  if (uVar7 == 0) {
    iVar1 = 1;
  }
  if (*param_1 == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    lVar9 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar7) * 0x30);
    if (lVar9 != 0) {
      lVar10 = *param_1;
      if ((lVar10 != 0) && (lVar10 != lVar9)) {
        if (uVar8 != 0) {
          lVar10 = 0;
          do {
            puVar2 = (undefined8 *)(lVar9 + lVar10);
            puVar3 = (undefined8 *)(*param_1 + lVar10);
            lVar10 = lVar10 + 0x30;
            uVar4 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar4;
            uVar4 = puVar3[2];
            uVar5 = puVar3[3];
            uVar6 = puVar3[5];
            puVar2[4] = puVar3[4];
            puVar2[5] = uVar6;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
          } while ((ulong)uVar8 * 0x30 != lVar10);
          lVar10 = *param_1;
        }
        FUN__text__00400fc0(0,lVar10);
      }
      goto LAB__text__0047d42c;
    }
  }
  else {
    lVar9 = FUN__text__00400fa0(0);
    if (lVar9 != 0) {
LAB__text__0047d42c:
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar7;
      return 1;
    }
  }
  return 0;
}


