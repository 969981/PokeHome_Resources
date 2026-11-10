/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dd208; name: FUN_.text__003dd208
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003dd208(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_2 + 1);
  if (*piVar5 != 0) {
LAB__text__003dd224:
    *param_1 = 0;
    return;
  }
  pbVar3 = (byte *)*param_2;
  if (**(int **)(pbVar3 + 0x10) == 1) {
    if ((*pbVar3 & 1) == 0) {
      iVar2 = FUN__text__003de540(pbVar3,piVar5);
    }
    else {
      iVar2 = FUN__text__003ddfd0(pbVar3,piVar5,param_2 + 2);
    }
    if (iVar2 != 0x12) goto LAB__text__003dd224;
  }
  pbVar3 = operator_new(0x10,_DAT_008a37f8);
  if (pbVar3 == (byte *)0x0) {
    *piVar5 = 0xe;
    *param_1 = 0;
    return;
  }
  pbVar3[0] = 0;
  pbVar3[1] = 0;
  pbVar3[2] = 0;
  pbVar3[3] = 0;
  pbVar3[4] = 0;
  pbVar3[5] = 0;
  pbVar3[6] = 0;
  pbVar3[7] = 0;
  pbVar3[8] = 0;
  pbVar3[9] = 0;
  pbVar3[10] = 0;
  pbVar3[0xb] = 0;
  pbVar3[0xc] = 0;
  pbVar3[0xd] = 0;
  pbVar3[0xe] = 0;
  pbVar3[0xf] = 0;
  if (param_3 == (undefined1 *)0x0) {
    pbVar4 = (byte *)*param_2;
    iVar2 = *(int *)(*(long *)(pbVar4 + 0x10) + *(long *)(pbVar4 + 0x18) * 8);
  }
  else {
    *param_3 = 0;
    pbVar4 = (byte *)*param_2;
    *(undefined1 **)(pbVar4 + 0x58) = param_3;
    iVar2 = *(int *)(*(long *)(pbVar4 + 0x10) + *(long *)(pbVar4 + 0x18) * 8);
  }
  if (iVar2 == 0) {
    if ((*pbVar4 & 1) == 0) {
      FUN__text__003de540(pbVar4,piVar5);
      iVar2 = *piVar5;
    }
    else {
      FUN__text__003ddfd0(pbVar4,piVar5,param_2 + 2);
      iVar2 = *piVar5;
    }
    if (iVar2 != 0) {
      bVar1 = *pbVar3;
      *param_1 = 0;
      if (bVar1 - 6 < 5) {
        FUN__text__0031d370(pbVar3);
      }
      operator_delete(pbVar3);
      return;
    }
  }
  iVar2 = FUN__text__003dd37c(pbVar3,pbVar3,param_2);
  if (iVar2 != 0) {
    *piVar5 = iVar2;
  }
  *param_1 = pbVar3;
  return;
}


