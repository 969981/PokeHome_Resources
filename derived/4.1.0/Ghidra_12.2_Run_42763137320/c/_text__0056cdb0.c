/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056cdb0; name: FUN_.text__0056cdb0
 */


long FUN__text__0056cdb0(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x30,0x70bb91,0x2b);
  if (lVar1 != 0) {
    FUN__text__0056cd84(lVar1,param_1);
  }
  return lVar1;
}


