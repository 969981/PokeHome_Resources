/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00532160; name: FUN_.text__00532160
 */


void FUN__text__00532160(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long lVar1;
  undefined1 uStack_11;
  
  if ((int)param_2 == 0) {
    FUN__text__005316e8(param_1 + 0x10,param_3,param_4,param_5);
    return;
  }
  lVar1 = FUN__text__00532ad0(param_1,param_2,&uStack_11);
  if (lVar1 != 0) {
    FUN__text__005316e8(lVar1 + 8,param_3,param_4,param_5);
  }
  return;
}


