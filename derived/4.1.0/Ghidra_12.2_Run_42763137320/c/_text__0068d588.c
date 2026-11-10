/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068d588; name: FUN_.text__0068d588
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0068d588(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 0xc0))();
  uVar1 = _DAT_008a6640;
  param_1[2] = 0;
  if (iVar2 != 1) {
    uVar1 = 0;
  }
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


