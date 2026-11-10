/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9c00; name: FUN_.text__004e9c00
 */


void FUN__text__004e9c00(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  plVar4 = (long *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x40) = *(byte *)(param_1 + 0x40) & 0xfc;
  puVar2 = (undefined8 *)*plVar4;
  while (puVar2 != (undefined8 *)0x0) {
    if (*(int *)(puVar2 + 3) == 1) {
      FUN__text__004e9250(puVar2[4]);
    }
    puVar5 = (undefined8 *)puVar2[2];
    plVar1 = plVar4;
    if ((undefined8 *)*plVar4 != puVar2) {
      plVar1 = (long *)&DAT_00000010;
    }
    *plVar1 = (long)puVar5;
    (**(code **)*puVar2)(puVar2);
    FUN__text__00400fc0(0,puVar2);
    puVar2 = puVar5;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x80) = 0;
    lVar3 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar3 != 0) {
      FUN__text__004eb980();
      return;
    }
  }
  return;
}


