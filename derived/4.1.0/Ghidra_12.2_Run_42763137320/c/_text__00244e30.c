/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00244e30; name: FUN_.text__00244e30
 */


void FUN__text__00244e30(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *__src;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined6 uStack_d0;
  undefined2 local_ca;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined8 local_c0;
  ushort local_b8;
  ushort uStack_b6;
  undefined2 local_b4;
  undefined2 uStack_b2;
  undefined5 uStack_b0;
  char cStack_ab;
  undefined2 local_aa;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined2 local_50;
  undefined8 local_4c;
  long local_28;
  
  local_e0 = 0xcd97e60bf719a9d5;
  lVar1 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  local_e0 = 0xb80a4302360d9d80;
  lVar1 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  }
  if (*(uint *)(param_1 + 0x6ec) == param_2) {
    local_e0 = 0x6ed222255d5cc02f;
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
    local_e0 = 0xd17179f08793549f;
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    local_e0 = 0xbe629e44d60a57cc;
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    local_e0 = 0x8a10f848eef0c665;
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    local_e0 = 0xaa2b60ebb0d90ea4;
    lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
    lVar1 = *(long *)(param_1 + 0x6d0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_e0 = 0x7ea20e51f76e7828;
    lVar4 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar1,&local_e0,lVar4);
    uVar2 = FUN__text__005f3244(lVar4);
    FUN__text__0012c9f0(param_1 + 0x110,0x72bcf8,uVar2,0xb);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    lVar1 = *(long *)(param_1 + 0x6d0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_e0 = 0x7ea20f51f76e79db;
    lVar4 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar1,&local_e0,lVar4);
    uVar2 = FUN__text__005f3244(lVar4);
    FUN__text__0012c9f0(param_1 + 0x110,0x72bd00,uVar2,0xb);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    return;
  }
  local_e0 = 0x6ed222255d5cc02f;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
  local_e0 = 0xd17179f08793549f;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  lVar1 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_e0);
  uStack_c8 = 0;
  uStack_c6 = 0;
  uStack_c4 = 0;
  uStack_c3 = 0;
  uStack_d0 = 0;
  local_ca = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b6 = 0;
  local_b4 = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  cStack_ab = '\0';
  local_9c = 0;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = 0;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  local_4c = 0;
  local_50 = 0;
  local_aa = 0x101;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  if (*(uint *)(param_1 + 0x718) <= param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  __src = (void *)FUN__text__00323c30(*(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0x71c),
                                      param_1 + 0x6d8);
  memcpy(&local_e0,__src,0x9c);
  if (CONCAT22(uStack_b2,local_b4) - 0xbU < 2) {
    local_28 = -0x47f5bcfdc9f26280;
    lVar1 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_28);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    }
  }
  if ((((cStack_ab != '\0') || ((char)local_a8 != '\0')) || (local_a8._1_1_ != '\0')) ||
     (local_a8._2_1_ != '\0')) {
    FUN__text__00245968(param_1,&local_e0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x6d0);
  lVar4 = *(long *)(lVar1 + 0x2e8);
  local_28 = 0x7eb30b51f77ce642;
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar2,&local_28,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__005f2d98(uVar2,&local_28,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN__text__0023211c(&local_28,*(undefined8 *)(param_1 + 8),0x72bc18);
  FUN__text__005f32c4(local_28,&local_e0);
  lVar4 = *(long *)(lVar1 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00165d24(lVar4,0,local_28,(undefined1)local_98,local_98._1_1_);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar1,0x72bd08,0xb);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x6d0);
  lVar4 = *(long *)(lVar1 + 0x2e8);
  local_28 = 0x7ea89b51f773d36d;
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar2,&local_28,0);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__005f2d98(uVar2,&local_28,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,0,uStack_c6,3,0,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(lVar1 + 0x2e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,1,uStack_c4,2,2,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar1,0x72bd10,0xb);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x6d0);
  lVar4 = *(long *)(lVar1 + 0x2e8);
  local_28 = 0x7eaf8751f779d01f;
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar2,&local_28,0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__005f2d98(uVar2,&local_28,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar4 = *(long *)(lVar1 + 0x2e0);
  uVar3 = 5;
  if (1 < CONCAT22(uStack_b2,local_b4) - 0xbU) {
    uVar3 = 6;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,0,local_9c,uVar3,2,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar1,0x72bd18,0xb);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x6d0);
  lVar4 = *(long *)(lVar1 + 0x2e8);
  local_28 = 0x7eabff51f776b330;
  if (lVar4 == 0) {
    FUN__text__005f2d98(uVar2,&local_28,0);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__005f2d98(uVar2,&local_28,lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(lVar1 + 0x2e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar4,0,local_c0._4_4_,4,0,1);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  FUN__text__003c8c20(lVar1,0x72bd20,0xb);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  lVar1 = *(long *)(param_1 + 0x2d0);
  if (lVar1 == 0) {
    if (1 < CONCAT22(uStack_b2,local_b4) - 0xbU) goto LAB__text__00245674;
  }
  else {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    if (1 < CONCAT22(uStack_b2,local_b4) - 0xbU) {
LAB__text__00245674:
      uVar2 = *(undefined8 *)(param_1 + 0x6d0);
      lVar4 = *(long *)(lVar1 + 0x2e8);
      local_28 = 0x7ea51351f770b67e;
      if (lVar4 == 0) {
        FUN__text__005f2d98(uVar2,&local_28,0);
        lVar4 = *(long *)(lVar1 + 0x2e0);
      }
      else {
        plVar5 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN__text__005f2d98(uVar2,&local_28,lVar4);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        lVar4 = *(long *)(lVar1 + 0x2e0);
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__00166508(lVar4,0,local_b8 & 0xfff,4,2,1);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      lVar4 = *(long *)(lVar1 + 0x2e0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__00166508(lVar4,1,local_b8 >> 0xc,2,2,1);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      lVar4 = *(long *)(lVar1 + 0x2e0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__00166508(lVar4,2,uStack_b6 & 0x1f,2,2,1);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      lVar4 = *(long *)(lVar1 + 0x2e0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__00166508(lVar4,3,uStack_b6 >> 5 & 0x1f,2,2,1);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      lVar4 = *(long *)(lVar1 + 0x2e0);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__00166508(lVar4,4,uStack_b6 >> 10,2,2,1);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      FUN__text__003c8c20(lVar1,0x72bd28,0xb);
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    if (1 < CONCAT22(uStack_b2,local_b4) - 0xbU) goto LAB__text__002458d8;
  }
  local_28 = -0x32681af408e657de;
  lVar1 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_28);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    lVar4 = *(long *)(param_1 + 0x560);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    FUN__text__003c6808(lVar4,local_98._1_1_,lVar1,0,0);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
LAB__text__002458d8:
  FUN__text__00245cb0(param_1,&local_e0);
  return;
}


