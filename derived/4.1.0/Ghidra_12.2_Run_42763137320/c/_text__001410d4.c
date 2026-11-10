/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001410d4; name: FUN_.text__001410d4
 */


void FUN__text__001410d4(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  code *local_160;
  code *local_158;
  code *local_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [96];
  undefined8 local_e0 [3];
  long local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  
  FUN__text__0014157c(param_1 + 0x650);
  lVar1 = param_1 + 0x110;
  lVar5 = *(long *)(*(long *)(param_1 + 0x8d0) + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,param_1 + 0x8d8,lVar6);
  uVar3 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7244a0,uVar3,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  lVar5 = *(long *)(*(long *)(param_1 + 0x8d0) + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,param_1 + 0x8e0,lVar6);
  uVar3 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7244a8,uVar3,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  lVar5 = FUN__text__0012cb14(lVar1,0x7244b0);
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000;
  pcVar4 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_c0 = (code *)&LAB__text__00142518;
  local_b8 = FUN__text__001425d8;
  local_b0 = FUN__text__001425dc;
  local_a8 = &LAB__text__001425e8;
  alStack_a0[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar4)(lVar5 + 0x2a0);
    if (local_b0 == (code *)0x0) goto LAB__text__001412a8;
  }
  (*local_b0)(alStack_a0,lVar5 + 0x2a0);
  *(undefined8 *)(lVar5 + 0x280) = local_c0;
  *(code **)(lVar5 + 0x288) = local_b8;
  *(code **)(lVar5 + 0x290) = local_b0;
  *(undefined1 **)(lVar5 + 0x298) = local_a8;
LAB__text__001412a8:
  FUN__text__005e927c(local_e0,0x86a090);
  FUN__text__003a1de4(lVar5,local_e0);
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(alStack_a0);
  }
  lVar5 = FUN__text__0012cbe0(lVar1,0x71c1ba);
  *(long *)(param_1 + 0x640) = lVar5;
  *(undefined8 *)(lVar5 + 0x448) = 0x63578e1459ae12ea;
  *(undefined8 *)(lVar5 + 0x450) = 0x70e259;
  *(undefined8 *)(lVar5 + 0x458) = 0x1d;
  if (*(code **)(param_1 + 2000) != (code *)0x0) {
    lVar5 = param_1 + 0x7f0;
    local_c0 = (code *)((ulong)local_c0 & 0xffffffff00000000);
    iVar2 = (**(code **)(param_1 + 2000))(lVar5,&local_c0);
    FUN__text__0012c378(lVar1,(long)iVar2 * 8 + 0x7244b8);
    if (*(code **)(param_1 + 2000) != (code *)0x0) {
      local_c0._0_4_ = 1;
      iVar2 = (**(code **)(param_1 + 2000))(lVar5,&local_c0);
      FUN__text__0012c378(lVar1,(long)iVar2 * 8 + 0x7244d8);
      if (*(code **)(param_1 + 2000) != (code *)0x0) {
        local_c0._0_4_ = 2;
        iVar2 = (**(code **)(param_1 + 2000))(lVar5,&local_c0);
        FUN__text__0012c378(lVar1,(long)iVar2 * 8 + 0x7244f8);
        if (*(code **)(param_1 + 2000) != (code *)0x0) {
          local_c0._0_4_ = 3;
          iVar2 = (**(code **)(param_1 + 2000))(lVar5,&local_c0);
          FUN__text__0012c378(lVar1,(long)iVar2 * 8 + 0x724518);
          if (*(code **)(param_1 + 2000) != (code *)0x0) {
            local_c0._0_4_ = 4;
            iVar2 = (**(code **)(param_1 + 2000))(lVar5,&local_c0);
            FUN__text__0012c378(lVar1,(long)iVar2 * 8 + 0x724538);
            if (*(code **)(param_1 + 2000) != (code *)0x0) {
              local_c0 = (code *)CONCAT44(local_c0._4_4_,5);
              iVar2 = (**(code **)(param_1 + 2000))(lVar5,&local_c0);
              FUN__text__0012c378(lVar1,(long)iVar2 * 8 + 0x724558);
            }
          }
        }
      }
    }
  }
  local_c0 = (code *)0x0;
  FUN__text__003a8304(*(undefined8 *)(param_1 + 0x640),&local_c0,1,0);
  lVar5 = *(long *)(param_1 + 0x2d0);
  local_c0 = (code *)0x43660000435c0000;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_e0[0] = 0x80a8e808288e407;
  FUN__text__003c7960(lVar5,local_e0,&local_c0);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  local_c0 = FUN__text__001425f4;
  local_b8 = FUN__text__00142690;
  local_b0 = FUN__text__00142694;
  local_a8 = &LAB__text__001426a0;
  alStack_a0[0] = param_1;
  FUN__text__00128db0(param_1,1,1);
  local_150 = (code *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_160 = (code *)0x0;
  local_158 = (code *)0x0;
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,auStack_140);
    local_160 = local_c0;
    local_158 = local_b8;
    local_150 = local_b0;
    puStack_148 = local_a8;
  }
  FUN__text__0012c3b0(lVar1,0x713a5f,&local_160);
  pcVar4 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (code *)0x0;
    local_158 = (code *)0x0;
    (*pcVar4)(auStack_140);
  }
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(alStack_a0);
  }
  return;
}


