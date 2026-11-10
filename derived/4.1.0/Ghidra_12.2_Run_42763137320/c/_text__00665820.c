/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665820; name: FUN_.text__00665820
 */


undefined8 FUN__text__00665820(time_t param_1,void *param_2)

{
  tm *__src;
  undefined8 uVar1;
  time_t local_8;
  
  local_8 = param_1;
  __src = gmtime(&local_8);
  if (__src == (tm *)0x0) {
    uVar1 = 0x2b;
  }
  else {
    memcpy(param_2,__src,0x38);
    uVar1 = 0;
  }
  return uVar1;
}


