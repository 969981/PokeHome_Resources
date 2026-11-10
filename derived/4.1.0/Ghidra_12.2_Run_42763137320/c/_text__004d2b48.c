/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d2b48; name: FUN_.text__004d2b48
 */


undefined8
FUN__text__004d2b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN__text__0040a740(param_1 + 0x68);
  if (lVar1 == 0) {
    return 2;
  }
  uVar2 = FUN__text__00407d50(lVar1,param_2,param_3,param_4);
  return uVar2;
}


