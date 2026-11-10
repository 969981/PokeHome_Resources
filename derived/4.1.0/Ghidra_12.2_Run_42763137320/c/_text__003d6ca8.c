/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d6ca8; name: FUN_.text__003d6ca8
 */


bool FUN__text__003d6ca8(long *param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  
  if (param_1[3] != 0 && param_1[2] != 0) {
    if ((int)param_1[5] != 0) {
      bVar1 = false;
      goto LAB__text__003d6d08;
    }
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_1[3],param_1[2],0);
    bVar1 = false;
    if ((uVar3 & 1) == 0) goto LAB__text__003d6d08;
    param_1[1] = param_1[1] + param_1[2];
    param_1[2] = 0;
  }
  bVar1 = true;
LAB__text__003d6d08:
  uVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  bVar2 = false;
  if ((bVar1) && ((uVar3 & 1) != 0)) {
    bVar2 = (int)param_1[5] == 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return bVar2;
}


