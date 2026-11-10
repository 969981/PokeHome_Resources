/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00680cfc; name: FUN_.text__00680cfc
 */


void FUN__text__00680cfc(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  uVar1 = param_1[5];
  if ((ulong)param_1[6] < uVar1) {
    lVar7 = param_1[4];
    do {
      if (param_1[3] == 0) {
        return;
      }
      lVar3 = param_1[3] + -1;
      plVar8 = *(long **)(*param_1 + (param_1[2] + lVar3 & param_1[1]) * 8);
      lVar5 = *(long *)(*plVar8 + 0x18);
      lVar6 = *(long *)(plVar8[1] + 0x18);
      param_1[3] = lVar3;
      param_1[5] = (uVar1 - (lVar5 + lVar6)) + -0x20;
      if (param_2 != 0) {
        plVar4 = (long *)(param_2 + ((ulong)*(uint *)((long)plVar8 + 0x4c) & 0x7f) * 8);
        plVar2 = (long *)*plVar4;
        if (plVar2 != (long *)0x0) {
          if (plVar2 != plVar8) {
            do {
              plVar4 = plVar2;
              plVar2 = (long *)plVar4[8];
              if (plVar2 == (long *)0x0) goto LAB__text__00680da8;
            } while (plVar2 != plVar8);
            plVar4 = plVar4 + 8;
          }
          *plVar4 = plVar8[8];
          plVar8[8] = 0;
        }
      }
LAB__text__00680da8:
      FUN__text__00683180(plVar8[1]);
      FUN__text__00683180(*plVar8);
      FUN__text__006809e4(lVar7,plVar8);
      uVar1 = param_1[5];
    } while ((ulong)param_1[6] < uVar1);
  }
  return;
}


