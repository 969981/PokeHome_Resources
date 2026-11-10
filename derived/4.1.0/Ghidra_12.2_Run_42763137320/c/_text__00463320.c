/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463320; name: FUN_.text__00463320
 */


void FUN__text__00463320(long *param_1,long *param_2,long param_3,short param_4,undefined1 param_5,
                        undefined1 param_6)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 local_28;
  
  *(short *)(param_1 + 0xf) = param_4;
  *(undefined1 *)((long)param_1 + 0x7a) = param_5;
  *(undefined1 *)((long)param_1 + 0x7b) = param_6;
  if ((int)param_1[8] == 0) {
    param_1[1] = param_3;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0xff;
    *(undefined1 *)(param_1 + 5) = 0xff;
    param_1[6] = 0;
  }
  if ((param_2 != (long *)0x0) && (param_4 != 0)) {
    local_28 = (**(code **)(*param_1 + 0x38))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    FUN__text__0046c238(param_1,param_2,&local_28,uVar2 & 1);
    local_28 = 0x10000;
    (**(code **)(*param_2 + 0x228))(param_2,param_1,&local_28);
    FUN__text__0046be18(param_1,param_2);
  }
  uVar2 = 0xffffffff;
  plVar3 = param_2;
  do {
    plVar3 = (long *)plVar3[0xf];
    uVar2 = uVar2 + 1;
  } while (plVar3 != (long *)0x0);
  uVar1 = 0x4000000000000000;
  if ((*(uint *)((long)param_2 + 0xd2) & 0x20000) != 0) {
    uVar1 = 0x2000000000000000;
  }
  param_1[0x11] = uVar1 | (ulong)uVar2 << 0x20 | (ulong)*(uint *)(param_2 + 4);
  return;
}


