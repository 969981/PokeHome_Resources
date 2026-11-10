/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c56d0; name: FUN_.text__004c56d0
 */


undefined8 FUN__text__004c56d0(long *param_1)

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
    lVar9 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar7) * 0x28);
    if (lVar9 != 0) {
      lVar10 = *param_1;
      if ((lVar10 != 0) && (lVar10 != lVar9)) {
        if (uVar8 != 0) {
          lVar10 = 0;
          do {
            puVar2 = (undefined8 *)(lVar9 + lVar10);
            *(undefined4 *)puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(puVar2 + 2) = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar10);
            lVar10 = lVar10 + 0x28;
            *puVar2 = *puVar3;
            uVar4 = puVar3[1];
            uVar5 = puVar3[2];
            uVar6 = puVar3[4];
            puVar2[3] = puVar3[3];
            puVar2[4] = uVar6;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
          } while ((ulong)uVar8 * 0x28 != lVar10);
          lVar10 = *param_1;
        }
        FUN__text__00400fc0(0,lVar10);
      }
      goto LAB__text__004c57a8;
    }
  }
  else {
    lVar9 = FUN__text__00400fa0(0);
    if (lVar9 != 0) {
LAB__text__004c57a8:
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar7;
      return 1;
    }
  }
  return 0;
}


