/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004317f4; name: FUN_.text__004317f4
 */


undefined8 FUN__text__004317f4(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN__text__00400f80(0,0x18);
    if (puVar1 == (undefined8 *)0x0) {
      return 0x34;
    }
    *puVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  else {
    *puVar2 = puVar1;
    puVar1 = *(undefined8 **)(param_1 + 0x20);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  *puVar1 = 0;
  lVar3 = *(long *)(param_1 + 0x18);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(long *)(lVar3 + 8) = param_2;
  *(undefined4 *)(lVar3 + 0x10) = param_3;
  return 1;
}


