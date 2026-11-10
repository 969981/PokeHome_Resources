/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6a04; name: FUN_.text__005f6a04
 */


void FUN__text__005f6a04(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = FUN__text__005f58f4(param_2);
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + -1;
  lVar2 = FUN__text__005f599c();
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) - lVar2;
  FUN__text__005f64cc(param_1,uVar1);
  return;
}


