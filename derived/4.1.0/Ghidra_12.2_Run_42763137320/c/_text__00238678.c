/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00238678; name: FUN_.text__00238678
 */


void FUN__text__00238678(long param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long local_68;
  long local_48;
  
  FUN__text__001156d0(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_48 + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_48 != 0)) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  lVar5 = *(long *)(param_1 + 0x2d0);
  lVar1 = param_1 + 0x110;
  if (lVar5 != 0) {
    plVar8 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar9 = (ulong)param_2;
  FUN__text__003c7c60(lVar5,uVar9 * 0x40 + 0x72a9b0,1);
  FUN__text__0023937c(param_1,param_3,(ulong)param_2 * 0x30 + 0x72aba0);
  uVar2 = *(int *)(param_3 + 0x11ac4) - 1;
  if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x00238780 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0023878c + (ulong)*(ushort *)((ulong)uVar2 * 2 + 0x72a8e8) * 4))();
    return;
  }
  iVar3 = *(int *)(param_3 + 0x11ab8);
  if (iVar3 == 0) {
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar4,0x72ac40,lVar7);
    uVar6 = FUN__text__005f3244(lVar7);
    FUN__text__0012c9f0(lVar1,uVar9 * 0x20 + 0x72ac08,uVar6,0xb);
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    if (lVar4 == 0) goto LAB__text__00238da0;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x648);
    local_68 = lVar4;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      iVar3 = *(int *)(param_3 + 0x11ab8);
    }
    FUN__text__0022ece4(uVar6,lVar5,&local_68,*(undefined8 *)(uVar9 * 0x20 + 0x72ac08),
                        0xe1cdc4cb33f69349,5,iVar3,0);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if (lVar4 == 0) goto LAB__text__00238da0;
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
LAB__text__00238da0:
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72ac48,lVar7);
  uVar6 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72ac00,uVar6,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar8 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72ac48,lVar7);
  uVar6 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72ac20,uVar6,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar1 = uVar9 * 0x20 + 0x72ac10;
  uVar6 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),lVar1);
  lVar7 = *(long *)(param_1 + 0x570);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__003d5154(lVar7,*(undefined4 *)(param_3 + 0x11abc),uVar6,0,0);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  FUN__text__003c7c60(lVar5,lVar1,1);
  lVar1 = uVar9 * 0x20 + 0x72ac18;
  uVar6 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),lVar1);
  lVar7 = *(long *)(param_1 + 0x570);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__003d5154(lVar7,*(undefined4 *)(param_3 + 0x11ac0),uVar6,0,0);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  FUN__text__003c7c60(lVar5,lVar1,1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


