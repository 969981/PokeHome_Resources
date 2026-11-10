/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a03e4; name: FUN_.text__005a03e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a03e4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                        undefined2 param_5,undefined4 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN__text__006ec710();
  uVar1 = tpidr_el0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 == 0)) {
    uVar2 = FUN__text__005f52b0();
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (uVar1 != 0) goto LAB__text__005a0478;
  }
  else {
    *(long *)(param_1 + 0xf8) = lVar3;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
LAB__text__005a0478:
    if ((*(long *)(uVar1 + 0x98) != 0) &&
       (lVar3 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar3 != 0))
    goto LAB__text__005a0490;
  }
  lVar3 = FUN__text__005f52b0();
LAB__text__005a0490:
  *(long *)(param_1 + 0x128) = lVar3;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = param_6;
  *(undefined8 *)(param_1 + 0x140) = param_2;
  *(undefined8 *)(param_1 + 0x148) = param_3;
  *(undefined8 *)(param_1 + 0x150) = 0x40000000400;
  *(undefined8 *)(param_1 + 0x158) = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN__text__006ebbec(&local_70);
  local_70._0_4_ = CONCAT22(param_5,(undefined2)local_70);
  local_70 = CONCAT71(local_70._1_7_,param_4);
  FUN__text__006ec750(param_1,_DAT_008a0448,&local_70);
  *(long *)(param_1 + 0xd8) = param_1;
  FUN__text__006ec8cc(param_1,_DAT_008a5588);
  FUN__text__006ec8d4(param_1,_DAT_008a5590);
  FUN__text__006ec8dc(param_1);
  *(undefined4 *)(param_1 + 0x158) = 0;
  FUN__text__005a06a4(param_1);
  *(undefined4 *)(param_1 + 0x15c) = 0;
  FUN__text__005a082c(param_1);
  FUN__text__006ec8e0(param_1);
  FUN__text__006ec93c(param_1);
  return;
}


