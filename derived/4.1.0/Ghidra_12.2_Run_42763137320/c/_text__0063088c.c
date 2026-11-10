/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063088c; name: FUN_.text__0063088c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0063088c(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                        undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar5 = tpidr_el0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = _DAT_008a62e8;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(uVar5 + 0x98) != 0) {
      lVar6 = *(long *)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined1 *)((long)param_1 + 0x54) = 2;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[9] = lVar4 + 0x48;
  *param_1 = lVar4 + 0x10;
  param_1[1] = lVar6;
  FUN__text__00638fb8(&local_60,param_2,param_3,param_4,param_5);
  FUN__text__00649850(local_60,0);
  FUN__text__0060d280((long)param_1 + 0x55,local_60,0);
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar1 = param_1 + 0x5e;
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  FUN__text__0060eea4();
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  puVar7 = (undefined8 *)*plVar1;
  *plVar1 = lVar4;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*(long *)param_1[0x5f] + 0x18))
              ((long *)param_1[0x5f],puVar7,param_1[0x60],param_1[0x61]);
    lVar4 = param_1[0x5e];
  }
  param_1[0x5f] = (long)param_2;
  param_1[0x60] = 0x20;
  param_1[0x61] = 8;
  FUN__text__0060ef9c(lVar4,(long)param_1 + 0x55);
  FUN__text__00630a88(param_1);
  iVar2 = FUN__text__0060fed0(param_1[0x5e]);
  uVar3 = FUN__text__00615940(param_1[0x5e]);
  if ((iVar2 != 0) && (uVar5 = FUN__text__005fe794(iVar2,uVar3,0), (uVar5 & 1) == 0)) {
    FUN__text__0061c860(*plVar1,1);
  }
  lVar4 = local_60;
  local_60 = 0;
  if (lVar4 != 0) {
    (**(code **)(*local_58 + 0x18))(local_58,lVar4,uStack_50,local_48);
  }
  return;
}


