/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ea7b8; name: FUN_.text__002ea7b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ea7b8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long local_30;
  long local_28;
  
  FUN__text__002eb310();
  plVar2 = param_1 + 0xd;
  *plVar2 = 0;
  lVar1 = _DAT_008a2850;
  local_30 = param_1[1];
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[0xc] = lVar1 + 0x140;
  param_1[9] = lVar1 + 0xd8;
  param_1[10] = lVar1 + 0x118;
  FUN__text__0020bb18(&local_28,local_30,&local_30);
  if (*plVar2 != 0) {
    (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
  }
  *plVar2 = local_28;
  return;
}


