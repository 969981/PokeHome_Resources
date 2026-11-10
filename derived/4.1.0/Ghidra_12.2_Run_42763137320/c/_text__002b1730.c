/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b1730; name: FUN_.text__002b1730
 */


bool FUN__text__002b1730(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x138));
  if (*(long *)(param_1 + 0x118) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    iVar3 = FUN__text__005dd608(puVar1);
    if (iVar3 != 0) {
      FUN__text__005daa98(DAT_008e1540,puVar1);
    }
    FUN__text__005da7f0(&local_a0,DAT_008e1540,param_1 + 0x260,0x1001f5010dfa000);
    *puVar1 = local_a0;
    *(undefined8 *)(param_1 + 0xb0) = uStack_98;
    *(undefined4 *)(param_1 + 0xb8) = local_90;
    *(undefined8 *)(param_1 + 0xc0) = local_88;
    *(undefined8 *)(param_1 + 200) = uStack_80;
    *(undefined8 *)(param_1 + 0xd0) = local_78;
    if (*(long *)(param_1 + 0xd8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0xd8) = local_70;
    *(undefined8 *)(param_1 + 0xe0) = uStack_68;
    *(undefined8 *)(param_1 + 0xe8) = local_60;
    *(undefined8 *)(param_1 + 0xf0) = uStack_58;
    FUN__text__005dd648(puVar1,0x1001f5010dfa000);
    iVar3 = FUN__text__005dd608(puVar1);
    if (iVar3 != 3) {
      plVar6 = *(long **)(param_1 + 0x98);
      uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
      uVar7 = tpidr_el0;
      uVar7 = uVar7 & 0xffffffffffffe000;
      if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      FUN__text__002c3460(uVar4,*(undefined8 *)(param_1 + 0xa0),param_2,puVar1);
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      lVar5 = *(long *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = uVar4;
      if (lVar5 == 0) {
        bVar2 = true;
      }
      else {
        if (*(long *)(lVar5 + 8) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar5 + 8) + 0x48) + 0x18))();
          *(undefined8 *)(lVar5 + 8) = 0;
        }
        (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
                  (*(long **)(param_1 + 0x120),lVar5,*(undefined8 *)(param_1 + 0x128),
                   *(undefined8 *)(param_1 + 0x130));
        bVar2 = *(long *)(param_1 + 0x118) != 0;
      }
      *(long **)(param_1 + 0x120) = plVar6;
      *(undefined8 *)(param_1 + 0x128) = 0x10;
      *(undefined8 *)(param_1 + 0x130) = 8;
      goto LAB__text__002b1814;
    }
  }
  bVar2 = false;
LAB__text__002b1814:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  return bVar2;
}


