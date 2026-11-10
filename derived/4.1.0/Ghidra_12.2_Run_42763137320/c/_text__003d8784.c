/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d8784; name: FUN_.text__003d8784
 */


undefined8 FUN__text__003d8784(long param_1,undefined4 *param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 local_28 [2];
  
  uVar4 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  pbVar3 = param_3;
  if ((param_3 != (byte *)0x0) && (param_4 != param_3)) {
    if (*param_3 < 0x21) {
      if ((((ulong)((long)param_4 - (long)param_3) < 2) || (*param_3 != 0x20)) ||
         (param_3[1] < 0x21)) {
        pbVar3 = (byte *)FUN__text__003e4220(local_28,param_2 + 2,param_3);
        uVar4 = local_28[0];
      }
      else {
        pbVar3 = param_3 + 1;
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  iVar2 = *(int *)(param_1 + 8);
  *param_2 = uVar4;
  *(int *)(param_1 + 8) = iVar2 + ((int)pbVar3 - (int)param_3);
  pbVar1 = (byte *)0x0;
  if (pbVar3 != param_4) {
    pbVar1 = pbVar3;
  }
  *(byte **)(param_2 + 4) = pbVar1;
  return 0;
}


