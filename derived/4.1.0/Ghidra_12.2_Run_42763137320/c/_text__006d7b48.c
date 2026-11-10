/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d7b48; name: FUN_.text__006d7b48
 */


undefined8 FUN__text__006d7b48(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + (long)param_2 * 0x20;
  lVar2 = *(long *)(param_1 + 0x700);
  *(undefined8 *)(lVar1 + 0x720) = param_3;
  *(long *)(lVar1 + 0x718) = lVar2;
  uVar3 = FUN__text__006d7f10(lVar2,param_3,*(undefined8 *)(lVar2 + 0x1c8));
  *(undefined8 *)(lVar1 + 0x708) = uVar3;
  return 1;
}


