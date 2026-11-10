/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d4088; name: FUN_.text__003d4088
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003d4088(long *param_1,MemoryResource *param_2,long param_3,ushort param_4,
                        ushort param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int local_64;
  long local_60;
  long local_58;
  MemoryResource *local_50;
  undefined1 uStack_41;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar1 = tpidr_el0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  lVar4 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a37c8;
  *param_1 = _DAT_008a37c8 + 0x10;
  param_1[1] = lVar4;
  param_1[9] = lVar2 + 0x48;
  local_50 = param_2;
  nn::image::JpegDecoder::JpegDecoder((JpegDecoder *)(param_1 + 0xb),param_2);
  plVar5 = param_1 + 0x1b;
  *plVar5 = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(ushort *)(param_1 + 0x17) = param_4;
  *(ushort *)((long)param_1 + 0xba) = param_5;
  param_1[0x1a] = param_3;
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN__text__003d4250(&local_58,param_2,&local_50);
  if (*plVar5 != 0) {
    (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
  }
  *plVar5 = local_58;
  *(undefined4 *)(local_58 + 0x130) = 100;
  uVar3 = DAT_008e15a0;
  local_60 = *plVar5;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  FUN__text__0010fb80(uVar3,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_64 = (uint)param_5 * (uint)param_4;
  local_58 = *(long *)(DAT_008e1c28 + 0x10);
  lVar4 = FUN__text__003d4638(&uStack_41,local_50,&local_64,&local_58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (param_1[0x1c] != 0) {
    (**(code **)(*(long *)(param_1[0x1c] + 0x48) + 0x18))();
  }
  param_1[0x1c] = lVar4;
  return;
}


