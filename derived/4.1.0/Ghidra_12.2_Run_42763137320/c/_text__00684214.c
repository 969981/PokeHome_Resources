/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684214; name: FUN_.text__00684214
 */


undefined8 FUN__text__00684214(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + -9;
  FUN__text__00683cb4();
  FUN__text__00684044(*(undefined8 *)(lVar1 + 0x20),param_2 + 0x10);
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + 5;
  return 0;
}


