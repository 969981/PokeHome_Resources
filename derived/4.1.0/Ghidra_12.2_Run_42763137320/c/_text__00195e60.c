/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00195e60; name: FUN_.text__00195e60
 */


int FUN__text__00195e60(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long local_68;
  
  lVar12 = 0;
  iVar11 = 0;
  do {
    lVar15 = 0;
    do {
      lVar9 = *(long *)(param_3 + lVar15 * 0xa0 + lVar12 * 0x20 + 0x10);
      if ((*(int *)(lVar9 + 0x18) != 0) && (*(int *)(lVar9 + 0x2c) == 0x1e)) {
        lVar10 = *param_2;
        if ((lVar10 == 0) ||
           ((**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(), *(int *)(lVar9 + 0x18) != 0)) {
          lVar6 = 0;
          plVar1 = (long *)(lVar10 + 0x48);
          do {
            lVar14 = 0x30;
            do {
              lVar7 = *(long *)(lVar9 + lVar14);
              if (*(int *)(lVar7 + 0x18) != 0) {
                uVar2 = *(ulong *)(lVar7 + 8);
                uVar3 = *(undefined8 *)(lVar7 + 0x10);
                if (lVar10 != 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
                lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) +
                                                      (uVar2 & 0xffffffff) * 0x20 + 0x10) + 0x10) +
                                 8);
                uVar5 = 0;
                if (lVar7 != 0) {
                  plVar13 = (long *)(lVar7 + 0x48);
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                  local_68 = lVar10;
                  if (lVar10 != 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                  uVar5 = FUN__text__00301310(lVar7,uVar2 >> 0x20,
                                              (int)uVar3 + (int)((ulong)uVar3 >> 0x20) * 6,&local_68
                                              ,1);
                  uVar5 = uVar5 & 0xffffffff;
                  if (local_68 != 0) {
                    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                    local_68 = 0;
                  }
                  (**(code **)(*plVar13 + 0x18))(plVar13);
                }
                if (lVar10 != 0) {
                  (**(code **)(*plVar1 + 0x18))(plVar1);
                }
                if ((uVar5 & 1) != 0) {
                  iVar8 = 1;
                  iVar4 = 1;
                  if (lVar10 == 0) goto LAB__text__00195ecc;
                  goto LAB__text__00195ebc;
                }
              }
              lVar14 = lVar14 + 0xa0;
            } while (lVar14 != 0x3f0);
            lVar9 = lVar9 + 0x20;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 5);
          iVar8 = 0;
          iVar4 = 0;
          if (lVar10 != 0) goto LAB__text__00195ebc;
        }
        else {
          iVar4 = 0;
LAB__text__00195ebc:
          iVar8 = iVar4;
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        }
LAB__text__00195ecc:
        iVar11 = iVar8 + iVar11;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != 6);
    lVar12 = lVar12 + 1;
    if (lVar12 == 5) {
      return iVar11;
    }
  } while( true );
}


