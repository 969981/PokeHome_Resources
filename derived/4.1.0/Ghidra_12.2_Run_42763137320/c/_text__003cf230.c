/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf230; name: FUN_.text__003cf230
 */


void FUN__text__003cf230(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long local_88 [3];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined1 local_4c;
  undefined4 local_48;
  
  *(undefined4 *)(param_1 + 0x18) = param_4;
  local_4c = 0;
  local_5c = 0xb0100000008;
  local_54 = 0x100000001;
  local_70 = 0xb01;
  *(undefined1 *)(param_1 + 0x20060) = 0;
  local_6c = 0x8000000080;
  local_48 = 0;
  local_88[1] = 0;
  local_88[2] = 0x8000000080;
  local_64 = 0x800000b01;
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN__text__00146354(local_88,param_2,local_88 + 1);
  lVar1 = *(long *)(param_1 + 0x20028);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x20028) = local_88[0];
  uVar2 = FUN__text__0059fd6c(local_88[0],1);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar3 = *(long **)(param_1 + 8);
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,0xf0,8);
  if (lVar1 == 0) {
    (**(code **)(*plVar3 + 0xb8))(plVar3);
  }
  FUN__text__003d4088(lVar1,*(undefined8 *)(param_1 + 8),uVar2,0x80,0x80);
  *(long **)(lVar1 + 8) = plVar3;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0xf0;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0x20048) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20048) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x20048) = lVar1;
  return;
}


