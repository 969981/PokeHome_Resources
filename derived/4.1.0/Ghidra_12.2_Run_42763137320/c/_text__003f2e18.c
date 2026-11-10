/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2e18; name: FUN_.text__003f2e18
 */


bool FUN__text__003f2e18(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x98))
                    (*(long **)(param_1 + 0x60),*(undefined8 *)(param_2 + 8),param_3,param_4,4,0);
  return iVar1 == 1;
}


