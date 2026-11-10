/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d514; name: FUN_.text__0068d514
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068d514(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_2 + 0xc0))();
  uVar1 = _DAT_008a6648;
  if (iVar3 == 3) {
    *param_1 = 0;
    param_1[1] = uVar1;
    param_1[2] = 0;
    return;
  }
  uVar1 = 0;
  if (iVar3 == 1) {
    uVar1 = _DAT_008a6638;
  }
  uVar2 = _DAT_008a6650;
  if (iVar3 != 2) {
    uVar2 = uVar1;
  }
  *param_1 = 0;
  param_1[1] = uVar2;
  param_1[2] = 0;
  return;
}


