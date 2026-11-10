/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fead0; name: FUN_.text__004fead0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004fead0(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)param_1[4];
  *param_1 = _DAT_008a50e0 + 0x10;
  uVar2 = (ulong)*(uint *)(param_1 + 5);
  if (*(uint *)(param_1 + 5) != 0) {
    puVar4 = puVar1;
    do {
      puVar3 = (undefined8 *)*puVar4;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        FUN__text__00400fc0(2,puVar3);
        puVar1 = (undefined8 *)param_1[4];
        uVar2 = (ulong)*(uint *)(param_1 + 5);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1 + uVar2);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    FUN__text__00400fc0(0);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  return;
}


