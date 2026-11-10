/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00266f70; name: FUN_.text__00266f70
 */


void FUN__text__00266f70(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long local_b0 [8];
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined2 local_62;
  undefined8 local_48;
  
  lVar1 = FUN__text__00321ac0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if ((*(long *)(param_1 + 0x6c0) != 0) && (lVar9 = *(long *)(param_1 + 0x2d0), lVar9 != 0)) {
    plVar7 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar10 = *(long *)(lVar9 + 0x2e0);
    if (lVar10 != 0) {
      plVar8 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN__text__0023211c(local_b0,*(undefined8 *)(param_1 + 8),0x72ce6e);
      if (local_b0[0] != 0) {
        FUN__text__005f32c4(local_b0[0],&UNK__text__001936e8 + lVar1);
        uVar11 = *(undefined8 *)(param_1 + 0x6c0);
        lVar12 = *(long *)(lVar9 + 0x2e8);
        local_48 = 0xb4a51a1ff7b0141f;
        if (lVar12 == 0) {
          FUN__text__005f2d98(uVar11,&local_48,0);
        }
        else {
          plVar13 = (long *)(lVar12 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          FUN__text__005f2d98(uVar11,&local_48,lVar12);
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        lVar12 = local_b0[0];
        lVar2 = FUN__text__00321ac0();
        FUN__text__00165d24(lVar10,0,lVar12,0,(&DAT__text__00193768)[lVar2]);
        local_48 = 0x3d90939e1badcc3c;
        FUN__text__003c8c20(lVar9,&local_48,0xb);
        if (local_b0[0] != 0) {
          (**(code **)(*(long *)(local_b0[0] + 0x48) + 0x18))();
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar3 = 0;
  uStack_68 = 0;
  uVar6 = 0;
  local_b0[0] = 0;
  local_b0[7] = 0;
  uStack_70 = 0;
  local_6a = 0;
  local_b0[5] = 0;
  local_b0[6] = 0;
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  do {
    sVar5 = *(short *)(&DAT__text__00193728 + uVar3 * 2 + lVar1);
    if (sVar5 == 0) break;
    uVar4 = uVar6;
    if ((uVar3 != 0) && ((uVar3 & 3) == 0)) {
      *(undefined2 *)((long)local_b0 + (ulong)uVar6 * 2) = 0x2d;
      uVar4 = uVar6 + 1;
      sVar5 = *(short *)(&DAT__text__00193728 + uVar3 * 2 + lVar1);
    }
    uVar6 = uVar4 + 1;
    uVar3 = uVar3 + 1;
    *(short *)((long)local_b0 + (ulong)uVar4 * 2) = sVar5;
  } while (uVar3 != 0x20);
  if (uVar6 < 0x28) {
    *(undefined2 *)((long)local_b0 + (ulong)uVar6 * 2) = 0;
  }
  local_62 = 0;
  local_48 = 0xd2b1e40a59a3d9c2;
  FUN__text__0012c9f0(param_1 + 0x110,&local_48,local_b0,0xb);
  return;
}


