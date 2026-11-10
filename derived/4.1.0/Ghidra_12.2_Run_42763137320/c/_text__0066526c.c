/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066526c; name: FUN_.text__0066526c
 */


void FUN__text__0066526c(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 0x802;
  }
  nnsocketFcntl(param_1,4,uVar1);
  return;
}


