/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a9ae0; name: FUN_.text__005a9ae0
 */


long FUN__text__005a9ae0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (DAT_00b11150 != 0) {
    lVar1 = aligned_alloc(param_2);
    return lVar1;
  }
  lVar1 = (**(code **)(*param_3 + 0x10))(param_3,param_1);
  if (lVar1 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
    return 0;
  }
  return lVar1;
}


