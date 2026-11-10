/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00600d40; name: FUN_.text__00600d40
 */


void FUN__text__00600d40(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_48;
  
  FUN__text__0015c5c4(&local_48,param_1,0x759024);
  if (DAT_00c15cd8 != 0) {
    (**(code **)(*(long *)(DAT_00c15cd8 + 0x48) + 0x18))();
  }
  uVar7 = tpidr_el0;
  lVar9 = 0x98;
  uVar10 = uVar7 & 0xffffffffffffe000;
  plVar8 = &DAT_00c15d20;
  DAT_00c15cd8 = local_48;
  do {
    lVar2 = FUN__text__00602950();
    if (*(long *)(lVar2 + lVar9) != 0) {
      lVar2 = FUN__text__00602950();
      if (*(long *)(uVar10 + 0x98) == 0x10) goto LAB__text__00600fdc;
      *(long **)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) = param_1;
      *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1,0x1d0,0x10);
      if (lVar3 == 0) {
        (**(code **)(*param_1 + 0xb8))(param_1);
      }
      FUN__text__005f23c0(lVar3,lVar2 + lVar9 + -0x18,1);
      *(long **)(lVar3 + 8) = param_1;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x1d0;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      }
      *plVar8 = lVar3;
    }
    lVar9 = lVar9 + 0x30;
    plVar8 = plVar8 + 1;
  } while (lVar9 != 0x2d8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x1a0,8);
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) != 0x10) {
    *(long **)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = param_1;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    FUN__text__006014f0();
    puVar1 = DAT_00c15ce0;
    DAT_00c15ce0 = puVar4;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      (**(code **)(*DAT_00c15ce8 + 0x18))(DAT_00c15ce8,puVar1,DAT_00c15cf0,DAT_00c15cf8);
    }
    DAT_00c15cf0 = 0x1a0;
    DAT_00c15cf8 = 8;
    DAT_00c15ce8 = param_1;
    puVar5 = (undefined4 *)FUN__text__00602950();
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x30,8);
    if (*(long *)(uVar7 + 0x98) != 0x10) {
      *(long **)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = param_1;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      FUN__text__00601750(uVar6,param_1,*puVar5);
      puVar4 = DAT_00c15d00;
      DAT_00c15d00 = (undefined8 *)uVar6;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(*DAT_00c15d08 + 0x18))(DAT_00c15d08,puVar4,DAT_00c15d10,DAT_00c15d18);
      }
      DAT_00c15d08 = param_1;
      DAT_00c15d10 = 0x30;
      DAT_00c15d18 = 8;
      return;
    }
  }
LAB__text__00600fdc:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


