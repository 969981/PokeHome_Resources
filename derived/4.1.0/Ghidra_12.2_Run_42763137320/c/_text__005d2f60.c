/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d2f60; name: FUN_.text__005d2f60
 */


ulong FUN__text__005d2f60(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  uVar4 = (long)param_2 - (long)param_1 >> 3;
  if (uVar4 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x005d2f84 */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)(&UNK__text__005d2f94 + (ulong)*(byte *)(uVar4 + 0x757ce0) * 4))(1);
    return uVar4;
  }
  lVar5 = *param_1;
  plVar7 = param_1 + 1;
  lVar8 = *plVar7;
  plVar6 = param_1 + 2;
  lVar2 = *plVar6;
  uVar4 = *(ulong *)(lVar8 + 0xa0);
  plVar9 = param_1;
  if (uVar4 < *(ulong *)(lVar5 + 0xa0)) {
    plVar10 = plVar6;
    if (uVar4 <= *(ulong *)(lVar2 + 0xa0)) {
      *param_1 = lVar8;
      param_1[1] = lVar5;
      plVar9 = plVar7;
      if (*(ulong *)(lVar5 + 0xa0) <= *(ulong *)(lVar2 + 0xa0)) goto LAB__text__005d311c;
    }
  }
  else {
    if (uVar4 <= *(ulong *)(lVar2 + 0xa0)) goto LAB__text__005d311c;
    *plVar7 = lVar2;
    *plVar6 = lVar8;
    plVar10 = plVar7;
    if (*(ulong *)(lVar5 + 0xa0) <= *(ulong *)(lVar2 + 0xa0)) goto LAB__text__005d311c;
  }
  *plVar9 = lVar2;
  *plVar10 = lVar5;
LAB__text__005d311c:
  if (param_1 + 3 != param_2) {
    iVar3 = 0;
    lVar2 = 0x18;
    plVar9 = param_1 + 3;
    do {
      plVar7 = plVar9;
      lVar8 = *plVar7;
      lVar5 = *plVar6;
      if (*(ulong *)(lVar8 + 0xa0) < *(ulong *)(lVar5 + 0xa0)) {
        lVar11 = lVar2;
        do {
          lVar1 = lVar11 + -8;
          *(long *)((long)param_1 + lVar11) = lVar5;
          if (lVar1 == 0) {
            *param_1 = lVar8;
            goto joined_r0x005d3144;
          }
          lVar5 = *(long *)((long)param_1 + lVar11 + -0x10);
          lVar11 = lVar1;
        } while (*(ulong *)(lVar8 + 0xa0) < *(ulong *)(lVar5 + 0xa0));
        *(long *)((long)param_1 + lVar1) = lVar8;
joined_r0x005d3144:
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return (ulong)(plVar7 + 1 == param_2);
        }
      }
      lVar2 = lVar2 + 8;
      plVar9 = plVar7 + 1;
      plVar6 = plVar7;
    } while (plVar7 + 1 != param_2);
  }
  return 1;
}


