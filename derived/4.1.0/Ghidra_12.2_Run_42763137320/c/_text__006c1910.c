/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1910; name: FUN_.text__006c1910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c1910(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = uRam0000000000724ba8;
  uVar2 = _DAT_00724ba0;
  uVar1 = _DAT_00724920;
  param_1[1] = uRam0000000000724928;
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar3 = uRam0000000000724a08;
  uVar2 = _DAT_00724a00;
  param_1[5] = uRam0000000000724a08;
  param_1[4] = uVar2;
  uVar1 = _DAT_00724990;
  if ((*(byte *)(param_2 + 0x194) >> 3 & 1) != 0) {
    param_1[3] = uRam0000000000724998;
    param_1[2] = uVar1;
    param_1[5] = uVar3;
    param_1[4] = uVar2;
  }
  return;
}


