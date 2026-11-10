/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00501ca0; name: FUN_.text__00501ca0
 */


undefined8 FUN__text__00501ca0(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1 + 1);
    lVar6 = FUN__text__00400f80(0,(ulong)uVar1 << 4);
    if (lVar6 != 0) {
      lVar7 = *param_1;
      if ((lVar7 != 0) && (lVar7 != lVar6)) {
        if (uVar4 != 0) {
          lVar7 = 0;
          do {
            puVar2 = (undefined8 *)(lVar6 + lVar7);
            *puVar2 = 0;
            puVar2[1] = 0xffffffff00000000;
            lVar8 = *param_1;
            *puVar2 = 0;
            puVar3 = (undefined8 *)(lVar8 + lVar7);
            *(undefined4 *)(puVar2 + 1) = 0;
            piVar9 = (int *)*puVar3;
            *puVar2 = piVar9;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
            *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)((long)puVar3 + 0xc);
            if (piVar9 != (int *)0x0) {
              *piVar9 = *piVar9 + 1;
            }
            puVar2 = (undefined8 *)(*param_1 + lVar7);
            piVar9 = *(int **)(*param_1 + lVar7);
            if ((piVar9 != (int *)0x0) && (iVar5 = *piVar9, *piVar9 = iVar5 + -1, iVar5 + -1 == 0))
            {
              FUN__text__00400fc0(*(undefined4 *)((long)puVar2 + 0xc),*puVar2);
            }
            lVar7 = lVar7 + 0x10;
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0;
          } while ((ulong)uVar4 * 0x10 != lVar7);
          lVar7 = *param_1;
        }
        FUN__text__00400fc0(0,lVar7);
      }
      goto LAB__text__00501dc4;
    }
  }
  else {
    lVar6 = FUN__text__00400fa0(0);
    if (lVar6 != 0) {
LAB__text__00501dc4:
      *param_1 = lVar6;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1;
    }
  }
  return 0;
}


