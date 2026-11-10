/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001bd730; name: FUN_.text__001bd730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001bd730(long param_1,undefined8 param_2,uint *param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  undefined2 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  long local_88;
  undefined1 auStack_7c [20];
  undefined8 local_68;
  
  lVar11 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar11 + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar8 = *(undefined8 *)(lVar7 + 0x10);
  lVar5 = *(long *)(lVar7 + 0x158);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar10 + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,
                      param_1 + (ulong)*param_3 * 1000 + (ulong)param_3[1] * 200 + 0x14a8);
  FUN__text__00191328(auStack_7c,param_2,param_3);
  local_88 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__001916b0(uVar8,&local_88,auStack_7c,0);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  uVar2 = FUN__text__00306588(lVar5);
  if ((uVar2 & 1) == 0) {
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_8c = 0xffffffff;
    FUN__text__00306a28(lVar5,&local_a4);
    uVar8 = 0;
    lVar10 = param_1 + (ulong)*param_3 * 1000 + (ulong)param_3[1] * 200;
    lVar9 = *(long *)(lVar10 + 0x42e0);
    lVar10 = *(long *)(lVar10 + 0x42e8);
    if ((lVar9 != -0x340d631b7bddd9bb) && (lVar9 != 0)) {
      local_68 = lVar9;
      uVar8 = FUN__text__00155100(*(undefined8 *)(lVar11 + 0x2d0),&local_68);
    }
    FUN__text__003c3378(lVar6,&local_a4,0,uVar8,0,0);
    uVar8 = 0;
    if ((lVar10 != -0x340d631b7bddd9bb) && (lVar10 != 0)) {
      local_68 = lVar10;
      uVar8 = FUN__text__00155100(*(undefined8 *)(lVar11 + 0x2d0),&local_68);
    }
    FUN__text__003c3378(lVar6,&local_a4,0,uVar8,0,0);
    if ((lVar9 != 0) && (lVar9 != -0x340d631b7bddd9bb)) {
      local_68 = lVar9;
      plVar3 = (long *)FUN__text__00155100(*(undefined8 *)(lVar11 + 0x2d0),&local_68);
      if (plVar3 != (long *)0x0) {
        local_68 = 0;
        FUN__text__001c1070(auStack_a8,&local_68,lVar7,auStack_7c);
        puVar1 = _DAT_008a1780;
        if (local_68._5_1_ != '\0') {
          puVar1 = _DAT_008a1778;
        }
        local_68 = CONCAT44(local_68._4_4_,*puVar1);
        (**(code **)(*plVar3 + 0x28))(plVar3,0,&local_68);
        (**(code **)(*plVar3 + 0x28))(plVar3,1,&local_68);
        (**(code **)(*plVar3 + 0x28))(plVar3,2,&local_68);
        (**(code **)(*plVar3 + 0x28))(plVar3,3,&local_68);
      }
    }
    FUN__text__003c7c60(lVar4,param_1 + 0x42d0 + (ulong)*param_3 * 1000 + (ulong)param_3[1] * 200 +
                              8,1);
    FUN__text__0012c378(lVar11 + 0x110,
                        param_1 + 0x42d0 + (ulong)*param_3 * 1000 + (ulong)param_3[1] * 200 + 0x90);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


