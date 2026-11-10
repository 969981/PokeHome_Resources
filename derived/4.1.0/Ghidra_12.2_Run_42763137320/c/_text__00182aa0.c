/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00182aa0; name: FUN_.text__00182aa0
 */


/* WARNING: Removing unreachable block (ram,0x00182c74) */
/* WARNING: Removing unreachable block (ram,0x00182d18) */
/* WARNING: Removing unreachable block (ram,0x00182d2c) */

void FUN__text__00182aa0(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_d0 [14];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined2 local_45;
  
  local_58 = 0;
  local_50 = 1;
  local_48 = 0x101;
  local_46 = 0;
  local_45 = 0;
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x78) + 0x640) + 0x60);
  (**(code **)(*plVar1 + 8))(plVar1,0);
  local_60 = 0;
  if (param_2 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00182b10 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00182b1c + (ulong)*(byte *)((ulong)param_2 + 0x7257d8) * 4))();
    return;
  }
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(local_d0,*(undefined8 *)(puVar3[0xaf] + 0xb0),0);
  lVar4 = *(long *)(local_d0[0] + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_d0[0] != 0)) {
    (**(code **)(*(long *)(local_d0[0] + 0x48) + 0x18))();
  }
  FUN__text__005f2d98(lVar4,&local_60,*(undefined8 *)(param_1 + 0x88));
  local_58 = *(undefined8 *)(param_1 + 0x88);
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0x78),&local_58);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x78),0);
  *(uint *)(param_1 + 0x80) = param_2;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


