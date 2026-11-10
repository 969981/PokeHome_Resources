/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035b330; name: FUN_.text__0035b330
 */


void FUN__text__0035b330(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_5;
  FUN__text__002a32ac(&local_40,param_5,&local_38);
  FUN__text__002a33c8(param_1,local_38,&local_40);
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if ((299 < param_3) || (0x1d < param_4)) goto LAB__text__0035b420;
LAB__text__0035b3b4:
    FUN__text__0030681c(lVar5,param_2 + (ulong)param_3 * 0x2850 + (ulong)param_4 * 0x158 + 0x60);
    lVar4 = param_2 + (ulong)param_3 * 12000 + (ulong)param_4 * 400;
    uVar1 = *(undefined8 *)(lVar4 + 0x5e7cec);
    *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(lVar4 + 0x5e7ce4);
    *(undefined8 *)(lVar5 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(lVar4 + 0x5e7cf4);
    uVar2 = *(undefined8 *)(lVar4 + 0x5e7cfc);
    uVar3 = *(undefined8 *)(lVar4 + 0x5e7d0c);
    *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(lVar4 + 0x5e7d04);
    *(undefined8 *)(lVar5 + 0x88) = uVar3;
    *(undefined8 *)(lVar5 + 0x70) = uVar1;
    *(undefined8 *)(lVar5 + 0x78) = uVar2;
    uVar1 = *(undefined8 *)(lVar4 + 0x5e7d14);
    uVar2 = *(undefined8 *)(lVar4 + 0x5e7d1c);
    uVar3 = *(undefined8 *)(&DAT__text__005e7d2c + lVar4);
    *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(lVar4 + 0x5e7d24);
    *(undefined8 *)(lVar5 + 0xa8) = uVar3;
    *(undefined8 *)(lVar5 + 0x90) = uVar1;
    *(undefined8 *)(lVar5 + 0x98) = uVar2;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    if ((param_3 < 300) && (param_4 < 0x1e)) goto LAB__text__0035b3b4;
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
LAB__text__0035b420:
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


