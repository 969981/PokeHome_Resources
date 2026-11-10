/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458970; name: FUN_.text__00458970
 */


void FUN__text__00458970(long *param_1,ulong *param_2,long param_3,long param_4,long param_5,
                        uint *param_6,uint *param_7)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  
  param_1 = (long *)*param_1;
  if (param_1 == (long *)0x0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      if ((param_1[1] != 0) && ((int)param_1[3] != 0)) {
        pfVar5 = (float *)param_1[2];
        do {
          if ((*param_2 >> ((ulong)(uint)pfVar5[2] & 0x3f) & 1) != 0) {
            lVar6 = param_1[1];
            if (*(long **)(lVar6 + 0xa8) == (long *)0x0 || *(int *)(lVar6 + 0xd4) == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = **(long **)(lVar6 + 0xa8);
              if (lVar7 != 0 && uVar4 < *param_6) {
                lVar6 = uVar4 * 8;
                uVar4 = uVar4 + 1;
                *(long *)(param_5 + lVar6) = lVar7;
                *(undefined8 *)(param_3 + lVar6) = *(undefined8 *)pfVar5;
                goto LAB__text__004589c4;
              }
            }
            if ((lVar7 == 0) && (uVar3 < *param_7)) {
              pfVar1 = (float *)(param_4 + uVar3 * 8);
              uVar3 = uVar3 + 1;
              *pfVar1 = *pfVar5 + *(float *)(lVar6 + 200) * pfVar5[1];
              lVar6 = *(long *)(param_1[1] + 0xa8);
              pfVar2 = (float *)(param_1[1] + 200);
              if (lVar6 != 0) {
                pfVar2 = (float *)(lVar6 + 0xc);
              }
              pfVar1[1] = *pfVar5 + *pfVar2 * pfVar5[1];
            }
          }
LAB__text__004589c4:
          pfVar5 = pfVar5 + 3;
        } while (pfVar5 != (float *)(param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc));
      }
      param_1 = (long *)*param_1;
    } while (param_1 != (long *)0x0);
  }
  *param_6 = (uint)uVar4;
  *param_7 = (uint)uVar3;
  return;
}


