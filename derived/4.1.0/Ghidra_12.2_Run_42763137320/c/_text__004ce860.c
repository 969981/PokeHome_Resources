/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce860; name: FUN_.text__004ce860
 */


undefined8 FUN__text__004ce860(long param_1,int param_2,byte param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    if (param_2 == 0) {
      return 1;
    }
    lVar1 = FUN__text__00400f80(2,0x28);
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 0x34;
    }
    FUN__text__004ce514();
    *(long *)(param_1 + 8) = lVar1;
  }
  *(byte *)(lVar1 + 0x24) = *(byte *)(lVar1 + 0x24) & (param_3 ^ 0xff) | param_3 & (byte)param_2;
  return 1;
}


