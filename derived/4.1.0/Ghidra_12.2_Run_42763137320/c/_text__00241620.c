/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00241620; name: FUN_.text__00241620
 */


void FUN__text__00241620(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_72;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  undefined1 local_34;
  
  local_88 = 0;
  local_38 = 0x1000101;
  local_34 = 1;
  local_74 = 1;
  local_72 = 0xffff;
  local_80 = 0x8abaf272a347e952;
  local_c0 = 0;
  local_78 = 4;
  local_48 = 0;
  uStack_40 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 == (undefined8 *)0x0)) {
LAB__text__002416dc:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    plVar2 = (long *)FUN__text__0023e748();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) goto LAB__text__002416dc;
    }
    puVar3 = puVar3 + -10;
  }
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(&local_c8,*(undefined8 *)(puVar4[0xaf] + 0xb0),0);
  lVar5 = *(long *)(local_c8 + 0x60);
  if ((lVar5 == 0) || ((**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(), local_c8 != 0)) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  if (*(int *)(puVar3[0xc] + 4) == 1) {
LAB__text__0024179c:
    local_c8 = 0xe8f712e52d0c;
  }
  else {
    if (*(int *)(puVar3[0xc] + 4) != 0) goto LAB__text__002417c0;
    if (*(int *)(*(long *)(param_1 + 0x88) + 0x6f0) != *(int *)(*(long *)(param_1 + 0x88) + 0x6ec))
    goto LAB__text__0024179c;
    local_c8 = 0xe9f712e52ebf;
  }
  local_c8 = local_c8 | 0xbc52000000000000;
  FUN__text__005f2d98(lVar5,&local_c8,*(undefined8 *)(param_1 + 0x90));
LAB__text__002417c0:
  local_48 = *(undefined8 *)(param_1 + 0x90);
  local_c0 = *(undefined8 *)(param_1 + 0xa8);
  local_b8 = *(undefined8 *)(param_1 + 0xb0);
  local_38 = local_38 & 0xffffff00;
  FUN__text__00131e04(*(undefined8 *)(param_1 + 0x80),&local_48,&local_c0);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


