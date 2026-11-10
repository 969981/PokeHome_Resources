/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012bcd0; name: FUN_.text__0012bcd0
 */


void FUN__text__0012bcd0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long ***local_190;
  code *local_188;
  code *local_180;
  undefined1 *puStack_178;
  long local_170;
  long lStack_168;
  long *local_110 [2];
  long local_100 [4];
  long *local_e0;
  long *local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long *local_80;
  long **local_70 [2];
  
  if (*(long *)(param_1 + 0x3d0) == 0) {
    return;
  }
  local_b0 = *(undefined8 *)(param_1 + 0x10);
  local_80 = (long *)0x0;
  uStack_a8 = 0x1fffffffffffffff;
  FUN__text__0012bf60(local_110,0x80,&local_b0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_190 = local_70;
  local_70[0] = local_110;
  FUN__text__0012e850(lVar4,&local_190,0);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  local_180 = (code *)0x0;
  puStack_178 = (undefined1 *)0x0;
  local_190 = (long ***)0x0;
  local_188 = (code *)0x0;
  if (local_c8 != 0) {
    lVar4 = local_c8 << 3;
    plVar1 = local_d0;
    do {
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      pcVar2 = local_188;
      if (local_188 != (code *)0x0) {
        local_180 = (code *)0x0;
        puStack_178 = (undefined1 *)0x0;
        local_190 = (long ***)0x0;
        local_188 = (code *)0x0;
        (*pcVar2)(&local_170);
      }
      pcVar2 = *(code **)(lVar5 + 0x288);
      local_190 = (long ***)&LAB__text__0012ee1c;
      local_188 = FUN__text__0012ee34;
      local_180 = FUN__text__0012ee38;
      puStack_178 = &LAB__text__0012ee44;
      local_170 = param_1;
      lStack_168 = lVar5;
      if (pcVar2 == (code *)0x0) {
LAB__text__0012bdb4:
        (*local_180)(&local_170,lVar5 + 0x2a0);
        *(undefined8 *)(lVar5 + 0x280) = local_190;
        *(code **)(lVar5 + 0x288) = local_188;
        *(code **)(lVar5 + 0x290) = local_180;
        *(undefined1 **)(lVar5 + 0x298) = puStack_178;
      }
      else {
        *(undefined8 *)(lVar5 + 0x290) = 0;
        *(undefined8 *)(lVar5 + 0x298) = 0;
        *(undefined8 *)(lVar5 + 0x280) = 0;
        *(undefined8 *)(lVar5 + 0x288) = 0;
        (*pcVar2)(lVar5 + 0x2a0);
        if (local_180 != (code *)0x0) goto LAB__text__0012bdb4;
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      pcVar2 = local_188;
      plVar1 = plVar1 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
    if (local_188 != (code *)0x0) {
      local_180 = (code *)0x0;
      puStack_178 = (undefined1 *)0x0;
      local_190 = (long ***)0x0;
      local_188 = (code *)0x0;
      (*pcVar2)(&local_170);
    }
    if (local_c8 != 0) {
      lVar4 = local_c8;
      plVar1 = local_d0;
      do {
        if (*plVar1 != 0) {
          (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
          *plVar1 = 0;
        }
        lVar4 = lVar4 + -1;
        plVar1 = plVar1 + 1;
      } while (lVar4 != 0);
    }
  }
  if (local_c0 != 0) {
    (**(code **)(*local_110[0] + 0x18))(local_110[0],local_d0,local_c0 << 3,8);
  }
  plVar1 = local_100;
  if (local_e0 == plVar1) {
    puVar3 = (undefined8 *)(local_100[0] + 0x20);
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB__text__0012bf04;
    puVar3 = (undefined8 *)(*local_e0 + 0x28);
    plVar1 = local_e0;
  }
  (*(code *)*puVar3)(plVar1);
LAB__text__0012bf04:
  plVar1 = local_a0;
  if (local_80 == plVar1) {
    puVar3 = (undefined8 *)(local_a0[0] + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) {
      return;
    }
    puVar3 = (undefined8 *)(*local_80 + 0x28);
    plVar1 = local_80;
  }
  (*(code *)*puVar3)(plVar1);
  return;
}


