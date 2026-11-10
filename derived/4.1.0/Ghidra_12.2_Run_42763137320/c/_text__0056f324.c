/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056f324; name: FUN_.text__0056f324
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0056f324(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = _DAT_008a3c40 + 0x10;
  lVar1 = *(long *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = lVar1;
  param_1[2] = lVar2;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x22) = 1;
  return;
}


