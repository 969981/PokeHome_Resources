/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00458e90; name: FUN_.text__00458e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00458e90(long *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 local_40 [16];
  
  *param_1 = _DAT_008a4ec8 + 0x10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1[6];
  while (local_40 = auVar2, auVar2._0_8_ != 0) {
    auVar2 = FUN__text__00458f70(param_1,local_40);
  }
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN__text__00400fc0(0);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1 + 10) = 0;
    FUN__text__00400fc0(5);
    param_1[9] = 0;
    *(undefined4 *)((long)param_1 + 0x54) = 0;
  }
  puVar1 = (undefined8 *)param_1[6];
  param_1[3] = 0;
  param_1[4] = 0;
  while (puVar1 != (undefined8 *)0x0) {
    param_1[6] = puVar1[4];
    puVar1[4] = 0;
    (**(code **)*puVar1)(puVar1);
    FUN__text__00400fc0(5,puVar1);
    puVar1 = (undefined8 *)param_1[6];
  }
  param_1[6] = 0;
  return;
}


