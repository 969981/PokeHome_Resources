/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068457c; name: FUN_.text__0068457c
 */


undefined8 FUN__text__0068457c(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN__text__00683cb4();
  uVar1 = FUN__text__00679e18(*(undefined8 *)(lVar2 + 0x20),param_2 + 0x10,8);
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  return 0;
}


