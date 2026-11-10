/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303330; name: FUN_.text__00303330
 */


void FUN__text__00303330(long param_1,long *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_70;
  long local_68;
  
  puVar1 = (uint *)(param_1 + 0x700fdc);
  uVar5 = (ulong)*puVar1;
  if (0 < (int)*puVar1) {
    lVar10 = 0;
    uVar13 = 0;
    do {
      uVar14 = 0;
      uVar6 = uVar5;
      lVar11 = lVar10;
      do {
        if (((uVar13 < uVar6) && (lVar18 = param_1 + lVar11, *(char *)(lVar18 + 900) != '\0')) &&
           (*(char *)(lVar18 + 0x385) != '\0')) {
          local_68 = *param_2;
          if (local_68 == 0) {
            uVar4 = FUN__text__00194b9c(param_3);
            FUN__text__00303a10(param_1,&local_68,uVar4,*(undefined8 *)(lVar18 + 0x330));
            lVar16 = *param_2;
            if (lVar16 == 0) goto LAB__text__00303568;
LAB__text__00303438:
            plVar15 = (long *)(lVar16 + 0x48);
            (**(code **)(*plVar15 + 0x10))(plVar15);
            if (uVar13 < 300) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
LAB__text__00303570:
              FUN__text__00306b04(lVar16,lVar18 + 0x58);
              uVar7 = *(undefined8 *)(lVar18 + 0x2f8);
              *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)(lVar18 + 0x2f0);
              *(undefined8 *)(lVar16 + 0x68) = uVar7;
              uVar7 = *(undefined8 *)(lVar18 + 0x300);
              uVar8 = *(undefined8 *)(lVar18 + 0x308);
              uVar9 = *(undefined8 *)(lVar18 + 0x318);
              *(undefined8 *)(lVar16 + 0x80) = *(undefined8 *)(lVar18 + 0x310);
              *(undefined8 *)(lVar16 + 0x88) = uVar9;
              *(undefined8 *)(lVar16 + 0x70) = uVar7;
              *(undefined8 *)(lVar16 + 0x78) = uVar8;
              uVar7 = *(undefined8 *)(lVar18 + 0x328);
              uVar8 = *(undefined8 *)(lVar18 + 0x330);
              uVar9 = *(undefined8 *)(lVar18 + 0x338);
              *(undefined8 *)(lVar16 + 0x90) = *(undefined8 *)(lVar18 + 800);
              *(undefined8 *)(lVar16 + 0x98) = uVar7;
              *(undefined8 *)(lVar16 + 0xa0) = uVar8;
              *(undefined8 *)(lVar16 + 0xa8) = uVar9;
              (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
            }
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
            lVar16 = *param_2;
            bVar12 = lVar16 == 0;
            if (bVar12) {
              uVar2 = *puVar1;
            }
            else {
              (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
              uVar2 = *puVar1;
            }
          }
          else {
            plVar15 = (long *)(local_68 + 0x48);
            (**(code **)(*plVar15 + 0x10))(plVar15);
            uVar4 = FUN__text__00194b9c(param_3);
            FUN__text__00303a10(param_1,&local_68,uVar4,*(undefined8 *)(lVar18 + 0x330));
            (**(code **)(*plVar15 + 0x18))(plVar15);
            local_68 = 0;
            lVar16 = *param_2;
            if (lVar16 != 0) goto LAB__text__00303438;
LAB__text__00303568:
            if (uVar13 < 300) goto LAB__text__00303570;
            lVar16 = 0;
            bVar12 = true;
            uVar2 = *puVar1;
          }
          if (uVar13 < uVar2) {
            uVar7 = FUN__text__00306bc4(lVar16);
            FUN__text__00633304(uVar7,0,*(undefined4 *)(lVar18 + 0x354));
            FUN__text__00632a04(uVar7,0,*(undefined4 *)(lVar18 + 0x358));
            FUN__text__00632cb4(uVar7,0,*(undefined4 *)(lVar18 + 0x35c));
            lVar17 = *(long *)(DAT_008e15a0 + 0x80);
            if (lVar17 == 0) {
              FUN__text__00205890(0,uVar7);
            }
            else {
              plVar15 = (long *)(lVar17 + 0x48);
              (**(code **)(*plVar15 + 0x10))(plVar15);
              FUN__text__00205890(lVar17,uVar7);
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
          if (bVar12) {
            lVar16 = *param_2;
          }
          else {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
            lVar16 = *param_2;
          }
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
          }
          if (uVar13 < *puVar1) {
            uVar7 = FUN__text__00306bc4(lVar16);
            FUN__text__00633304(uVar7,1,*(undefined4 *)(lVar18 + 0x360));
            FUN__text__00632a04(uVar7,1,*(undefined4 *)(lVar18 + 0x364));
            FUN__text__00632cb4(uVar7,1,*(undefined4 *)(lVar18 + 0x368));
            lVar17 = *(long *)(DAT_008e15a0 + 0x80);
            if (lVar17 == 0) {
              FUN__text__00205890(0,uVar7);
            }
            else {
              plVar15 = (long *)(lVar17 + 0x48);
              (**(code **)(*plVar15 + 0x10))(plVar15);
              FUN__text__00205890(lVar17,uVar7);
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
          }
          lVar16 = *param_2;
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
          }
          if (uVar13 < *puVar1) {
            uVar7 = FUN__text__00306bc4(lVar16);
            FUN__text__00633304(uVar7,2,*(undefined4 *)(lVar18 + 0x36c));
            FUN__text__00632a04(uVar7,2,*(undefined4 *)(lVar18 + 0x370));
            FUN__text__00632cb4(uVar7,2,*(undefined4 *)(lVar18 + 0x374));
            lVar17 = *(long *)(DAT_008e15a0 + 0x80);
            if (lVar17 == 0) {
              FUN__text__00205890(0,uVar7);
            }
            else {
              plVar15 = (long *)(lVar17 + 0x48);
              (**(code **)(*plVar15 + 0x10))(plVar15);
              FUN__text__00205890(lVar17,uVar7);
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
          }
          lVar16 = *param_2;
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
          }
          if (uVar13 < *puVar1) {
            uVar7 = FUN__text__00306bc4(lVar16);
            FUN__text__00633304(uVar7,3,*(undefined4 *)(lVar18 + 0x378));
            FUN__text__00632a04(uVar7,3,*(undefined4 *)(lVar18 + 0x37c));
            FUN__text__00632cb4(uVar7,3,*(undefined4 *)(lVar18 + 0x380));
            lVar18 = *(long *)(DAT_008e15a0 + 0x80);
            if (lVar18 == 0) {
              FUN__text__00205890(0,uVar7);
            }
            else {
              plVar15 = (long *)(lVar18 + 0x48);
              (**(code **)(*plVar15 + 0x10))(plVar15);
              FUN__text__00205890(lVar18,uVar7);
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
          }
          if (lVar16 != 0) {
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
          }
          uVar5 = (ulong)*puVar1;
          bVar12 = true;
          uVar6 = uVar5;
          bVar3 = true;
          if (uVar5 <= uVar13) goto LAB__text__00303964;
LAB__text__0030347c:
          lVar18 = param_1 + lVar11;
          bVar3 = bVar12;
          if (*(char *)(lVar18 + 0x386) == '\0') goto LAB__text__00303964;
          lVar16 = *param_2;
          if (!bVar12) {
            if (lVar16 == 0) {
LAB__text__003034c0:
              FUN__text__00306b04(lVar16,lVar18 + 0x58);
              uVar7 = *(undefined8 *)(lVar18 + 0x2f8);
              *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)(lVar18 + 0x2f0);
              *(undefined8 *)(lVar16 + 0x68) = uVar7;
              uVar7 = *(undefined8 *)(lVar18 + 0x300);
              uVar8 = *(undefined8 *)(lVar18 + 0x308);
              uVar9 = *(undefined8 *)(lVar18 + 0x318);
              *(undefined8 *)(lVar16 + 0x80) = *(undefined8 *)(lVar18 + 0x310);
              *(undefined8 *)(lVar16 + 0x88) = uVar9;
              *(undefined8 *)(lVar16 + 0x70) = uVar7;
              *(undefined8 *)(lVar16 + 0x78) = uVar8;
              uVar7 = *(undefined8 *)(lVar18 + 0x328);
              uVar8 = *(undefined8 *)(lVar18 + 0x330);
              uVar9 = *(undefined8 *)(lVar18 + 0x338);
              *(undefined8 *)(lVar16 + 0x90) = *(undefined8 *)(lVar18 + 800);
              *(undefined8 *)(lVar16 + 0x98) = uVar7;
              *(undefined8 *)(lVar16 + 0xa0) = uVar8;
              *(undefined8 *)(lVar16 + 0xa8) = uVar9;
              (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
            }
            else {
              plVar15 = (long *)(lVar16 + 0x48);
              (**(code **)(*plVar15 + 0x10))(plVar15);
              if (uVar13 < 300) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                goto LAB__text__003034c0;
              }
            }
            (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
            lVar16 = *param_2;
          }
          uVar7 = FUN__text__00306bc4(lVar16);
          FUN__text__0063740c(uVar7,param_3);
LAB__text__00303968:
          local_70 = *param_2;
          if (local_70 == 0) {
            FUN__text__00301f08(param_1,&local_70,uVar13 & 0xffffffff,uVar14 & 0xffffffff,0);
            uVar2 = *puVar1;
          }
          else {
            plVar15 = (long *)(local_70 + 0x48);
            (**(code **)(*plVar15 + 0x10))(plVar15);
            FUN__text__00301f08(param_1,&local_70,uVar13 & 0xffffffff,uVar14 & 0xffffffff,0);
            (**(code **)(*plVar15 + 0x18))(plVar15);
            local_70 = 0;
            uVar2 = *puVar1;
          }
          uVar5 = (ulong)uVar2;
          if (uVar13 < uVar5) {
            *(undefined1 *)(param_1 + lVar11 + 0x385) = 0;
          }
          uVar6 = uVar5;
        }
        else {
          bVar12 = false;
          bVar3 = bVar12;
          if (uVar13 < uVar6) goto LAB__text__0030347c;
LAB__text__00303964:
          if (bVar3) goto LAB__text__00303968;
        }
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x330;
      } while (uVar14 != 0x1e);
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 0x5fa0;
    } while ((long)uVar13 < (long)(int)uVar5);
  }
  return;
}


