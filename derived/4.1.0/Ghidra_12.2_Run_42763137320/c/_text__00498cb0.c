/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00498cb0; name: FUN_.text__00498cb0
 */


undefined8 FUN__text__00498cb0(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    lVar8 = FUN__text__00400f80(0,(ulong)uVar1 << 5);
    if (lVar8 != 0) {
      lVar9 = *param_1;
      if ((lVar9 != 0) && (lVar9 != lVar8)) {
        if (uVar7 != 0) {
          lVar9 = 0;
          do {
            puVar2 = (undefined8 *)(lVar8 + lVar9);
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar9);
            uVar4 = *puVar3;
            uVar5 = puVar3[1];
            uVar6 = puVar3[3];
            puVar2[2] = puVar3[2];
            puVar2[3] = uVar6;
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            FUN__text__00497500(*param_1 + lVar9);
            lVar9 = lVar9 + 0x20;
          } while ((ulong)uVar7 * 0x20 != lVar9);
          lVar9 = *param_1;
        }
        FUN__text__00400fc0(0,lVar9);
      }
      goto LAB__text__00498d80;
    }
  }
  else {
    lVar8 = FUN__text__00400fa0(0);
    if (lVar8 != 0) {
LAB__text__00498d80:
      *param_1 = lVar8;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


