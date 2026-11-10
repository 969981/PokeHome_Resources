/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004288a0; name: FUN_.text__004288a0
 */


undefined4 FUN__text__004288a0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  uVar2 = 4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  return uVar2;
}


