/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014b08c; name: FUN_.text__0014b08c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014b08c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  lVar3 = *(long *)(param_1 + 0xd8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(lVar3 + 0x58c);
  }
  lVar1 = FUN__text__0014cb28(&local_70,param_2,_DAT_008a0170,param_1 + 0xe0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x148) = lVar1;
  if (lVar3 == 0) {
    local_3c = 0;
    local_38 = 0;
    local_4c = 0xb0100000008;
    local_60 = 0x1407;
    local_5c = 0x40000000400;
    local_70 = 0;
    uStack_68 = 0x40000000400;
    local_54 = 0x800001407;
    local_44 = *(undefined4 *)(param_1 + 0xe0);
    uStack_40 = 1;
    FUN__text__00146470(&local_78,param_2,&local_70);
    lVar1 = *(long *)(param_1 + 0x148);
    lVar2 = *(long *)(lVar1 + 0xb0);
    lVar3 = local_78;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0xb0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  lVar1 = *(long *)(param_1 + 0x148);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x130) = lVar3;
  *(undefined1 *)(*(long *)(param_1 + 0x148) + 0xb8) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x148) + 0x1ac) = 1;
  *(undefined4 *)(*(long *)(param_1 + 0x148) + 0x1f8) = *(undefined4 *)(param_1 + 0xe0);
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x148));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


