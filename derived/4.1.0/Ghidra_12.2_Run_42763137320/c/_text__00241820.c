/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00241820; name: FUN_.text__00241820
 */


void FUN__text__00241820(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_198 [2];
  undefined4 local_188;
  undefined1 local_184;
  undefined1 auStack_f8 [168];
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(local_198,*(undefined8 *)(puVar3[0xaf] + 0xb0),0);
  lVar4 = *(long *)(local_198[0] + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_198[0] != 0)) {
    (**(code **)(*(long *)(local_198[0] + 0x48) + 0x18))();
  }
  memcpy(auStack_f8,(void *)0x72bb00,0x98);
  if (param_2 - 5 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x002418f4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00241904 + (ulong)*(byte *)((ulong)(param_2 - 5) + 0x72ba9c) * 4))();
    return;
  }
  FUN__text__005f2d98(lVar4,auStack_f8 + (ulong)param_2 * 8,*(undefined8 *)(param_1 + 0xb8));
  local_198[0] = *(long *)(param_1 + 0xb8);
  local_184 = 1;
  local_188 = 0x1000101;
  local_198[1] = 1;
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0x80),local_198);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


