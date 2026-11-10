/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f55c8; name: FUN_.text__004f55c8
 */


undefined8 * FUN__text__004f55c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN__text__00400f80(0,0x48);
  if (puVar2 != (undefined8 *)0x0) {
    FUN__text__004e97a0(puVar2,param_2,param_3);
    *puVar2 = 0;
    plVar1 = (long *)(param_1 + 0x80);
    if (*(long *)(param_1 + 0x80) != 0) {
      plVar1 = *(long **)(param_1 + 0x78);
    }
    *plVar1 = (long)puVar2;
    *(undefined8 **)(param_1 + 0x78) = puVar2;
  }
  return puVar2;
}


