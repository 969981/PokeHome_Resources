/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003542d0; name: FUN_.text__003542d0
 */


bool FUN__text__003542d0(void)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  short sVar15;
  int local_7c;
  long local_78;
  int local_70;
  undefined4 uStack_6c;
  long local_68;
  
  FUN__text__003204a0(&local_68);
  FUN__text__0030d5a0(&local_70);
  lVar11 = CONCAT44(uStack_6c,local_70);
  plVar13 = *(long **)(lVar11 + 0xb0);
  if (plVar13 == (long *)0x0) {
LAB__text__00354324:
    (**(code **)(*(long *)(lVar11 + 0x50) + 0x18))();
  }
  else {
    (**(code **)(plVar13[9] + 0x10))();
    lVar11 = CONCAT44(uStack_6c,local_70);
    if (lVar11 != 0) goto LAB__text__00354324;
  }
  uVar9 = *(undefined8 *)(DAT_008e1518 + 0x2a8);
  FUN__text__0030d5a0(&local_70);
  lVar11 = CONCAT44(uStack_6c,local_70);
  lVar10 = *(long *)(lVar11 + 0xa8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    lVar11 = CONCAT44(uStack_6c,local_70);
    if (lVar11 == 0) goto LAB__text__0035437c;
  }
  (**(code **)(*(long *)(lVar11 + 0x50) + 0x18))();
LAB__text__0035437c:
  (**(code **)(*plVar13 + 0x38))(plVar13,uVar9);
  *(undefined2 *)(lVar10 + 0x62) = 0;
  FUN__text__0030d5a0(&local_70);
  lVar11 = *(long *)(CONCAT44(uStack_6c,local_70) + 0x90);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  FUN__text__00311230(lVar11,6);
  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  if (CONCAT44(uStack_6c,local_70) != 0) {
    (**(code **)(*(long *)(CONCAT44(uStack_6c,local_70) + 0x50) + 0x18))();
  }
  sVar15 = 0;
  psVar1 = (short *)(lVar10 + 0x54);
  local_7c = 0;
  psVar2 = (short *)(lVar10 + 0x5a);
  psVar3 = (short *)(lVar10 + 0x58);
  psVar4 = (short *)(lVar10 + 0x56);
  do {
    iVar12 = 0;
    do {
      FUN__text__00300448(&local_70,local_68,local_7c,iVar12,uVar9);
      uVar7 = FUN__text__00306588(CONCAT44(uStack_6c,local_70));
      lVar11 = CONCAT44(uStack_6c,local_70);
      if ((uVar7 & 1) == 0) {
        uVar8 = FUN__text__00306bc4();
        FUN__text__00311634(plVar13,uVar8);
        lVar14 = *(long *)(CONCAT44(uStack_6c,local_70) + 0x60);
        lVar11 = FUN__text__00321ac0();
        if (lVar14 == *(long *)(lVar11 + 0x7b488)) {
          *(short *)(lVar10 + 0x60) = sVar15;
        }
        uVar7 = 0;
        do {
          lVar11 = FUN__text__00321ac0();
          if (*(long *)(lVar11 + uVar7 * 8 + 0x7b458) ==
              *(long *)(CONCAT44(uStack_6c,local_70) + 0x60)) {
            psVar1[uVar7] = sVar15;
            if (*(short *)(lVar10 + 0x5c) == 0x3e9) {
              uVar6 = *(undefined2 *)(lVar10 + 0x5e);
              *(undefined2 *)(lVar10 + 0x5e) = 0x3e9;
              *(undefined2 *)(lVar10 + 0x5c) = uVar6;
              if (*psVar2 == 0x3e9) goto LAB__text__003545b8;
LAB__text__003544f0:
              if (*psVar3 != 0x3e9) goto LAB__text__003544fc;
LAB__text__003545d0:
              uVar6 = *(undefined2 *)(lVar10 + 0x5e);
              *(undefined2 *)(lVar10 + 0x5e) = 0x3e9;
              *(undefined2 *)(lVar10 + 0x5c) = uVar6;
              *(undefined4 *)psVar3 = *(undefined4 *)psVar2;
              if (*psVar4 == 0x3e9) goto LAB__text__003545f0;
LAB__text__00354508:
              sVar5 = *psVar1;
            }
            else {
              if (*psVar2 != 0x3e9) goto LAB__text__003544f0;
LAB__text__003545b8:
              *(undefined2 *)(lVar10 + 0x5e) = 0x3e9;
              *(undefined4 *)(lVar10 + 0x5a) = *(undefined4 *)(lVar10 + 0x5c);
              if (*psVar3 == 0x3e9) goto LAB__text__003545d0;
LAB__text__003544fc:
              if (*psVar4 != 0x3e9) goto LAB__text__00354508;
LAB__text__003545f0:
              *(undefined2 *)(lVar10 + 0x5e) = 0x3e9;
              *(undefined8 *)(lVar10 + 0x56) = *(undefined8 *)(lVar10 + 0x58);
              sVar5 = *psVar1;
            }
            if (sVar5 == 0x3e9) {
              uVar6 = *(undefined2 *)(lVar10 + 0x5e);
              *(undefined2 *)(lVar10 + 0x5e) = 0x3e9;
              *(undefined2 *)(lVar10 + 0x5c) = uVar6;
              *(undefined8 *)psVar1 = *(undefined8 *)psVar4;
            }
            lVar14 = *(long *)(CONCAT44(uStack_6c,local_70) + 0x60);
            lVar11 = FUN__text__00321ac0();
            if (lVar14 == *(long *)(lVar11 + 0x7b490)) {
              FUN__text__0030d5a0(&local_78);
              lVar11 = *(long *)(local_78 + 0x90);
              if (lVar11 != 0) {
                (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
              }
              FUN__text__00311230(lVar11,uVar7 & 0xffffffff);
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
              if (local_78 != 0) {
                (**(code **)(*(long *)(local_78 + 0x50) + 0x18))();
              }
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 != 6);
        lVar11 = CONCAT44(uStack_6c,local_70);
        sVar15 = sVar15 + 1;
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != 0x1e);
    local_7c = local_7c + 1;
    if (local_7c == 0x22) {
      FUN__text__00311910(plVar13);
      FUN__text__0030c650();
      uVar7 = FUN__text__0030cc20(&local_70);
      iVar12 = local_70;
      while ((uVar7 & 1) != 0) {
        local_70 = iVar12;
        nn::os::SleepThread(1000000);
        uVar7 = FUN__text__0030cc20(&local_70);
        iVar12 = local_70;
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      return iVar12 == 0;
    }
  } while( true );
}


