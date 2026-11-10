/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f6d60; name: FUN_.text__001f6d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001f6d60(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_40;
  undefined4 local_38;
  
  FUN__text__00109fd4(&local_c0,0x715c87);
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x70) = local_c0;
  FUN__text__00196aa8();
  uVar4 = *(undefined8 *)(*_DAT_008a0510 + 0x68);
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x80) = local_c0;
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x88) = local_c0;
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = local_c0;
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x98) = local_c0;
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xa0) = local_c0;
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xa8) = local_c0;
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xb0) = local_c0;
  FUN__text__0015c5c4(&local_c0,uVar4,_DAT_008a0808);
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0xb8) = local_c0;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  plVar3 = (long *)FUN__text__0018d6a0();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  if (*(uint *)((long)puVar5 + 0x14c) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001f6f88 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)*(byte *)((ulong)*(uint *)((long)puVar5 + 0x14c) + 0x726f04) * 4 + 0x1f6f94))
              ();
    return;
  }
  FUN__text__001f70d0(param_1);
  uStack_98 = _DAT_008a0810;
  local_c0 = _DAT_008a0820;
  local_b8 = _DAT_008a0818;
  local_38 = 5;
  local_90 = 0;
  local_b0 = _DAT_008a0828;
  uStack_a8 = _DAT_008a0830;
  local_40 = param_1 + 0xc0;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  local_a0 = param_1;
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  FUN__text__001364d0(0x7167dd,puVar5[0xaf],&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  return;
}


