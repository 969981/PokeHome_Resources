/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019c694; name: FUN_.text__0019c694
 */


void FUN__text__0019c694(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN__text__003068b0(*param_2);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar1 = FUN__text__003069e0(*param_2);
  param_1[0xc] = uVar1;
  uVar1 = FUN__text__003069d0(*param_2);
  param_1[0xd] = uVar1;
  FUN__text__00306620(*param_2,param_1 + 0xe,0xd);
  uVar2 = FUN__text__003069b0(*param_2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}


