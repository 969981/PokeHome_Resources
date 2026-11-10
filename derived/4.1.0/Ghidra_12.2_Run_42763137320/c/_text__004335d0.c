/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004335d0; name: FUN_.text__004335d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004335d0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[7];
  *param_1 = _DAT_008a4848 + 0x10;
  puVar2 = puVar1;
  if ((int)param_1[8] != 0) {
    do {
      puVar3 = puVar2 + 1;
      FUN__text__00434930(DAT_00ae9a70,*puVar2,param_1);
      puVar1 = (undefined8 *)param_1[7];
      puVar2 = puVar3;
    } while (puVar3 != puVar1 + *(uint *)(param_1 + 8));
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN__text__00400fc0(0,puVar1);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  return;
}


