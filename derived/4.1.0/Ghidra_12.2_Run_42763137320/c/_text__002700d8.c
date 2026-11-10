/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002700d8; name: FUN_.text__002700d8
 */


void FUN__text__002700d8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_92;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_57;
  
  iVar1 = FUN__text__00323500();
  if (iVar1 < 1) {
    local_57 = 0x1010001;
    local_98 = 4;
    local_94 = 1;
    local_a8 = 0;
    local_92 = 0xffff;
    local_68 = *(undefined8 *)(param_1 + 0xb8);
    local_e0 = *(undefined8 *)(param_1 + 0xc0);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a0 = 0x8abaf272a347e952;
    local_58 = 0;
    uStack_60 = 0;
    local_d8 = *(undefined8 *)(param_1 + 200);
    local_c8 = 0;
    uStack_c0 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uStack_d0 = 0;
    FUN__text__00131e04(*(undefined8 *)(param_1 + 0x80),&local_68,&local_e0);
    FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0);
    *(undefined4 *)(param_1 + 0x78) = 2;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x80) + 0x2d0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x2e0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__00166508(lVar3,0,iVar1,3,0,1);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    lVar3 = *(long *)(lVar2 + 0x2e0);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    lVar4 = *(long *)(lVar2 + 0x2e8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN__text__00163fb4(lVar3,uVar5,lVar4);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    local_57 = 0x1010001;
    local_98 = 4;
    local_94 = 1;
    local_a8 = 0;
    local_92 = 0xffff;
    local_68 = *(undefined8 *)(param_1 + 0xd0);
    local_e0 = *(undefined8 *)(param_1 + 0xd8);
    local_b8 = 0;
    uStack_b0 = 0;
    local_a0 = 0x8abaf272a347e952;
    local_58 = 0;
    uStack_60 = 0;
    local_d8 = *(undefined8 *)(param_1 + 0xe0);
    local_c8 = 0;
    uStack_c0 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uStack_d0 = 0;
    FUN__text__00131e04(*(undefined8 *)(param_1 + 0x80),&local_68,&local_e0);
    FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0);
    *(undefined4 *)(param_1 + 0x78) = 3;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


