/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00195870; name: FUN_.text__00195870
 */


int FUN__text__00195870(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long local_68;
  
  if (*(int *)(param_3 + 0x18) == 0) {
    iVar6 = 0;
  }
  else {
    lVar4 = 0;
    iVar6 = 0;
    do {
      lVar9 = 0x30;
      do {
        lVar5 = *(long *)(param_3 + lVar9);
        if (*(int *)(lVar5 + 0x18) != 0) {
          uVar1 = *(ulong *)(lVar5 + 8);
          uVar2 = *(undefined8 *)(lVar5 + 0x10);
          lVar5 = *param_2;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
          }
          lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                                                (uVar1 & 0xffffffff) * 0x20 + 0x10) + 0x10) + 8);
          uVar3 = 0;
          if (lVar8 != 0) {
            plVar7 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar7 + 0x10))(plVar7);
            local_68 = lVar5;
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
            }
            uVar3 = FUN__text__00301310(lVar8,uVar1 >> 0x20,
                                        (int)uVar2 + (int)((ulong)uVar2 >> 0x20) * 6,&local_68,1);
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            (**(code **)(*plVar7 + 0x18))(plVar7);
          }
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          }
          iVar6 = iVar6 + (uVar3 & 1);
        }
        lVar9 = lVar9 + 0xa0;
      } while (lVar9 != 0x3f0);
      param_3 = param_3 + 0x20;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 5);
  }
  return iVar6;
}


