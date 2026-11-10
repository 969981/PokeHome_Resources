/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001959e0; name: FUN_.text__001959e0
 */


int FUN__text__001959e0(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long local_68;
  
  lVar13 = 0;
  iVar8 = 0;
  do {
    lVar10 = 0;
    do {
      lVar11 = *(long *)(param_3 + lVar10 * 0xa0 + lVar13 * 0x20 + 0x10);
      if (*(int *)(lVar11 + 0x18) != 0) {
        lVar12 = *param_2;
        if ((lVar12 == 0) ||
           ((**(code **)(*(long *)(lVar12 + 0x48) + 0x10))(), *(int *)(lVar11 + 0x18) != 0)) {
          lVar5 = 0;
          iVar7 = 0;
          plVar1 = (long *)(lVar12 + 0x48);
          do {
            lVar9 = 0x30;
            do {
              lVar6 = *(long *)(lVar11 + lVar9);
              if (*(int *)(lVar6 + 0x18) != 0) {
                uVar2 = *(ulong *)(lVar6 + 8);
                uVar3 = *(undefined8 *)(lVar6 + 0x10);
                if (lVar12 != 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
                lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                                                      (uVar2 & 0xffffffff) * 0x20 + 0x10) + 0x10) +
                                 8);
                uVar4 = 0;
                if (lVar6 != 0) {
                  plVar14 = (long *)(lVar6 + 0x48);
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                  local_68 = lVar12;
                  if (lVar12 != 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                  uVar4 = FUN__text__00301310(lVar6,uVar2 >> 0x20,
                                              (int)uVar3 + (int)((ulong)uVar3 >> 0x20) * 6,&local_68
                                              ,1);
                  if (local_68 != 0) {
                    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                    local_68 = 0;
                  }
                  (**(code **)(*plVar14 + 0x18))(plVar14);
                }
                if (lVar12 != 0) {
                  (**(code **)(*plVar1 + 0x18))(plVar1);
                }
                iVar7 = iVar7 + (uVar4 & 1);
              }
              lVar9 = lVar9 + 0xa0;
            } while (lVar9 != 0x3f0);
            lVar11 = lVar11 + 0x20;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 5);
          iVar8 = iVar7 + iVar8;
          if (lVar12 == 0) goto LAB__text__00195a44;
        }
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
LAB__text__00195a44:
      lVar10 = lVar10 + 1;
    } while (lVar10 != 6);
    lVar13 = lVar13 + 1;
    if (lVar13 == 5) {
      return iVar8;
    }
  } while( true );
}


