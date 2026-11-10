/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684718; name: FUN_.text__00684718
 */


undefined8 FUN__text__00684718(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN__text__00683cb4();
  FUN__text__00679974(*(undefined8 *)(lVar2 + 0x20),*(undefined2 *)(puVar1 + 1));
  *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + 2;
  FUN__text__006834ec(param_1,*puVar1,puVar1[1]);
  FUN__text__006834ec(param_1,puVar1[2],puVar1[3]);
  return 0;
}


