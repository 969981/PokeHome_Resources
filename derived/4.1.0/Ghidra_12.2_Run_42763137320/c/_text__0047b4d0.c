/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b4d0; name: FUN_.text__0047b4d0
 */


undefined8 FUN__text__0047b4d0(long param_1,float *param_2,int param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0x20) == param_3) && ((*(uint *)(param_1 + 0x30) & 0x7fffffff) == param_5)
     ) {
    if (param_5 == 0) {
      return 0;
    }
    pfVar5 = *(float **)(param_1 + 0x18);
    uVar4 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_1 + 0x28) + uVar4 * 0x18 + 8);
      if (iVar1 != *(int *)(param_4 + uVar4 * 8 + 4)) goto LAB__text__0047b5e8;
      if (iVar1 != 0) {
        pfVar3 = param_2;
        pfVar6 = pfVar5;
        if (1 < iVar1) {
          iVar7 = iVar1 + -1;
          pfVar3 = param_2 + (ulong)(iVar1 - 2) * 4 + 4;
          pfVar6 = pfVar5 + (ulong)(iVar1 - 2) * 4 + 4;
          do {
            if ((((*param_2 != *pfVar5) || (param_2[1] != pfVar5[1])) || (param_2[2] != pfVar5[2]))
               || (param_2[3] != pfVar5[3])) goto LAB__text__0047b5e8;
            iVar7 = iVar7 + -1;
            param_2 = param_2 + 4;
            pfVar5 = pfVar5 + 4;
          } while (iVar7 != 0);
        }
        if (((*pfVar3 != *pfVar6) || (pfVar3[1] != pfVar6[1])) || (pfVar3[2] != pfVar6[2]))
        goto LAB__text__0047b5e8;
        param_2 = pfVar3 + 4;
        pfVar5 = pfVar6 + 4;
      }
      uVar4 = uVar4 + 1;
      uVar2 = 0;
    } while (uVar4 != param_5);
  }
  else {
LAB__text__0047b5e8:
    uVar2 = 1;
  }
  return uVar2;
}


