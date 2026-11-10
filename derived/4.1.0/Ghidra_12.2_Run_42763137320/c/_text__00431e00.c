/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00431e00; name: FUN_.text__00431e00
 */


undefined8 FUN__text__00431e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN__text__00400f80(0,0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x48);
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x40) = puVar1;
  }
  else {
    *puVar2 = puVar1;
    puVar1 = *(undefined8 **)(param_1 + 0x50);
  }
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  *(undefined8 *)(param_1 + 0x50) = *puVar1;
  *puVar1 = 0;
  lVar3 = *(long *)(param_1 + 0x48);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(undefined8 *)(lVar3 + 8) = param_2;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  return 1;
}


