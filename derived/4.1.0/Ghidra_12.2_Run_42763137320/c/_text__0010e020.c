/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010e020; name: FUN_.text__0010e020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0010e020(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long local_50;
  long local_48;
  undefined8 local_28;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar3 = *(long **)(param_1 + 0x8d0);
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,0x200,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN__text__003c97a4(plVar2,*(undefined8 *)(param_1 + 0x8d0),param_1 + 0x50);
  plVar2[1] = (long)plVar3;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x200;
  plVar2[4] = 0x10;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  (**(code **)(plVar2[9] + 0x10))();
  if (*(long *)(param_1 + 0x8e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e0) + 0x48) + 0x18))();
  }
  local_28 = *(undefined8 *)(param_1 + 0x8d0);
  *(long **)(param_1 + 0x8e0) = plVar2;
  FUN__text__0010e58c(&local_50,local_28,&local_28);
  local_48 = local_50;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x8e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e8) + 0x48) + 0x18))();
  }
  lVar1 = param_1 + 0x8f0;
  *(long *)(param_1 + 0x8e8) = local_50;
  FUN__text__003e5784(lVar1,0x7216c8,_DAT_0089f838);
  local_28 = 0x438078000000000;
  FUN__text__003e57b4(lVar1,&local_28);
  lVar4 = *(long *)(param_1 + 0x8e8);
  FUN__text__003c8830(lVar4,*(undefined8 *)(param_1 + 0x8d8));
  if (*(long *)(lVar4 + 0x188) != 0) {
    lVar5 = *(long *)(lVar4 + 0x188) << 4;
    plVar2 = (long *)(*(long *)(lVar4 + 0x180) + 8);
    do {
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__003e9668(lVar4,lVar1);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      lVar5 = lVar5 + -0x10;
      plVar2 = plVar2 + 2;
    } while (lVar5 != 0);
  }
  FUN__text__003c8d50(*(undefined8 *)(param_1 + 0x8e8),0);
  local_28 = 0x268b74ebcaf3f3dc;
  FUN__text__003c7d90(*(undefined8 *)(param_1 + 0x8e8),&local_28);
  local_28 = 0xd35e76b4ca9b1b8e;
  FUN__text__003c7d90(*(undefined8 *)(param_1 + 0x8e8),&local_28);
  local_28 = 0x6bceeeff367f2289;
  FUN__text__003c7d90(*(undefined8 *)(param_1 + 0x8e8),&local_28);
  return;
}


