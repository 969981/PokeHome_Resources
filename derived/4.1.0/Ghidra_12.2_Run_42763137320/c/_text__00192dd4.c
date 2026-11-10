/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192dd4; name: FUN_.text__00192dd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00192dd4(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = _DAT_008a05c0;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar5 = param_1 + 2;
  *plVar5 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x10,8);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) != 0x10) {
    *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    FUN__text__00192dc0(lVar1,param_2);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    puVar2 = (undefined8 *)*plVar5;
    *plVar5 = lVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar2,param_1[4],param_1[5]);
    }
    param_1[3] = (long)param_2;
    param_1[4] = 0x10;
    param_1[5] = 8;
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x170,8);
    if (*(long *)(uVar4 + 0x98) != 0x10) {
      *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      FUN__text__00192880(lVar1,param_2,(int)param_1[1]);
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
      lVar3 = param_1[6];
      param_1[6] = lVar1;
      if (lVar3 != 0) {
        FUN__text__0016f4b0(lVar3);
        (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],lVar3,param_1[8],param_1[9]);
      }
      param_1[7] = (long)param_2;
      param_1[8] = 0x170;
      param_1[9] = 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


