/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013dbbc; name: FUN_.text__0013dbbc
 */


void FUN__text__0013dbbc(long param_1,undefined4 param_2)

{
  undefined4 local_4;
  
  if (*(code **)(param_1 + 0x6d0) != (code *)0x0) {
    local_4 = param_2;
    (**(code **)(param_1 + 0x6d0))(param_1 + 0x6f0,&local_4);
  }
  FUN__text__0013d0c4(param_1);
  return;
}


