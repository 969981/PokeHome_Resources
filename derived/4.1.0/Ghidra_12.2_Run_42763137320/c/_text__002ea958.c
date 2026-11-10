/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ea958; name: FUN_.text__002ea958
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ea958(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long local_1d0 [43];
  undefined1 local_78;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  long local_38;
  
  FUN__text__002eb310();
  plVar2 = param_1 + 0xd;
  *plVar2 = 0;
  lVar1 = _DAT_008a2850;
  local_38 = param_1[1];
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[0xc] = lVar1 + 0x140;
  param_1[9] = lVar1 + 0xd8;
  param_1[10] = lVar1 + 0x118;
  FUN__text__0020bb18(local_1d0,local_38,&local_38);
  if (*plVar2 != 0) {
    (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
  }
  *plVar2 = local_1d0[0];
  memset(local_1d0,0,0x158);
  local_77 = 0;
  uStack_6f = 0;
  local_67 = 0;
  uStack_5f = 0;
  local_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  local_57 = 0;
  uStack_4f = 0;
  local_78 = 1;
  FUN__text__005fc5dc(local_1d0,*(undefined8 *)(param_2 + 0x68),0);
  FUN__text__005fc6ec(*plVar2,local_1d0);
  return;
}


