/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2c1c; name: FUN_.text__003f2c1c
 */


bool FUN__text__003f2c1c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 local_8;
  
  local_8 = param_2;
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x60))
                    (*(long **)(param_1 + 0x60),param_2,*(undefined8 *)(param_3 + 8));
  if ((iVar1 == 1) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x88))
                        (*(long **)(param_1 + 0x60),&local_8,1), iVar1 == 1)) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x18))(*(long **)(param_1 + 0x80),local_8);
    return iVar1 == 1;
  }
  return false;
}


