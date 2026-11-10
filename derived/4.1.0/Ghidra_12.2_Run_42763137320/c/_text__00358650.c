/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00358650; name: FUN_.text__00358650
 */


bool FUN__text__00358650(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  return param_3 + param_2 <= lVar1;
}


