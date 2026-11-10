/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3460; name: FUN_.text__005f3460
 */


int FUN__text__005f3460(short *param_1,short *param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 != 0) {
    iVar5 = 0;
    do {
      while( true ) {
        sVar2 = *param_2;
        *param_1 = sVar2;
        if (sVar2 == 0x10) break;
        if (sVar2 == 0) {
          return iVar5;
        }
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 1;
        param_3 = param_3 - 1;
        if (param_3 == 0) goto LAB__text__005f3544;
      }
      uVar3 = param_2[1];
      uVar1 = uVar3 + 2;
      bVar4 = param_3 < uVar1;
      param_3 = param_3 - uVar1;
      if (bVar4 || param_3 == 0) goto LAB__text__005f3550;
      uVar7 = uVar1 & 7;
      uVar6 = uVar1;
      if (uVar7 != 0) {
        uVar6 = (uVar3 - uVar7) + 2;
        do {
          param_2 = param_2 + 1;
          uVar7 = uVar7 - 1;
          param_1 = param_1 + 1;
          *param_1 = *param_2;
        } while (uVar7 != 0);
      }
      if (5 < uVar3) {
        do {
          uVar6 = uVar6 - 8;
          param_1[1] = param_2[1];
          param_1[2] = param_2[2];
          param_1[3] = param_2[3];
          param_1[4] = param_2[4];
          param_1[5] = param_2[5];
          param_1[6] = param_2[6];
          param_1[7] = param_2[7];
          param_2 = param_2 + 8;
          param_1 = param_1 + 8;
          *param_1 = *param_2;
        } while (uVar6 != 0);
      }
      iVar5 = uVar1 + iVar5;
    } while (param_3 != 0);
LAB__text__005f3544:
    if (iVar5 != 0) {
      iVar5 = iVar5 + -1;
      param_1 = param_1 + -1;
LAB__text__005f3550:
      *param_1 = 0;
      return iVar5;
    }
  }
  return 0;
}


