/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2d08; name: FUN_.text__003f2d08
 */


bool FUN__text__003f2d08(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x60))
                    (*(long **)(param_1 + 0x60),param_2,*(undefined8 *)(param_3 + 8));
  return iVar1 == 1;
}


