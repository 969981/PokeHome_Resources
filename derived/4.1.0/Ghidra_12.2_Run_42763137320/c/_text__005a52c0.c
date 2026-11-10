/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a52c0; name: FUN_.text__005a52c0
 */


ulong FUN__text__005a52c0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar5 = (long)param_2 - (long)param_1 >> 4;
  if (uVar5 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x005a52f8 */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK__text__005a5308 + (ulong)*(byte *)(uVar5 + 0x757c84) * 4))(1);
    return uVar5;
  }
  FUN__text__005a51b0(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar7 = 0;
    iVar8 = 0;
    plVar2 = param_1 + 6;
    plVar11 = param_1 + 4;
    do {
      plVar6 = plVar2;
      lVar1 = *plVar6;
      uVar5 = plVar6[1];
      bVar4 = uVar5 < (ulong)plVar11[1];
      if (*(ulong *)(lVar1 + 0xa0) != *(ulong *)(*plVar11 + 0xa0)) {
        bVar4 = *(ulong *)(lVar1 + 0xa0) < *(ulong *)(*plVar11 + 0xa0);
      }
      if (bVar4) {
        lVar3 = lVar7;
        do {
          lVar9 = lVar3;
          *(undefined8 *)((long)param_1 + lVar9 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x20);
          *(undefined8 *)((long)param_1 + lVar9 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x28);
          if (lVar9 == -0x20) {
            *param_1 = lVar1;
            param_1[1] = uVar5;
            goto joined_r0x005a5360;
          }
          uVar10 = *(ulong *)(*(long *)((long)param_1 + lVar9 + 0x10) + 0xa0);
          bVar4 = uVar5 < *(ulong *)((long)param_1 + lVar9 + 0x18);
          if (*(ulong *)(lVar1 + 0xa0) != uVar10) {
            bVar4 = *(ulong *)(lVar1 + 0xa0) < uVar10;
          }
          lVar3 = lVar9 + -0x10;
        } while (bVar4);
        *(long *)((long)param_1 + lVar9 + 0x20) = lVar1;
        *(ulong *)((long)param_1 + lVar9 + 0x28) = uVar5;
joined_r0x005a5360:
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return (ulong)(plVar6 + 2 == param_2);
        }
      }
      lVar7 = lVar7 + 0x10;
      plVar2 = plVar6 + 2;
      plVar11 = plVar6;
    } while (plVar6 + 2 != param_2);
  }
  return 1;
}


